#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QFrame>
#include <QGraphicsEffect>
#include <QGraphicsItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qgraphicsview.h>
#include "libqgraphicsview.hpp"
#include "libqgraphicsview.hxx"

QGraphicsView* QGraphicsView_new(QWidget* parent) {
    return new VirtualQGraphicsView(parent);
}

QGraphicsView* QGraphicsView_new2() {
    return new VirtualQGraphicsView();
}

QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene) {
    return new VirtualQGraphicsView(scene);
}

QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent) {
    return new VirtualQGraphicsView(scene, parent);
}

QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGraphicsView_Metacall(QGraphicsView* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGraphicsView_OnMetacall(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Metacall_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGraphicsView_QBaseMetacall(QGraphicsView* self, int param1, int param2, void** param3) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Metacall_IsBase(true);
        return vqgraphicsview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGraphicsView_Tr(const char* s) {
    QString _ret = QGraphicsView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QGraphicsView_RenderHints(const QGraphicsView* self) {
    return static_cast<int>(self->renderHints());
}

void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint) {
    self->setRenderHint(static_cast<QPainter::RenderHint>(hint));
}

void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints) {
    self->setRenderHints(static_cast<QPainter::RenderHints>(hints));
}

int QGraphicsView_Alignment(const QGraphicsView* self) {
    return static_cast<int>(self->alignment());
}

void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QGraphicsView_TransformationAnchor(const QGraphicsView* self) {
    return static_cast<int>(self->transformationAnchor());
}

void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor) {
    self->setTransformationAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ResizeAnchor(const QGraphicsView* self) {
    return static_cast<int>(self->resizeAnchor());
}

void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor) {
    self->setResizeAnchor(static_cast<QGraphicsView::ViewportAnchor>(anchor));
}

int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self) {
    return static_cast<int>(self->viewportUpdateMode());
}

void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode) {
    self->setViewportUpdateMode(static_cast<QGraphicsView::ViewportUpdateMode>(mode));
}

int QGraphicsView_OptimizationFlags(const QGraphicsView* self) {
    return static_cast<int>(self->optimizationFlags());
}

void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag) {
    self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag));
}

void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags) {
    self->setOptimizationFlags(static_cast<QGraphicsView::OptimizationFlags>(flags));
}

int QGraphicsView_DragMode(const QGraphicsView* self) {
    return static_cast<int>(self->dragMode());
}

void QGraphicsView_SetDragMode(QGraphicsView* self, int mode) {
    self->setDragMode(static_cast<QGraphicsView::DragMode>(mode));
}

int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self) {
    return static_cast<int>(self->rubberBandSelectionMode());
}

void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode) {
    self->setRubberBandSelectionMode(static_cast<Qt::ItemSelectionMode>(mode));
}

QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self) {
    return new QRect(self->rubberBandRect());
}

int QGraphicsView_CacheMode(const QGraphicsView* self) {
    return static_cast<int>(self->cacheMode());
}

void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode) {
    self->setCacheMode(static_cast<QGraphicsView::CacheMode>(mode));
}

void QGraphicsView_ResetCachedContent(QGraphicsView* self) {
    self->resetCachedContent();
}

bool QGraphicsView_IsInteractive(const QGraphicsView* self) {
    return self->isInteractive();
}

void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed) {
    self->setInteractive(allowed);
}

QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self) {
    return self->scene();
}

void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene) {
    self->setScene(scene);
}

QRectF* QGraphicsView_SceneRect(const QGraphicsView* self) {
    return new QRectF(self->sceneRect());
}

void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect) {
    self->setSceneRect(*rect);
}

void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h) {
    self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QTransform* QGraphicsView_Transform(const QGraphicsView* self) {
    return new QTransform(self->transform());
}

QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self) {
    return new QTransform(self->viewportTransform());
}

bool QGraphicsView_IsTransformed(const QGraphicsView* self) {
    return self->isTransformed();
}

void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix) {
    self->setTransform(*matrix);
}

void QGraphicsView_ResetTransform(QGraphicsView* self) {
    self->resetTransform();
}

