#include <QAbstractGraphicsShapeItem>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsObject>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTextCursor>
#include <QTextDocument>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsitem.h>
#include "libqgraphicsitem.hpp"
#include "libqgraphicsitem.hxx"

QGraphicsItem* QGraphicsItem_new() {
    return new VirtualQGraphicsItem();
}

QGraphicsItem* QGraphicsItem_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsItem(parent);
}

QGraphicsScene* QGraphicsItem_Scene(const QGraphicsItem* self) {
    return self->scene();
}

QGraphicsItem* QGraphicsItem_ParentItem(const QGraphicsItem* self) {
    return self->parentItem();
}

QGraphicsItem* QGraphicsItem_TopLevelItem(const QGraphicsItem* self) {
    return self->topLevelItem();
}

QGraphicsObject* QGraphicsItem_ParentObject(const QGraphicsItem* self) {
    return self->parentObject();
}

QGraphicsWidget* QGraphicsItem_ParentWidget(const QGraphicsItem* self) {
    return self->parentWidget();
}

QGraphicsWidget* QGraphicsItem_TopLevelWidget(const QGraphicsItem* self) {
    return self->topLevelWidget();
}

QGraphicsWidget* QGraphicsItem_Window(const QGraphicsItem* self) {
    return self->window();
}

QGraphicsItem* QGraphicsItem_Panel(const QGraphicsItem* self) {
    return self->panel();
}

void QGraphicsItem_SetParentItem(QGraphicsItem* self, QGraphicsItem* parent) {
    self->setParentItem(parent);
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_ChildItems(const QGraphicsItem* self) {
    QList<QGraphicsItem*> _ret = self->childItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

bool QGraphicsItem_IsWidget(const QGraphicsItem* self) {
    return self->isWidget();
}

bool QGraphicsItem_IsWindow(const QGraphicsItem* self) {
    return self->isWindow();
}

bool QGraphicsItem_IsPanel(const QGraphicsItem* self) {
    return self->isPanel();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject(QGraphicsItem* self) {
    return self->toGraphicsObject();
}

QGraphicsObject* QGraphicsItem_ToGraphicsObject2(const QGraphicsItem* self) {
    return (QGraphicsObject*)self->toGraphicsObject();
}

QGraphicsItemGroup* QGraphicsItem_Group(const QGraphicsItem* self) {
    return self->group();
}

void QGraphicsItem_SetGroup(QGraphicsItem* self, QGraphicsItemGroup* group) {
    self->setGroup(group);
}

int QGraphicsItem_Flags(const QGraphicsItem* self) {
    return static_cast<int>(self->flags());
}

void QGraphicsItem_SetFlag(QGraphicsItem* self, int flag) {
    self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag));
}

void QGraphicsItem_SetFlags(QGraphicsItem* self, int flags) {
    self->setFlags(static_cast<QGraphicsItem::GraphicsItemFlags>(flags));
}

int QGraphicsItem_CacheMode(const QGraphicsItem* self) {
    return static_cast<int>(self->cacheMode());
}

void QGraphicsItem_SetCacheMode(QGraphicsItem* self, int mode) {
    self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode));
}

int QGraphicsItem_PanelModality(const QGraphicsItem* self) {
    return static_cast<int>(self->panelModality());
}

void QGraphicsItem_SetPanelModality(QGraphicsItem* self, int panelModality) {
    self->setPanelModality(static_cast<QGraphicsItem::PanelModality>(panelModality));
}

bool QGraphicsItem_IsBlockedByModalPanel(const QGraphicsItem* self) {
    return self->isBlockedByModalPanel();
}

