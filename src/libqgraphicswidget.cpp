#include <QAction>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCursor>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsTransform>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QRegion>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "libqgraphicswidget.hpp"
#include "libqgraphicswidget.hxx"

QGraphicsWidget* QGraphicsWidget_new() {
    return new VirtualQGraphicsWidget();
}

QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent) {
    return new VirtualQGraphicsWidget(parent);
}

QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags) {
    return new VirtualQGraphicsWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QMetaObject* QGraphicsWidget_MetaObject(const QGraphicsWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsWidget_Metacast(QGraphicsWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsWidget_Metacall(QGraphicsWidget* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsWidget_OnMetacall(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Metacall_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsWidget_QBaseMetacall(QGraphicsWidget* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Metacall_IsBase(true);
        return vqgraphicswidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsWidget_Tr(const char* s) {
    QString _ret = QGraphicsWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QGraphicsLayout* QGraphicsWidget_Layout(const QGraphicsWidget* self) {
    return self->layout();
}

void QGraphicsWidget_SetLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
    self->setLayout(layout);
}

void QGraphicsWidget_AdjustSize(QGraphicsWidget* self) {
    self->adjustSize();
}

int QGraphicsWidget_LayoutDirection(const QGraphicsWidget* self) {
    return static_cast<int>(self->layoutDirection());
}

void QGraphicsWidget_SetLayoutDirection(QGraphicsWidget* self, int direction) {
    self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_UnsetLayoutDirection(QGraphicsWidget* self) {
    self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_Style(const QGraphicsWidget* self) {
    return self->style();
}

void QGraphicsWidget_SetStyle(QGraphicsWidget* self, QStyle* style) {
    self->setStyle(style);
}

QFont* QGraphicsWidget_Font(const QGraphicsWidget* self) {
    return new QFont(self->font());
}

void QGraphicsWidget_SetFont(QGraphicsWidget* self, QFont* font) {
    self->setFont(*font);
}

QPalette* QGraphicsWidget_Palette(const QGraphicsWidget* self) {
    return new QPalette(self->palette());
}

void QGraphicsWidget_SetPalette(QGraphicsWidget* self, QPalette* palette) {
    self->setPalette(*palette);
}

bool QGraphicsWidget_AutoFillBackground(const QGraphicsWidget* self) {
    return self->autoFillBackground();
}

void QGraphicsWidget_SetAutoFillBackground(QGraphicsWidget* self, bool enabled) {
    self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_Resize(QGraphicsWidget* self, QSizeF* size) {
    self->resize(*size);
}

void QGraphicsWidget_Resize2(QGraphicsWidget* self, double w, double h) {
    self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_Size(const QGraphicsWidget* self) {
    return new QSizeF(self->size());
}

void QGraphicsWidget_SetGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
    self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_Rect(const QGraphicsWidget* self) {
    return new QRectF(self->rect());
}

void QGraphicsWidget_SetContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
    self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
    self->setContentsMargins(*margins);
}

void QGraphicsWidget_SetWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
    self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_SetWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
    self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_GetWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_UnsetWindowFrameMargins(QGraphicsWidget* self) {
    self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_WindowFrameGeometry(const QGraphicsWidget* self) {
    return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_WindowFrameRect(const QGraphicsWidget* self) {
    return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_WindowFlags(const QGraphicsWidget* self) {
    return static_cast<int>(self->windowFlags());
}

int QGraphicsWidget_WindowType(const QGraphicsWidget* self) {
    return static_cast<int>(self->windowType());
}

void QGraphicsWidget_SetWindowFlags(QGraphicsWidget* self, int wFlags) {
    self->setWindowFlags(static_cast<Qt::WindowFlags>(wFlags));
}

bool QGraphicsWidget_IsActiveWindow(const QGraphicsWidget* self) {
    return self->isActiveWindow();
}

void QGraphicsWidget_SetWindowTitle(QGraphicsWidget* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setWindowTitle(title_QString);
}

libqt_string QGraphicsWidget_WindowTitle(const QGraphicsWidget* self) {
    QString _ret = self->windowTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QGraphicsWidget_FocusPolicy(const QGraphicsWidget* self) {
    return static_cast<int>(self->focusPolicy());
}

void QGraphicsWidget_SetFocusPolicy(QGraphicsWidget* self, int policy) {
    self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_SetTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
    QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_FocusWidget(const QGraphicsWidget* self) {
    return self->focusWidget();
}

int QGraphicsWidget_GrabShortcut(QGraphicsWidget* self, QKeySequence* sequence) {
    return self->grabShortcut(*sequence);
}

void QGraphicsWidget_ReleaseShortcut(QGraphicsWidget* self, int id) {
    self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutEnabled(QGraphicsWidget* self, int id) {
    self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_SetShortcutAutoRepeat(QGraphicsWidget* self, int id) {
    self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_AddAction(QGraphicsWidget* self, QAction* action) {
    self->addAction(action);
}

void QGraphicsWidget_AddActions(QGraphicsWidget* self, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data.ptr);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->addActions(actions_QList);
}

void QGraphicsWidget_InsertActions(QGraphicsWidget* self, QAction* before, libqt_list /* of QAction* */ actions) {
    QList<QAction*> actions_QList;
    actions_QList.reserve(actions.len);
    QAction** actions_arr = static_cast<QAction**>(actions.data.ptr);
    for (size_t i = 0; i < actions.len; ++i) {
        actions_QList.push_back(actions_arr[i]);
    }
    self->insertActions(before, actions_QList);
}

void QGraphicsWidget_InsertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
    self->insertAction(before, action);
}

void QGraphicsWidget_RemoveAction(QGraphicsWidget* self, QAction* action) {
    self->removeAction(action);
}

libqt_list /* of QAction* */ QGraphicsWidget_Actions(const QGraphicsWidget* self) {
    QList<QAction*> _ret = self->actions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QGraphicsWidget_SetAttribute(QGraphicsWidget* self, int attribute) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_TestAttribute(const QGraphicsWidget* self, int attribute) {
    return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

void QGraphicsWidget_GeometryChanged(QGraphicsWidget* self) {
    self->geometryChanged();
}

void QGraphicsWidget_Connect_GeometryChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self, &QGraphicsWidget::geometryChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGraphicsWidget_LayoutChanged(QGraphicsWidget* self) {
    self->layoutChanged();
}

void QGraphicsWidget_Connect_LayoutChanged(QGraphicsWidget* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsWidget*) = reinterpret_cast<void (*)(QGraphicsWidget*)>(slot);
    QGraphicsWidget::connect(self, &QGraphicsWidget::layoutChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

bool QGraphicsWidget_Close(QGraphicsWidget* self) {
    return self->close();
}

libqt_string QGraphicsWidget_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QGraphicsWidget_GrabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context) {
    return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_SetShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
    self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
    self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_SetAttribute2(QGraphicsWidget* self, int attribute, bool on) {
    self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

// Derived class handler implementation
void QGraphicsWidget_SetGeometry(QGraphicsWidget* self, QRectF* rect) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setGeometry(*rect);
    } else {
        vqgraphicswidget->setGeometry(*rect);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseSetGeometry(QGraphicsWidget* self, QRectF* rect) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetGeometry_IsBase(true);
        vqgraphicswidget->setGeometry(*rect);
    } else {
        vqgraphicswidget->setGeometry(*rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetGeometry(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetGeometry_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_GetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicswidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseGetContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_GetContentsMargins_IsBase(true);
        vqgraphicswidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    } else {
        vqgraphicswidget->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGetContentsMargins(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_GetContentsMargins_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GetContentsMargins_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsWidget_Type(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->type();
    } else {
        return vqgraphicswidget->type();
    }
}

// Base class handler implementation
int QGraphicsWidget_QBaseType(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Type_IsBase(true);
        return vqgraphicswidget->type();
    } else {
        return vqgraphicswidget->type();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnType(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Type_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Type_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_Paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->paint(painter, option, widget);
    } else {
        vqgraphicswidget->paint(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBasePaint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Paint_IsBase(true);
        vqgraphicswidget->paint(painter, option, widget);
    } else {
        vqgraphicswidget->paint(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaint(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Paint_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_PaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->paintWindowFrame(painter, option, widget);
    } else {
        vqgraphicswidget->paintWindowFrame(painter, option, widget);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBasePaintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PaintWindowFrame_IsBase(true);
        vqgraphicswidget->paintWindowFrame(painter, option, widget);
    } else {
        vqgraphicswidget->paintWindowFrame(painter, option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPaintWindowFrame(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PaintWindowFrame_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PaintWindowFrame_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QGraphicsWidget_BoundingRect(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QRectF(vqgraphicswidget->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Base class handler implementation
QRectF* QGraphicsWidget_QBaseBoundingRect(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_BoundingRect_IsBase(true);
        return new QRectF(vqgraphicswidget->boundingRect());
    } else {
        return new QRectF(self->boundingRect());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnBoundingRect(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_BoundingRect_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_BoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsWidget_Shape(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QPainterPath(vqgraphicswidget->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsWidget_QBaseShape(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Shape_IsBase(true);
        return new QPainterPath(vqgraphicswidget->shape());
    } else {
        return new QPainterPath(self->shape());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShape(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Shape_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Shape_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_InitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->initStyleOption(option);
    } else {
        vqgraphicswidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseInitStyleOption(const QGraphicsWidget* self, QStyleOption* option) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_InitStyleOption_IsBase(true);
        vqgraphicswidget->initStyleOption(option);
    } else {
        vqgraphicswidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInitStyleOption(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QGraphicsWidget_SizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QSizeF(vqgraphicswidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Base class handler implementation
QSizeF* QGraphicsWidget_QBaseSizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SizeHint_IsBase(true);
        return new QSizeF(vqgraphicswidget->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSizeHint(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_UpdateGeometry(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->updateGeometry();
    } else {
        vqgraphicswidget->updateGeometry();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseUpdateGeometry(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UpdateGeometry_IsBase(true);
        vqgraphicswidget->updateGeometry();
    } else {
        vqgraphicswidget->updateGeometry();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUpdateGeometry(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UpdateGeometry_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UpdateGeometry_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsWidget_ItemChange(QGraphicsWidget* self, int change, QVariant* value) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return new QVariant(vqgraphicswidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBaseItemChange(QGraphicsWidget* self, int change, QVariant* value) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ItemChange_IsBase(true);
        return new QVariant(vqgraphicswidget->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnItemChange(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ItemChange_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ItemChange_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsWidget_PropertyChange(QGraphicsWidget* self, libqt_string propertyName, QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return new QVariant(vqgraphicswidget->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBasePropertyChange(QGraphicsWidget* self, libqt_string propertyName, QVariant* value) {
    QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PropertyChange_IsBase(true);
        return new QVariant(vqgraphicswidget->propertyChange(propertyName_QString, *value));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPropertyChange(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PropertyChange_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PropertyChange_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_SceneEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->sceneEvent(event);
    } else {
        return vqgraphicswidget->sceneEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseSceneEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SceneEvent_IsBase(true);
        return vqgraphicswidget->sceneEvent(event);
    } else {
        return vqgraphicswidget->sceneEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSceneEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SceneEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SceneEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_WindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->windowFrameEvent(e);
    } else {
        return vqgraphicswidget->windowFrameEvent(e);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseWindowFrameEvent(QGraphicsWidget* self, QEvent* e) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_WindowFrameEvent_IsBase(true);
        return vqgraphicswidget->windowFrameEvent(e);
    } else {
        return vqgraphicswidget->windowFrameEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_WindowFrameEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsWidget_WindowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return static_cast<int>(vqgraphicswidget->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(vqgraphicswidget->windowFrameSectionAt(*pos));
    }
}

// Base class handler implementation
int QGraphicsWidget_QBaseWindowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_WindowFrameSectionAt_IsBase(true);
        return static_cast<int>(vqgraphicswidget->windowFrameSectionAt(*pos));
    } else {
        return static_cast<int>(vqgraphicswidget->windowFrameSectionAt(*pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWindowFrameSectionAt(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_WindowFrameSectionAt_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WindowFrameSectionAt_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_Event(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->event(event);
    } else {
        return vqgraphicswidget->event(event);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Event_IsBase(true);
        return vqgraphicswidget->event(event);
    } else {
        return vqgraphicswidget->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Event_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ChangeEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->changeEvent(event);
    } else {
        vqgraphicswidget->changeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseChangeEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ChangeEvent_IsBase(true);
        vqgraphicswidget->changeEvent(event);
    } else {
        vqgraphicswidget->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnChangeEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_CloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->closeEvent(event);
    } else {
        vqgraphicswidget->closeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseCloseEvent(QGraphicsWidget* self, QCloseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_CloseEvent_IsBase(true);
        vqgraphicswidget->closeEvent(event);
    } else {
        vqgraphicswidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCloseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_CloseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_FocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->focusInEvent(event);
    } else {
        vqgraphicswidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseFocusInEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusInEvent_IsBase(true);
        vqgraphicswidget->focusInEvent(event);
    } else {
        vqgraphicswidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusInEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_FocusNextPrevChild(QGraphicsWidget* self, bool next) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->focusNextPrevChild(next);
    } else {
        return vqgraphicswidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseFocusNextPrevChild(QGraphicsWidget* self, bool next) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusNextPrevChild_IsBase(true);
        return vqgraphicswidget->focusNextPrevChild(next);
    } else {
        return vqgraphicswidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusNextPrevChild(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_FocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->focusOutEvent(event);
    } else {
        vqgraphicswidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseFocusOutEvent(QGraphicsWidget* self, QFocusEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusOutEvent_IsBase(true);
        vqgraphicswidget->focusOutEvent(event);
    } else {
        vqgraphicswidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnFocusOutEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_HideEvent(QGraphicsWidget* self, QHideEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->hideEvent(event);
    } else {
        vqgraphicswidget->hideEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseHideEvent(QGraphicsWidget* self, QHideEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HideEvent_IsBase(true);
        vqgraphicswidget->hideEvent(event);
    } else {
        vqgraphicswidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHideEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_MoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->moveEvent(event);
    } else {
        vqgraphicswidget->moveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MoveEvent_IsBase(true);
        vqgraphicswidget->moveEvent(event);
    } else {
        vqgraphicswidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_PolishEvent(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->polishEvent();
    } else {
        vqgraphicswidget->polishEvent();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBasePolishEvent(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PolishEvent_IsBase(true);
        vqgraphicswidget->polishEvent();
    } else {
        vqgraphicswidget->polishEvent();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPolishEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PolishEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PolishEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->resizeEvent(event);
    } else {
        vqgraphicswidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseResizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ResizeEvent_IsBase(true);
        vqgraphicswidget->resizeEvent(event);
    } else {
        vqgraphicswidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnResizeEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ShowEvent(QGraphicsWidget* self, QShowEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->showEvent(event);
    } else {
        vqgraphicswidget->showEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseShowEvent(QGraphicsWidget* self, QShowEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ShowEvent_IsBase(true);
        vqgraphicswidget->showEvent(event);
    } else {
        vqgraphicswidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnShowEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_HoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->hoverMoveEvent(event);
    } else {
        vqgraphicswidget->hoverMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseHoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverMoveEvent_IsBase(true);
        vqgraphicswidget->hoverMoveEvent(event);
    } else {
        vqgraphicswidget->hoverMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_HoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->hoverLeaveEvent(event);
    } else {
        vqgraphicswidget->hoverLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseHoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverLeaveEvent_IsBase(true);
        vqgraphicswidget->hoverLeaveEvent(event);
    } else {
        vqgraphicswidget->hoverLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverLeaveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_GrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->grabMouseEvent(event);
    } else {
        vqgraphicswidget->grabMouseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseGrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_GrabMouseEvent_IsBase(true);
        vqgraphicswidget->grabMouseEvent(event);
    } else {
        vqgraphicswidget->grabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_GrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_UngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->ungrabMouseEvent(event);
    } else {
        vqgraphicswidget->ungrabMouseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseUngrabMouseEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UngrabMouseEvent_IsBase(true);
        vqgraphicswidget->ungrabMouseEvent(event);
    } else {
        vqgraphicswidget->ungrabMouseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabMouseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UngrabMouseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_GrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->grabKeyboardEvent(event);
    } else {
        vqgraphicswidget->grabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseGrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_GrabKeyboardEvent_IsBase(true);
        vqgraphicswidget->grabKeyboardEvent(event);
    } else {
        vqgraphicswidget->grabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnGrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_GrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_GrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_UngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->ungrabKeyboardEvent(event);
    } else {
        vqgraphicswidget->ungrabKeyboardEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseUngrabKeyboardEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UngrabKeyboardEvent_IsBase(true);
        vqgraphicswidget->ungrabKeyboardEvent(event);
    } else {
        vqgraphicswidget->ungrabKeyboardEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUngrabKeyboardEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UngrabKeyboardEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UngrabKeyboardEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_EventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->eventFilter(watched, event);
    } else {
        return vqgraphicswidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseEventFilter(QGraphicsWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_EventFilter_IsBase(true);
        return vqgraphicswidget->eventFilter(watched, event);
    } else {
        return vqgraphicswidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnEventFilter(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_TimerEvent(QGraphicsWidget* self, QTimerEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->timerEvent(event);
    } else {
        vqgraphicswidget->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseTimerEvent(QGraphicsWidget* self, QTimerEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_TimerEvent_IsBase(true);
        vqgraphicswidget->timerEvent(event);
    } else {
        vqgraphicswidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnTimerEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ChildEvent(QGraphicsWidget* self, QChildEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->childEvent(event);
    } else {
        vqgraphicswidget->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseChildEvent(QGraphicsWidget* self, QChildEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ChildEvent_IsBase(true);
        vqgraphicswidget->childEvent(event);
    } else {
        vqgraphicswidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnChildEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_CustomEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->customEvent(event);
    } else {
        vqgraphicswidget->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseCustomEvent(QGraphicsWidget* self, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_CustomEvent_IsBase(true);
        vqgraphicswidget->customEvent(event);
    } else {
        vqgraphicswidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCustomEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ConnectNotify(QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->connectNotify(*signal);
    } else {
        vqgraphicswidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseConnectNotify(QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ConnectNotify_IsBase(true);
        vqgraphicswidget->connectNotify(*signal);
    } else {
        vqgraphicswidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnConnectNotify(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_DisconnectNotify(QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->disconnectNotify(*signal);
    } else {
        vqgraphicswidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseDisconnectNotify(QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DisconnectNotify_IsBase(true);
        vqgraphicswidget->disconnectNotify(*signal);
    } else {
        vqgraphicswidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDisconnectNotify(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_Advance(QGraphicsWidget* self, int phase) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->advance(static_cast<int>(phase));
    } else {
        vqgraphicswidget->advance(static_cast<int>(phase));
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseAdvance(QGraphicsWidget* self, int phase) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Advance_IsBase(true);
        vqgraphicswidget->advance(static_cast<int>(phase));
    } else {
        vqgraphicswidget->advance(static_cast<int>(phase));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnAdvance(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_Advance_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Advance_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_Contains(const QGraphicsWidget* self, QPointF* point) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->contains(*point);
    } else {
        return vqgraphicswidget->contains(*point);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseContains(const QGraphicsWidget* self, QPointF* point) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Contains_IsBase(true);
        return vqgraphicswidget->contains(*point);
    } else {
        return vqgraphicswidget->contains(*point);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnContains(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Contains_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Contains_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_CollidesWithItem(const QGraphicsWidget* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicswidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseCollidesWithItem(const QGraphicsWidget* self, QGraphicsItem* other, int mode) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_CollidesWithItem_IsBase(true);
        return vqgraphicswidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicswidget->collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCollidesWithItem(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_CollidesWithItem_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CollidesWithItem_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_CollidesWithPath(const QGraphicsWidget* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicswidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseCollidesWithPath(const QGraphicsWidget* self, QPainterPath* path, int mode) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_CollidesWithPath_IsBase(true);
        return vqgraphicswidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    } else {
        return vqgraphicswidget->collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnCollidesWithPath(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_CollidesWithPath_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_CollidesWithPath_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_IsObscuredBy(const QGraphicsWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->isObscuredBy(item);
    } else {
        return vqgraphicswidget->isObscuredBy(item);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseIsObscuredBy(const QGraphicsWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsObscuredBy_IsBase(true);
        return vqgraphicswidget->isObscuredBy(item);
    } else {
        return vqgraphicswidget->isObscuredBy(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnIsObscuredBy(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsObscuredBy_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_IsObscuredBy_Callback>(slot));
    }
}

// Derived class handler implementation
QPainterPath* QGraphicsWidget_OpaqueArea(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QPainterPath(vqgraphicswidget->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Base class handler implementation
QPainterPath* QGraphicsWidget_QBaseOpaqueArea(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_OpaqueArea_IsBase(true);
        return new QPainterPath(vqgraphicswidget->opaqueArea());
    } else {
        return new QPainterPath(self->opaqueArea());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnOpaqueArea(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_OpaqueArea_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_OpaqueArea_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_SceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        return vqgraphicswidget->sceneEventFilter(watched, event);
    } else {
        return vqgraphicswidget->sceneEventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseSceneEventFilter(QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SceneEventFilter_IsBase(true);
        return vqgraphicswidget->sceneEventFilter(watched, event);
    } else {
        return vqgraphicswidget->sceneEventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSceneEventFilter(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SceneEventFilter_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SceneEventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_ContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->contextMenuEvent(event);
    } else {
        vqgraphicswidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseContextMenuEvent(QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ContextMenuEvent_IsBase(true);
        vqgraphicswidget->contextMenuEvent(event);
    } else {
        vqgraphicswidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnContextMenuEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_DragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->dragEnterEvent(event);
    } else {
        vqgraphicswidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseDragEnterEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragEnterEvent_IsBase(true);
        vqgraphicswidget->dragEnterEvent(event);
    } else {
        vqgraphicswidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragEnterEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_DragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->dragLeaveEvent(event);
    } else {
        vqgraphicswidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseDragLeaveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragLeaveEvent_IsBase(true);
        vqgraphicswidget->dragLeaveEvent(event);
    } else {
        vqgraphicswidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragLeaveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_DragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->dragMoveEvent(event);
    } else {
        vqgraphicswidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseDragMoveEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragMoveEvent_IsBase(true);
        vqgraphicswidget->dragMoveEvent(event);
    } else {
        vqgraphicswidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDragMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_DropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->dropEvent(event);
    } else {
        vqgraphicswidget->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseDropEvent(QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DropEvent_IsBase(true);
        vqgraphicswidget->dropEvent(event);
    } else {
        vqgraphicswidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnDropEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_HoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->hoverEnterEvent(event);
    } else {
        vqgraphicswidget->hoverEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseHoverEnterEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverEnterEvent_IsBase(true);
        vqgraphicswidget->hoverEnterEvent(event);
    } else {
        vqgraphicswidget->hoverEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnHoverEnterEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_HoverEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_HoverEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_KeyPressEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->keyPressEvent(event);
    } else {
        vqgraphicswidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseKeyPressEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_KeyPressEvent_IsBase(true);
        vqgraphicswidget->keyPressEvent(event);
    } else {
        vqgraphicswidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnKeyPressEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_KeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->keyReleaseEvent(event);
    } else {
        vqgraphicswidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseKeyReleaseEvent(QGraphicsWidget* self, QKeyEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_KeyReleaseEvent_IsBase(true);
        vqgraphicswidget->keyReleaseEvent(event);
    } else {
        vqgraphicswidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnKeyReleaseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_MousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->mousePressEvent(event);
    } else {
        vqgraphicswidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseMousePressEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MousePressEvent_IsBase(true);
        vqgraphicswidget->mousePressEvent(event);
    } else {
        vqgraphicswidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMousePressEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_MouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->mouseMoveEvent(event);
    } else {
        vqgraphicswidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseMouseMoveEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseMoveEvent_IsBase(true);
        vqgraphicswidget->mouseMoveEvent(event);
    } else {
        vqgraphicswidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseMoveEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_MouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->mouseReleaseEvent(event);
    } else {
        vqgraphicswidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseMouseReleaseEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseReleaseEvent_IsBase(true);
        vqgraphicswidget->mouseReleaseEvent(event);
    } else {
        vqgraphicswidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseReleaseEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_MouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->mouseDoubleClickEvent(event);
    } else {
        vqgraphicswidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseMouseDoubleClickEvent(QGraphicsWidget* self, QGraphicsSceneMouseEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseDoubleClickEvent_IsBase(true);
        vqgraphicswidget->mouseDoubleClickEvent(event);
    } else {
        vqgraphicswidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnMouseDoubleClickEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_WheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->wheelEvent(event);
    } else {
        vqgraphicswidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseWheelEvent(QGraphicsWidget* self, QGraphicsSceneWheelEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_WheelEvent_IsBase(true);
        vqgraphicswidget->wheelEvent(event);
    } else {
        vqgraphicswidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnWheelEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_InputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->inputMethodEvent(event);
    } else {
        vqgraphicswidget->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseInputMethodEvent(QGraphicsWidget* self, QInputMethodEvent* event) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_InputMethodEvent_IsBase(true);
        vqgraphicswidget->inputMethodEvent(event);
    } else {
        vqgraphicswidget->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInputMethodEvent(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsWidget_InputMethodQuery(const QGraphicsWidget* self, int query) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QVariant(vqgraphicswidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBaseInputMethodQuery(const QGraphicsWidget* self, int query) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicswidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnInputMethodQuery(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_SupportsExtension(const QGraphicsWidget* self, int extension) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    } else {
        return vqgraphicswidget->supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseSupportsExtension(const QGraphicsWidget* self, int extension) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SupportsExtension_IsBase(true);
        return vqgraphicswidget->supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    } else {
        return vqgraphicswidget->supportsExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSupportsExtension(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SupportsExtension_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SupportsExtension_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_SetExtension(QGraphicsWidget* self, int extension, QVariant* variant) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    } else {
        vqgraphicswidget->setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseSetExtension(QGraphicsWidget* self, int extension, QVariant* variant) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetExtension_IsBase(true);
        vqgraphicswidget->setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    } else {
        vqgraphicswidget->setExtension(static_cast<VirtualQGraphicsWidget::Extension>(extension), *variant);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetExtension(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetExtension_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetExtension_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsWidget_Extension(const QGraphicsWidget* self, QVariant* variant) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return new QVariant(vqgraphicswidget->extension(*variant));
    }
    return {};
}

// Base class handler implementation
QVariant* QGraphicsWidget_QBaseExtension(const QGraphicsWidget* self, QVariant* variant) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Extension_IsBase(true);
        return new QVariant(vqgraphicswidget->extension(*variant));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnExtension(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Extension_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Extension_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_IsEmpty(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->isEmpty();
    } else {
        return vqgraphicswidget->isEmpty();
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseIsEmpty(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsEmpty_IsBase(true);
        return vqgraphicswidget->isEmpty();
    } else {
        return vqgraphicswidget->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnIsEmpty(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsEmpty_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_UpdateMicroFocus(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->updateMicroFocus();
    } else {
        vqgraphicswidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseUpdateMicroFocus(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UpdateMicroFocus_IsBase(true);
        vqgraphicswidget->updateMicroFocus();
    } else {
        vqgraphicswidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnUpdateMicroFocus(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsWidget_Sender(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->sender();
    } else {
        return vqgraphicswidget->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsWidget_QBaseSender(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Sender_IsBase(true);
        return vqgraphicswidget->sender();
    } else {
        return vqgraphicswidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSender(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Sender_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsWidget_SenderSignalIndex(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->senderSignalIndex();
    } else {
        return vqgraphicswidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsWidget_QBaseSenderSignalIndex(const QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SenderSignalIndex_IsBase(true);
        return vqgraphicswidget->senderSignalIndex();
    } else {
        return vqgraphicswidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSenderSignalIndex(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsWidget_Receivers(const QGraphicsWidget* self, const char* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->receivers(signal);
    } else {
        return vqgraphicswidget->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsWidget_QBaseReceivers(const QGraphicsWidget* self, const char* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Receivers_IsBase(true);
        return vqgraphicswidget->receivers(signal);
    } else {
        return vqgraphicswidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnReceivers(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_Receivers_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsWidget_IsSignalConnected(const QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        return vqgraphicswidget->isSignalConnected(*signal);
    } else {
        return vqgraphicswidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsWidget_QBaseIsSignalConnected(const QGraphicsWidget* self, QMetaMethod* signal) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsSignalConnected_IsBase(true);
        return vqgraphicswidget->isSignalConnected(*signal);
    } else {
        return vqgraphicswidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnIsSignalConnected(const QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = const_cast<VirtualQGraphicsWidget*>(dynamic_cast<const VirtualQGraphicsWidget*>(self))) {
        vqgraphicswidget->setQGraphicsWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_AddToIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->addToIndex();
    } else {
        vqgraphicswidget->addToIndex();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseAddToIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_AddToIndex_IsBase(true);
        vqgraphicswidget->addToIndex();
    } else {
        vqgraphicswidget->addToIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnAddToIndex(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_AddToIndex_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_AddToIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_RemoveFromIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->removeFromIndex();
    } else {
        vqgraphicswidget->removeFromIndex();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseRemoveFromIndex(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_RemoveFromIndex_IsBase(true);
        vqgraphicswidget->removeFromIndex();
    } else {
        vqgraphicswidget->removeFromIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnRemoveFromIndex(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_RemoveFromIndex_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_RemoveFromIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_PrepareGeometryChange(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->prepareGeometryChange();
    } else {
        vqgraphicswidget->prepareGeometryChange();
    }
}

// Base class handler implementation
void QGraphicsWidget_QBasePrepareGeometryChange(QGraphicsWidget* self) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PrepareGeometryChange_IsBase(true);
        vqgraphicswidget->prepareGeometryChange();
    } else {
        vqgraphicswidget->prepareGeometryChange();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnPrepareGeometryChange(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_PrepareGeometryChange_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_PrepareGeometryChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_SetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setGraphicsItem(item);
    } else {
        vqgraphicswidget->setGraphicsItem(item);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseSetGraphicsItem(QGraphicsWidget* self, QGraphicsItem* item) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetGraphicsItem_IsBase(true);
        vqgraphicswidget->setGraphicsItem(item);
    } else {
        vqgraphicswidget->setGraphicsItem(item);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetGraphicsItem(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetGraphicsItem_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetGraphicsItem_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsWidget_SetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicswidget->setOwnedByLayout(ownedByLayout);
    }
}

// Base class handler implementation
void QGraphicsWidget_QBaseSetOwnedByLayout(QGraphicsWidget* self, bool ownedByLayout) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetOwnedByLayout_IsBase(true);
        vqgraphicswidget->setOwnedByLayout(ownedByLayout);
    } else {
        vqgraphicswidget->setOwnedByLayout(ownedByLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsWidget_OnSetOwnedByLayout(QGraphicsWidget* self, intptr_t slot) {
    if (auto* vqgraphicswidget = dynamic_cast<VirtualQGraphicsWidget*>(self)) {
        vqgraphicswidget->setQGraphicsWidget_SetOwnedByLayout_Callback(reinterpret_cast<VirtualQGraphicsWidget::QGraphicsWidget_SetOwnedByLayout_Callback>(slot));
    }
}

void QGraphicsWidget_Delete(QGraphicsWidget* self) {
    delete self;
}