void QGraphicsView_Rotate(QGraphicsView* self, double angle) {
    self->rotate(static_cast<qreal>(angle));
}

void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy) {
    self->scale(static_cast<qreal>(sx), static_cast<qreal>(sy));
}

void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv) {
    self->shear(static_cast<qreal>(sh), static_cast<qreal>(sv));
}

void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy) {
    self->translate(static_cast<qreal>(dx), static_cast<qreal>(dy));
}

void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos) {
    self->centerOn(*pos);
}

void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y) {
    self->centerOn(static_cast<qreal>(x), static_cast<qreal>(y));
}

void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item) {
    self->centerOn(item);
}

void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect) {
    self->ensureVisible(*rect);
}

void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item) {
    self->ensureVisible(item);
}

void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect) {
    self->fitInView(*rect);
}

void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h) {
    self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item) {
    self->fitInView(item);
}

void QGraphicsView_Render(QGraphicsView* self, QPainter* painter) {
    self->render(painter);
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items(const QGraphicsView* self) {
    QList<QGraphicsItem*> _ret = self->items();
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos) {
    QList<QGraphicsItem*> _ret = self->items(*pos);
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items2(const QGraphicsView* self, int x, int y) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y));
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect) {
    QList<QGraphicsItem*> _ret = self->items(*rect);
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path) {
    QList<QGraphicsItem*> _ret = self->items(*path);
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

QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos) {
    return self->itemAt(*pos);
}

QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point) {
    return new QPointF(self->mapToScene(*point));
}

QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
    return new QPainterPath(self->mapToScene(*path));
}

QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point) {
    return new QPoint(self->mapFromScene(*point));
}

QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path) {
    return new QPainterPath(self->mapFromScene(*path));
}

QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y) {
    return new QPointF(self->mapToScene(static_cast<int>(x), static_cast<int>(y)));
}

QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y) {
    return new QPoint(self->mapFromScene(static_cast<qreal>(x), static_cast<qreal>(y)));
}

QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self) {
    return new QBrush(self->backgroundBrush());
}

void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush) {
    self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self) {
    return new QBrush(self->foregroundBrush());
}

void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush) {
    self->setForegroundBrush(*brush);
}

void QGraphicsView_UpdateScene(QGraphicsView* self, libqt_list /* of QRectF* */ rects) {
    QList<QRectF> rects_QList;
    rects_QList.reserve(rects.len);
    QRectF** rects_arr = static_cast<QRectF**>(rects.data.ptr);
    for (size_t i = 0; i < rects.len; ++i) {
        rects_QList.push_back(*(rects_arr[i]));
    }
    self->updateScene(rects_QList);
}

void QGraphicsView_InvalidateScene(QGraphicsView* self) {
    self->invalidateScene();
}

void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect) {
    self->updateSceneRect(*rect);
}

void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint) {
    self->rubberBandChanged(*viewportRect, *fromScenePoint, *toScenePoint);
}

void QGraphicsView_Connect_RubberBandChanged(QGraphicsView* self, intptr_t slot) {
    void (*slotFunc)(QGraphicsView*, QRect*, QPointF*, QPointF*) = reinterpret_cast<void (*)(QGraphicsView*, QRect*, QPointF*, QPointF*)>(slot);
    QGraphicsView::connect(self, &QGraphicsView::rubberBandChanged, [self, slotFunc](QRect viewportRect, QPointF fromScenePoint, QPointF toScenePoint) {
        QRect* sigval1 = new QRect(viewportRect);
        QPointF* sigval2 = new QPointF(fromScenePoint);
        QPointF* sigval3 = new QPointF(toScenePoint);
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

libqt_string QGraphicsView_Tr2(const char* s, const char* c) {
    QString _ret = QGraphicsView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGraphicsView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGraphicsView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled) {
    self->setRenderHint(static_cast<QPainter::RenderHint>(hint), enabled);
}

void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled) {
    self->setOptimizationFlag(static_cast<QGraphicsView::OptimizationFlag>(flag), enabled);
}

void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine) {
    self->setTransform(*matrix, combine);
}

void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin) {
    self->ensureVisible(*rect, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin) {
    self->ensureVisible(item, static_cast<int>(xmargin));
}

void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin) {
    self->ensureVisible(item, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode) {
    self->fitInView(*rect, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode) {
    self->fitInView(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode) {
    self->fitInView(item, static_cast<Qt::AspectRatioMode>(aspectRadioMode));
}

void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target) {
    self->render(painter, *target);
}

void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source) {
    self->render(painter, *target, *source);
}

void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode) {
    self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode) {
    QList<QGraphicsItem*> _ret = self->items(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::ItemSelectionMode>(mode));
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

libqt_list /* of QGraphicsItem* */ QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode) {
    QList<QGraphicsItem*> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
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

void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect) {
    self->invalidateScene(*rect);
}