libqt_string QGraphicsItem_ToolTip(const QGraphicsItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsItem_SetToolTip(QGraphicsItem* self, libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

QCursor* QGraphicsItem_Cursor(const QGraphicsItem* self) {
    return new QCursor(self->cursor());
}

void QGraphicsItem_SetCursor(QGraphicsItem* self, QCursor* cursor) {
    self->setCursor(*cursor);
}

bool QGraphicsItem_HasCursor(const QGraphicsItem* self) {
    return self->hasCursor();
}

void QGraphicsItem_UnsetCursor(QGraphicsItem* self) {
    self->unsetCursor();
}

bool QGraphicsItem_IsVisible(const QGraphicsItem* self) {
    return self->isVisible();
}

bool QGraphicsItem_IsVisibleTo(const QGraphicsItem* self, QGraphicsItem* parent) {
    return self->isVisibleTo(parent);
}

void QGraphicsItem_SetVisible(QGraphicsItem* self, bool visible) {
    self->setVisible(visible);
}

void QGraphicsItem_Hide(QGraphicsItem* self) {
    self->hide();
}

void QGraphicsItem_Show(QGraphicsItem* self) {
    self->show();
}

bool QGraphicsItem_IsEnabled(const QGraphicsItem* self) {
    return self->isEnabled();
}

void QGraphicsItem_SetEnabled(QGraphicsItem* self, bool enabled) {
    self->setEnabled(enabled);
}

bool QGraphicsItem_IsSelected(const QGraphicsItem* self) {
    return self->isSelected();
}

void QGraphicsItem_SetSelected(QGraphicsItem* self, bool selected) {
    self->setSelected(selected);
}

bool QGraphicsItem_AcceptDrops(const QGraphicsItem* self) {
    return self->acceptDrops();
}

void QGraphicsItem_SetAcceptDrops(QGraphicsItem* self, bool on) {
    self->setAcceptDrops(on);
}

double QGraphicsItem_Opacity(const QGraphicsItem* self) {
    return static_cast<double>(self->opacity());
}

double QGraphicsItem_EffectiveOpacity(const QGraphicsItem* self) {
    return static_cast<double>(self->effectiveOpacity());
}

void QGraphicsItem_SetOpacity(QGraphicsItem* self, double opacity) {
    self->setOpacity(static_cast<qreal>(opacity));
}

QGraphicsEffect* QGraphicsItem_GraphicsEffect(const QGraphicsItem* self) {
    return self->graphicsEffect();
}

void QGraphicsItem_SetGraphicsEffect(QGraphicsItem* self, QGraphicsEffect* effect) {
    self->setGraphicsEffect(effect);
}

int QGraphicsItem_AcceptedMouseButtons(const QGraphicsItem* self) {
    return static_cast<int>(self->acceptedMouseButtons());
}

void QGraphicsItem_SetAcceptedMouseButtons(QGraphicsItem* self, int buttons) {
    self->setAcceptedMouseButtons(static_cast<Qt::MouseButtons>(buttons));
}

bool QGraphicsItem_AcceptHoverEvents(const QGraphicsItem* self) {
    return self->acceptHoverEvents();
}

void QGraphicsItem_SetAcceptHoverEvents(QGraphicsItem* self, bool enabled) {
    self->setAcceptHoverEvents(enabled);
}

bool QGraphicsItem_AcceptTouchEvents(const QGraphicsItem* self) {
    return self->acceptTouchEvents();
}

void QGraphicsItem_SetAcceptTouchEvents(QGraphicsItem* self, bool enabled) {
    self->setAcceptTouchEvents(enabled);
}

bool QGraphicsItem_FiltersChildEvents(const QGraphicsItem* self) {
    return self->filtersChildEvents();
}

void QGraphicsItem_SetFiltersChildEvents(QGraphicsItem* self, bool enabled) {
    self->setFiltersChildEvents(enabled);
}

bool QGraphicsItem_HandlesChildEvents(const QGraphicsItem* self) {
    return self->handlesChildEvents();
}

void QGraphicsItem_SetHandlesChildEvents(QGraphicsItem* self, bool enabled) {
    self->setHandlesChildEvents(enabled);
}

bool QGraphicsItem_IsActive(const QGraphicsItem* self) {
    return self->isActive();
}

void QGraphicsItem_SetActive(QGraphicsItem* self, bool active) {
    self->setActive(active);
}

bool QGraphicsItem_HasFocus(const QGraphicsItem* self) {
    return self->hasFocus();
}

void QGraphicsItem_SetFocus(QGraphicsItem* self) {
    self->setFocus();
}

void QGraphicsItem_ClearFocus(QGraphicsItem* self) {
    self->clearFocus();
}

QGraphicsItem* QGraphicsItem_FocusProxy(const QGraphicsItem* self) {
    return self->focusProxy();
}

void QGraphicsItem_SetFocusProxy(QGraphicsItem* self, QGraphicsItem* item) {
    self->setFocusProxy(item);
}

QGraphicsItem* QGraphicsItem_FocusItem(const QGraphicsItem* self) {
    return self->focusItem();
}

QGraphicsItem* QGraphicsItem_FocusScopeItem(const QGraphicsItem* self) {
    return self->focusScopeItem();
}

void QGraphicsItem_GrabMouse(QGraphicsItem* self) {
    self->grabMouse();
}

void QGraphicsItem_UngrabMouse(QGraphicsItem* self) {
    self->ungrabMouse();
}

void QGraphicsItem_GrabKeyboard(QGraphicsItem* self) {
    self->grabKeyboard();
}

void QGraphicsItem_UngrabKeyboard(QGraphicsItem* self) {
    self->ungrabKeyboard();
}

QPointF* QGraphicsItem_Pos(const QGraphicsItem* self) {
    return new QPointF(self->pos());
}

double QGraphicsItem_X(const QGraphicsItem* self) {
    return static_cast<double>(self->x());
}

void QGraphicsItem_SetX(QGraphicsItem* self, double x) {
    self->setX(static_cast<qreal>(x));
}

double QGraphicsItem_Y(const QGraphicsItem* self) {
    return static_cast<double>(self->y());
}

void QGraphicsItem_SetY(QGraphicsItem* self, double y) {
    self->setY(static_cast<qreal>(y));
}

QPointF* QGraphicsItem_ScenePos(const QGraphicsItem* self) {
    return new QPointF(self->scenePos());
}

void QGraphicsItem_SetPos(QGraphicsItem* self, QPointF* pos) {
    self->setPos(*pos);
}

void QGraphicsItem_SetPos2(QGraphicsItem* self, double x, double y) {
    self->setPos(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsItem_MoveBy(QGraphicsItem* self, double dx, double dy) {
    self->moveBy(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsItem_EnsureVisible(QGraphicsItem* self) {
    self->ensureVisible();
}

void QGraphicsItem_EnsureVisible2(QGraphicsItem* self, double x, double y, double w, double h) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsItem_Transform(const QGraphicsItem* self) {
    return new QTransform(self->transform());
}

QTransform* QGraphicsItem_SceneTransform(const QGraphicsItem* self) {
    return new QTransform(self->sceneTransform());
}

QTransform* QGraphicsItem_DeviceTransform(const QGraphicsItem* self, QTransform* viewportTransform) {
    return new QTransform(self->deviceTransform(*viewportTransform));
}

QTransform* QGraphicsItem_ItemTransform(const QGraphicsItem* self, QGraphicsItem* other) {
    return new QTransform(self->itemTransform(other));
}

void QGraphicsItem_SetTransform(QGraphicsItem* self, QTransform* matrix) {
    self->setTransform(*matrix);
}

void QGraphicsItem_ResetTransform(QGraphicsItem* self) {
    self->resetTransform();
}

void QGraphicsItem_SetRotation(QGraphicsItem* self, double angle) {
    self->setRotation(static_cast<qreal>(angle));
}

double QGraphicsItem_Rotation(const QGraphicsItem* self) {
    return static_cast<double>(self->rotation());
}

void QGraphicsItem_SetScale(QGraphicsItem* self, double scale) {
    self->setScale(static_cast<qreal>(scale));
}

double QGraphicsItem_Scale(const QGraphicsItem* self) {
    return static_cast<double>(self->scale());
}

libqt_list /* of QGraphicsTransform* */ QGraphicsItem_Transformations(const QGraphicsItem* self) {
    QList<QGraphicsTransform*> _ret = self->transformations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsTransform** _arr = static_cast<QGraphicsTransform**>(malloc(sizeof(QGraphicsTransform*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsItem_SetTransformations(QGraphicsItem* self, libqt_list /* of QGraphicsTransform* */ transformations) {
    QList<QGraphicsTransform*> transformations_QList;
    transformations_QList.reserve(transformations.len);
    QGraphicsTransform** transformations_arr = static_cast<QGraphicsTransform**>(transformations.data.ptr);
    for (size_t i = 0; i < transformations.len; ++i) {
        transformations_QList.push_back(transformations_arr[i]);
    }
    self->setTransformations(transformations_QList);
}

QPointF* QGraphicsItem_TransformOriginPoint(const QGraphicsItem* self) {
    return new QPointF(self->transformOriginPoint());
}

void QGraphicsItem_SetTransformOriginPoint(QGraphicsItem* self, QPointF* origin) {
    self->setTransformOriginPoint(*origin);
}

void QGraphicsItem_SetTransformOriginPoint2(QGraphicsItem* self, double ax, double ay) {
    self->setTransformOriginPoint(static_cast<qreal>(ax), static_cast<qreal>(ay));
}

double QGraphicsItem_ZValue(const QGraphicsItem* self) {
    return static_cast<double>(self->zValue());
}

void QGraphicsItem_SetZValue(QGraphicsItem* self, double z) {
    self->setZValue(static_cast<qreal>(z));
}

void QGraphicsItem_StackBefore(QGraphicsItem* self, QGraphicsItem* sibling) {
    self->stackBefore(sibling);
}

QRectF* QGraphicsItem_ChildrenBoundingRect(const QGraphicsItem* self) {
    return new QRectF(self->childrenBoundingRect());
}

QRectF* QGraphicsItem_SceneBoundingRect(const QGraphicsItem* self) {
    return new QRectF(self->sceneBoundingRect());
}

bool QGraphicsItem_IsClipped(const QGraphicsItem* self) {
    return self->isClipped();
}

QPainterPath* QGraphicsItem_ClipPath(const QGraphicsItem* self) {
    return new QPainterPath(self->clipPath());
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_CollidingItems(const QGraphicsItem* self) {
    QList<QGraphicsItem*> _ret = self->collidingItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

bool QGraphicsItem_IsObscured(const QGraphicsItem* self) {
    return self->isObscured();
}

bool QGraphicsItem_IsObscured2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return self->isObscured(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRegion* QGraphicsItem_BoundingRegion(const QGraphicsItem* self, QTransform* itemToDeviceTransform) {
    return new QRegion(self->boundingRegion(*itemToDeviceTransform));
}

double QGraphicsItem_BoundingRegionGranularity(const QGraphicsItem* self) {
    return static_cast<double>(self->boundingRegionGranularity());
}

void QGraphicsItem_SetBoundingRegionGranularity(QGraphicsItem* self, double granularity) {
    self->setBoundingRegionGranularity(static_cast<qreal>(granularity));
}

void QGraphicsItem_Update(QGraphicsItem* self) {
    self->update();
}

void QGraphicsItem_Update2(QGraphicsItem* self, double x, double y, double width, double height) {
    self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

void QGraphicsItem_Scroll(QGraphicsItem* self, double dx, double dy) {
    self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

QPointF* QGraphicsItem_MapToItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
    return new QPointF(self->mapToItem(item, *point));
}

QPointF* QGraphicsItem_MapToParent(const QGraphicsItem* self, QPointF* point) {
    return new QPointF(self->mapToParent(*point));
}

QPointF* QGraphicsItem_MapToScene(const QGraphicsItem* self, QPointF* point) {
    return new QPointF(self->mapToScene(*point));
}

QRectF* QGraphicsItem_MapRectToItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
    return new QRectF(self->mapRectToItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectToParent(const QGraphicsItem* self, QRectF* rect) {
    return new QRectF(self->mapRectToParent(*rect));
}

QRectF* QGraphicsItem_MapRectToScene(const QGraphicsItem* self, QRectF* rect) {
    return new QRectF(self->mapRectToScene(*rect));
}

QPainterPath* QGraphicsItem_MapToItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
    return new QPainterPath(self->mapToItem(item, *path));
}

QPainterPath* QGraphicsItem_MapToParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
    return new QPainterPath(self->mapToParent(*path));
}

QPainterPath* QGraphicsItem_MapToSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
    return new QPainterPath(self->mapToScene(*path));
}

QPointF* QGraphicsItem_MapFromItem(const QGraphicsItem* self, QGraphicsItem* item, QPointF* point) {
    return new QPointF(self->mapFromItem(item, *point));
}

QPointF* QGraphicsItem_MapFromParent(const QGraphicsItem* self, QPointF* point) {
    return new QPointF(self->mapFromParent(*point));
}

QPointF* QGraphicsItem_MapFromScene(const QGraphicsItem* self, QPointF* point) {
    return new QPointF(self->mapFromScene(*point));
}

QRectF* QGraphicsItem_MapRectFromItem(const QGraphicsItem* self, QGraphicsItem* item, QRectF* rect) {
    return new QRectF(self->mapRectFromItem(item, *rect));
}

QRectF* QGraphicsItem_MapRectFromParent(const QGraphicsItem* self, QRectF* rect) {
    return new QRectF(self->mapRectFromParent(*rect));
}

QRectF* QGraphicsItem_MapRectFromScene(const QGraphicsItem* self, QRectF* rect) {
    return new QRectF(self->mapRectFromScene(*rect));
}

QPainterPath* QGraphicsItem_MapFromItem4(const QGraphicsItem* self, QGraphicsItem* item, QPainterPath* path) {
    return new QPainterPath(self->mapFromItem(item, *path));
}

QPainterPath* QGraphicsItem_MapFromParentWithPath(const QGraphicsItem* self, QPainterPath* path) {
    return new QPainterPath(self->mapFromParent(*path));
}

QPainterPath* QGraphicsItem_MapFromSceneWithPath(const QGraphicsItem* self, QPainterPath* path) {
    return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsItem_MapToItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
    return new QPointF(self->mapToItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToParent2(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapToParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapToScene2(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapToScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectToItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectToScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectToScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QPointF* QGraphicsItem_MapFromItem5(const QGraphicsItem* self, QGraphicsItem* item, double x, double y) {
    return new QPointF(self->mapFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromParent2(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapFromParent(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QPointF* QGraphicsItem_MapFromScene2(const QGraphicsItem* self, double x, double y) {
    return new QPointF(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QRectF* QGraphicsItem_MapRectFromItem2(const QGraphicsItem* self, QGraphicsItem* item, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromItem(item, static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromParent2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromParent(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

QRectF* QGraphicsItem_MapRectFromScene2(const QGraphicsItem* self, double x, double y, double w, double h) {
    return new QRectF(self->mapRectFromScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h)));
}

bool QGraphicsItem_IsAncestorOf(const QGraphicsItem* self, QGraphicsItem* child) {
    return self->isAncestorOf(child);
}

QGraphicsItem* QGraphicsItem_CommonAncestorItem(const QGraphicsItem* self, QGraphicsItem* other) {
    return self->commonAncestorItem(other);
}

bool QGraphicsItem_IsUnderMouse(const QGraphicsItem* self) {
    return self->isUnderMouse();
}

QVariant* QGraphicsItem_Data(const QGraphicsItem* self, int key) {
    return new QVariant(self->data(static_cast<int>(key)));
}

void QGraphicsItem_SetData(QGraphicsItem* self, int key, QVariant* value) {
    self->setData(static_cast<int>(key), *value);
}

int QGraphicsItem_InputMethodHints(const QGraphicsItem* self) {
    return static_cast<int>(self->inputMethodHints());
}

void QGraphicsItem_SetInputMethodHints(QGraphicsItem* self, int hints) {
    self->setInputMethodHints(static_cast<Qt::InputMethodHints>(hints));
}

void QGraphicsItem_InstallSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
    self->installSceneEventFilter(filterItem);
}

void QGraphicsItem_RemoveSceneEventFilter(QGraphicsItem* self, QGraphicsItem* filterItem) {
    self->removeSceneEventFilter(filterItem);
}

void QGraphicsItem_SetFlag2(QGraphicsItem* self, int flag, bool enabled) {
    self->setFlag(static_cast<QGraphicsItem::GraphicsItemFlag>(flag), enabled);
}

void QGraphicsItem_SetCacheMode2(QGraphicsItem* self, int mode, QSize* cacheSize) {
    self->setCacheMode(static_cast<QGraphicsItem::CacheMode>(mode), *cacheSize);
}

void QGraphicsItem_SetFocus1(QGraphicsItem* self, int focusReason) {
    self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsItem_EnsureVisible1(QGraphicsItem* self, QRectF* rect) {
    self->ensureVisible(*rect);
}

void QGraphicsItem_EnsureVisible22(QGraphicsItem* self, QRectF* rect, int xmargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible3(QGraphicsItem* self, QRectF* rect, int xmargin, int ymargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsItem_EnsureVisible5(QGraphicsItem* self, double x, double y, double w, double h, int xmargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsItem_EnsureVisible6(QGraphicsItem* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

QTransform* QGraphicsItem_ItemTransform2(const QGraphicsItem* self, QGraphicsItem* other, bool* ok) {
    return new QTransform(self->itemTransform(other, ok));
}

void QGraphicsItem_SetTransform2(QGraphicsItem* self, QTransform* matrix, bool combine) {
    self->setTransform(*matrix, combine);
}

libqt_list /* of QGraphicsItem* */ QGraphicsItem_CollidingItems1(const QGraphicsItem* self, int mode) {
    QList<QGraphicsItem*> _ret = self->collidingItems(static_cast<Qt::ItemSelectionMode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

bool QGraphicsItem_IsObscured1(const QGraphicsItem* self, QRectF* rect) {
    return self->isObscured(*rect);
}

void QGraphicsItem_Update1(QGraphicsItem* self, QRectF* rect) {
    self->update(*rect);
}

void QGraphicsItem_Scroll3(QGraphicsItem* self, double dx, double dy, QRectF* rect) {
    self->scroll(static_cast<qreal>(dx), static_cast<qreal>(dy), *rect);
}

// Derived class handler implementation
void QGraphicsItem_Advance(QGraphicsItem* self, int phase) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseAdvance(QGraphicsItem* self, int phase) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_Advance_IsBase(true);
        vqgraphicsitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnAdvance(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsItem_BoundingRect(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return new QRectF(vqgraphicsitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsItem_QBaseBoundingRect(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnBoundingRect(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsItem_Shape(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return new QPainterPath(vqgraphicsitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsItem_QBaseShape(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnShape(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_Contains(const QGraphicsItem* self, QPointF* point) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->contains(*point);
    } else {
        return vqgraphicsitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseContains(const QGraphicsItem* self, QPointF* point) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Contains_IsBase(true);
        return vqgraphicsitem->contains(*point);
    } else {
        return vqgraphicsitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnContains(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_CollidesWithItem(const QGraphicsItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseCollidesWithItem(const QGraphicsItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_CollidesWithItem_IsBase(true);
        return vqgraphicsitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithItem(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_CollidesWithPath(const QGraphicsItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseCollidesWithPath(const QGraphicsItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_CollidesWithPath_IsBase(true);
        return vqgraphicsitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnCollidesWithPath(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_IsObscuredBy(const QGraphicsItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->isObscuredBy(item);
    } else {
        return vqgraphicsitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseIsObscuredBy(const QGraphicsItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_IsObscuredBy_IsBase(true);
        return vqgraphicsitem->isObscuredBy(item);
    } else {
        return vqgraphicsitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnIsObscuredBy(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsItem_OpaqueArea(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return new QPainterPath(vqgraphicsitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsItem_QBaseOpaqueArea(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnOpaqueArea(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_Paint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->paint(painter, option, widget);
    } else {
        vqgraphicsitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsItem_QBasePaint(QGraphicsItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_Paint_IsBase(true);
        vqgraphicsitem->paint(painter, option, widget);
    } else {
        vqgraphicsitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnPaint(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsItem_Type(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->type();
    } else {
        return vqgraphicsitem->type();
    }
}

// Base class handler implementation
int QGraphicsItem_QBaseType(const QGraphicsItem* self) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Type_IsBase(true);
        return vqgraphicsitem->type();
    } else {
        return vqgraphicsitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnType(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Type_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_SceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        return vqgraphicsitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseSceneEventFilter(QGraphicsItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SceneEventFilter_IsBase(true);
        return vqgraphicsitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSceneEventFilter(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_SceneEvent(QGraphicsItem* self, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        return vqgraphicsitem->sceneEvent(event);
    } else {
        return vqgraphicsitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseSceneEvent(QGraphicsItem* self, QEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SceneEvent_IsBase(true);
        return vqgraphicsitem->sceneEvent(event);
    } else {
        return vqgraphicsitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSceneEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_ContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->contextMenuEvent(event);
    } else {
        vqgraphicsitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseContextMenuEvent(QGraphicsItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_ContextMenuEvent_IsBase(true);
        vqgraphicsitem->contextMenuEvent(event);
    } else {
        vqgraphicsitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnContextMenuEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_DragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->dragEnterEvent(event);
    } else {
        vqgraphicsitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseDragEnterEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragEnterEvent_IsBase(true);
        vqgraphicsitem->dragEnterEvent(event);
    } else {
        vqgraphicsitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragEnterEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_DragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->dragLeaveEvent(event);
    } else {
        vqgraphicsitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseDragLeaveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragLeaveEvent_IsBase(true);
        vqgraphicsitem->dragLeaveEvent(event);
    } else {
        vqgraphicsitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragLeaveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_DragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->dragMoveEvent(event);
    } else {
        vqgraphicsitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseDragMoveEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragMoveEvent_IsBase(true);
        vqgraphicsitem->dragMoveEvent(event);
    } else {
        vqgraphicsitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDragMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_DropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->dropEvent(event);
    } else {
        vqgraphicsitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseDropEvent(QGraphicsItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DropEvent_IsBase(true);
        vqgraphicsitem->dropEvent(event);
    } else {
        vqgraphicsitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnDropEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_FocusInEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->focusInEvent(event);
    } else {
        vqgraphicsitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseFocusInEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_FocusInEvent_IsBase(true);
        vqgraphicsitem->focusInEvent(event);
    } else {
        vqgraphicsitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnFocusInEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_FocusOutEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->focusOutEvent(event);
    } else {
        vqgraphicsitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseFocusOutEvent(QGraphicsItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_FocusOutEvent_IsBase(true);
        vqgraphicsitem->focusOutEvent(event);
    } else {
        vqgraphicsitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnFocusOutEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_HoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->hoverEnterEvent(event);
    } else {
        vqgraphicsitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseHoverEnterEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverEnterEvent_IsBase(true);
        vqgraphicsitem->hoverEnterEvent(event);
    } else {
        vqgraphicsitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverEnterEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_HoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->hoverMoveEvent(event);
    } else {
        vqgraphicsitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseHoverMoveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverMoveEvent_IsBase(true);
        vqgraphicsitem->hoverMoveEvent(event);
    } else {
        vqgraphicsitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_HoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseHoverLeaveEvent(QGraphicsItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverLeaveEvent_IsBase(true);
        vqgraphicsitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnHoverLeaveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_KeyPressEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->keyPressEvent(event);
    } else {
        vqgraphicsitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseKeyPressEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_KeyPressEvent_IsBase(true);
        vqgraphicsitem->keyPressEvent(event);
    } else {
        vqgraphicsitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnKeyPressEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_KeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->keyReleaseEvent(event);
    } else {
        vqgraphicsitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseKeyReleaseEvent(QGraphicsItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_KeyReleaseEvent_IsBase(true);
        vqgraphicsitem->keyReleaseEvent(event);
    } else {
        vqgraphicsitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnKeyReleaseEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_MousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->mousePressEvent(event);
    } else {
        vqgraphicsitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseMousePressEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MousePressEvent_IsBase(true);
        vqgraphicsitem->mousePressEvent(event);
    } else {
        vqgraphicsitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMousePressEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_MouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->mouseMoveEvent(event);
    } else {
        vqgraphicsitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseMouseMoveEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseMoveEvent_IsBase(true);
        vqgraphicsitem->mouseMoveEvent(event);
    } else {
        vqgraphicsitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseMoveEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_MouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseMouseReleaseEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseReleaseEvent_IsBase(true);
        vqgraphicsitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseReleaseEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_MouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseMouseDoubleClickEvent(QGraphicsItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnMouseDoubleClickEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_WheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->wheelEvent(event);
    } else {
        vqgraphicsitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseWheelEvent(QGraphicsItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_WheelEvent_IsBase(true);
        vqgraphicsitem->wheelEvent(event);
    } else {
        vqgraphicsitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnWheelEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_InputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->inputMethodEvent(event);
    } else {
        vqgraphicsitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseInputMethodEvent(QGraphicsItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_InputMethodEvent_IsBase(true);
        vqgraphicsitem->inputMethodEvent(event);
    } else {
        vqgraphicsitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnInputMethodEvent(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItem_InputMethodQuery(const QGraphicsItem* self, int query) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return new QVariant(vqgraphicsitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItem_QBaseInputMethodQuery(const QGraphicsItem* self, int query) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnInputMethodQuery(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItem_ItemChange(QGraphicsItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        return new QVariant(vqgraphicsitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItem_QBaseItemChange(QGraphicsItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnItemChange(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItem_SupportsExtension(const QGraphicsItem* self, int extension) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return vqgraphicsitem->supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    } else {
        return vqgraphicsitem->supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsItem_QBaseSupportsExtension(const QGraphicsItem* self, int extension) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_SupportsExtension_IsBase(true);
        return vqgraphicsitem->supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    } else {
        return vqgraphicsitem->supportsExtension(static_cast<VirtualQGraphicsItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSupportsExtension(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_SetExtension(QGraphicsItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    } else {
        vqgraphicsitem->setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseSetExtension(QGraphicsItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SetExtension_IsBase(true);
        vqgraphicsitem->setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    } else {
        vqgraphicsitem->setExtension(static_cast<VirtualQGraphicsItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnSetExtension(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItem_Extension(const QGraphicsItem* self, QVariant* variant) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        return new QVariant(vqgraphicsitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItem_QBaseExtension(const QGraphicsItem* self, QVariant* variant) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Extension_IsBase(true);
        return new QVariant(vqgraphicsitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnExtension(const QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = const_cast<VirtualQGraphicsItem*>(dynamic_cast<const VirtualQGraphicsItem*>(self))) {
        vqgraphicsitem->setQGraphicsItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_UpdateMicroFocus(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->updateMicroFocus();
    } else {
        vqgraphicsitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseUpdateMicroFocus(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_UpdateMicroFocus_IsBase(true);
        vqgraphicsitem->updateMicroFocus();
    } else {
        vqgraphicsitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnUpdateMicroFocus(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_AddToIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->addToIndex();
    } else {
        vqgraphicsitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseAddToIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_AddToIndex_IsBase(true);
        vqgraphicsitem->addToIndex();
    } else {
        vqgraphicsitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnAddToIndex(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_RemoveFromIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->removeFromIndex();
    } else {
        vqgraphicsitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsItem_QBaseRemoveFromIndex(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_RemoveFromIndex_IsBase(true);
        vqgraphicsitem->removeFromIndex();
    } else {
        vqgraphicsitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnRemoveFromIndex(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItem_PrepareGeometryChange(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->prepareGeometryChange();
    } else {
        vqgraphicsitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsItem_QBasePrepareGeometryChange(QGraphicsItem* self) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_PrepareGeometryChange_IsBase(true);
        vqgraphicsitem->prepareGeometryChange();
    } else {
        vqgraphicsitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItem_OnPrepareGeometryChange(QGraphicsItem* self, intptr_t slot) {
    if (auto* vqgraphicsitem = dynamic_cast<VirtualQGraphicsItem*>(self)) {
        vqgraphicsitem->setQGraphicsItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsItem::QGraphicsItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsItem_Delete(QGraphicsItem* self) {
    delete self;
}

QGraphicsObject* QGraphicsObject_new() {
    return new VirtualQGraphicsObject();
}

QGraphicsObject* QGraphicsObject_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsObject(parent);
}

QMetaObject* QGraphicsObject_MetaObject(const QGraphicsObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsObject_Metacast(QGraphicsObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsObject_Metacall(QGraphicsObject* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsObject_OnMetacall(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Metacall_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsObject_QBaseMetacall(QGraphicsObject* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Metacall_IsBase(true);
        return vqgraphicsobject->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsObject_Tr(const char* s) {
    QString _ret = QGraphicsObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsObject_GrabGesture(QGraphicsObject* self, int typeVal) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_UngrabGesture(QGraphicsObject* self, int typeVal) {
    self->ungrabGesture(static_cast<Qt::GestureType>(typeVal));
}

void QGraphicsObject_ParentChanged(QGraphicsObject* self) {
    self->parentChanged();
}

void QGraphicsObject_Connect_ParentChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::parentChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_OpacityChanged(QGraphicsObject* self) {
    self->opacityChanged();
}

void QGraphicsObject_Connect_OpacityChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::opacityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_VisibleChanged(QGraphicsObject* self) {
    self->visibleChanged();
}

void QGraphicsObject_Connect_VisibleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::visibleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_EnabledChanged(QGraphicsObject* self) {
    self->enabledChanged();
}

void QGraphicsObject_Connect_EnabledChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::enabledChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_XChanged(QGraphicsObject* self) {
    self->xChanged();
}

void QGraphicsObject_Connect_XChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::xChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_YChanged(QGraphicsObject* self) {
    self->yChanged();
}

void QGraphicsObject_Connect_YChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::yChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_ZChanged(QGraphicsObject* self) {
    self->zChanged();
}

void QGraphicsObject_Connect_ZChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::zChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_RotationChanged(QGraphicsObject* self) {
    self->rotationChanged();
}

void QGraphicsObject_Connect_RotationChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::rotationChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_ScaleChanged(QGraphicsObject* self) {
    self->scaleChanged();
}

void QGraphicsObject_Connect_ScaleChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::scaleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_ChildrenChanged(QGraphicsObject* self) {
    self->childrenChanged();
}

void QGraphicsObject_Connect_ChildrenChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::childrenChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_WidthChanged(QGraphicsObject* self) {
    self->widthChanged();
}

void QGraphicsObject_Connect_WidthChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::widthChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsObject_HeightChanged(QGraphicsObject* self) {
    self->heightChanged();
}

void QGraphicsObject_Connect_HeightChanged(QGraphicsObject* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsObject*) = reinterpret_cast<void (*)(QGraphicsObject*)>(slot);
    QGraphicsObject::connect(self, &QGraphicsObject::heightChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QGraphicsObject_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsObject_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsObject::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsObject_GrabGesture2(QGraphicsObject* self, int typeVal, int flags) {
    self->grabGesture(static_cast<Qt::GestureType>(typeVal), static_cast<Qt::GestureFlags>(flags));
}

// Derived class handler implementation
bool QGraphicsObject_Event(QGraphicsObject* self, QEvent* ev) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->event(ev);
    } else {
        return vqgraphicsobject->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseEvent(QGraphicsObject* self, QEvent* ev) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Event_IsBase(true);
        return vqgraphicsobject->event(ev);
    } else {
        return vqgraphicsobject->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Event_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_EventFilter(QGraphicsObject* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->eventFilter(watched, event);
    } else {
        return vqgraphicsobject->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseEventFilter(QGraphicsObject* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_EventFilter_IsBase(true);
        return vqgraphicsobject->eventFilter(watched, event);
    } else {
        return vqgraphicsobject->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnEventFilter(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_TimerEvent(QGraphicsObject* self, QTimerEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->timerEvent(event);
    } else {
        vqgraphicsobject->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseTimerEvent(QGraphicsObject* self, QTimerEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_TimerEvent_IsBase(true);
        vqgraphicsobject->timerEvent(event);
    } else {
        vqgraphicsobject->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnTimerEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_ChildEvent(QGraphicsObject* self, QChildEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->childEvent(event);
    } else {
        vqgraphicsobject->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseChildEvent(QGraphicsObject* self, QChildEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ChildEvent_IsBase(true);
        vqgraphicsobject->childEvent(event);
    } else {
        vqgraphicsobject->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnChildEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_CustomEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->customEvent(event);
    } else {
        vqgraphicsobject->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseCustomEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_CustomEvent_IsBase(true);
        vqgraphicsobject->customEvent(event);
    } else {
        vqgraphicsobject->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCustomEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_ConnectNotify(QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->connectNotify(*signal);
    } else {
        vqgraphicsobject->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseConnectNotify(QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ConnectNotify_IsBase(true);
        vqgraphicsobject->connectNotify(*signal);
    } else {
        vqgraphicsobject->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnConnectNotify(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_DisconnectNotify(QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->disconnectNotify(*signal);
    } else {
        vqgraphicsobject->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseDisconnectNotify(QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DisconnectNotify_IsBase(true);
        vqgraphicsobject->disconnectNotify(*signal);
    } else {
        vqgraphicsobject->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDisconnectNotify(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_Advance(QGraphicsObject* self, int phase) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->advance(static_cast<int>(phase));
    } else {
        vqgraphicsobject->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseAdvance(QGraphicsObject* self, int phase) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Advance_IsBase(true);
        vqgraphicsobject->advance(static_cast<int>(phase));
    } else {
        vqgraphicsobject->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnAdvance(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Advance_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsObject_BoundingRect(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return new QRectF(vqgraphicsobject->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsObject_QBaseBoundingRect(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsobject->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnBoundingRect(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsObject_Shape(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return new QPainterPath(vqgraphicsobject->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsObject_QBaseShape(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsobject->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnShape(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Shape_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_Contains(const QGraphicsObject* self, QPointF* point) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->contains(*point);
    } else {
        return vqgraphicsobject->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseContains(const QGraphicsObject* self, QPointF* point) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Contains_IsBase(true);
        return vqgraphicsobject->contains(*point);
    } else {
        return vqgraphicsobject->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnContains(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Contains_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_CollidesWithItem(const QGraphicsObject* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsobject->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseCollidesWithItem(const QGraphicsObject* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_CollidesWithItem_IsBase(true);
        return vqgraphicsobject->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsobject->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCollidesWithItem(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_CollidesWithPath(const QGraphicsObject* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsobject->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseCollidesWithPath(const QGraphicsObject* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_CollidesWithPath_IsBase(true);
        return vqgraphicsobject->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsobject->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnCollidesWithPath(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_IsObscuredBy(const QGraphicsObject* self, QGraphicsItem* item) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->isObscuredBy(item);
    } else {
        return vqgraphicsobject->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseIsObscuredBy(const QGraphicsObject* self, QGraphicsItem* item) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_IsObscuredBy_IsBase(true);
        return vqgraphicsobject->isObscuredBy(item);
    } else {
        return vqgraphicsobject->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnIsObscuredBy(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsObject_OpaqueArea(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return new QPainterPath(vqgraphicsobject->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsObject_QBaseOpaqueArea(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsobject->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnOpaqueArea(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_Paint(QGraphicsObject* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->paint(painter, option, widget);
    } else {
        vqgraphicsobject->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsObject_QBasePaint(QGraphicsObject* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Paint_IsBase(true);
        vqgraphicsobject->paint(painter, option, widget);
    } else {
        vqgraphicsobject->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnPaint(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_Paint_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsObject_Type(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->type();
    } else {
        return vqgraphicsobject->type();
    }
}

// Base class handler implementation
int QGraphicsObject_QBaseType(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Type_IsBase(true);
        return vqgraphicsobject->type();
    } else {
        return vqgraphicsobject->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnType(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Type_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_SceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsobject->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseSceneEventFilter(QGraphicsObject* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SceneEventFilter_IsBase(true);
        return vqgraphicsobject->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsobject->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSceneEventFilter(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_SceneEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return vqgraphicsobject->sceneEvent(event);
    } else {
        return vqgraphicsobject->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseSceneEvent(QGraphicsObject* self, QEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SceneEvent_IsBase(true);
        return vqgraphicsobject->sceneEvent(event);
    } else {
        return vqgraphicsobject->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSceneEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_ContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->contextMenuEvent(event);
    } else {
        vqgraphicsobject->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseContextMenuEvent(QGraphicsObject* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ContextMenuEvent_IsBase(true);
        vqgraphicsobject->contextMenuEvent(event);
    } else {
        vqgraphicsobject->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnContextMenuEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_DragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->dragEnterEvent(event);
    } else {
        vqgraphicsobject->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseDragEnterEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragEnterEvent_IsBase(true);
        vqgraphicsobject->dragEnterEvent(event);
    } else {
        vqgraphicsobject->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragEnterEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_DragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->dragLeaveEvent(event);
    } else {
        vqgraphicsobject->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseDragLeaveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragLeaveEvent_IsBase(true);
        vqgraphicsobject->dragLeaveEvent(event);
    } else {
        vqgraphicsobject->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragLeaveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_DragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->dragMoveEvent(event);
    } else {
        vqgraphicsobject->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseDragMoveEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragMoveEvent_IsBase(true);
        vqgraphicsobject->dragMoveEvent(event);
    } else {
        vqgraphicsobject->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDragMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_DropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->dropEvent(event);
    } else {
        vqgraphicsobject->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseDropEvent(QGraphicsObject* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DropEvent_IsBase(true);
        vqgraphicsobject->dropEvent(event);
    } else {
        vqgraphicsobject->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnDropEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_FocusInEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->focusInEvent(event);
    } else {
        vqgraphicsobject->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseFocusInEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_FocusInEvent_IsBase(true);
        vqgraphicsobject->focusInEvent(event);
    } else {
        vqgraphicsobject->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnFocusInEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_FocusOutEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->focusOutEvent(event);
    } else {
        vqgraphicsobject->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseFocusOutEvent(QGraphicsObject* self, QFocusEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_FocusOutEvent_IsBase(true);
        vqgraphicsobject->focusOutEvent(event);
    } else {
        vqgraphicsobject->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnFocusOutEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_HoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->hoverEnterEvent(event);
    } else {
        vqgraphicsobject->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseHoverEnterEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverEnterEvent_IsBase(true);
        vqgraphicsobject->hoverEnterEvent(event);
    } else {
        vqgraphicsobject->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverEnterEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_HoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->hoverMoveEvent(event);
    } else {
        vqgraphicsobject->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseHoverMoveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverMoveEvent_IsBase(true);
        vqgraphicsobject->hoverMoveEvent(event);
    } else {
        vqgraphicsobject->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_HoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->hoverLeaveEvent(event);
    } else {
        vqgraphicsobject->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseHoverLeaveEvent(QGraphicsObject* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverLeaveEvent_IsBase(true);
        vqgraphicsobject->hoverLeaveEvent(event);
    } else {
        vqgraphicsobject->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnHoverLeaveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_KeyPressEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->keyPressEvent(event);
    } else {
        vqgraphicsobject->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseKeyPressEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_KeyPressEvent_IsBase(true);
        vqgraphicsobject->keyPressEvent(event);
    } else {
        vqgraphicsobject->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnKeyPressEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_KeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->keyReleaseEvent(event);
    } else {
        vqgraphicsobject->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseKeyReleaseEvent(QGraphicsObject* self, QKeyEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_KeyReleaseEvent_IsBase(true);
        vqgraphicsobject->keyReleaseEvent(event);
    } else {
        vqgraphicsobject->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnKeyReleaseEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_MousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->mousePressEvent(event);
    } else {
        vqgraphicsobject->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseMousePressEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MousePressEvent_IsBase(true);
        vqgraphicsobject->mousePressEvent(event);
    } else {
        vqgraphicsobject->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMousePressEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_MouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->mouseMoveEvent(event);
    } else {
        vqgraphicsobject->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseMouseMoveEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseMoveEvent_IsBase(true);
        vqgraphicsobject->mouseMoveEvent(event);
    } else {
        vqgraphicsobject->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseMoveEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_MouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->mouseReleaseEvent(event);
    } else {
        vqgraphicsobject->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseMouseReleaseEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseReleaseEvent_IsBase(true);
        vqgraphicsobject->mouseReleaseEvent(event);
    } else {
        vqgraphicsobject->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseReleaseEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_MouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsobject->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseMouseDoubleClickEvent(QGraphicsObject* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsobject->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsobject->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnMouseDoubleClickEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_WheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->wheelEvent(event);
    } else {
        vqgraphicsobject->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseWheelEvent(QGraphicsObject* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_WheelEvent_IsBase(true);
        vqgraphicsobject->wheelEvent(event);
    } else {
        vqgraphicsobject->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnWheelEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_InputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->inputMethodEvent(event);
    } else {
        vqgraphicsobject->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseInputMethodEvent(QGraphicsObject* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_InputMethodEvent_IsBase(true);
        vqgraphicsobject->inputMethodEvent(event);
    } else {
        vqgraphicsobject->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnInputMethodEvent(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsObject_InputMethodQuery(const QGraphicsObject* self, int query) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return new QVariant(vqgraphicsobject->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsObject_QBaseInputMethodQuery(const QGraphicsObject* self, int query) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsobject->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnInputMethodQuery(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsObject_ItemChange(QGraphicsObject* self, int change, QVariant* value) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        return new QVariant(vqgraphicsobject->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsObject_QBaseItemChange(QGraphicsObject* self, int change, QVariant* value) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsobject->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnItemChange(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_SupportsExtension(const QGraphicsObject* self, int extension) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    } else {
        return vqgraphicsobject->supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseSupportsExtension(const QGraphicsObject* self, int extension) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_SupportsExtension_IsBase(true);
        return vqgraphicsobject->supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    } else {
        return vqgraphicsobject->supportsExtension(static_cast<VirtualQGraphicsObject::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSupportsExtension(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_SetExtension(QGraphicsObject* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    } else {
        vqgraphicsobject->setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseSetExtension(QGraphicsObject* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SetExtension_IsBase(true);
        vqgraphicsobject->setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    } else {
        vqgraphicsobject->setExtension(static_cast<VirtualQGraphicsObject::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSetExtension(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsObject_Extension(const QGraphicsObject* self, QVariant* variant) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return new QVariant(vqgraphicsobject->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsObject_QBaseExtension(const QGraphicsObject* self, QVariant* variant) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Extension_IsBase(true);
        return new QVariant(vqgraphicsobject->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnExtension(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Extension_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_UpdateMicroFocus(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->updateMicroFocus();
    } else {
        vqgraphicsobject->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseUpdateMicroFocus(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_UpdateMicroFocus_IsBase(true);
        vqgraphicsobject->updateMicroFocus();
    } else {
        vqgraphicsobject->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnUpdateMicroFocus(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsObject_Sender(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->sender();
    } else {
        return vqgraphicsobject->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsObject_QBaseSender(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Sender_IsBase(true);
        return vqgraphicsobject->sender();
    } else {
        return vqgraphicsobject->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSender(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Sender_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsObject_SenderSignalIndex(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->senderSignalIndex();
    } else {
        return vqgraphicsobject->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsObject_QBaseSenderSignalIndex(const QGraphicsObject* self) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_SenderSignalIndex_IsBase(true);
        return vqgraphicsobject->senderSignalIndex();
    } else {
        return vqgraphicsobject->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnSenderSignalIndex(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsObject_Receivers(const QGraphicsObject* self, const char* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->receivers(signal);
    } else {
        return vqgraphicsobject->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsObject_QBaseReceivers(const QGraphicsObject* self, const char* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Receivers_IsBase(true);
        return vqgraphicsobject->receivers(signal);
    } else {
        return vqgraphicsobject->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnReceivers(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_Receivers_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsObject_IsSignalConnected(const QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        return vqgraphicsobject->isSignalConnected(*signal);
    } else {
        return vqgraphicsobject->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsObject_QBaseIsSignalConnected(const QGraphicsObject* self, QMetaMethod* signal) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_IsSignalConnected_IsBase(true);
        return vqgraphicsobject->isSignalConnected(*signal);
    } else {
        return vqgraphicsobject->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnIsSignalConnected(const QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = const_cast<VirtualQGraphicsObject*>(dynamic_cast<const VirtualQGraphicsObject*>(self))) {
        vqgraphicsobject->setQGraphicsObject_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_AddToIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->addToIndex();
    } else {
        vqgraphicsobject->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseAddToIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_AddToIndex_IsBase(true);
        vqgraphicsobject->addToIndex();
    } else {
        vqgraphicsobject->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnAddToIndex(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_RemoveFromIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->removeFromIndex();
    } else {
        vqgraphicsobject->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsObject_QBaseRemoveFromIndex(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_RemoveFromIndex_IsBase(true);
        vqgraphicsobject->removeFromIndex();
    } else {
        vqgraphicsobject->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnRemoveFromIndex(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsObject_PrepareGeometryChange(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->prepareGeometryChange();
    } else {
        vqgraphicsobject->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsObject_QBasePrepareGeometryChange(QGraphicsObject* self) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_PrepareGeometryChange_IsBase(true);
        vqgraphicsobject->prepareGeometryChange();
    } else {
        vqgraphicsobject->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsObject_OnPrepareGeometryChange(QGraphicsObject* self, intptr_t slot) {
    if (auto* vqgraphicsobject = dynamic_cast<VirtualQGraphicsObject*>(self)) {
        vqgraphicsobject->setQGraphicsObject_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsObject::QGraphicsObject_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsObject_Delete(QGraphicsObject* self) {
    delete self;
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new() {
    return new VirtualQAbstractGraphicsShapeItem();
}

QAbstractGraphicsShapeItem* QAbstractGraphicsShapeItem_new2(QGraphicsItem* parent) {
    return new VirtualQAbstractGraphicsShapeItem(parent);
}

QPen* QAbstractGraphicsShapeItem_Pen(const QAbstractGraphicsShapeItem* self) {
    return new QPen(self->pen());
}

void QAbstractGraphicsShapeItem_SetPen(QAbstractGraphicsShapeItem* self, QPen* pen) {
    self->setPen(*pen);
}

QBrush* QAbstractGraphicsShapeItem_Brush(const QAbstractGraphicsShapeItem* self) {
    return new QBrush(self->brush());
}

void QAbstractGraphicsShapeItem_SetBrush(QAbstractGraphicsShapeItem* self, QBrush* brush) {
    self->setBrush(*brush);
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_IsObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->isObscuredBy(item);
    } else {
        return vqabstractgraphicsshapeitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseIsObscuredBy(const QAbstractGraphicsShapeItem* self, QGraphicsItem* item) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_IsObscuredBy_IsBase(true);
        return vqabstractgraphicsshapeitem->isObscuredBy(item);
    } else {
        return vqabstractgraphicsshapeitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnIsObscuredBy(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_OpaqueArea(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return new QPainterPath(vqabstractgraphicsshapeitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_QBaseOpaqueArea(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqabstractgraphicsshapeitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnOpaqueArea(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_OpaqueArea_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_Advance(QAbstractGraphicsShapeItem* self, int phase) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->advance(static_cast<int>(phase));
    } else {
        vqabstractgraphicsshapeitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseAdvance(QAbstractGraphicsShapeItem* self, int phase) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Advance_IsBase(true);
        vqabstractgraphicsshapeitem->advance(static_cast<int>(phase));
    } else {
        vqabstractgraphicsshapeitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnAdvance(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Advance_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QAbstractGraphicsShapeItem_BoundingRect(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return new QRectF(vqabstractgraphicsshapeitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QAbstractGraphicsShapeItem_QBaseBoundingRect(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_BoundingRect_IsBase(true);
        return new QRectF(vqabstractgraphicsshapeitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnBoundingRect(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_BoundingRect_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_Shape(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return new QPainterPath(vqabstractgraphicsshapeitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QAbstractGraphicsShapeItem_QBaseShape(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Shape_IsBase(true);
        return new QPainterPath(vqabstractgraphicsshapeitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnShape(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Shape_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_Contains(const QAbstractGraphicsShapeItem* self, QPointF* point) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->contains(*point);
    } else {
        return vqabstractgraphicsshapeitem->contains(*point);
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseContains(const QAbstractGraphicsShapeItem* self, QPointF* point) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Contains_IsBase(true);
        return vqabstractgraphicsshapeitem->contains(*point);
    } else {
        return vqabstractgraphicsshapeitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnContains(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Contains_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_CollidesWithItem(const QAbstractGraphicsShapeItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqabstractgraphicsshapeitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseCollidesWithItem(const QAbstractGraphicsShapeItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_CollidesWithItem_IsBase(true);
        return vqabstractgraphicsshapeitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqabstractgraphicsshapeitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnCollidesWithItem(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_CollidesWithPath(const QAbstractGraphicsShapeItem* self, QPainterPath* path, int mode) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqabstractgraphicsshapeitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseCollidesWithPath(const QAbstractGraphicsShapeItem* self, QPainterPath* path, int mode) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_CollidesWithPath_IsBase(true);
        return vqabstractgraphicsshapeitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqabstractgraphicsshapeitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnCollidesWithPath(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_Paint(QAbstractGraphicsShapeItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->paint(painter, option, widget);
    } else {
        vqabstractgraphicsshapeitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBasePaint(QAbstractGraphicsShapeItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Paint_IsBase(true);
        vqabstractgraphicsshapeitem->paint(painter, option, widget);
    } else {
        vqabstractgraphicsshapeitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnPaint(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Paint_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractGraphicsShapeItem_Type(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->type();
    } else {
        return vqabstractgraphicsshapeitem->type();
    }
}

// Base class handler implementation
int QAbstractGraphicsShapeItem_QBaseType(const QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Type_IsBase(true);
        return vqabstractgraphicsshapeitem->type();
    } else {
        return vqabstractgraphicsshapeitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnType(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Type_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        return vqabstractgraphicsshapeitem->sceneEventFilter(watched, event);
    } else {
        return vqabstractgraphicsshapeitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseSceneEventFilter(QAbstractGraphicsShapeItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SceneEventFilter_IsBase(true);
        return vqabstractgraphicsshapeitem->sceneEventFilter(watched, event);
    } else {
        return vqabstractgraphicsshapeitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSceneEventFilter(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        return vqabstractgraphicsshapeitem->sceneEvent(event);
    } else {
        return vqabstractgraphicsshapeitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseSceneEvent(QAbstractGraphicsShapeItem* self, QEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SceneEvent_IsBase(true);
        return vqabstractgraphicsshapeitem->sceneEvent(event);
    } else {
        return vqabstractgraphicsshapeitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSceneEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SceneEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_ContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->contextMenuEvent(event);
    } else {
        vqabstractgraphicsshapeitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseContextMenuEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_ContextMenuEvent_IsBase(true);
        vqabstractgraphicsshapeitem->contextMenuEvent(event);
    } else {
        vqabstractgraphicsshapeitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnContextMenuEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->dragEnterEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseDragEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragEnterEvent_IsBase(true);
        vqabstractgraphicsshapeitem->dragEnterEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragEnterEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->dragLeaveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseDragLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragLeaveEvent_IsBase(true);
        vqabstractgraphicsshapeitem->dragLeaveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragLeaveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->dragMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseDragMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragMoveEvent_IsBase(true);
        vqabstractgraphicsshapeitem->dragMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDragMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_DropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->dropEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseDropEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DropEvent_IsBase(true);
        vqabstractgraphicsshapeitem->dropEvent(event);
    } else {
        vqabstractgraphicsshapeitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnDropEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_DropEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_FocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->focusInEvent(event);
    } else {
        vqabstractgraphicsshapeitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseFocusInEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_FocusInEvent_IsBase(true);
        vqabstractgraphicsshapeitem->focusInEvent(event);
    } else {
        vqabstractgraphicsshapeitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnFocusInEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_FocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->focusOutEvent(event);
    } else {
        vqabstractgraphicsshapeitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseFocusOutEvent(QAbstractGraphicsShapeItem* self, QFocusEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_FocusOutEvent_IsBase(true);
        vqabstractgraphicsshapeitem->focusOutEvent(event);
    } else {
        vqabstractgraphicsshapeitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnFocusOutEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->hoverEnterEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseHoverEnterEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverEnterEvent_IsBase(true);
        vqabstractgraphicsshapeitem->hoverEnterEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverEnterEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->hoverMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseHoverMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverMoveEvent_IsBase(true);
        vqabstractgraphicsshapeitem->hoverMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_HoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->hoverLeaveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseHoverLeaveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverLeaveEvent_IsBase(true);
        vqabstractgraphicsshapeitem->hoverLeaveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnHoverLeaveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_KeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->keyPressEvent(event);
    } else {
        vqabstractgraphicsshapeitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseKeyPressEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_KeyPressEvent_IsBase(true);
        vqabstractgraphicsshapeitem->keyPressEvent(event);
    } else {
        vqabstractgraphicsshapeitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnKeyPressEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_KeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->keyReleaseEvent(event);
    } else {
        vqabstractgraphicsshapeitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseKeyReleaseEvent(QAbstractGraphicsShapeItem* self, QKeyEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_KeyReleaseEvent_IsBase(true);
        vqabstractgraphicsshapeitem->keyReleaseEvent(event);
    } else {
        vqabstractgraphicsshapeitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnKeyReleaseEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->mousePressEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseMousePressEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MousePressEvent_IsBase(true);
        vqabstractgraphicsshapeitem->mousePressEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMousePressEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->mouseMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseMouseMoveEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseMoveEvent_IsBase(true);
        vqabstractgraphicsshapeitem->mouseMoveEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseMoveEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->mouseReleaseEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseMouseReleaseEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseReleaseEvent_IsBase(true);
        vqabstractgraphicsshapeitem->mouseReleaseEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseReleaseEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_MouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->mouseDoubleClickEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseDoubleClickEvent_IsBase(true);
        vqabstractgraphicsshapeitem->mouseDoubleClickEvent(event);
    } else {
        vqabstractgraphicsshapeitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnMouseDoubleClickEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_WheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->wheelEvent(event);
    } else {
        vqabstractgraphicsshapeitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseWheelEvent(QAbstractGraphicsShapeItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_WheelEvent_IsBase(true);
        vqabstractgraphicsshapeitem->wheelEvent(event);
    } else {
        vqabstractgraphicsshapeitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnWheelEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_InputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->inputMethodEvent(event);
    } else {
        vqabstractgraphicsshapeitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseInputMethodEvent(QAbstractGraphicsShapeItem* self, QInputMethodEvent* event) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_InputMethodEvent_IsBase(true);
        vqabstractgraphicsshapeitem->inputMethodEvent(event);
    } else {
        vqabstractgraphicsshapeitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnInputMethodEvent(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_InputMethodQuery(const QAbstractGraphicsShapeItem* self, int query) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return new QVariant(vqabstractgraphicsshapeitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_QBaseInputMethodQuery(const QAbstractGraphicsShapeItem* self, int query) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractgraphicsshapeitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnInputMethodQuery(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_ItemChange(QAbstractGraphicsShapeItem* self, int change, QVariant* value) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        return new QVariant(vqabstractgraphicsshapeitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_QBaseItemChange(QAbstractGraphicsShapeItem* self, int change, QVariant* value) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_ItemChange_IsBase(true);
        return new QVariant(vqabstractgraphicsshapeitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnItemChange(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_ItemChange_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractGraphicsShapeItem_SupportsExtension(const QAbstractGraphicsShapeItem* self, int extension) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return vqabstractgraphicsshapeitem->supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    } else {
        return vqabstractgraphicsshapeitem->supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QAbstractGraphicsShapeItem_QBaseSupportsExtension(const QAbstractGraphicsShapeItem* self, int extension) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SupportsExtension_IsBase(true);
        return vqabstractgraphicsshapeitem->supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    } else {
        return vqabstractgraphicsshapeitem->supportsExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSupportsExtension(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SupportsExtension_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_SetExtension(QAbstractGraphicsShapeItem* self, int extension, QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    } else {
        vqabstractgraphicsshapeitem->setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseSetExtension(QAbstractGraphicsShapeItem* self, int extension, QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SetExtension_IsBase(true);
        vqabstractgraphicsshapeitem->setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    } else {
        vqabstractgraphicsshapeitem->setExtension(static_cast<VirtualQAbstractGraphicsShapeItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnSetExtension(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_SetExtension_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractGraphicsShapeItem_Extension(const QAbstractGraphicsShapeItem* self, QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        return new QVariant(vqabstractgraphicsshapeitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QAbstractGraphicsShapeItem_QBaseExtension(const QAbstractGraphicsShapeItem* self, QVariant* variant) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Extension_IsBase(true);
        return new QVariant(vqabstractgraphicsshapeitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnExtension(const QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = const_cast<VirtualQAbstractGraphicsShapeItem*>(dynamic_cast<const VirtualQAbstractGraphicsShapeItem*>(self))) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_Extension_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_UpdateMicroFocus(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->updateMicroFocus();
    } else {
        vqabstractgraphicsshapeitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseUpdateMicroFocus(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_UpdateMicroFocus_IsBase(true);
        vqabstractgraphicsshapeitem->updateMicroFocus();
    } else {
        vqabstractgraphicsshapeitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnUpdateMicroFocus(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_AddToIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->addToIndex();
    } else {
        vqabstractgraphicsshapeitem->addToIndex();
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseAddToIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_AddToIndex_IsBase(true);
        vqabstractgraphicsshapeitem->addToIndex();
    } else {
        vqabstractgraphicsshapeitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnAddToIndex(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_AddToIndex_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_RemoveFromIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->removeFromIndex();
    } else {
        vqabstractgraphicsshapeitem->removeFromIndex();
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBaseRemoveFromIndex(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_RemoveFromIndex_IsBase(true);
        vqabstractgraphicsshapeitem->removeFromIndex();
    } else {
        vqabstractgraphicsshapeitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnRemoveFromIndex(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractGraphicsShapeItem_PrepareGeometryChange(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->prepareGeometryChange();
    } else {
        vqabstractgraphicsshapeitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QAbstractGraphicsShapeItem_QBasePrepareGeometryChange(QAbstractGraphicsShapeItem* self) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_PrepareGeometryChange_IsBase(true);
        vqabstractgraphicsshapeitem->prepareGeometryChange();
    } else {
        vqabstractgraphicsshapeitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractGraphicsShapeItem_OnPrepareGeometryChange(QAbstractGraphicsShapeItem* self, intptr_t slot) {
    if (auto* vqabstractgraphicsshapeitem = dynamic_cast<VirtualQAbstractGraphicsShapeItem*>(self)) {
        vqabstractgraphicsshapeitem->setQAbstractGraphicsShapeItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQAbstractGraphicsShapeItem::QAbstractGraphicsShapeItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QAbstractGraphicsShapeItem_Delete(QAbstractGraphicsShapeItem* self) {
    delete self;
}

QGraphicsPathItem* QGraphicsPathItem_new() {
    return new VirtualQGraphicsPathItem();
}

QGraphicsPathItem* QGraphicsPathItem_new2(QPainterPath* path) {
    return new VirtualQGraphicsPathItem(*path);
}

QGraphicsPathItem* QGraphicsPathItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsPathItem(parent);
}

QGraphicsPathItem* QGraphicsPathItem_new4(QPainterPath* path, QGraphicsItem* parent) {
    return new VirtualQGraphicsPathItem(*path, parent);
}

QPainterPath* QGraphicsPathItem_Path(const QGraphicsPathItem* self) {
    return new QPainterPath(self->path());
}

void QGraphicsPathItem_SetPath(QGraphicsPathItem* self, QPainterPath* path) {
    self->setPath(*path);
}

// Derived class handler implementation
QRectF* QGraphicsPathItem_BoundingRect(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return new QRectF(vqgraphicspathitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsPathItem_QBaseBoundingRect(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicspathitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnBoundingRect(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPathItem_Shape(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return new QPainterPath(vqgraphicspathitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_QBaseShape(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicspathitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnShape(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_Contains(const QGraphicsPathItem* self, QPointF* point) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->contains(*point);
    } else {
        return vqgraphicspathitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseContains(const QGraphicsPathItem* self, QPointF* point) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Contains_IsBase(true);
        return vqgraphicspathitem->contains(*point);
    } else {
        return vqgraphicspathitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnContains(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_Paint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->paint(painter, option, widget);
    } else {
        vqgraphicspathitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBasePaint(QGraphicsPathItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_Paint_IsBase(true);
        vqgraphicspathitem->paint(painter, option, widget);
    } else {
        vqgraphicspathitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnPaint(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_IsObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->isObscuredBy(item);
    } else {
        return vqgraphicspathitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseIsObscuredBy(const QGraphicsPathItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_IsObscuredBy_IsBase(true);
        return vqgraphicspathitem->isObscuredBy(item);
    } else {
        return vqgraphicspathitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnIsObscuredBy(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPathItem_OpaqueArea(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return new QPainterPath(vqgraphicspathitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPathItem_QBaseOpaqueArea(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicspathitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnOpaqueArea(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsPathItem_Type(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->type();
    } else {
        return vqgraphicspathitem->type();
    }
}

// Base class handler implementation
int QGraphicsPathItem_QBaseType(const QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Type_IsBase(true);
        return vqgraphicspathitem->type();
    } else {
        return vqgraphicspathitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnType(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_SupportsExtension(const QGraphicsPathItem* self, int extension) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    } else {
        return vqgraphicspathitem->supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseSupportsExtension(const QGraphicsPathItem* self, int extension) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_SupportsExtension_IsBase(true);
        return vqgraphicspathitem->supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    } else {
        return vqgraphicspathitem->supportsExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSupportsExtension(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_SetExtension(QGraphicsPathItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    } else {
        vqgraphicspathitem->setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseSetExtension(QGraphicsPathItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SetExtension_IsBase(true);
        vqgraphicspathitem->setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    } else {
        vqgraphicspathitem->setExtension(static_cast<VirtualQGraphicsPathItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSetExtension(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPathItem_Extension(const QGraphicsPathItem* self, QVariant* variant) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return new QVariant(vqgraphicspathitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPathItem_QBaseExtension(const QGraphicsPathItem* self, QVariant* variant) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Extension_IsBase(true);
        return new QVariant(vqgraphicspathitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnExtension(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_Advance(QGraphicsPathItem* self, int phase) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspathitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseAdvance(QGraphicsPathItem* self, int phase) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_Advance_IsBase(true);
        vqgraphicspathitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspathitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnAdvance(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_CollidesWithItem(const QGraphicsPathItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspathitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseCollidesWithItem(const QGraphicsPathItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_CollidesWithItem_IsBase(true);
        return vqgraphicspathitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspathitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnCollidesWithItem(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_CollidesWithPath(const QGraphicsPathItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return vqgraphicspathitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspathitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseCollidesWithPath(const QGraphicsPathItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_CollidesWithPath_IsBase(true);
        return vqgraphicspathitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspathitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnCollidesWithPath(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_SceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        return vqgraphicspathitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspathitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseSceneEventFilter(QGraphicsPathItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SceneEventFilter_IsBase(true);
        return vqgraphicspathitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspathitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSceneEventFilter(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPathItem_SceneEvent(QGraphicsPathItem* self, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        return vqgraphicspathitem->sceneEvent(event);
    } else {
        return vqgraphicspathitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsPathItem_QBaseSceneEvent(QGraphicsPathItem* self, QEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SceneEvent_IsBase(true);
        return vqgraphicspathitem->sceneEvent(event);
    } else {
        return vqgraphicspathitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnSceneEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_ContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->contextMenuEvent(event);
    } else {
        vqgraphicspathitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseContextMenuEvent(QGraphicsPathItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_ContextMenuEvent_IsBase(true);
        vqgraphicspathitem->contextMenuEvent(event);
    } else {
        vqgraphicspathitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnContextMenuEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_DragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->dragEnterEvent(event);
    } else {
        vqgraphicspathitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseDragEnterEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragEnterEvent_IsBase(true);
        vqgraphicspathitem->dragEnterEvent(event);
    } else {
        vqgraphicspathitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragEnterEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_DragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->dragLeaveEvent(event);
    } else {
        vqgraphicspathitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseDragLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragLeaveEvent_IsBase(true);
        vqgraphicspathitem->dragLeaveEvent(event);
    } else {
        vqgraphicspathitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragLeaveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_DragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->dragMoveEvent(event);
    } else {
        vqgraphicspathitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseDragMoveEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragMoveEvent_IsBase(true);
        vqgraphicspathitem->dragMoveEvent(event);
    } else {
        vqgraphicspathitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDragMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_DropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->dropEvent(event);
    } else {
        vqgraphicspathitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseDropEvent(QGraphicsPathItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DropEvent_IsBase(true);
        vqgraphicspathitem->dropEvent(event);
    } else {
        vqgraphicspathitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnDropEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_FocusInEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->focusInEvent(event);
    } else {
        vqgraphicspathitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseFocusInEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_FocusInEvent_IsBase(true);
        vqgraphicspathitem->focusInEvent(event);
    } else {
        vqgraphicspathitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnFocusInEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_FocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->focusOutEvent(event);
    } else {
        vqgraphicspathitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseFocusOutEvent(QGraphicsPathItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_FocusOutEvent_IsBase(true);
        vqgraphicspathitem->focusOutEvent(event);
    } else {
        vqgraphicspathitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnFocusOutEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_HoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->hoverEnterEvent(event);
    } else {
        vqgraphicspathitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseHoverEnterEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverEnterEvent_IsBase(true);
        vqgraphicspathitem->hoverEnterEvent(event);
    } else {
        vqgraphicspathitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverEnterEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_HoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->hoverMoveEvent(event);
    } else {
        vqgraphicspathitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseHoverMoveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverMoveEvent_IsBase(true);
        vqgraphicspathitem->hoverMoveEvent(event);
    } else {
        vqgraphicspathitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_HoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspathitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseHoverLeaveEvent(QGraphicsPathItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverLeaveEvent_IsBase(true);
        vqgraphicspathitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspathitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnHoverLeaveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_KeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->keyPressEvent(event);
    } else {
        vqgraphicspathitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseKeyPressEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_KeyPressEvent_IsBase(true);
        vqgraphicspathitem->keyPressEvent(event);
    } else {
        vqgraphicspathitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnKeyPressEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_KeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->keyReleaseEvent(event);
    } else {
        vqgraphicspathitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseKeyReleaseEvent(QGraphicsPathItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_KeyReleaseEvent_IsBase(true);
        vqgraphicspathitem->keyReleaseEvent(event);
    } else {
        vqgraphicspathitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnKeyReleaseEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_MousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->mousePressEvent(event);
    } else {
        vqgraphicspathitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseMousePressEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MousePressEvent_IsBase(true);
        vqgraphicspathitem->mousePressEvent(event);
    } else {
        vqgraphicspathitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMousePressEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_MouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->mouseMoveEvent(event);
    } else {
        vqgraphicspathitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseMouseMoveEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseMoveEvent_IsBase(true);
        vqgraphicspathitem->mouseMoveEvent(event);
    } else {
        vqgraphicspathitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseMoveEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_MouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspathitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseMouseReleaseEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseReleaseEvent_IsBase(true);
        vqgraphicspathitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspathitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseReleaseEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_MouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspathitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseMouseDoubleClickEvent(QGraphicsPathItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicspathitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspathitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnMouseDoubleClickEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_WheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->wheelEvent(event);
    } else {
        vqgraphicspathitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseWheelEvent(QGraphicsPathItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_WheelEvent_IsBase(true);
        vqgraphicspathitem->wheelEvent(event);
    } else {
        vqgraphicspathitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnWheelEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_InputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->inputMethodEvent(event);
    } else {
        vqgraphicspathitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseInputMethodEvent(QGraphicsPathItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_InputMethodEvent_IsBase(true);
        vqgraphicspathitem->inputMethodEvent(event);
    } else {
        vqgraphicspathitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnInputMethodEvent(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPathItem_InputMethodQuery(const QGraphicsPathItem* self, int query) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        return new QVariant(vqgraphicspathitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPathItem_QBaseInputMethodQuery(const QGraphicsPathItem* self, int query) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicspathitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnInputMethodQuery(const QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = const_cast<VirtualQGraphicsPathItem*>(dynamic_cast<const VirtualQGraphicsPathItem*>(self))) {
        vqgraphicspathitem->setQGraphicsPathItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPathItem_ItemChange(QGraphicsPathItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        return new QVariant(vqgraphicspathitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPathItem_QBaseItemChange(QGraphicsPathItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicspathitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnItemChange(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_UpdateMicroFocus(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->updateMicroFocus();
    } else {
        vqgraphicspathitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseUpdateMicroFocus(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_UpdateMicroFocus_IsBase(true);
        vqgraphicspathitem->updateMicroFocus();
    } else {
        vqgraphicspathitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnUpdateMicroFocus(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_AddToIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->addToIndex();
    } else {
        vqgraphicspathitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseAddToIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_AddToIndex_IsBase(true);
        vqgraphicspathitem->addToIndex();
    } else {
        vqgraphicspathitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnAddToIndex(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_RemoveFromIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->removeFromIndex();
    } else {
        vqgraphicspathitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBaseRemoveFromIndex(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_RemoveFromIndex_IsBase(true);
        vqgraphicspathitem->removeFromIndex();
    } else {
        vqgraphicspathitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnRemoveFromIndex(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPathItem_PrepareGeometryChange(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->prepareGeometryChange();
    } else {
        vqgraphicspathitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsPathItem_QBasePrepareGeometryChange(QGraphicsPathItem* self) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_PrepareGeometryChange_IsBase(true);
        vqgraphicspathitem->prepareGeometryChange();
    } else {
        vqgraphicspathitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPathItem_OnPrepareGeometryChange(QGraphicsPathItem* self, intptr_t slot) {
    if (auto* vqgraphicspathitem = dynamic_cast<VirtualQGraphicsPathItem*>(self)) {
        vqgraphicspathitem->setQGraphicsPathItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsPathItem::QGraphicsPathItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsPathItem_Delete(QGraphicsPathItem* self) {
    delete self;
}

QGraphicsRectItem* QGraphicsRectItem_new() {
    return new VirtualQGraphicsRectItem();
}

QGraphicsRectItem* QGraphicsRectItem_new2(QRectF* rect) {
    return new VirtualQGraphicsRectItem(*rect);
}

QGraphicsRectItem* QGraphicsRectItem_new3(double x, double y, double w, double h) {
    return new VirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsRectItem* QGraphicsRectItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(parent);
}

QGraphicsRectItem* QGraphicsRectItem_new5(QRectF* rect, QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(*rect, parent);
}

QGraphicsRectItem* QGraphicsRectItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
    return new VirtualQGraphicsRectItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsRectItem_Rect(const QGraphicsRectItem* self) {
    return new QRectF(self->rect());
}

void QGraphicsRectItem_SetRect(QGraphicsRectItem* self, QRectF* rect) {
    self->setRect(*rect);
}

void QGraphicsRectItem_SetRect2(QGraphicsRectItem* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

// Derived class handler implementation
QRectF* QGraphicsRectItem_BoundingRect(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return new QRectF(vqgraphicsrectitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsRectItem_QBaseBoundingRect(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsrectitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnBoundingRect(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsRectItem_Shape(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return new QPainterPath(vqgraphicsrectitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_QBaseShape(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsrectitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnShape(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_Contains(const QGraphicsRectItem* self, QPointF* point) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->contains(*point);
    } else {
        return vqgraphicsrectitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseContains(const QGraphicsRectItem* self, QPointF* point) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Contains_IsBase(true);
        return vqgraphicsrectitem->contains(*point);
    } else {
        return vqgraphicsrectitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnContains(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_Paint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->paint(painter, option, widget);
    } else {
        vqgraphicsrectitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBasePaint(QGraphicsRectItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_Paint_IsBase(true);
        vqgraphicsrectitem->paint(painter, option, widget);
    } else {
        vqgraphicsrectitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnPaint(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_IsObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->isObscuredBy(item);
    } else {
        return vqgraphicsrectitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseIsObscuredBy(const QGraphicsRectItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_IsObscuredBy_IsBase(true);
        return vqgraphicsrectitem->isObscuredBy(item);
    } else {
        return vqgraphicsrectitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnIsObscuredBy(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsRectItem_OpaqueArea(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return new QPainterPath(vqgraphicsrectitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsRectItem_QBaseOpaqueArea(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsrectitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnOpaqueArea(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsRectItem_Type(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->type();
    } else {
        return vqgraphicsrectitem->type();
    }
}

// Base class handler implementation
int QGraphicsRectItem_QBaseType(const QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Type_IsBase(true);
        return vqgraphicsrectitem->type();
    } else {
        return vqgraphicsrectitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnType(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Type_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_SupportsExtension(const QGraphicsRectItem* self, int extension) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    } else {
        return vqgraphicsrectitem->supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseSupportsExtension(const QGraphicsRectItem* self, int extension) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_SupportsExtension_IsBase(true);
        return vqgraphicsrectitem->supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    } else {
        return vqgraphicsrectitem->supportsExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSupportsExtension(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_SetExtension(QGraphicsRectItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    } else {
        vqgraphicsrectitem->setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseSetExtension(QGraphicsRectItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SetExtension_IsBase(true);
        vqgraphicsrectitem->setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    } else {
        vqgraphicsrectitem->setExtension(static_cast<VirtualQGraphicsRectItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSetExtension(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsRectItem_Extension(const QGraphicsRectItem* self, QVariant* variant) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return new QVariant(vqgraphicsrectitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsRectItem_QBaseExtension(const QGraphicsRectItem* self, QVariant* variant) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Extension_IsBase(true);
        return new QVariant(vqgraphicsrectitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnExtension(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_Advance(QGraphicsRectItem* self, int phase) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsrectitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseAdvance(QGraphicsRectItem* self, int phase) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_Advance_IsBase(true);
        vqgraphicsrectitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsrectitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnAdvance(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_CollidesWithItem(const QGraphicsRectItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsrectitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseCollidesWithItem(const QGraphicsRectItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_CollidesWithItem_IsBase(true);
        return vqgraphicsrectitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsrectitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnCollidesWithItem(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_CollidesWithPath(const QGraphicsRectItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return vqgraphicsrectitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsrectitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseCollidesWithPath(const QGraphicsRectItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_CollidesWithPath_IsBase(true);
        return vqgraphicsrectitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsrectitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnCollidesWithPath(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_SceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        return vqgraphicsrectitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsrectitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseSceneEventFilter(QGraphicsRectItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SceneEventFilter_IsBase(true);
        return vqgraphicsrectitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsrectitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSceneEventFilter(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsRectItem_SceneEvent(QGraphicsRectItem* self, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        return vqgraphicsrectitem->sceneEvent(event);
    } else {
        return vqgraphicsrectitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsRectItem_QBaseSceneEvent(QGraphicsRectItem* self, QEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SceneEvent_IsBase(true);
        return vqgraphicsrectitem->sceneEvent(event);
    } else {
        return vqgraphicsrectitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnSceneEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_ContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->contextMenuEvent(event);
    } else {
        vqgraphicsrectitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseContextMenuEvent(QGraphicsRectItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_ContextMenuEvent_IsBase(true);
        vqgraphicsrectitem->contextMenuEvent(event);
    } else {
        vqgraphicsrectitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnContextMenuEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_DragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->dragEnterEvent(event);
    } else {
        vqgraphicsrectitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseDragEnterEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragEnterEvent_IsBase(true);
        vqgraphicsrectitem->dragEnterEvent(event);
    } else {
        vqgraphicsrectitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragEnterEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_DragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->dragLeaveEvent(event);
    } else {
        vqgraphicsrectitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseDragLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragLeaveEvent_IsBase(true);
        vqgraphicsrectitem->dragLeaveEvent(event);
    } else {
        vqgraphicsrectitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragLeaveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_DragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->dragMoveEvent(event);
    } else {
        vqgraphicsrectitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseDragMoveEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragMoveEvent_IsBase(true);
        vqgraphicsrectitem->dragMoveEvent(event);
    } else {
        vqgraphicsrectitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDragMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_DropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->dropEvent(event);
    } else {
        vqgraphicsrectitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseDropEvent(QGraphicsRectItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DropEvent_IsBase(true);
        vqgraphicsrectitem->dropEvent(event);
    } else {
        vqgraphicsrectitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnDropEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_FocusInEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->focusInEvent(event);
    } else {
        vqgraphicsrectitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseFocusInEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_FocusInEvent_IsBase(true);
        vqgraphicsrectitem->focusInEvent(event);
    } else {
        vqgraphicsrectitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnFocusInEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_FocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->focusOutEvent(event);
    } else {
        vqgraphicsrectitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseFocusOutEvent(QGraphicsRectItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_FocusOutEvent_IsBase(true);
        vqgraphicsrectitem->focusOutEvent(event);
    } else {
        vqgraphicsrectitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnFocusOutEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_HoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->hoverEnterEvent(event);
    } else {
        vqgraphicsrectitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseHoverEnterEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverEnterEvent_IsBase(true);
        vqgraphicsrectitem->hoverEnterEvent(event);
    } else {
        vqgraphicsrectitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverEnterEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_HoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->hoverMoveEvent(event);
    } else {
        vqgraphicsrectitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseHoverMoveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverMoveEvent_IsBase(true);
        vqgraphicsrectitem->hoverMoveEvent(event);
    } else {
        vqgraphicsrectitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_HoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsrectitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseHoverLeaveEvent(QGraphicsRectItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverLeaveEvent_IsBase(true);
        vqgraphicsrectitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsrectitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnHoverLeaveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_KeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->keyPressEvent(event);
    } else {
        vqgraphicsrectitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseKeyPressEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_KeyPressEvent_IsBase(true);
        vqgraphicsrectitem->keyPressEvent(event);
    } else {
        vqgraphicsrectitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnKeyPressEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_KeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->keyReleaseEvent(event);
    } else {
        vqgraphicsrectitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseKeyReleaseEvent(QGraphicsRectItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_KeyReleaseEvent_IsBase(true);
        vqgraphicsrectitem->keyReleaseEvent(event);
    } else {
        vqgraphicsrectitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnKeyReleaseEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_MousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->mousePressEvent(event);
    } else {
        vqgraphicsrectitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseMousePressEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MousePressEvent_IsBase(true);
        vqgraphicsrectitem->mousePressEvent(event);
    } else {
        vqgraphicsrectitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMousePressEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_MouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->mouseMoveEvent(event);
    } else {
        vqgraphicsrectitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseMouseMoveEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseMoveEvent_IsBase(true);
        vqgraphicsrectitem->mouseMoveEvent(event);
    } else {
        vqgraphicsrectitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseMoveEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_MouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsrectitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseMouseReleaseEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseReleaseEvent_IsBase(true);
        vqgraphicsrectitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsrectitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseReleaseEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_MouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsrectitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseMouseDoubleClickEvent(QGraphicsRectItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsrectitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsrectitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnMouseDoubleClickEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_WheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->wheelEvent(event);
    } else {
        vqgraphicsrectitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseWheelEvent(QGraphicsRectItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_WheelEvent_IsBase(true);
        vqgraphicsrectitem->wheelEvent(event);
    } else {
        vqgraphicsrectitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnWheelEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_InputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->inputMethodEvent(event);
    } else {
        vqgraphicsrectitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseInputMethodEvent(QGraphicsRectItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_InputMethodEvent_IsBase(true);
        vqgraphicsrectitem->inputMethodEvent(event);
    } else {
        vqgraphicsrectitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnInputMethodEvent(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsRectItem_InputMethodQuery(const QGraphicsRectItem* self, int query) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        return new QVariant(vqgraphicsrectitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsRectItem_QBaseInputMethodQuery(const QGraphicsRectItem* self, int query) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsrectitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnInputMethodQuery(const QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = const_cast<VirtualQGraphicsRectItem*>(dynamic_cast<const VirtualQGraphicsRectItem*>(self))) {
        vqgraphicsrectitem->setQGraphicsRectItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsRectItem_ItemChange(QGraphicsRectItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        return new QVariant(vqgraphicsrectitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsRectItem_QBaseItemChange(QGraphicsRectItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsrectitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnItemChange(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_UpdateMicroFocus(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->updateMicroFocus();
    } else {
        vqgraphicsrectitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseUpdateMicroFocus(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_UpdateMicroFocus_IsBase(true);
        vqgraphicsrectitem->updateMicroFocus();
    } else {
        vqgraphicsrectitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnUpdateMicroFocus(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_AddToIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->addToIndex();
    } else {
        vqgraphicsrectitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseAddToIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_AddToIndex_IsBase(true);
        vqgraphicsrectitem->addToIndex();
    } else {
        vqgraphicsrectitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnAddToIndex(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_RemoveFromIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->removeFromIndex();
    } else {
        vqgraphicsrectitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBaseRemoveFromIndex(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_RemoveFromIndex_IsBase(true);
        vqgraphicsrectitem->removeFromIndex();
    } else {
        vqgraphicsrectitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnRemoveFromIndex(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsRectItem_PrepareGeometryChange(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->prepareGeometryChange();
    } else {
        vqgraphicsrectitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsRectItem_QBasePrepareGeometryChange(QGraphicsRectItem* self) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_PrepareGeometryChange_IsBase(true);
        vqgraphicsrectitem->prepareGeometryChange();
    } else {
        vqgraphicsrectitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsRectItem_OnPrepareGeometryChange(QGraphicsRectItem* self, intptr_t slot) {
    if (auto* vqgraphicsrectitem = dynamic_cast<VirtualQGraphicsRectItem*>(self)) {
        vqgraphicsrectitem->setQGraphicsRectItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsRectItem::QGraphicsRectItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsRectItem_Delete(QGraphicsRectItem* self) {
    delete self;
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new() {
    return new VirtualQGraphicsEllipseItem();
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new2(QRectF* rect) {
    return new VirtualQGraphicsEllipseItem(*rect);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new3(double x, double y, double w, double h) {
    return new VirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new5(QRectF* rect, QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(*rect, parent);
}

QGraphicsEllipseItem* QGraphicsEllipseItem_new6(double x, double y, double w, double h, QGraphicsItem* parent) {
    return new VirtualQGraphicsEllipseItem(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), parent);
}

QRectF* QGraphicsEllipseItem_Rect(const QGraphicsEllipseItem* self) {
    return new QRectF(self->rect());
}

void QGraphicsEllipseItem_SetRect(QGraphicsEllipseItem* self, QRectF* rect) {
    self->setRect(*rect);
}

void QGraphicsEllipseItem_SetRect2(QGraphicsEllipseItem* self, double x, double y, double w, double h) {
    self->setRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

int QGraphicsEllipseItem_StartAngle(const QGraphicsEllipseItem* self) {
    return self->startAngle();
}

void QGraphicsEllipseItem_SetStartAngle(QGraphicsEllipseItem* self, int angle) {
    self->setStartAngle(static_cast<int>(angle));
}

int QGraphicsEllipseItem_SpanAngle(const QGraphicsEllipseItem* self) {
    return self->spanAngle();
}

void QGraphicsEllipseItem_SetSpanAngle(QGraphicsEllipseItem* self, int angle) {
    self->setSpanAngle(static_cast<int>(angle));
}

// Derived class handler implementation
QRectF* QGraphicsEllipseItem_BoundingRect(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return new QRectF(vqgraphicsellipseitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsEllipseItem_QBaseBoundingRect(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsellipseitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnBoundingRect(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsEllipseItem_Shape(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return new QPainterPath(vqgraphicsellipseitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_QBaseShape(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsellipseitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnShape(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_Contains(const QGraphicsEllipseItem* self, QPointF* point) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->contains(*point);
    } else {
        return vqgraphicsellipseitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseContains(const QGraphicsEllipseItem* self, QPointF* point) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Contains_IsBase(true);
        return vqgraphicsellipseitem->contains(*point);
    } else {
        return vqgraphicsellipseitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnContains(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_Paint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->paint(painter, option, widget);
    } else {
        vqgraphicsellipseitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBasePaint(QGraphicsEllipseItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Paint_IsBase(true);
        vqgraphicsellipseitem->paint(painter, option, widget);
    } else {
        vqgraphicsellipseitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnPaint(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_IsObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->isObscuredBy(item);
    } else {
        return vqgraphicsellipseitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseIsObscuredBy(const QGraphicsEllipseItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_IsObscuredBy_IsBase(true);
        return vqgraphicsellipseitem->isObscuredBy(item);
    } else {
        return vqgraphicsellipseitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnIsObscuredBy(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsEllipseItem_OpaqueArea(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return new QPainterPath(vqgraphicsellipseitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsEllipseItem_QBaseOpaqueArea(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsellipseitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnOpaqueArea(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsEllipseItem_Type(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->type();
    } else {
        return vqgraphicsellipseitem->type();
    }
}

// Base class handler implementation
int QGraphicsEllipseItem_QBaseType(const QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Type_IsBase(true);
        return vqgraphicsellipseitem->type();
    } else {
        return vqgraphicsellipseitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnType(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Type_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_SupportsExtension(const QGraphicsEllipseItem* self, int extension) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    } else {
        return vqgraphicsellipseitem->supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseSupportsExtension(const QGraphicsEllipseItem* self, int extension) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SupportsExtension_IsBase(true);
        return vqgraphicsellipseitem->supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    } else {
        return vqgraphicsellipseitem->supportsExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSupportsExtension(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_SetExtension(QGraphicsEllipseItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    } else {
        vqgraphicsellipseitem->setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseSetExtension(QGraphicsEllipseItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SetExtension_IsBase(true);
        vqgraphicsellipseitem->setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    } else {
        vqgraphicsellipseitem->setExtension(static_cast<VirtualQGraphicsEllipseItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSetExtension(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsEllipseItem_Extension(const QGraphicsEllipseItem* self, QVariant* variant) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return new QVariant(vqgraphicsellipseitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_QBaseExtension(const QGraphicsEllipseItem* self, QVariant* variant) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Extension_IsBase(true);
        return new QVariant(vqgraphicsellipseitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnExtension(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_Advance(QGraphicsEllipseItem* self, int phase) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsellipseitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseAdvance(QGraphicsEllipseItem* self, int phase) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Advance_IsBase(true);
        vqgraphicsellipseitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicsellipseitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnAdvance(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_CollidesWithItem(const QGraphicsEllipseItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsellipseitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseCollidesWithItem(const QGraphicsEllipseItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_CollidesWithItem_IsBase(true);
        return vqgraphicsellipseitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsellipseitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnCollidesWithItem(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_CollidesWithPath(const QGraphicsEllipseItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return vqgraphicsellipseitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsellipseitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseCollidesWithPath(const QGraphicsEllipseItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_CollidesWithPath_IsBase(true);
        return vqgraphicsellipseitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsellipseitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnCollidesWithPath(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_SceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        return vqgraphicsellipseitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsellipseitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseSceneEventFilter(QGraphicsEllipseItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SceneEventFilter_IsBase(true);
        return vqgraphicsellipseitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsellipseitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSceneEventFilter(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsEllipseItem_SceneEvent(QGraphicsEllipseItem* self, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        return vqgraphicsellipseitem->sceneEvent(event);
    } else {
        return vqgraphicsellipseitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsEllipseItem_QBaseSceneEvent(QGraphicsEllipseItem* self, QEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SceneEvent_IsBase(true);
        return vqgraphicsellipseitem->sceneEvent(event);
    } else {
        return vqgraphicsellipseitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnSceneEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_ContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->contextMenuEvent(event);
    } else {
        vqgraphicsellipseitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseContextMenuEvent(QGraphicsEllipseItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_ContextMenuEvent_IsBase(true);
        vqgraphicsellipseitem->contextMenuEvent(event);
    } else {
        vqgraphicsellipseitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnContextMenuEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->dragEnterEvent(event);
    } else {
        vqgraphicsellipseitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseDragEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragEnterEvent_IsBase(true);
        vqgraphicsellipseitem->dragEnterEvent(event);
    } else {
        vqgraphicsellipseitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragEnterEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->dragLeaveEvent(event);
    } else {
        vqgraphicsellipseitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseDragLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragLeaveEvent_IsBase(true);
        vqgraphicsellipseitem->dragLeaveEvent(event);
    } else {
        vqgraphicsellipseitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragLeaveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_DragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->dragMoveEvent(event);
    } else {
        vqgraphicsellipseitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseDragMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragMoveEvent_IsBase(true);
        vqgraphicsellipseitem->dragMoveEvent(event);
    } else {
        vqgraphicsellipseitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDragMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_DropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->dropEvent(event);
    } else {
        vqgraphicsellipseitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseDropEvent(QGraphicsEllipseItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DropEvent_IsBase(true);
        vqgraphicsellipseitem->dropEvent(event);
    } else {
        vqgraphicsellipseitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnDropEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_FocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->focusInEvent(event);
    } else {
        vqgraphicsellipseitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseFocusInEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_FocusInEvent_IsBase(true);
        vqgraphicsellipseitem->focusInEvent(event);
    } else {
        vqgraphicsellipseitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnFocusInEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_FocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->focusOutEvent(event);
    } else {
        vqgraphicsellipseitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseFocusOutEvent(QGraphicsEllipseItem* self, QFocusEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_FocusOutEvent_IsBase(true);
        vqgraphicsellipseitem->focusOutEvent(event);
    } else {
        vqgraphicsellipseitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnFocusOutEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->hoverEnterEvent(event);
    } else {
        vqgraphicsellipseitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseHoverEnterEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverEnterEvent_IsBase(true);
        vqgraphicsellipseitem->hoverEnterEvent(event);
    } else {
        vqgraphicsellipseitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverEnterEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->hoverMoveEvent(event);
    } else {
        vqgraphicsellipseitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseHoverMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverMoveEvent_IsBase(true);
        vqgraphicsellipseitem->hoverMoveEvent(event);
    } else {
        vqgraphicsellipseitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_HoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsellipseitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseHoverLeaveEvent(QGraphicsEllipseItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverLeaveEvent_IsBase(true);
        vqgraphicsellipseitem->hoverLeaveEvent(event);
    } else {
        vqgraphicsellipseitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnHoverLeaveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_KeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->keyPressEvent(event);
    } else {
        vqgraphicsellipseitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseKeyPressEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_KeyPressEvent_IsBase(true);
        vqgraphicsellipseitem->keyPressEvent(event);
    } else {
        vqgraphicsellipseitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnKeyPressEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_KeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->keyReleaseEvent(event);
    } else {
        vqgraphicsellipseitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseKeyReleaseEvent(QGraphicsEllipseItem* self, QKeyEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_KeyReleaseEvent_IsBase(true);
        vqgraphicsellipseitem->keyReleaseEvent(event);
    } else {
        vqgraphicsellipseitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnKeyReleaseEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_MousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->mousePressEvent(event);
    } else {
        vqgraphicsellipseitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseMousePressEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MousePressEvent_IsBase(true);
        vqgraphicsellipseitem->mousePressEvent(event);
    } else {
        vqgraphicsellipseitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMousePressEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->mouseMoveEvent(event);
    } else {
        vqgraphicsellipseitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseMouseMoveEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseMoveEvent_IsBase(true);
        vqgraphicsellipseitem->mouseMoveEvent(event);
    } else {
        vqgraphicsellipseitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseMoveEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsellipseitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseMouseReleaseEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseReleaseEvent_IsBase(true);
        vqgraphicsellipseitem->mouseReleaseEvent(event);
    } else {
        vqgraphicsellipseitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseReleaseEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_MouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsellipseitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseMouseDoubleClickEvent(QGraphicsEllipseItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsellipseitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsellipseitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnMouseDoubleClickEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_WheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->wheelEvent(event);
    } else {
        vqgraphicsellipseitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseWheelEvent(QGraphicsEllipseItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_WheelEvent_IsBase(true);
        vqgraphicsellipseitem->wheelEvent(event);
    } else {
        vqgraphicsellipseitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnWheelEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_InputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->inputMethodEvent(event);
    } else {
        vqgraphicsellipseitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseInputMethodEvent(QGraphicsEllipseItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_InputMethodEvent_IsBase(true);
        vqgraphicsellipseitem->inputMethodEvent(event);
    } else {
        vqgraphicsellipseitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnInputMethodEvent(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsEllipseItem_InputMethodQuery(const QGraphicsEllipseItem* self, int query) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        return new QVariant(vqgraphicsellipseitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_QBaseInputMethodQuery(const QGraphicsEllipseItem* self, int query) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsellipseitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnInputMethodQuery(const QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = const_cast<VirtualQGraphicsEllipseItem*>(dynamic_cast<const VirtualQGraphicsEllipseItem*>(self))) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsEllipseItem_ItemChange(QGraphicsEllipseItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        return new QVariant(vqgraphicsellipseitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsEllipseItem_QBaseItemChange(QGraphicsEllipseItem* self, int change, QVariant* value) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsellipseitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnItemChange(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_UpdateMicroFocus(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->updateMicroFocus();
    } else {
        vqgraphicsellipseitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseUpdateMicroFocus(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_UpdateMicroFocus_IsBase(true);
        vqgraphicsellipseitem->updateMicroFocus();
    } else {
        vqgraphicsellipseitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnUpdateMicroFocus(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_AddToIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->addToIndex();
    } else {
        vqgraphicsellipseitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseAddToIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_AddToIndex_IsBase(true);
        vqgraphicsellipseitem->addToIndex();
    } else {
        vqgraphicsellipseitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnAddToIndex(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_RemoveFromIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->removeFromIndex();
    } else {
        vqgraphicsellipseitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBaseRemoveFromIndex(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_RemoveFromIndex_IsBase(true);
        vqgraphicsellipseitem->removeFromIndex();
    } else {
        vqgraphicsellipseitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnRemoveFromIndex(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsEllipseItem_PrepareGeometryChange(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->prepareGeometryChange();
    } else {
        vqgraphicsellipseitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsEllipseItem_QBasePrepareGeometryChange(QGraphicsEllipseItem* self) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_PrepareGeometryChange_IsBase(true);
        vqgraphicsellipseitem->prepareGeometryChange();
    } else {
        vqgraphicsellipseitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsEllipseItem_OnPrepareGeometryChange(QGraphicsEllipseItem* self, intptr_t slot) {
    if (auto* vqgraphicsellipseitem = dynamic_cast<VirtualQGraphicsEllipseItem*>(self)) {
        vqgraphicsellipseitem->setQGraphicsEllipseItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsEllipseItem::QGraphicsEllipseItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsEllipseItem_Delete(QGraphicsEllipseItem* self) {
    delete self;
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new() {
    return new VirtualQGraphicsPolygonItem();
}

QGraphicsPolygonItem* QGraphicsPolygonItem_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsPolygonItem(parent);
}

int QGraphicsPolygonItem_FillRule(const QGraphicsPolygonItem* self) {
    return static_cast<int>(self->fillRule());
}

void QGraphicsPolygonItem_SetFillRule(QGraphicsPolygonItem* self, int rule) {
    self->setFillRule(static_cast<Qt::FillRule>(rule));
}

// Derived class handler implementation
QRectF* QGraphicsPolygonItem_BoundingRect(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return new QRectF(vqgraphicspolygonitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsPolygonItem_QBaseBoundingRect(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicspolygonitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnBoundingRect(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPolygonItem_Shape(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return new QPainterPath(vqgraphicspolygonitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_QBaseShape(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicspolygonitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnShape(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_Contains(const QGraphicsPolygonItem* self, QPointF* point) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->contains(*point);
    } else {
        return vqgraphicspolygonitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseContains(const QGraphicsPolygonItem* self, QPointF* point) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Contains_IsBase(true);
        return vqgraphicspolygonitem->contains(*point);
    } else {
        return vqgraphicspolygonitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnContains(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_Paint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->paint(painter, option, widget);
    } else {
        vqgraphicspolygonitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBasePaint(QGraphicsPolygonItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Paint_IsBase(true);
        vqgraphicspolygonitem->paint(painter, option, widget);
    } else {
        vqgraphicspolygonitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnPaint(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_IsObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->isObscuredBy(item);
    } else {
        return vqgraphicspolygonitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseIsObscuredBy(const QGraphicsPolygonItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_IsObscuredBy_IsBase(true);
        return vqgraphicspolygonitem->isObscuredBy(item);
    } else {
        return vqgraphicspolygonitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnIsObscuredBy(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPolygonItem_OpaqueArea(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return new QPainterPath(vqgraphicspolygonitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPolygonItem_QBaseOpaqueArea(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicspolygonitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnOpaqueArea(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsPolygonItem_Type(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->type();
    } else {
        return vqgraphicspolygonitem->type();
    }
}

// Base class handler implementation
int QGraphicsPolygonItem_QBaseType(const QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Type_IsBase(true);
        return vqgraphicspolygonitem->type();
    } else {
        return vqgraphicspolygonitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnType(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_SupportsExtension(const QGraphicsPolygonItem* self, int extension) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    } else {
        return vqgraphicspolygonitem->supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseSupportsExtension(const QGraphicsPolygonItem* self, int extension) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SupportsExtension_IsBase(true);
        return vqgraphicspolygonitem->supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    } else {
        return vqgraphicspolygonitem->supportsExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSupportsExtension(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_SetExtension(QGraphicsPolygonItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    } else {
        vqgraphicspolygonitem->setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseSetExtension(QGraphicsPolygonItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SetExtension_IsBase(true);
        vqgraphicspolygonitem->setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    } else {
        vqgraphicspolygonitem->setExtension(static_cast<VirtualQGraphicsPolygonItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSetExtension(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPolygonItem_Extension(const QGraphicsPolygonItem* self, QVariant* variant) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return new QVariant(vqgraphicspolygonitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_QBaseExtension(const QGraphicsPolygonItem* self, QVariant* variant) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Extension_IsBase(true);
        return new QVariant(vqgraphicspolygonitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnExtension(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_Advance(QGraphicsPolygonItem* self, int phase) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspolygonitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseAdvance(QGraphicsPolygonItem* self, int phase) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Advance_IsBase(true);
        vqgraphicspolygonitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspolygonitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnAdvance(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_CollidesWithItem(const QGraphicsPolygonItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspolygonitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseCollidesWithItem(const QGraphicsPolygonItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_CollidesWithItem_IsBase(true);
        return vqgraphicspolygonitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspolygonitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnCollidesWithItem(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_CollidesWithPath(const QGraphicsPolygonItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return vqgraphicspolygonitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspolygonitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseCollidesWithPath(const QGraphicsPolygonItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_CollidesWithPath_IsBase(true);
        return vqgraphicspolygonitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspolygonitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnCollidesWithPath(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_SceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        return vqgraphicspolygonitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspolygonitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseSceneEventFilter(QGraphicsPolygonItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SceneEventFilter_IsBase(true);
        return vqgraphicspolygonitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspolygonitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSceneEventFilter(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPolygonItem_SceneEvent(QGraphicsPolygonItem* self, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        return vqgraphicspolygonitem->sceneEvent(event);
    } else {
        return vqgraphicspolygonitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsPolygonItem_QBaseSceneEvent(QGraphicsPolygonItem* self, QEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SceneEvent_IsBase(true);
        return vqgraphicspolygonitem->sceneEvent(event);
    } else {
        return vqgraphicspolygonitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnSceneEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_ContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->contextMenuEvent(event);
    } else {
        vqgraphicspolygonitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseContextMenuEvent(QGraphicsPolygonItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_ContextMenuEvent_IsBase(true);
        vqgraphicspolygonitem->contextMenuEvent(event);
    } else {
        vqgraphicspolygonitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnContextMenuEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->dragEnterEvent(event);
    } else {
        vqgraphicspolygonitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseDragEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragEnterEvent_IsBase(true);
        vqgraphicspolygonitem->dragEnterEvent(event);
    } else {
        vqgraphicspolygonitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragEnterEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->dragLeaveEvent(event);
    } else {
        vqgraphicspolygonitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseDragLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragLeaveEvent_IsBase(true);
        vqgraphicspolygonitem->dragLeaveEvent(event);
    } else {
        vqgraphicspolygonitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragLeaveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_DragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->dragMoveEvent(event);
    } else {
        vqgraphicspolygonitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseDragMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragMoveEvent_IsBase(true);
        vqgraphicspolygonitem->dragMoveEvent(event);
    } else {
        vqgraphicspolygonitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDragMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_DropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->dropEvent(event);
    } else {
        vqgraphicspolygonitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseDropEvent(QGraphicsPolygonItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DropEvent_IsBase(true);
        vqgraphicspolygonitem->dropEvent(event);
    } else {
        vqgraphicspolygonitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnDropEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_FocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->focusInEvent(event);
    } else {
        vqgraphicspolygonitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseFocusInEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_FocusInEvent_IsBase(true);
        vqgraphicspolygonitem->focusInEvent(event);
    } else {
        vqgraphicspolygonitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnFocusInEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_FocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->focusOutEvent(event);
    } else {
        vqgraphicspolygonitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseFocusOutEvent(QGraphicsPolygonItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_FocusOutEvent_IsBase(true);
        vqgraphicspolygonitem->focusOutEvent(event);
    } else {
        vqgraphicspolygonitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnFocusOutEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->hoverEnterEvent(event);
    } else {
        vqgraphicspolygonitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseHoverEnterEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverEnterEvent_IsBase(true);
        vqgraphicspolygonitem->hoverEnterEvent(event);
    } else {
        vqgraphicspolygonitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverEnterEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->hoverMoveEvent(event);
    } else {
        vqgraphicspolygonitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseHoverMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverMoveEvent_IsBase(true);
        vqgraphicspolygonitem->hoverMoveEvent(event);
    } else {
        vqgraphicspolygonitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_HoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspolygonitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseHoverLeaveEvent(QGraphicsPolygonItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverLeaveEvent_IsBase(true);
        vqgraphicspolygonitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspolygonitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnHoverLeaveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_KeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->keyPressEvent(event);
    } else {
        vqgraphicspolygonitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseKeyPressEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_KeyPressEvent_IsBase(true);
        vqgraphicspolygonitem->keyPressEvent(event);
    } else {
        vqgraphicspolygonitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnKeyPressEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_KeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->keyReleaseEvent(event);
    } else {
        vqgraphicspolygonitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseKeyReleaseEvent(QGraphicsPolygonItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_KeyReleaseEvent_IsBase(true);
        vqgraphicspolygonitem->keyReleaseEvent(event);
    } else {
        vqgraphicspolygonitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnKeyReleaseEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_MousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->mousePressEvent(event);
    } else {
        vqgraphicspolygonitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseMousePressEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MousePressEvent_IsBase(true);
        vqgraphicspolygonitem->mousePressEvent(event);
    } else {
        vqgraphicspolygonitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMousePressEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->mouseMoveEvent(event);
    } else {
        vqgraphicspolygonitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseMouseMoveEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseMoveEvent_IsBase(true);
        vqgraphicspolygonitem->mouseMoveEvent(event);
    } else {
        vqgraphicspolygonitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseMoveEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspolygonitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseMouseReleaseEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseReleaseEvent_IsBase(true);
        vqgraphicspolygonitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspolygonitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseReleaseEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_MouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspolygonitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseMouseDoubleClickEvent(QGraphicsPolygonItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicspolygonitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspolygonitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnMouseDoubleClickEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_WheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->wheelEvent(event);
    } else {
        vqgraphicspolygonitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseWheelEvent(QGraphicsPolygonItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_WheelEvent_IsBase(true);
        vqgraphicspolygonitem->wheelEvent(event);
    } else {
        vqgraphicspolygonitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnWheelEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_InputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->inputMethodEvent(event);
    } else {
        vqgraphicspolygonitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseInputMethodEvent(QGraphicsPolygonItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_InputMethodEvent_IsBase(true);
        vqgraphicspolygonitem->inputMethodEvent(event);
    } else {
        vqgraphicspolygonitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnInputMethodEvent(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPolygonItem_InputMethodQuery(const QGraphicsPolygonItem* self, int query) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        return new QVariant(vqgraphicspolygonitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_QBaseInputMethodQuery(const QGraphicsPolygonItem* self, int query) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicspolygonitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnInputMethodQuery(const QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = const_cast<VirtualQGraphicsPolygonItem*>(dynamic_cast<const VirtualQGraphicsPolygonItem*>(self))) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPolygonItem_ItemChange(QGraphicsPolygonItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        return new QVariant(vqgraphicspolygonitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPolygonItem_QBaseItemChange(QGraphicsPolygonItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicspolygonitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnItemChange(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_UpdateMicroFocus(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->updateMicroFocus();
    } else {
        vqgraphicspolygonitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseUpdateMicroFocus(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_UpdateMicroFocus_IsBase(true);
        vqgraphicspolygonitem->updateMicroFocus();
    } else {
        vqgraphicspolygonitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnUpdateMicroFocus(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_AddToIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->addToIndex();
    } else {
        vqgraphicspolygonitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseAddToIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_AddToIndex_IsBase(true);
        vqgraphicspolygonitem->addToIndex();
    } else {
        vqgraphicspolygonitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnAddToIndex(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_RemoveFromIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->removeFromIndex();
    } else {
        vqgraphicspolygonitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBaseRemoveFromIndex(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_RemoveFromIndex_IsBase(true);
        vqgraphicspolygonitem->removeFromIndex();
    } else {
        vqgraphicspolygonitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnRemoveFromIndex(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPolygonItem_PrepareGeometryChange(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->prepareGeometryChange();
    } else {
        vqgraphicspolygonitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsPolygonItem_QBasePrepareGeometryChange(QGraphicsPolygonItem* self) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_PrepareGeometryChange_IsBase(true);
        vqgraphicspolygonitem->prepareGeometryChange();
    } else {
        vqgraphicspolygonitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPolygonItem_OnPrepareGeometryChange(QGraphicsPolygonItem* self, intptr_t slot) {
    if (auto* vqgraphicspolygonitem = dynamic_cast<VirtualQGraphicsPolygonItem*>(self)) {
        vqgraphicspolygonitem->setQGraphicsPolygonItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsPolygonItem::QGraphicsPolygonItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsPolygonItem_Delete(QGraphicsPolygonItem* self) {
    delete self;
}

QGraphicsLineItem* QGraphicsLineItem_new() {
    return new VirtualQGraphicsLineItem();
}

QGraphicsLineItem* QGraphicsLineItem_new2(QLineF* line) {
    return new VirtualQGraphicsLineItem(*line);
}

QGraphicsLineItem* QGraphicsLineItem_new3(double x1, double y1, double x2, double y2) {
    return new VirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsLineItem* QGraphicsLineItem_new4(QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(parent);
}

QGraphicsLineItem* QGraphicsLineItem_new5(QLineF* line, QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(*line, parent);
}

QGraphicsLineItem* QGraphicsLineItem_new6(double x1, double y1, double x2, double y2, QGraphicsItem* parent) {
    return new VirtualQGraphicsLineItem(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), parent);
}

QPen* QGraphicsLineItem_Pen(const QGraphicsLineItem* self) {
    return new QPen(self->pen());
}

void QGraphicsLineItem_SetPen(QGraphicsLineItem* self, QPen* pen) {
    self->setPen(*pen);
}

QLineF* QGraphicsLineItem_Line(const QGraphicsLineItem* self) {
    return new QLineF(self->line());
}

void QGraphicsLineItem_SetLine(QGraphicsLineItem* self, QLineF* line) {
    self->setLine(*line);
}

void QGraphicsLineItem_SetLine2(QGraphicsLineItem* self, double x1, double y1, double x2, double y2) {
    self->setLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

// Derived class handler implementation
QRectF* QGraphicsLineItem_BoundingRect(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return new QRectF(vqgraphicslineitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsLineItem_QBaseBoundingRect(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicslineitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnBoundingRect(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsLineItem_Shape(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return new QPainterPath(vqgraphicslineitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_QBaseShape(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicslineitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnShape(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_Contains(const QGraphicsLineItem* self, QPointF* point) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->contains(*point);
    } else {
        return vqgraphicslineitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseContains(const QGraphicsLineItem* self, QPointF* point) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Contains_IsBase(true);
        return vqgraphicslineitem->contains(*point);
    } else {
        return vqgraphicslineitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnContains(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_Paint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->paint(painter, option, widget);
    } else {
        vqgraphicslineitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBasePaint(QGraphicsLineItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_Paint_IsBase(true);
        vqgraphicslineitem->paint(painter, option, widget);
    } else {
        vqgraphicslineitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnPaint(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_IsObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->isObscuredBy(item);
    } else {
        return vqgraphicslineitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseIsObscuredBy(const QGraphicsLineItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_IsObscuredBy_IsBase(true);
        return vqgraphicslineitem->isObscuredBy(item);
    } else {
        return vqgraphicslineitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnIsObscuredBy(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsLineItem_OpaqueArea(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return new QPainterPath(vqgraphicslineitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsLineItem_QBaseOpaqueArea(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicslineitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnOpaqueArea(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsLineItem_Type(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->type();
    } else {
        return vqgraphicslineitem->type();
    }
}

// Base class handler implementation
int QGraphicsLineItem_QBaseType(const QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Type_IsBase(true);
        return vqgraphicslineitem->type();
    } else {
        return vqgraphicslineitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnType(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Type_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_SupportsExtension(const QGraphicsLineItem* self, int extension) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    } else {
        return vqgraphicslineitem->supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseSupportsExtension(const QGraphicsLineItem* self, int extension) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_SupportsExtension_IsBase(true);
        return vqgraphicslineitem->supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    } else {
        return vqgraphicslineitem->supportsExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSupportsExtension(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_SetExtension(QGraphicsLineItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    } else {
        vqgraphicslineitem->setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseSetExtension(QGraphicsLineItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SetExtension_IsBase(true);
        vqgraphicslineitem->setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    } else {
        vqgraphicslineitem->setExtension(static_cast<VirtualQGraphicsLineItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSetExtension(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsLineItem_Extension(const QGraphicsLineItem* self, QVariant* variant) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return new QVariant(vqgraphicslineitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsLineItem_QBaseExtension(const QGraphicsLineItem* self, QVariant* variant) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Extension_IsBase(true);
        return new QVariant(vqgraphicslineitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnExtension(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_Advance(QGraphicsLineItem* self, int phase) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicslineitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseAdvance(QGraphicsLineItem* self, int phase) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_Advance_IsBase(true);
        vqgraphicslineitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicslineitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnAdvance(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_CollidesWithItem(const QGraphicsLineItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicslineitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseCollidesWithItem(const QGraphicsLineItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_CollidesWithItem_IsBase(true);
        return vqgraphicslineitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicslineitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnCollidesWithItem(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_CollidesWithPath(const QGraphicsLineItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return vqgraphicslineitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicslineitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseCollidesWithPath(const QGraphicsLineItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_CollidesWithPath_IsBase(true);
        return vqgraphicslineitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicslineitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnCollidesWithPath(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_SceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        return vqgraphicslineitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicslineitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseSceneEventFilter(QGraphicsLineItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SceneEventFilter_IsBase(true);
        return vqgraphicslineitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicslineitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSceneEventFilter(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsLineItem_SceneEvent(QGraphicsLineItem* self, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        return vqgraphicslineitem->sceneEvent(event);
    } else {
        return vqgraphicslineitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsLineItem_QBaseSceneEvent(QGraphicsLineItem* self, QEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SceneEvent_IsBase(true);
        return vqgraphicslineitem->sceneEvent(event);
    } else {
        return vqgraphicslineitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnSceneEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_ContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->contextMenuEvent(event);
    } else {
        vqgraphicslineitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseContextMenuEvent(QGraphicsLineItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_ContextMenuEvent_IsBase(true);
        vqgraphicslineitem->contextMenuEvent(event);
    } else {
        vqgraphicslineitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnContextMenuEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_DragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->dragEnterEvent(event);
    } else {
        vqgraphicslineitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseDragEnterEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragEnterEvent_IsBase(true);
        vqgraphicslineitem->dragEnterEvent(event);
    } else {
        vqgraphicslineitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragEnterEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_DragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->dragLeaveEvent(event);
    } else {
        vqgraphicslineitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseDragLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragLeaveEvent_IsBase(true);
        vqgraphicslineitem->dragLeaveEvent(event);
    } else {
        vqgraphicslineitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragLeaveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_DragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->dragMoveEvent(event);
    } else {
        vqgraphicslineitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseDragMoveEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragMoveEvent_IsBase(true);
        vqgraphicslineitem->dragMoveEvent(event);
    } else {
        vqgraphicslineitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDragMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_DropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->dropEvent(event);
    } else {
        vqgraphicslineitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseDropEvent(QGraphicsLineItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DropEvent_IsBase(true);
        vqgraphicslineitem->dropEvent(event);
    } else {
        vqgraphicslineitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnDropEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_FocusInEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->focusInEvent(event);
    } else {
        vqgraphicslineitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseFocusInEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_FocusInEvent_IsBase(true);
        vqgraphicslineitem->focusInEvent(event);
    } else {
        vqgraphicslineitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnFocusInEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_FocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->focusOutEvent(event);
    } else {
        vqgraphicslineitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseFocusOutEvent(QGraphicsLineItem* self, QFocusEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_FocusOutEvent_IsBase(true);
        vqgraphicslineitem->focusOutEvent(event);
    } else {
        vqgraphicslineitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnFocusOutEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_HoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->hoverEnterEvent(event);
    } else {
        vqgraphicslineitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseHoverEnterEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverEnterEvent_IsBase(true);
        vqgraphicslineitem->hoverEnterEvent(event);
    } else {
        vqgraphicslineitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverEnterEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_HoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->hoverMoveEvent(event);
    } else {
        vqgraphicslineitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseHoverMoveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverMoveEvent_IsBase(true);
        vqgraphicslineitem->hoverMoveEvent(event);
    } else {
        vqgraphicslineitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_HoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->hoverLeaveEvent(event);
    } else {
        vqgraphicslineitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseHoverLeaveEvent(QGraphicsLineItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverLeaveEvent_IsBase(true);
        vqgraphicslineitem->hoverLeaveEvent(event);
    } else {
        vqgraphicslineitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnHoverLeaveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_KeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->keyPressEvent(event);
    } else {
        vqgraphicslineitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseKeyPressEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_KeyPressEvent_IsBase(true);
        vqgraphicslineitem->keyPressEvent(event);
    } else {
        vqgraphicslineitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnKeyPressEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_KeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->keyReleaseEvent(event);
    } else {
        vqgraphicslineitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseKeyReleaseEvent(QGraphicsLineItem* self, QKeyEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_KeyReleaseEvent_IsBase(true);
        vqgraphicslineitem->keyReleaseEvent(event);
    } else {
        vqgraphicslineitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnKeyReleaseEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_MousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->mousePressEvent(event);
    } else {
        vqgraphicslineitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseMousePressEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MousePressEvent_IsBase(true);
        vqgraphicslineitem->mousePressEvent(event);
    } else {
        vqgraphicslineitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMousePressEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_MouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->mouseMoveEvent(event);
    } else {
        vqgraphicslineitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseMouseMoveEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseMoveEvent_IsBase(true);
        vqgraphicslineitem->mouseMoveEvent(event);
    } else {
        vqgraphicslineitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseMoveEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_MouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->mouseReleaseEvent(event);
    } else {
        vqgraphicslineitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseMouseReleaseEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseReleaseEvent_IsBase(true);
        vqgraphicslineitem->mouseReleaseEvent(event);
    } else {
        vqgraphicslineitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseReleaseEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_MouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicslineitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseMouseDoubleClickEvent(QGraphicsLineItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicslineitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicslineitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnMouseDoubleClickEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_WheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->wheelEvent(event);
    } else {
        vqgraphicslineitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseWheelEvent(QGraphicsLineItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_WheelEvent_IsBase(true);
        vqgraphicslineitem->wheelEvent(event);
    } else {
        vqgraphicslineitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnWheelEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_InputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->inputMethodEvent(event);
    } else {
        vqgraphicslineitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseInputMethodEvent(QGraphicsLineItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_InputMethodEvent_IsBase(true);
        vqgraphicslineitem->inputMethodEvent(event);
    } else {
        vqgraphicslineitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnInputMethodEvent(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsLineItem_InputMethodQuery(const QGraphicsLineItem* self, int query) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        return new QVariant(vqgraphicslineitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsLineItem_QBaseInputMethodQuery(const QGraphicsLineItem* self, int query) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicslineitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnInputMethodQuery(const QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = const_cast<VirtualQGraphicsLineItem*>(dynamic_cast<const VirtualQGraphicsLineItem*>(self))) {
        vqgraphicslineitem->setQGraphicsLineItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsLineItem_ItemChange(QGraphicsLineItem* self, int change, QVariant* value) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        return new QVariant(vqgraphicslineitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsLineItem_QBaseItemChange(QGraphicsLineItem* self, int change, QVariant* value) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicslineitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnItemChange(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_UpdateMicroFocus(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->updateMicroFocus();
    } else {
        vqgraphicslineitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseUpdateMicroFocus(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_UpdateMicroFocus_IsBase(true);
        vqgraphicslineitem->updateMicroFocus();
    } else {
        vqgraphicslineitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnUpdateMicroFocus(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_AddToIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->addToIndex();
    } else {
        vqgraphicslineitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseAddToIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_AddToIndex_IsBase(true);
        vqgraphicslineitem->addToIndex();
    } else {
        vqgraphicslineitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnAddToIndex(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_RemoveFromIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->removeFromIndex();
    } else {
        vqgraphicslineitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBaseRemoveFromIndex(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_RemoveFromIndex_IsBase(true);
        vqgraphicslineitem->removeFromIndex();
    } else {
        vqgraphicslineitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnRemoveFromIndex(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsLineItem_PrepareGeometryChange(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->prepareGeometryChange();
    } else {
        vqgraphicslineitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsLineItem_QBasePrepareGeometryChange(QGraphicsLineItem* self) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_PrepareGeometryChange_IsBase(true);
        vqgraphicslineitem->prepareGeometryChange();
    } else {
        vqgraphicslineitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsLineItem_OnPrepareGeometryChange(QGraphicsLineItem* self, intptr_t slot) {
    if (auto* vqgraphicslineitem = dynamic_cast<VirtualQGraphicsLineItem*>(self)) {
        vqgraphicslineitem->setQGraphicsLineItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsLineItem::QGraphicsLineItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsLineItem_Delete(QGraphicsLineItem* self) {
    delete self;
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new() {
    return new VirtualQGraphicsPixmapItem();
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new2(QPixmap* pixmap) {
    return new VirtualQGraphicsPixmapItem(*pixmap);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsPixmapItem(parent);
}

QGraphicsPixmapItem* QGraphicsPixmapItem_new4(QPixmap* pixmap, QGraphicsItem* parent) {
    return new VirtualQGraphicsPixmapItem(*pixmap, parent);
}

QPixmap* QGraphicsPixmapItem_Pixmap(const QGraphicsPixmapItem* self) {
    return new QPixmap(self->pixmap());
}

void QGraphicsPixmapItem_SetPixmap(QGraphicsPixmapItem* self, QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

int QGraphicsPixmapItem_TransformationMode(const QGraphicsPixmapItem* self) {
    return static_cast<int>(self->transformationMode());
}

void QGraphicsPixmapItem_SetTransformationMode(QGraphicsPixmapItem* self, int mode) {
    self->setTransformationMode(static_cast<Qt::TransformationMode>(mode));
}

QPointF* QGraphicsPixmapItem_Offset(const QGraphicsPixmapItem* self) {
    return new QPointF(self->offset());
}

void QGraphicsPixmapItem_SetOffset(QGraphicsPixmapItem* self, QPointF* offset) {
    self->setOffset(*offset);
}

void QGraphicsPixmapItem_SetOffset2(QGraphicsPixmapItem* self, double x, double y) {
    self->setOffset(static_cast<qreal>(x), static_cast<qreal>(y));
}

int QGraphicsPixmapItem_ShapeMode(const QGraphicsPixmapItem* self) {
    return static_cast<int>(self->shapeMode());
}

void QGraphicsPixmapItem_SetShapeMode(QGraphicsPixmapItem* self, int mode) {
    self->setShapeMode(static_cast<QGraphicsPixmapItem::ShapeMode>(mode));
}

// Derived class handler implementation
QRectF* QGraphicsPixmapItem_BoundingRect(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return new QRectF(vqgraphicspixmapitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsPixmapItem_QBaseBoundingRect(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicspixmapitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnBoundingRect(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPixmapItem_Shape(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return new QPainterPath(vqgraphicspixmapitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_QBaseShape(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicspixmapitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnShape(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_Contains(const QGraphicsPixmapItem* self, QPointF* point) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->contains(*point);
    } else {
        return vqgraphicspixmapitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseContains(const QGraphicsPixmapItem* self, QPointF* point) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Contains_IsBase(true);
        return vqgraphicspixmapitem->contains(*point);
    } else {
        return vqgraphicspixmapitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnContains(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_Paint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->paint(painter, option, widget);
    } else {
        vqgraphicspixmapitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBasePaint(QGraphicsPixmapItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Paint_IsBase(true);
        vqgraphicspixmapitem->paint(painter, option, widget);
    } else {
        vqgraphicspixmapitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnPaint(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_IsObscuredBy(const QGraphicsPixmapItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->isObscuredBy(item);
    } else {
        return vqgraphicspixmapitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseIsObscuredBy(const QGraphicsPixmapItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_IsObscuredBy_IsBase(true);
        return vqgraphicspixmapitem->isObscuredBy(item);
    } else {
        return vqgraphicspixmapitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnIsObscuredBy(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsPixmapItem_OpaqueArea(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return new QPainterPath(vqgraphicspixmapitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsPixmapItem_QBaseOpaqueArea(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicspixmapitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnOpaqueArea(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsPixmapItem_Type(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->type();
    } else {
        return vqgraphicspixmapitem->type();
    }
}

// Base class handler implementation
int QGraphicsPixmapItem_QBaseType(const QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Type_IsBase(true);
        return vqgraphicspixmapitem->type();
    } else {
        return vqgraphicspixmapitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnType(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Type_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_SupportsExtension(const QGraphicsPixmapItem* self, int extension) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    } else {
        return vqgraphicspixmapitem->supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseSupportsExtension(const QGraphicsPixmapItem* self, int extension) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SupportsExtension_IsBase(true);
        return vqgraphicspixmapitem->supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    } else {
        return vqgraphicspixmapitem->supportsExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSupportsExtension(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_SetExtension(QGraphicsPixmapItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    } else {
        vqgraphicspixmapitem->setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseSetExtension(QGraphicsPixmapItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SetExtension_IsBase(true);
        vqgraphicspixmapitem->setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    } else {
        vqgraphicspixmapitem->setExtension(static_cast<VirtualQGraphicsPixmapItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSetExtension(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPixmapItem_Extension(const QGraphicsPixmapItem* self, QVariant* variant) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return new QVariant(vqgraphicspixmapitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_QBaseExtension(const QGraphicsPixmapItem* self, QVariant* variant) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Extension_IsBase(true);
        return new QVariant(vqgraphicspixmapitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnExtension(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_Advance(QGraphicsPixmapItem* self, int phase) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspixmapitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseAdvance(QGraphicsPixmapItem* self, int phase) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Advance_IsBase(true);
        vqgraphicspixmapitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicspixmapitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnAdvance(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_CollidesWithItem(const QGraphicsPixmapItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspixmapitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseCollidesWithItem(const QGraphicsPixmapItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_CollidesWithItem_IsBase(true);
        return vqgraphicspixmapitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspixmapitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnCollidesWithItem(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_CollidesWithPath(const QGraphicsPixmapItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return vqgraphicspixmapitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspixmapitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseCollidesWithPath(const QGraphicsPixmapItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_CollidesWithPath_IsBase(true);
        return vqgraphicspixmapitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicspixmapitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnCollidesWithPath(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_SceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        return vqgraphicspixmapitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspixmapitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseSceneEventFilter(QGraphicsPixmapItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SceneEventFilter_IsBase(true);
        return vqgraphicspixmapitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicspixmapitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSceneEventFilter(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsPixmapItem_SceneEvent(QGraphicsPixmapItem* self, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        return vqgraphicspixmapitem->sceneEvent(event);
    } else {
        return vqgraphicspixmapitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsPixmapItem_QBaseSceneEvent(QGraphicsPixmapItem* self, QEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SceneEvent_IsBase(true);
        return vqgraphicspixmapitem->sceneEvent(event);
    } else {
        return vqgraphicspixmapitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnSceneEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_ContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->contextMenuEvent(event);
    } else {
        vqgraphicspixmapitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseContextMenuEvent(QGraphicsPixmapItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_ContextMenuEvent_IsBase(true);
        vqgraphicspixmapitem->contextMenuEvent(event);
    } else {
        vqgraphicspixmapitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnContextMenuEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->dragEnterEvent(event);
    } else {
        vqgraphicspixmapitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseDragEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragEnterEvent_IsBase(true);
        vqgraphicspixmapitem->dragEnterEvent(event);
    } else {
        vqgraphicspixmapitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragEnterEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->dragLeaveEvent(event);
    } else {
        vqgraphicspixmapitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseDragLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragLeaveEvent_IsBase(true);
        vqgraphicspixmapitem->dragLeaveEvent(event);
    } else {
        vqgraphicspixmapitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragLeaveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_DragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->dragMoveEvent(event);
    } else {
        vqgraphicspixmapitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseDragMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragMoveEvent_IsBase(true);
        vqgraphicspixmapitem->dragMoveEvent(event);
    } else {
        vqgraphicspixmapitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDragMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_DropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->dropEvent(event);
    } else {
        vqgraphicspixmapitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseDropEvent(QGraphicsPixmapItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DropEvent_IsBase(true);
        vqgraphicspixmapitem->dropEvent(event);
    } else {
        vqgraphicspixmapitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnDropEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_FocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->focusInEvent(event);
    } else {
        vqgraphicspixmapitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseFocusInEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_FocusInEvent_IsBase(true);
        vqgraphicspixmapitem->focusInEvent(event);
    } else {
        vqgraphicspixmapitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnFocusInEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_FocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->focusOutEvent(event);
    } else {
        vqgraphicspixmapitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseFocusOutEvent(QGraphicsPixmapItem* self, QFocusEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_FocusOutEvent_IsBase(true);
        vqgraphicspixmapitem->focusOutEvent(event);
    } else {
        vqgraphicspixmapitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnFocusOutEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->hoverEnterEvent(event);
    } else {
        vqgraphicspixmapitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseHoverEnterEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverEnterEvent_IsBase(true);
        vqgraphicspixmapitem->hoverEnterEvent(event);
    } else {
        vqgraphicspixmapitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverEnterEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->hoverMoveEvent(event);
    } else {
        vqgraphicspixmapitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseHoverMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverMoveEvent_IsBase(true);
        vqgraphicspixmapitem->hoverMoveEvent(event);
    } else {
        vqgraphicspixmapitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_HoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspixmapitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseHoverLeaveEvent(QGraphicsPixmapItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverLeaveEvent_IsBase(true);
        vqgraphicspixmapitem->hoverLeaveEvent(event);
    } else {
        vqgraphicspixmapitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnHoverLeaveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_KeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->keyPressEvent(event);
    } else {
        vqgraphicspixmapitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseKeyPressEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_KeyPressEvent_IsBase(true);
        vqgraphicspixmapitem->keyPressEvent(event);
    } else {
        vqgraphicspixmapitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnKeyPressEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_KeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->keyReleaseEvent(event);
    } else {
        vqgraphicspixmapitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseKeyReleaseEvent(QGraphicsPixmapItem* self, QKeyEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_KeyReleaseEvent_IsBase(true);
        vqgraphicspixmapitem->keyReleaseEvent(event);
    } else {
        vqgraphicspixmapitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnKeyReleaseEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_MousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->mousePressEvent(event);
    } else {
        vqgraphicspixmapitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseMousePressEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MousePressEvent_IsBase(true);
        vqgraphicspixmapitem->mousePressEvent(event);
    } else {
        vqgraphicspixmapitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMousePressEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->mouseMoveEvent(event);
    } else {
        vqgraphicspixmapitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseMouseMoveEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseMoveEvent_IsBase(true);
        vqgraphicspixmapitem->mouseMoveEvent(event);
    } else {
        vqgraphicspixmapitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseMoveEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspixmapitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseMouseReleaseEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseReleaseEvent_IsBase(true);
        vqgraphicspixmapitem->mouseReleaseEvent(event);
    } else {
        vqgraphicspixmapitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseReleaseEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_MouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspixmapitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseMouseDoubleClickEvent(QGraphicsPixmapItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicspixmapitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicspixmapitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnMouseDoubleClickEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_WheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->wheelEvent(event);
    } else {
        vqgraphicspixmapitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseWheelEvent(QGraphicsPixmapItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_WheelEvent_IsBase(true);
        vqgraphicspixmapitem->wheelEvent(event);
    } else {
        vqgraphicspixmapitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnWheelEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_InputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->inputMethodEvent(event);
    } else {
        vqgraphicspixmapitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseInputMethodEvent(QGraphicsPixmapItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_InputMethodEvent_IsBase(true);
        vqgraphicspixmapitem->inputMethodEvent(event);
    } else {
        vqgraphicspixmapitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnInputMethodEvent(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPixmapItem_InputMethodQuery(const QGraphicsPixmapItem* self, int query) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        return new QVariant(vqgraphicspixmapitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_QBaseInputMethodQuery(const QGraphicsPixmapItem* self, int query) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicspixmapitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnInputMethodQuery(const QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = const_cast<VirtualQGraphicsPixmapItem*>(dynamic_cast<const VirtualQGraphicsPixmapItem*>(self))) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsPixmapItem_ItemChange(QGraphicsPixmapItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        return new QVariant(vqgraphicspixmapitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsPixmapItem_QBaseItemChange(QGraphicsPixmapItem* self, int change, QVariant* value) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicspixmapitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnItemChange(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_UpdateMicroFocus(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->updateMicroFocus();
    } else {
        vqgraphicspixmapitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseUpdateMicroFocus(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_UpdateMicroFocus_IsBase(true);
        vqgraphicspixmapitem->updateMicroFocus();
    } else {
        vqgraphicspixmapitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnUpdateMicroFocus(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_AddToIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->addToIndex();
    } else {
        vqgraphicspixmapitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseAddToIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_AddToIndex_IsBase(true);
        vqgraphicspixmapitem->addToIndex();
    } else {
        vqgraphicspixmapitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnAddToIndex(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_RemoveFromIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->removeFromIndex();
    } else {
        vqgraphicspixmapitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBaseRemoveFromIndex(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_RemoveFromIndex_IsBase(true);
        vqgraphicspixmapitem->removeFromIndex();
    } else {
        vqgraphicspixmapitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnRemoveFromIndex(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsPixmapItem_PrepareGeometryChange(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->prepareGeometryChange();
    } else {
        vqgraphicspixmapitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsPixmapItem_QBasePrepareGeometryChange(QGraphicsPixmapItem* self) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_PrepareGeometryChange_IsBase(true);
        vqgraphicspixmapitem->prepareGeometryChange();
    } else {
        vqgraphicspixmapitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsPixmapItem_OnPrepareGeometryChange(QGraphicsPixmapItem* self, intptr_t slot) {
    if (auto* vqgraphicspixmapitem = dynamic_cast<VirtualQGraphicsPixmapItem*>(self)) {
        vqgraphicspixmapitem->setQGraphicsPixmapItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsPixmapItem::QGraphicsPixmapItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsPixmapItem_Delete(QGraphicsPixmapItem* self) {
    delete self;
}

QGraphicsTextItem* QGraphicsTextItem_new() {
    return new VirtualQGraphicsTextItem();
}

QGraphicsTextItem* QGraphicsTextItem_new2(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsTextItem(text_QString);
}

QGraphicsTextItem* QGraphicsTextItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsTextItem(parent);
}

QGraphicsTextItem* QGraphicsTextItem_new4(libqt_string text, QGraphicsItem* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsTextItem(text_QString, parent);
}

QMetaObject* QGraphicsTextItem_MetaObject(const QGraphicsTextItem* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsTextItem_Metacast(QGraphicsTextItem* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsTextItem_Metacall(QGraphicsTextItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsTextItem_OnMetacall(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Metacall_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsTextItem_QBaseMetacall(QGraphicsTextItem* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Metacall_IsBase(true);
        return vqgraphicstextitem->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsTextItem_Tr(const char* s) {
    QString _ret = QGraphicsTextItem::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTextItem_ToHtml(const QGraphicsTextItem* self) {
    QString _ret = self->toHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsTextItem_SetHtml(QGraphicsTextItem* self, libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

libqt_string QGraphicsTextItem_ToPlainText(const QGraphicsTextItem* self) {
    QString _ret = self->toPlainText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsTextItem_SetPlainText(QGraphicsTextItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setPlainText(text_QString);
}

QFont* QGraphicsTextItem_Font(const QGraphicsTextItem* self) {
    return new QFont(self->font());
}

void QGraphicsTextItem_SetFont(QGraphicsTextItem* self, QFont* font) {
    self->setFont(*font);
}

void QGraphicsTextItem_SetDefaultTextColor(QGraphicsTextItem* self, QColor* c) {
    self->setDefaultTextColor(*c);
}

QColor* QGraphicsTextItem_DefaultTextColor(const QGraphicsTextItem* self) {
    return new QColor(self->defaultTextColor());
}

void QGraphicsTextItem_SetTextWidth(QGraphicsTextItem* self, double width) {
    self->setTextWidth(static_cast<qreal>(width));
}

double QGraphicsTextItem_TextWidth(const QGraphicsTextItem* self) {
    return static_cast<double>(self->textWidth());
}

void QGraphicsTextItem_AdjustSize(QGraphicsTextItem* self) {
    self->adjustSize();
}

void QGraphicsTextItem_SetDocument(QGraphicsTextItem* self, QTextDocument* document) {
    self->setDocument(document);
}

QTextDocument* QGraphicsTextItem_Document(const QGraphicsTextItem* self) {
    return self->document();
}

void QGraphicsTextItem_SetTextInteractionFlags(QGraphicsTextItem* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QGraphicsTextItem_TextInteractionFlags(const QGraphicsTextItem* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QGraphicsTextItem_SetTabChangesFocus(QGraphicsTextItem* self, bool b) {
    self->setTabChangesFocus(b);
}

bool QGraphicsTextItem_TabChangesFocus(const QGraphicsTextItem* self) {
    return self->tabChangesFocus();
}

void QGraphicsTextItem_SetOpenExternalLinks(QGraphicsTextItem* self, bool open) {
    self->setOpenExternalLinks(open);
}

bool QGraphicsTextItem_OpenExternalLinks(const QGraphicsTextItem* self) {
    return self->openExternalLinks();
}

void QGraphicsTextItem_SetTextCursor(QGraphicsTextItem* self, QTextCursor* cursor) {
    self->setTextCursor(*cursor);
}

QTextCursor* QGraphicsTextItem_TextCursor(const QGraphicsTextItem* self) {
    return new QTextCursor(self->textCursor());
}

void QGraphicsTextItem_LinkActivated(QGraphicsTextItem* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->linkActivated(param1_QString);
}

void QGraphicsTextItem_Connect_LinkActivated(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, libqt_string) = reinterpret_cast<void (*)(QGraphicsTextItem*, libqt_string)>(slot);
    QGraphicsTextItem::connect(self, &QGraphicsTextItem::linkActivated, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QGraphicsTextItem_LinkHovered(QGraphicsTextItem* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->linkHovered(param1_QString);
}

void QGraphicsTextItem_Connect_LinkHovered(QGraphicsTextItem* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsTextItem*, libqt_string) = reinterpret_cast<void (*)(QGraphicsTextItem*, libqt_string)>(slot);
    QGraphicsTextItem::connect(self, &QGraphicsTextItem::linkHovered, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QGraphicsTextItem_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsTextItem::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsTextItem_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsTextItem::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QRectF* QGraphicsTextItem_BoundingRect(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return new QRectF(vqgraphicstextitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsTextItem_QBaseBoundingRect(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicstextitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnBoundingRect(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsTextItem_Shape(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return new QPainterPath(vqgraphicstextitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_QBaseShape(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicstextitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnShape(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_Contains(const QGraphicsTextItem* self, QPointF* point) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->contains(*point);
    } else {
        return vqgraphicstextitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseContains(const QGraphicsTextItem* self, QPointF* point) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Contains_IsBase(true);
        return vqgraphicstextitem->contains(*point);
    } else {
        return vqgraphicstextitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnContains(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_Paint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->paint(painter, option, widget);
    } else {
        vqgraphicstextitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBasePaint(QGraphicsTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Paint_IsBase(true);
        vqgraphicstextitem->paint(painter, option, widget);
    } else {
        vqgraphicstextitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnPaint(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_IsObscuredBy(const QGraphicsTextItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->isObscuredBy(item);
    } else {
        return vqgraphicstextitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseIsObscuredBy(const QGraphicsTextItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_IsObscuredBy_IsBase(true);
        return vqgraphicstextitem->isObscuredBy(item);
    } else {
        return vqgraphicstextitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnIsObscuredBy(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsTextItem_OpaqueArea(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return new QPainterPath(vqgraphicstextitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsTextItem_QBaseOpaqueArea(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicstextitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnOpaqueArea(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsTextItem_Type(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->type();
    } else {
        return vqgraphicstextitem->type();
    }
}

// Base class handler implementation
int QGraphicsTextItem_QBaseType(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Type_IsBase(true);
        return vqgraphicstextitem->type();
    } else {
        return vqgraphicstextitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnType(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Type_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_SceneEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->sceneEvent(event);
    } else {
        return vqgraphicstextitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseSceneEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SceneEvent_IsBase(true);
        return vqgraphicstextitem->sceneEvent(event);
    } else {
        return vqgraphicstextitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSceneEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_MousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->mousePressEvent(event);
    } else {
        vqgraphicstextitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseMousePressEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MousePressEvent_IsBase(true);
        vqgraphicstextitem->mousePressEvent(event);
    } else {
        vqgraphicstextitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMousePressEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_MouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->mouseMoveEvent(event);
    } else {
        vqgraphicstextitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseMouseMoveEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseMoveEvent_IsBase(true);
        vqgraphicstextitem->mouseMoveEvent(event);
    } else {
        vqgraphicstextitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_MouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->mouseReleaseEvent(event);
    } else {
        vqgraphicstextitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseMouseReleaseEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseReleaseEvent_IsBase(true);
        vqgraphicstextitem->mouseReleaseEvent(event);
    } else {
        vqgraphicstextitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseReleaseEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_MouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicstextitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseMouseDoubleClickEvent(QGraphicsTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicstextitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicstextitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnMouseDoubleClickEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_ContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->contextMenuEvent(event);
    } else {
        vqgraphicstextitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseContextMenuEvent(QGraphicsTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ContextMenuEvent_IsBase(true);
        vqgraphicstextitem->contextMenuEvent(event);
    } else {
        vqgraphicstextitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnContextMenuEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_KeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->keyPressEvent(event);
    } else {
        vqgraphicstextitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseKeyPressEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_KeyPressEvent_IsBase(true);
        vqgraphicstextitem->keyPressEvent(event);
    } else {
        vqgraphicstextitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnKeyPressEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_KeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->keyReleaseEvent(event);
    } else {
        vqgraphicstextitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseKeyReleaseEvent(QGraphicsTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_KeyReleaseEvent_IsBase(true);
        vqgraphicstextitem->keyReleaseEvent(event);
    } else {
        vqgraphicstextitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnKeyReleaseEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_FocusInEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->focusInEvent(event);
    } else {
        vqgraphicstextitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseFocusInEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_FocusInEvent_IsBase(true);
        vqgraphicstextitem->focusInEvent(event);
    } else {
        vqgraphicstextitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnFocusInEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_FocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->focusOutEvent(event);
    } else {
        vqgraphicstextitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseFocusOutEvent(QGraphicsTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_FocusOutEvent_IsBase(true);
        vqgraphicstextitem->focusOutEvent(event);
    } else {
        vqgraphicstextitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnFocusOutEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_DragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->dragEnterEvent(event);
    } else {
        vqgraphicstextitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseDragEnterEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragEnterEvent_IsBase(true);
        vqgraphicstextitem->dragEnterEvent(event);
    } else {
        vqgraphicstextitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragEnterEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_DragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->dragLeaveEvent(event);
    } else {
        vqgraphicstextitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseDragLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragLeaveEvent_IsBase(true);
        vqgraphicstextitem->dragLeaveEvent(event);
    } else {
        vqgraphicstextitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragLeaveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_DragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->dragMoveEvent(event);
    } else {
        vqgraphicstextitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseDragMoveEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragMoveEvent_IsBase(true);
        vqgraphicstextitem->dragMoveEvent(event);
    } else {
        vqgraphicstextitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDragMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_DropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->dropEvent(event);
    } else {
        vqgraphicstextitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseDropEvent(QGraphicsTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DropEvent_IsBase(true);
        vqgraphicstextitem->dropEvent(event);
    } else {
        vqgraphicstextitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDropEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_InputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->inputMethodEvent(event);
    } else {
        vqgraphicstextitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseInputMethodEvent(QGraphicsTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_InputMethodEvent_IsBase(true);
        vqgraphicstextitem->inputMethodEvent(event);
    } else {
        vqgraphicstextitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnInputMethodEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_HoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->hoverEnterEvent(event);
    } else {
        vqgraphicstextitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseHoverEnterEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverEnterEvent_IsBase(true);
        vqgraphicstextitem->hoverEnterEvent(event);
    } else {
        vqgraphicstextitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverEnterEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_HoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->hoverMoveEvent(event);
    } else {
        vqgraphicstextitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseHoverMoveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverMoveEvent_IsBase(true);
        vqgraphicstextitem->hoverMoveEvent(event);
    } else {
        vqgraphicstextitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverMoveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_HoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->hoverLeaveEvent(event);
    } else {
        vqgraphicstextitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseHoverLeaveEvent(QGraphicsTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverLeaveEvent_IsBase(true);
        vqgraphicstextitem->hoverLeaveEvent(event);
    } else {
        vqgraphicstextitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnHoverLeaveEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsTextItem_InputMethodQuery(const QGraphicsTextItem* self, int query) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return new QVariant(vqgraphicstextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsTextItem_QBaseInputMethodQuery(const QGraphicsTextItem* self, int query) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicstextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnInputMethodQuery(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_SupportsExtension(const QGraphicsTextItem* self, int extension) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    } else {
        return vqgraphicstextitem->supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseSupportsExtension(const QGraphicsTextItem* self, int extension) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_SupportsExtension_IsBase(true);
        return vqgraphicstextitem->supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    } else {
        return vqgraphicstextitem->supportsExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSupportsExtension(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_SetExtension(QGraphicsTextItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    } else {
        vqgraphicstextitem->setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseSetExtension(QGraphicsTextItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SetExtension_IsBase(true);
        vqgraphicstextitem->setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    } else {
        vqgraphicstextitem->setExtension(static_cast<VirtualQGraphicsTextItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSetExtension(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsTextItem_Extension(const QGraphicsTextItem* self, QVariant* variant) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return new QVariant(vqgraphicstextitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsTextItem_QBaseExtension(const QGraphicsTextItem* self, QVariant* variant) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Extension_IsBase(true);
        return new QVariant(vqgraphicstextitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnExtension(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_Event(QGraphicsTextItem* self, QEvent* ev) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->event(ev);
    } else {
        return vqgraphicstextitem->event(ev);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseEvent(QGraphicsTextItem* self, QEvent* ev) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Event_IsBase(true);
        return vqgraphicstextitem->event(ev);
    } else {
        return vqgraphicstextitem->event(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Event_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_EventFilter(QGraphicsTextItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->eventFilter(watched, event);
    } else {
        return vqgraphicstextitem->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseEventFilter(QGraphicsTextItem* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_EventFilter_IsBase(true);
        return vqgraphicstextitem->eventFilter(watched, event);
    } else {
        return vqgraphicstextitem->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnEventFilter(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_TimerEvent(QGraphicsTextItem* self, QTimerEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->timerEvent(event);
    } else {
        vqgraphicstextitem->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseTimerEvent(QGraphicsTextItem* self, QTimerEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_TimerEvent_IsBase(true);
        vqgraphicstextitem->timerEvent(event);
    } else {
        vqgraphicstextitem->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnTimerEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_ChildEvent(QGraphicsTextItem* self, QChildEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->childEvent(event);
    } else {
        vqgraphicstextitem->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseChildEvent(QGraphicsTextItem* self, QChildEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ChildEvent_IsBase(true);
        vqgraphicstextitem->childEvent(event);
    } else {
        vqgraphicstextitem->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnChildEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_CustomEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->customEvent(event);
    } else {
        vqgraphicstextitem->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseCustomEvent(QGraphicsTextItem* self, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_CustomEvent_IsBase(true);
        vqgraphicstextitem->customEvent(event);
    } else {
        vqgraphicstextitem->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCustomEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_ConnectNotify(QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->connectNotify(*signal);
    } else {
        vqgraphicstextitem->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseConnectNotify(QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ConnectNotify_IsBase(true);
        vqgraphicstextitem->connectNotify(*signal);
    } else {
        vqgraphicstextitem->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnConnectNotify(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_DisconnectNotify(QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->disconnectNotify(*signal);
    } else {
        vqgraphicstextitem->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseDisconnectNotify(QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DisconnectNotify_IsBase(true);
        vqgraphicstextitem->disconnectNotify(*signal);
    } else {
        vqgraphicstextitem->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnDisconnectNotify(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_Advance(QGraphicsTextItem* self, int phase) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicstextitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseAdvance(QGraphicsTextItem* self, int phase) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Advance_IsBase(true);
        vqgraphicstextitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicstextitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnAdvance(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_CollidesWithItem(const QGraphicsTextItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicstextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseCollidesWithItem(const QGraphicsTextItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_CollidesWithItem_IsBase(true);
        return vqgraphicstextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicstextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCollidesWithItem(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_CollidesWithPath(const QGraphicsTextItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicstextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseCollidesWithPath(const QGraphicsTextItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_CollidesWithPath_IsBase(true);
        return vqgraphicstextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicstextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnCollidesWithPath(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_SceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return vqgraphicstextitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicstextitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseSceneEventFilter(QGraphicsTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SceneEventFilter_IsBase(true);
        return vqgraphicstextitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicstextitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSceneEventFilter(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_WheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->wheelEvent(event);
    } else {
        vqgraphicstextitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseWheelEvent(QGraphicsTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_WheelEvent_IsBase(true);
        vqgraphicstextitem->wheelEvent(event);
    } else {
        vqgraphicstextitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnWheelEvent(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsTextItem_ItemChange(QGraphicsTextItem* self, int change, QVariant* value) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        return new QVariant(vqgraphicstextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsTextItem_QBaseItemChange(QGraphicsTextItem* self, int change, QVariant* value) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicstextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnItemChange(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_UpdateMicroFocus(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->updateMicroFocus();
    } else {
        vqgraphicstextitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseUpdateMicroFocus(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_UpdateMicroFocus_IsBase(true);
        vqgraphicstextitem->updateMicroFocus();
    } else {
        vqgraphicstextitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnUpdateMicroFocus(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsTextItem_Sender(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->sender();
    } else {
        return vqgraphicstextitem->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsTextItem_QBaseSender(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Sender_IsBase(true);
        return vqgraphicstextitem->sender();
    } else {
        return vqgraphicstextitem->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSender(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Sender_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsTextItem_SenderSignalIndex(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->senderSignalIndex();
    } else {
        return vqgraphicstextitem->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsTextItem_QBaseSenderSignalIndex(const QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_SenderSignalIndex_IsBase(true);
        return vqgraphicstextitem->senderSignalIndex();
    } else {
        return vqgraphicstextitem->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnSenderSignalIndex(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsTextItem_Receivers(const QGraphicsTextItem* self, const char* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->receivers(signal);
    } else {
        return vqgraphicstextitem->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsTextItem_QBaseReceivers(const QGraphicsTextItem* self, const char* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Receivers_IsBase(true);
        return vqgraphicstextitem->receivers(signal);
    } else {
        return vqgraphicstextitem->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnReceivers(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_Receivers_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsTextItem_IsSignalConnected(const QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        return vqgraphicstextitem->isSignalConnected(*signal);
    } else {
        return vqgraphicstextitem->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsTextItem_QBaseIsSignalConnected(const QGraphicsTextItem* self, QMetaMethod* signal) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_IsSignalConnected_IsBase(true);
        return vqgraphicstextitem->isSignalConnected(*signal);
    } else {
        return vqgraphicstextitem->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnIsSignalConnected(const QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = const_cast<VirtualQGraphicsTextItem*>(dynamic_cast<const VirtualQGraphicsTextItem*>(self))) {
        vqgraphicstextitem->setQGraphicsTextItem_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_AddToIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->addToIndex();
    } else {
        vqgraphicstextitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseAddToIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_AddToIndex_IsBase(true);
        vqgraphicstextitem->addToIndex();
    } else {
        vqgraphicstextitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnAddToIndex(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_RemoveFromIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->removeFromIndex();
    } else {
        vqgraphicstextitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBaseRemoveFromIndex(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_RemoveFromIndex_IsBase(true);
        vqgraphicstextitem->removeFromIndex();
    } else {
        vqgraphicstextitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnRemoveFromIndex(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsTextItem_PrepareGeometryChange(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->prepareGeometryChange();
    } else {
        vqgraphicstextitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsTextItem_QBasePrepareGeometryChange(QGraphicsTextItem* self) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_PrepareGeometryChange_IsBase(true);
        vqgraphicstextitem->prepareGeometryChange();
    } else {
        vqgraphicstextitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsTextItem_OnPrepareGeometryChange(QGraphicsTextItem* self, intptr_t slot) {
    if (auto* vqgraphicstextitem = dynamic_cast<VirtualQGraphicsTextItem*>(self)) {
        vqgraphicstextitem->setQGraphicsTextItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsTextItem::QGraphicsTextItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsTextItem_Delete(QGraphicsTextItem* self) {
    delete self;
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new() {
    return new VirtualQGraphicsSimpleTextItem();
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new2(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsSimpleTextItem(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new3(QGraphicsItem* parent) {
    return new VirtualQGraphicsSimpleTextItem(parent);
}

QGraphicsSimpleTextItem* QGraphicsSimpleTextItem_new4(libqt_string text, QGraphicsItem* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQGraphicsSimpleTextItem(text_QString, parent);
}

void QGraphicsSimpleTextItem_SetText(QGraphicsSimpleTextItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QGraphicsSimpleTextItem_Text(const QGraphicsSimpleTextItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsSimpleTextItem_SetFont(QGraphicsSimpleTextItem* self, QFont* font) {
    self->setFont(*font);
}

QFont* QGraphicsSimpleTextItem_Font(const QGraphicsSimpleTextItem* self) {
    return new QFont(self->font());
}

// Derived class handler implementation
QRectF* QGraphicsSimpleTextItem_BoundingRect(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return new QRectF(vqgraphicssimpletextitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsSimpleTextItem_QBaseBoundingRect(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicssimpletextitem->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnBoundingRect(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSimpleTextItem_Shape(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return new QPainterPath(vqgraphicssimpletextitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_QBaseShape(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Shape_IsBase(true);
        return new QPainterPath(vqgraphicssimpletextitem->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnShape(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Shape_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_Contains(const QGraphicsSimpleTextItem* self, QPointF* point) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->contains(*point);
    } else {
        return vqgraphicssimpletextitem->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseContains(const QGraphicsSimpleTextItem* self, QPointF* point) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Contains_IsBase(true);
        return vqgraphicssimpletextitem->contains(*point);
    } else {
        return vqgraphicssimpletextitem->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnContains(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Contains_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_Paint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->paint(painter, option, widget);
    } else {
        vqgraphicssimpletextitem->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBasePaint(QGraphicsSimpleTextItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Paint_IsBase(true);
        vqgraphicssimpletextitem->paint(painter, option, widget);
    } else {
        vqgraphicssimpletextitem->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnPaint(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Paint_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_IsObscuredBy(const QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->isObscuredBy(item);
    } else {
        return vqgraphicssimpletextitem->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseIsObscuredBy(const QGraphicsSimpleTextItem* self, QGraphicsItem* item) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_IsObscuredBy_IsBase(true);
        return vqgraphicssimpletextitem->isObscuredBy(item);
    } else {
        return vqgraphicssimpletextitem->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnIsObscuredBy(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsSimpleTextItem_OpaqueArea(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return new QPainterPath(vqgraphicssimpletextitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsSimpleTextItem_QBaseOpaqueArea(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicssimpletextitem->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnOpaqueArea(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsSimpleTextItem_Type(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->type();
    } else {
        return vqgraphicssimpletextitem->type();
    }
}

// Base class handler implementation
int QGraphicsSimpleTextItem_QBaseType(const QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Type_IsBase(true);
        return vqgraphicssimpletextitem->type();
    } else {
        return vqgraphicssimpletextitem->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnType(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Type_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_SupportsExtension(const QGraphicsSimpleTextItem* self, int extension) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    } else {
        return vqgraphicssimpletextitem->supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseSupportsExtension(const QGraphicsSimpleTextItem* self, int extension) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SupportsExtension_IsBase(true);
        return vqgraphicssimpletextitem->supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    } else {
        return vqgraphicssimpletextitem->supportsExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSupportsExtension(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_SetExtension(QGraphicsSimpleTextItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    } else {
        vqgraphicssimpletextitem->setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseSetExtension(QGraphicsSimpleTextItem* self, int extension, QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SetExtension_IsBase(true);
        vqgraphicssimpletextitem->setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    } else {
        vqgraphicssimpletextitem->setExtension(static_cast<VirtualQGraphicsSimpleTextItem::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSetExtension(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSimpleTextItem_Extension(const QGraphicsSimpleTextItem* self, QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return new QVariant(vqgraphicssimpletextitem->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_QBaseExtension(const QGraphicsSimpleTextItem* self, QVariant* variant) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Extension_IsBase(true);
        return new QVariant(vqgraphicssimpletextitem->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnExtension(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Extension_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_Advance(QGraphicsSimpleTextItem* self, int phase) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicssimpletextitem->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseAdvance(QGraphicsSimpleTextItem* self, int phase) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Advance_IsBase(true);
        vqgraphicssimpletextitem->advance(static_cast<int>(phase));
    } else {
        vqgraphicssimpletextitem->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnAdvance(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_Advance_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_CollidesWithItem(const QGraphicsSimpleTextItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssimpletextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseCollidesWithItem(const QGraphicsSimpleTextItem* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_CollidesWithItem_IsBase(true);
        return vqgraphicssimpletextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssimpletextitem->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnCollidesWithItem(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_CollidesWithPath(const QGraphicsSimpleTextItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return vqgraphicssimpletextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssimpletextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseCollidesWithPath(const QGraphicsSimpleTextItem* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_CollidesWithPath_IsBase(true);
        return vqgraphicssimpletextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicssimpletextitem->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnCollidesWithPath(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_SceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        return vqgraphicssimpletextitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicssimpletextitem->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseSceneEventFilter(QGraphicsSimpleTextItem* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SceneEventFilter_IsBase(true);
        return vqgraphicssimpletextitem->sceneEventFilter(watched, event);
    } else {
        return vqgraphicssimpletextitem->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSceneEventFilter(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsSimpleTextItem_SceneEvent(QGraphicsSimpleTextItem* self, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        return vqgraphicssimpletextitem->sceneEvent(event);
    } else {
        return vqgraphicssimpletextitem->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsSimpleTextItem_QBaseSceneEvent(QGraphicsSimpleTextItem* self, QEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SceneEvent_IsBase(true);
        return vqgraphicssimpletextitem->sceneEvent(event);
    } else {
        return vqgraphicssimpletextitem->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnSceneEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_ContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->contextMenuEvent(event);
    } else {
        vqgraphicssimpletextitem->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseContextMenuEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_ContextMenuEvent_IsBase(true);
        vqgraphicssimpletextitem->contextMenuEvent(event);
    } else {
        vqgraphicssimpletextitem->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnContextMenuEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->dragEnterEvent(event);
    } else {
        vqgraphicssimpletextitem->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseDragEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragEnterEvent_IsBase(true);
        vqgraphicssimpletextitem->dragEnterEvent(event);
    } else {
        vqgraphicssimpletextitem->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragEnterEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->dragLeaveEvent(event);
    } else {
        vqgraphicssimpletextitem->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseDragLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragLeaveEvent_IsBase(true);
        vqgraphicssimpletextitem->dragLeaveEvent(event);
    } else {
        vqgraphicssimpletextitem->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragLeaveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->dragMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseDragMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragMoveEvent_IsBase(true);
        vqgraphicssimpletextitem->dragMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDragMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_DropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->dropEvent(event);
    } else {
        vqgraphicssimpletextitem->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseDropEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DropEvent_IsBase(true);
        vqgraphicssimpletextitem->dropEvent(event);
    } else {
        vqgraphicssimpletextitem->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnDropEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_FocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->focusInEvent(event);
    } else {
        vqgraphicssimpletextitem->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseFocusInEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_FocusInEvent_IsBase(true);
        vqgraphicssimpletextitem->focusInEvent(event);
    } else {
        vqgraphicssimpletextitem->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnFocusInEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_FocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->focusOutEvent(event);
    } else {
        vqgraphicssimpletextitem->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseFocusOutEvent(QGraphicsSimpleTextItem* self, QFocusEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_FocusOutEvent_IsBase(true);
        vqgraphicssimpletextitem->focusOutEvent(event);
    } else {
        vqgraphicssimpletextitem->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnFocusOutEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->hoverEnterEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseHoverEnterEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverEnterEvent_IsBase(true);
        vqgraphicssimpletextitem->hoverEnterEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverEnterEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->hoverMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseHoverMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverMoveEvent_IsBase(true);
        vqgraphicssimpletextitem->hoverMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_HoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->hoverLeaveEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseHoverLeaveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverLeaveEvent_IsBase(true);
        vqgraphicssimpletextitem->hoverLeaveEvent(event);
    } else {
        vqgraphicssimpletextitem->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnHoverLeaveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_KeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->keyPressEvent(event);
    } else {
        vqgraphicssimpletextitem->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseKeyPressEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_KeyPressEvent_IsBase(true);
        vqgraphicssimpletextitem->keyPressEvent(event);
    } else {
        vqgraphicssimpletextitem->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnKeyPressEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_KeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->keyReleaseEvent(event);
    } else {
        vqgraphicssimpletextitem->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseKeyReleaseEvent(QGraphicsSimpleTextItem* self, QKeyEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_KeyReleaseEvent_IsBase(true);
        vqgraphicssimpletextitem->keyReleaseEvent(event);
    } else {
        vqgraphicssimpletextitem->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnKeyReleaseEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->mousePressEvent(event);
    } else {
        vqgraphicssimpletextitem->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseMousePressEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MousePressEvent_IsBase(true);
        vqgraphicssimpletextitem->mousePressEvent(event);
    } else {
        vqgraphicssimpletextitem->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMousePressEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->mouseMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseMouseMoveEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseMoveEvent_IsBase(true);
        vqgraphicssimpletextitem->mouseMoveEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseMoveEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->mouseReleaseEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseMouseReleaseEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseReleaseEvent_IsBase(true);
        vqgraphicssimpletextitem->mouseReleaseEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseReleaseEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_MouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseDoubleClickEvent_IsBase(true);
        vqgraphicssimpletextitem->mouseDoubleClickEvent(event);
    } else {
        vqgraphicssimpletextitem->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnMouseDoubleClickEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_WheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->wheelEvent(event);
    } else {
        vqgraphicssimpletextitem->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseWheelEvent(QGraphicsSimpleTextItem* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_WheelEvent_IsBase(true);
        vqgraphicssimpletextitem->wheelEvent(event);
    } else {
        vqgraphicssimpletextitem->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnWheelEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_InputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->inputMethodEvent(event);
    } else {
        vqgraphicssimpletextitem->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseInputMethodEvent(QGraphicsSimpleTextItem* self, QInputMethodEvent* event) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_InputMethodEvent_IsBase(true);
        vqgraphicssimpletextitem->inputMethodEvent(event);
    } else {
        vqgraphicssimpletextitem->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnInputMethodEvent(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSimpleTextItem_InputMethodQuery(const QGraphicsSimpleTextItem* self, int query) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        return new QVariant(vqgraphicssimpletextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_QBaseInputMethodQuery(const QGraphicsSimpleTextItem* self, int query) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicssimpletextitem->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnInputMethodQuery(const QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = const_cast<VirtualQGraphicsSimpleTextItem*>(dynamic_cast<const VirtualQGraphicsSimpleTextItem*>(self))) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsSimpleTextItem_ItemChange(QGraphicsSimpleTextItem* self, int change, QVariant* value) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        return new QVariant(vqgraphicssimpletextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsSimpleTextItem_QBaseItemChange(QGraphicsSimpleTextItem* self, int change, QVariant* value) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_ItemChange_IsBase(true);
        return new QVariant(vqgraphicssimpletextitem->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnItemChange(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_UpdateMicroFocus(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->updateMicroFocus();
    } else {
        vqgraphicssimpletextitem->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseUpdateMicroFocus(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_UpdateMicroFocus_IsBase(true);
        vqgraphicssimpletextitem->updateMicroFocus();
    } else {
        vqgraphicssimpletextitem->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnUpdateMicroFocus(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_AddToIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->addToIndex();
    } else {
        vqgraphicssimpletextitem->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseAddToIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_AddToIndex_IsBase(true);
        vqgraphicssimpletextitem->addToIndex();
    } else {
        vqgraphicssimpletextitem->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnAddToIndex(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_RemoveFromIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->removeFromIndex();
    } else {
        vqgraphicssimpletextitem->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBaseRemoveFromIndex(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_RemoveFromIndex_IsBase(true);
        vqgraphicssimpletextitem->removeFromIndex();
    } else {
        vqgraphicssimpletextitem->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnRemoveFromIndex(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsSimpleTextItem_PrepareGeometryChange(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->prepareGeometryChange();
    } else {
        vqgraphicssimpletextitem->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsSimpleTextItem_QBasePrepareGeometryChange(QGraphicsSimpleTextItem* self) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_PrepareGeometryChange_IsBase(true);
        vqgraphicssimpletextitem->prepareGeometryChange();
    } else {
        vqgraphicssimpletextitem->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsSimpleTextItem_OnPrepareGeometryChange(QGraphicsSimpleTextItem* self, intptr_t slot) {
    if (auto* vqgraphicssimpletextitem = dynamic_cast<VirtualQGraphicsSimpleTextItem*>(self)) {
        vqgraphicssimpletextitem->setQGraphicsSimpleTextItem_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsSimpleTextItem::QGraphicsSimpleTextItem_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsSimpleTextItem_Delete(QGraphicsSimpleTextItem* self) {
    delete self;
}

QGraphicsItemGroup* QGraphicsItemGroup_new() {
    return new VirtualQGraphicsItemGroup();
}

QGraphicsItemGroup* QGraphicsItemGroup_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsItemGroup(parent);
}

void QGraphicsItemGroup_AddToGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
    self->addToGroup(item);
}

void QGraphicsItemGroup_RemoveFromGroup(QGraphicsItemGroup* self, QGraphicsItem* item) {
    self->removeFromGroup(item);
}

// Derived class handler implementation
QRectF* QGraphicsItemGroup_BoundingRect(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return new QRectF(vqgraphicsitemgroup->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsItemGroup_QBaseBoundingRect(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicsitemgroup->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnBoundingRect(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_Paint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->paint(painter, option, widget);
    } else {
        vqgraphicsitemgroup->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBasePaint(QGraphicsItemGroup* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Paint_IsBase(true);
        vqgraphicsitemgroup->paint(painter, option, widget);
    } else {
        vqgraphicsitemgroup->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnPaint(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Paint_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_IsObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->isObscuredBy(item);
    } else {
        return vqgraphicsitemgroup->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseIsObscuredBy(const QGraphicsItemGroup* self, QGraphicsItem* item) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_IsObscuredBy_IsBase(true);
        return vqgraphicsitemgroup->isObscuredBy(item);
    } else {
        return vqgraphicsitemgroup->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnIsObscuredBy(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsItemGroup_OpaqueArea(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return new QPainterPath(vqgraphicsitemgroup->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsItemGroup_QBaseOpaqueArea(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicsitemgroup->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnOpaqueArea(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsItemGroup_Type(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->type();
    } else {
        return vqgraphicsitemgroup->type();
    }
}

// Base class handler implementation
int QGraphicsItemGroup_QBaseType(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Type_IsBase(true);
        return vqgraphicsitemgroup->type();
    } else {
        return vqgraphicsitemgroup->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnType(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Type_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_Advance(QGraphicsItemGroup* self, int phase) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->advance(static_cast<int>(phase));
    } else {
        vqgraphicsitemgroup->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseAdvance(QGraphicsItemGroup* self, int phase) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Advance_IsBase(true);
        vqgraphicsitemgroup->advance(static_cast<int>(phase));
    } else {
        vqgraphicsitemgroup->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnAdvance(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Advance_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsItemGroup_Shape(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return new QPainterPath(vqgraphicsitemgroup->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsItemGroup_QBaseShape(const QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Shape_IsBase(true);
        return new QPainterPath(vqgraphicsitemgroup->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnShape(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Shape_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_Contains(const QGraphicsItemGroup* self, QPointF* point) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->contains(*point);
    } else {
        return vqgraphicsitemgroup->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseContains(const QGraphicsItemGroup* self, QPointF* point) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Contains_IsBase(true);
        return vqgraphicsitemgroup->contains(*point);
    } else {
        return vqgraphicsitemgroup->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnContains(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Contains_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_CollidesWithItem(const QGraphicsItemGroup* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitemgroup->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseCollidesWithItem(const QGraphicsItemGroup* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_CollidesWithItem_IsBase(true);
        return vqgraphicsitemgroup->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitemgroup->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnCollidesWithItem(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_CollidesWithPath(const QGraphicsItemGroup* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitemgroup->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseCollidesWithPath(const QGraphicsItemGroup* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_CollidesWithPath_IsBase(true);
        return vqgraphicsitemgroup->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicsitemgroup->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnCollidesWithPath(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_SceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        return vqgraphicsitemgroup->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsitemgroup->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseSceneEventFilter(QGraphicsItemGroup* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SceneEventFilter_IsBase(true);
        return vqgraphicsitemgroup->sceneEventFilter(watched, event);
    } else {
        return vqgraphicsitemgroup->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSceneEventFilter(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_SceneEvent(QGraphicsItemGroup* self, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        return vqgraphicsitemgroup->sceneEvent(event);
    } else {
        return vqgraphicsitemgroup->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseSceneEvent(QGraphicsItemGroup* self, QEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SceneEvent_IsBase(true);
        return vqgraphicsitemgroup->sceneEvent(event);
    } else {
        return vqgraphicsitemgroup->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSceneEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_ContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->contextMenuEvent(event);
    } else {
        vqgraphicsitemgroup->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseContextMenuEvent(QGraphicsItemGroup* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_ContextMenuEvent_IsBase(true);
        vqgraphicsitemgroup->contextMenuEvent(event);
    } else {
        vqgraphicsitemgroup->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnContextMenuEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_DragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->dragEnterEvent(event);
    } else {
        vqgraphicsitemgroup->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseDragEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragEnterEvent_IsBase(true);
        vqgraphicsitemgroup->dragEnterEvent(event);
    } else {
        vqgraphicsitemgroup->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragEnterEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_DragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->dragLeaveEvent(event);
    } else {
        vqgraphicsitemgroup->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseDragLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragLeaveEvent_IsBase(true);
        vqgraphicsitemgroup->dragLeaveEvent(event);
    } else {
        vqgraphicsitemgroup->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragLeaveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_DragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->dragMoveEvent(event);
    } else {
        vqgraphicsitemgroup->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseDragMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragMoveEvent_IsBase(true);
        vqgraphicsitemgroup->dragMoveEvent(event);
    } else {
        vqgraphicsitemgroup->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDragMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_DropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->dropEvent(event);
    } else {
        vqgraphicsitemgroup->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseDropEvent(QGraphicsItemGroup* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DropEvent_IsBase(true);
        vqgraphicsitemgroup->dropEvent(event);
    } else {
        vqgraphicsitemgroup->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnDropEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_FocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->focusInEvent(event);
    } else {
        vqgraphicsitemgroup->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseFocusInEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_FocusInEvent_IsBase(true);
        vqgraphicsitemgroup->focusInEvent(event);
    } else {
        vqgraphicsitemgroup->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnFocusInEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_FocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->focusOutEvent(event);
    } else {
        vqgraphicsitemgroup->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseFocusOutEvent(QGraphicsItemGroup* self, QFocusEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_FocusOutEvent_IsBase(true);
        vqgraphicsitemgroup->focusOutEvent(event);
    } else {
        vqgraphicsitemgroup->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnFocusOutEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->hoverEnterEvent(event);
    } else {
        vqgraphicsitemgroup->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseHoverEnterEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverEnterEvent_IsBase(true);
        vqgraphicsitemgroup->hoverEnterEvent(event);
    } else {
        vqgraphicsitemgroup->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverEnterEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->hoverMoveEvent(event);
    } else {
        vqgraphicsitemgroup->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseHoverMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverMoveEvent_IsBase(true);
        vqgraphicsitemgroup->hoverMoveEvent(event);
    } else {
        vqgraphicsitemgroup->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_HoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->hoverLeaveEvent(event);
    } else {
        vqgraphicsitemgroup->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseHoverLeaveEvent(QGraphicsItemGroup* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverLeaveEvent_IsBase(true);
        vqgraphicsitemgroup->hoverLeaveEvent(event);
    } else {
        vqgraphicsitemgroup->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnHoverLeaveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_KeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->keyPressEvent(event);
    } else {
        vqgraphicsitemgroup->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseKeyPressEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_KeyPressEvent_IsBase(true);
        vqgraphicsitemgroup->keyPressEvent(event);
    } else {
        vqgraphicsitemgroup->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnKeyPressEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_KeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->keyReleaseEvent(event);
    } else {
        vqgraphicsitemgroup->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseKeyReleaseEvent(QGraphicsItemGroup* self, QKeyEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_KeyReleaseEvent_IsBase(true);
        vqgraphicsitemgroup->keyReleaseEvent(event);
    } else {
        vqgraphicsitemgroup->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnKeyReleaseEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_MousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->mousePressEvent(event);
    } else {
        vqgraphicsitemgroup->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseMousePressEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MousePressEvent_IsBase(true);
        vqgraphicsitemgroup->mousePressEvent(event);
    } else {
        vqgraphicsitemgroup->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMousePressEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->mouseMoveEvent(event);
    } else {
        vqgraphicsitemgroup->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseMouseMoveEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseMoveEvent_IsBase(true);
        vqgraphicsitemgroup->mouseMoveEvent(event);
    } else {
        vqgraphicsitemgroup->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseMoveEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->mouseReleaseEvent(event);
    } else {
        vqgraphicsitemgroup->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseMouseReleaseEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseReleaseEvent_IsBase(true);
        vqgraphicsitemgroup->mouseReleaseEvent(event);
    } else {
        vqgraphicsitemgroup->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseReleaseEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_MouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsitemgroup->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseMouseDoubleClickEvent(QGraphicsItemGroup* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsitemgroup->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsitemgroup->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnMouseDoubleClickEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_WheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->wheelEvent(event);
    } else {
        vqgraphicsitemgroup->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseWheelEvent(QGraphicsItemGroup* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_WheelEvent_IsBase(true);
        vqgraphicsitemgroup->wheelEvent(event);
    } else {
        vqgraphicsitemgroup->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnWheelEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_InputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->inputMethodEvent(event);
    } else {
        vqgraphicsitemgroup->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseInputMethodEvent(QGraphicsItemGroup* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_InputMethodEvent_IsBase(true);
        vqgraphicsitemgroup->inputMethodEvent(event);
    } else {
        vqgraphicsitemgroup->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnInputMethodEvent(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_InputMethodQuery(const QGraphicsItemGroup* self, int query) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return new QVariant(vqgraphicsitemgroup->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_QBaseInputMethodQuery(const QGraphicsItemGroup* self, int query) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsitemgroup->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnInputMethodQuery(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_ItemChange(QGraphicsItemGroup* self, int change, QVariant* value) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        return new QVariant(vqgraphicsitemgroup->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_QBaseItemChange(QGraphicsItemGroup* self, int change, QVariant* value) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_ItemChange_IsBase(true);
        return new QVariant(vqgraphicsitemgroup->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnItemChange(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsItemGroup_SupportsExtension(const QGraphicsItemGroup* self, int extension) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return vqgraphicsitemgroup->supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    } else {
        return vqgraphicsitemgroup->supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsItemGroup_QBaseSupportsExtension(const QGraphicsItemGroup* self, int extension) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SupportsExtension_IsBase(true);
        return vqgraphicsitemgroup->supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    } else {
        return vqgraphicsitemgroup->supportsExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSupportsExtension(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_SetExtension(QGraphicsItemGroup* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    } else {
        vqgraphicsitemgroup->setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseSetExtension(QGraphicsItemGroup* self, int extension, QVariant* variant) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SetExtension_IsBase(true);
        vqgraphicsitemgroup->setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    } else {
        vqgraphicsitemgroup->setExtension(static_cast<VirtualQGraphicsItemGroup::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnSetExtension(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsItemGroup_Extension(const QGraphicsItemGroup* self, QVariant* variant) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        return new QVariant(vqgraphicsitemgroup->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsItemGroup_QBaseExtension(const QGraphicsItemGroup* self, QVariant* variant) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Extension_IsBase(true);
        return new QVariant(vqgraphicsitemgroup->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnExtension(const QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = const_cast<VirtualQGraphicsItemGroup*>(dynamic_cast<const VirtualQGraphicsItemGroup*>(self))) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_Extension_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_UpdateMicroFocus(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->updateMicroFocus();
    } else {
        vqgraphicsitemgroup->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseUpdateMicroFocus(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_UpdateMicroFocus_IsBase(true);
        vqgraphicsitemgroup->updateMicroFocus();
    } else {
        vqgraphicsitemgroup->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnUpdateMicroFocus(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_AddToIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->addToIndex();
    } else {
        vqgraphicsitemgroup->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseAddToIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_AddToIndex_IsBase(true);
        vqgraphicsitemgroup->addToIndex();
    } else {
        vqgraphicsitemgroup->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnAddToIndex(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_RemoveFromIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->removeFromIndex();
    } else {
        vqgraphicsitemgroup->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBaseRemoveFromIndex(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_RemoveFromIndex_IsBase(true);
        vqgraphicsitemgroup->removeFromIndex();
    } else {
        vqgraphicsitemgroup->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnRemoveFromIndex(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsItemGroup_PrepareGeometryChange(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->prepareGeometryChange();
    } else {
        vqgraphicsitemgroup->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsItemGroup_QBasePrepareGeometryChange(QGraphicsItemGroup* self) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_PrepareGeometryChange_IsBase(true);
        vqgraphicsitemgroup->prepareGeometryChange();
    } else {
        vqgraphicsitemgroup->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsItemGroup_OnPrepareGeometryChange(QGraphicsItemGroup* self, intptr_t slot) {
    if (auto* vqgraphicsitemgroup = dynamic_cast<VirtualQGraphicsItemGroup*>(self)) {
        vqgraphicsitemgroup->setQGraphicsItemGroup_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsItemGroup::QGraphicsItemGroup_PrepareGeometryChange_Callback>(slot));
    }
}

void QGraphicsItemGroup_Delete(QGraphicsItemGroup* self) {
    delete self;
}