void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers) {
    self->invalidateScene(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

// Derived class handler implementation
QSize* QGraphicsView_SizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return new QSize(vqgraphicsview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QGraphicsView_QBaseSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SizeHint_IsBase(true);
        return new QSize(vqgraphicsview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSizeHint(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return new QVariant(vqgraphicsview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QGraphicsView_QBaseInputMethodQuery(const QGraphicsView* self, int query) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InputMethodQuery_IsBase(true);
        return new QVariant(vqgraphicsview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodQuery(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InputMethodQuery_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setupViewport(widget);
    } else {
        vqgraphicsview->setupViewport(widget);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetupViewport(QGraphicsView* self, QWidget* widget) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetupViewport_IsBase(true);
        vqgraphicsview->setupViewport(widget);
    } else {
        vqgraphicsview->setupViewport(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetupViewport(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetupViewport_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->event(event);
    } else {
        return vqgraphicsview->event(event);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Event_IsBase(true);
        return vqgraphicsview->event(event);
    } else {
        return vqgraphicsview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Event_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->viewportEvent(event);
    } else {
        return vqgraphicsview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseViewportEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ViewportEvent_IsBase(true);
        return vqgraphicsview->viewportEvent(event);
    } else {
        return vqgraphicsview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ViewportEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->contextMenuEvent(event);
    } else {
        vqgraphicsview->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ContextMenuEvent_IsBase(true);
        vqgraphicsview->contextMenuEvent(event);
    } else {
        vqgraphicsview->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnContextMenuEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->dragEnterEvent(event);
    } else {
        vqgraphicsview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragEnterEvent(QGraphicsView* self, QDragEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragEnterEvent_IsBase(true);
        vqgraphicsview->dragEnterEvent(event);
    } else {
        vqgraphicsview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragEnterEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragEnterEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->dragLeaveEvent(event);
    } else {
        vqgraphicsview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragLeaveEvent_IsBase(true);
        vqgraphicsview->dragLeaveEvent(event);
    } else {
        vqgraphicsview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragLeaveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->dragMoveEvent(event);
    } else {
        vqgraphicsview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDragMoveEvent(QGraphicsView* self, QDragMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragMoveEvent_IsBase(true);
        vqgraphicsview->dragMoveEvent(event);
    } else {
        vqgraphicsview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDragMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DragMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->dropEvent(event);
    } else {
        vqgraphicsview->dropEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDropEvent(QGraphicsView* self, QDropEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DropEvent_IsBase(true);
        vqgraphicsview->dropEvent(event);
    } else {
        vqgraphicsview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDropEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DropEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->focusInEvent(event);
    } else {
        vqgraphicsview->focusInEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseFocusInEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusInEvent_IsBase(true);
        vqgraphicsview->focusInEvent(event);
    } else {
        vqgraphicsview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusInEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusInEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->focusNextPrevChild(next);
    } else {
        return vqgraphicsview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusNextPrevChild(QGraphicsView* self, bool next) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusNextPrevChild_IsBase(true);
        return vqgraphicsview->focusNextPrevChild(next);
    } else {
        return vqgraphicsview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextPrevChild(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->focusOutEvent(event);
    } else {
        vqgraphicsview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseFocusOutEvent(QGraphicsView* self, QFocusEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusOutEvent_IsBase(true);
        vqgraphicsview->focusOutEvent(event);
    } else {
        vqgraphicsview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusOutEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusOutEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->keyPressEvent(event);
    } else {
        vqgraphicsview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseKeyPressEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_KeyPressEvent_IsBase(true);
        vqgraphicsview->keyPressEvent(event);
    } else {
        vqgraphicsview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyPressEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_KeyPressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->keyReleaseEvent(event);
    } else {
        vqgraphicsview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseKeyReleaseEvent(QGraphicsView* self, QKeyEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_KeyReleaseEvent_IsBase(true);
        vqgraphicsview->keyReleaseEvent(event);
    } else {
        vqgraphicsview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnKeyReleaseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_IsBase(true);
        vqgraphicsview->mouseDoubleClickEvent(event);
    } else {
        vqgraphicsview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseDoubleClickEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->mousePressEvent(event);
    } else {
        vqgraphicsview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMousePressEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MousePressEvent_IsBase(true);
        vqgraphicsview->mousePressEvent(event);
    } else {
        vqgraphicsview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMousePressEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MousePressEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->mouseMoveEvent(event);
    } else {
        vqgraphicsview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseMoveEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseMoveEvent_IsBase(true);
        vqgraphicsview->mouseMoveEvent(event);
    } else {
        vqgraphicsview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->mouseReleaseEvent(event);
    } else {
        vqgraphicsview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMouseReleaseEvent(QGraphicsView* self, QMouseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseReleaseEvent_IsBase(true);
        vqgraphicsview->mouseReleaseEvent(event);
    } else {
        vqgraphicsview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMouseReleaseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->wheelEvent(event);
    } else {
        vqgraphicsview->wheelEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseWheelEvent(QGraphicsView* self, QWheelEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_WheelEvent_IsBase(true);
        vqgraphicsview->wheelEvent(event);
    } else {
        vqgraphicsview->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnWheelEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_WheelEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->paintEvent(event);
    } else {
        vqgraphicsview->paintEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBasePaintEvent(QGraphicsView* self, QPaintEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_PaintEvent_IsBase(true);
        vqgraphicsview->paintEvent(event);
    } else {
        vqgraphicsview->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_PaintEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->resizeEvent(event);
    } else {
        vqgraphicsview->resizeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseResizeEvent(QGraphicsView* self, QResizeEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ResizeEvent_IsBase(true);
        vqgraphicsview->resizeEvent(event);
    } else {
        vqgraphicsview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnResizeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ResizeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QGraphicsView_QBaseScrollContentsBy(QGraphicsView* self, int dx, int dy) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ScrollContentsBy_IsBase(true);
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqgraphicsview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnScrollContentsBy(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->showEvent(event);
    } else {
        vqgraphicsview->showEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseShowEvent(QGraphicsView* self, QShowEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ShowEvent_IsBase(true);
        vqgraphicsview->showEvent(event);
    } else {
        vqgraphicsview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnShowEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ShowEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->inputMethodEvent(event);
    } else {
        vqgraphicsview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInputMethodEvent(QGraphicsView* self, QInputMethodEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_InputMethodEvent_IsBase(true);
        vqgraphicsview->inputMethodEvent(event);
    } else {
        vqgraphicsview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInputMethodEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_InputMethodEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->drawBackground(painter, *rect);
    } else {
        vqgraphicsview->drawBackground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawBackground_IsBase(true);
        vqgraphicsview->drawBackground(painter, *rect);
    } else {
        vqgraphicsview->drawBackground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawBackground(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawBackground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawBackground_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->drawForeground(painter, *rect);
    } else {
        vqgraphicsview->drawForeground(painter, *rect);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawForeground_IsBase(true);
        vqgraphicsview->drawForeground(painter, *rect);
    } else {
        vqgraphicsview->drawForeground(painter, *rect);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawForeground(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawForeground_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawForeground_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGraphicsView_MinimumSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return new QSize(vqgraphicsview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QGraphicsView_QBaseMinimumSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_MinimumSizeHint_IsBase(true);
        return new QSize(vqgraphicsview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMinimumSizeHint(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_EventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->eventFilter(param1, param2);
    } else {
        return vqgraphicsview->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseEventFilter(QGraphicsView* self, QObject* param1, QEvent* param2) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_EventFilter_IsBase(true);
        return vqgraphicsview->eventFilter(param1, param2);
    } else {
        return vqgraphicsview->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEventFilter(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_EventFilter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGraphicsView_ViewportSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return new QSize(vqgraphicsview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QGraphicsView_QBaseViewportSizeHint(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_ViewportSizeHint_IsBase(true);
        return new QSize(vqgraphicsview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportSizeHint(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ChangeEvent(QGraphicsView* self, QEvent* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->changeEvent(param1);
    } else {
        vqgraphicsview->changeEvent(param1);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseChangeEvent(QGraphicsView* self, QEvent* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ChangeEvent_IsBase(true);
        vqgraphicsview->changeEvent(param1);
    } else {
        vqgraphicsview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChangeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ChangeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->initStyleOption(option);
    } else {
        vqgraphicsview->initStyleOption(option);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInitStyleOption(const QGraphicsView* self, QStyleOptionFrame* option) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InitStyleOption_IsBase(true);
        vqgraphicsview->initStyleOption(option);
    } else {
        vqgraphicsview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitStyleOption(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InitStyleOption_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_DevType(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->devType();
    } else {
        return vqgraphicsview->devType();
    }
}

// Base class handler implementation
int QGraphicsView_QBaseDevType(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_DevType_IsBase(true);
        return vqgraphicsview->devType();
    } else {
        return vqgraphicsview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDevType(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_DevType_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetVisible(QGraphicsView* self, bool visible) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setVisible(visible);
    } else {
        vqgraphicsview->setVisible(visible);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetVisible(QGraphicsView* self, bool visible) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetVisible_IsBase(true);
        vqgraphicsview->setVisible(visible);
    } else {
        vqgraphicsview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetVisible(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetVisible_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_HeightForWidth(const QGraphicsView* self, int param1) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGraphicsView_QBaseHeightForWidth(const QGraphicsView* self, int param1) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_HeightForWidth_IsBase(true);
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgraphicsview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHeightForWidth(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_HeightForWidth_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_HasHeightForWidth(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->hasHeightForWidth();
    } else {
        return vqgraphicsview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseHasHeightForWidth(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_HasHeightForWidth_IsBase(true);
        return vqgraphicsview->hasHeightForWidth();
    } else {
        return vqgraphicsview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHasHeightForWidth(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QGraphicsView_PaintEngine(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->paintEngine();
    } else {
        return vqgraphicsview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QGraphicsView_QBasePaintEngine(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_PaintEngine_IsBase(true);
        return vqgraphicsview->paintEngine();
    } else {
        return vqgraphicsview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnPaintEngine(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_PaintEngine_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_EnterEvent(QGraphicsView* self, QEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->enterEvent(event);
    } else {
        vqgraphicsview->enterEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseEnterEvent(QGraphicsView* self, QEnterEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_EnterEvent_IsBase(true);
        vqgraphicsview->enterEvent(event);
    } else {
        vqgraphicsview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnEnterEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_EnterEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_LeaveEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->leaveEvent(event);
    } else {
        vqgraphicsview->leaveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseLeaveEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_LeaveEvent_IsBase(true);
        vqgraphicsview->leaveEvent(event);
    } else {
        vqgraphicsview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnLeaveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_LeaveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_MoveEvent(QGraphicsView* self, QMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->moveEvent(event);
    } else {
        vqgraphicsview->moveEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseMoveEvent(QGraphicsView* self, QMoveEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MoveEvent_IsBase(true);
        vqgraphicsview->moveEvent(event);
    } else {
        vqgraphicsview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMoveEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_MoveEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_CloseEvent(QGraphicsView* self, QCloseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->closeEvent(event);
    } else {
        vqgraphicsview->closeEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCloseEvent(QGraphicsView* self, QCloseEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_CloseEvent_IsBase(true);
        vqgraphicsview->closeEvent(event);
    } else {
        vqgraphicsview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCloseEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_CloseEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_TabletEvent(QGraphicsView* self, QTabletEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->tabletEvent(event);
    } else {
        vqgraphicsview->tabletEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseTabletEvent(QGraphicsView* self, QTabletEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_TabletEvent_IsBase(true);
        vqgraphicsview->tabletEvent(event);
    } else {
        vqgraphicsview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTabletEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_TabletEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ActionEvent(QGraphicsView* self, QActionEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->actionEvent(event);
    } else {
        vqgraphicsview->actionEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseActionEvent(QGraphicsView* self, QActionEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ActionEvent_IsBase(true);
        vqgraphicsview->actionEvent(event);
    } else {
        vqgraphicsview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnActionEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ActionEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_HideEvent(QGraphicsView* self, QHideEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->hideEvent(event);
    } else {
        vqgraphicsview->hideEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseHideEvent(QGraphicsView* self, QHideEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_HideEvent_IsBase(true);
        vqgraphicsview->hideEvent(event);
    } else {
        vqgraphicsview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnHideEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_HideEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_NativeEvent(QGraphicsView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseNativeEvent(QGraphicsView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_NativeEvent_IsBase(true);
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqgraphicsview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnNativeEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_NativeEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_Metric(const QGraphicsView* self, int param1) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QGraphicsView_QBaseMetric(const QGraphicsView* self, int param1) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Metric_IsBase(true);
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqgraphicsview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnMetric(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Metric_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_InitPainter(const QGraphicsView* self, QPainter* painter) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->initPainter(painter);
    } else {
        vqgraphicsview->initPainter(painter);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseInitPainter(const QGraphicsView* self, QPainter* painter) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InitPainter_IsBase(true);
        vqgraphicsview->initPainter(painter);
    } else {
        vqgraphicsview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnInitPainter(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_InitPainter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QGraphicsView_Redirected(const QGraphicsView* self, QPoint* offset) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->redirected(offset);
    } else {
        return vqgraphicsview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QGraphicsView_QBaseRedirected(const QGraphicsView* self, QPoint* offset) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Redirected_IsBase(true);
        return vqgraphicsview->redirected(offset);
    } else {
        return vqgraphicsview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnRedirected(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Redirected_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QGraphicsView_SharedPainter(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->sharedPainter();
    } else {
        return vqgraphicsview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QGraphicsView_QBaseSharedPainter(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SharedPainter_IsBase(true);
        return vqgraphicsview->sharedPainter();
    } else {
        return vqgraphicsview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSharedPainter(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SharedPainter_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_TimerEvent(QGraphicsView* self, QTimerEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->timerEvent(event);
    } else {
        vqgraphicsview->timerEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseTimerEvent(QGraphicsView* self, QTimerEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_TimerEvent_IsBase(true);
        vqgraphicsview->timerEvent(event);
    } else {
        vqgraphicsview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnTimerEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_TimerEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ChildEvent(QGraphicsView* self, QChildEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->childEvent(event);
    } else {
        vqgraphicsview->childEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseChildEvent(QGraphicsView* self, QChildEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ChildEvent_IsBase(true);
        vqgraphicsview->childEvent(event);
    } else {
        vqgraphicsview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnChildEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ChildEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_CustomEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->customEvent(event);
    } else {
        vqgraphicsview->customEvent(event);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCustomEvent(QGraphicsView* self, QEvent* event) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_CustomEvent_IsBase(true);
        vqgraphicsview->customEvent(event);
    } else {
        vqgraphicsview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCustomEvent(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_CustomEvent_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_ConnectNotify(QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->connectNotify(*signal);
    } else {
        vqgraphicsview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseConnectNotify(QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ConnectNotify_IsBase(true);
        vqgraphicsview->connectNotify(*signal);
    } else {
        vqgraphicsview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnConnectNotify(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_ConnectNotify_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DisconnectNotify(QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->disconnectNotify(*signal);
    } else {
        vqgraphicsview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDisconnectNotify(QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DisconnectNotify_IsBase(true);
        vqgraphicsview->disconnectNotify(*signal);
    } else {
        vqgraphicsview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDisconnectNotify(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DisconnectNotify_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_SetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QGraphicsView_QBaseSetViewportMargins(QGraphicsView* self, int left, int top, int right, int bottom) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetViewportMargins_IsBase(true);
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqgraphicsview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSetViewportMargins(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_SetViewportMargins_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QGraphicsView_ViewportMargins(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return new QMargins(vqgraphicsview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QGraphicsView_QBaseViewportMargins(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_ViewportMargins_IsBase(true);
        return new QMargins(vqgraphicsview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnViewportMargins(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_ViewportMargins_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_DrawFrame(QGraphicsView* self, QPainter* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->drawFrame(param1);
    } else {
        vqgraphicsview->drawFrame(param1);
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDrawFrame(QGraphicsView* self, QPainter* param1) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawFrame_IsBase(true);
        vqgraphicsview->drawFrame(param1);
    } else {
        vqgraphicsview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDrawFrame(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_DrawFrame_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_UpdateMicroFocus(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->updateMicroFocus();
    } else {
        vqgraphicsview->updateMicroFocus();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseUpdateMicroFocus(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_UpdateMicroFocus_IsBase(true);
        vqgraphicsview->updateMicroFocus();
    } else {
        vqgraphicsview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnUpdateMicroFocus(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_Create(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->create();
    } else {
        vqgraphicsview->create();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseCreate(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Create_IsBase(true);
        vqgraphicsview->create();
    } else {
        vqgraphicsview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnCreate(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Create_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QGraphicsView_Destroy(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->destroy();
    } else {
        vqgraphicsview->destroy();
    }
}

// Base class handler implementation
void QGraphicsView_QBaseDestroy(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Destroy_IsBase(true);
        vqgraphicsview->destroy();
    } else {
        vqgraphicsview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnDestroy(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_Destroy_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusNextChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->focusNextChild();
    } else {
        return vqgraphicsview->focusNextChild();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusNextChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusNextChild_IsBase(true);
        return vqgraphicsview->focusNextChild();
    } else {
        return vqgraphicsview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusNextChild(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusNextChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_FocusPreviousChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        return vqgraphicsview->focusPreviousChild();
    } else {
        return vqgraphicsview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseFocusPreviousChild(QGraphicsView* self) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusPreviousChild_IsBase(true);
        return vqgraphicsview->focusPreviousChild();
    } else {
        return vqgraphicsview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnFocusPreviousChild(QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = dynamic_cast<VirtualQGraphicsView*>(self)) {
        vqgraphicsview->setQGraphicsView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGraphicsView_Sender(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->sender();
    } else {
        return vqgraphicsview->sender();
    }
}

// Base class handler implementation
QObject* QGraphicsView_QBaseSender(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Sender_IsBase(true);
        return vqgraphicsview->sender();
    } else {
        return vqgraphicsview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSender(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Sender_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_SenderSignalIndex(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->senderSignalIndex();
    } else {
        return vqgraphicsview->senderSignalIndex();
    }
}

// Base class handler implementation
int QGraphicsView_QBaseSenderSignalIndex(const QGraphicsView* self) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SenderSignalIndex_IsBase(true);
        return vqgraphicsview->senderSignalIndex();
    } else {
        return vqgraphicsview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnSenderSignalIndex(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGraphicsView_Receivers(const QGraphicsView* self, const char* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->receivers(signal);
    } else {
        return vqgraphicsview->receivers(signal);
    }
}

// Base class handler implementation
int QGraphicsView_QBaseReceivers(const QGraphicsView* self, const char* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Receivers_IsBase(true);
        return vqgraphicsview->receivers(signal);
    } else {
        return vqgraphicsview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnReceivers(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_Receivers_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGraphicsView_IsSignalConnected(const QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        return vqgraphicsview->isSignalConnected(*signal);
    } else {
        return vqgraphicsview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGraphicsView_QBaseIsSignalConnected(const QGraphicsView* self, QMetaMethod* signal) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_IsSignalConnected_IsBase(true);
        return vqgraphicsview->isSignalConnected(*signal);
    } else {
        return vqgraphicsview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGraphicsView_OnIsSignalConnected(const QGraphicsView* self, intptr_t slot) {
    if (auto* vqgraphicsview = const_cast<VirtualQGraphicsView*>(dynamic_cast<const VirtualQGraphicsView*>(self))) {
        vqgraphicsview->setQGraphicsView_IsSignalConnected_Callback(reinterpret_cast<VirtualQGraphicsView::QGraphicsView_IsSignalConnected_Callback>(slot));
    }
}

void QGraphicsView_Delete(QGraphicsView* self) {
    delete self;
}
