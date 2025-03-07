#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPaintDevice>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTextObjectInterface>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qabstracttextdocumentlayout.h>
#include "libqabstracttextdocumentlayout.hpp"
#include "libqabstracttextdocumentlayout.hxx"

QAbstractTextDocumentLayout* QAbstractTextDocumentLayout_new(QTextDocument* doc) {
    return new VirtualQAbstractTextDocumentLayout(doc);
}

QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractTextDocumentLayout_Metacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractTextDocumentLayout_OnMetacall(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Metacall_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractTextDocumentLayout_QBaseMetacall(QAbstractTextDocumentLayout* self, int param1, int param2, void** param3) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Metacall_IsBase(true);
        return vqabstracttextdocumentlayout->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractTextDocumentLayout_Tr(const char* s) {
    QString _ret = QAbstractTextDocumentLayout::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
    QString _ret = self->anchorAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
    QString _ret = self->imageAt(*pos);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
    return new QTextFormat(self->formatAt(*pos));
}

QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos) {
    return new QTextBlock(self->blockWithMarkerAt(*pos));
}

void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device) {
    self->setPaintDevice(device);
}

QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self) {
    return self->paintDevice();
}

QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self) {
    return self->document();
}

void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
    self->registerHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType) {
    self->unregisterHandler(static_cast<int>(objectType));
}

QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType) {
    return self->handlerForObject(static_cast<int>(objectType));
}

void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self) {
    self->update();
}

void QAbstractTextDocumentLayout_Connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::update, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block) {
    self->updateBlock(*block);
}

void QAbstractTextDocumentLayout_Connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QTextBlock*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QTextBlock*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::updateBlock, [self, slotFunc](const QTextBlock& block) {
        const QTextBlock& block_ret = block;
        // Cast returned reference into pointer
        QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize) {
    self->documentSizeChanged(*newSize);
}

void QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QSizeF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QSizeF*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::documentSizeChanged, [self, slotFunc](const QSizeF& newSize) {
        const QSizeF& newSize_ret = newSize;
        // Cast returned reference into pointer
        QSizeF* sigval1 = const_cast<QSizeF*>(&newSize_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages) {
    self->pageCountChanged(static_cast<int>(newPages));
}

void QAbstractTextDocumentLayout_Connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, int) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, int)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::pageCountChanged, [self, slotFunc](int newPages) {
        int sigval1 = newPages;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractTextDocumentLayout::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractTextDocumentLayout::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component) {
    self->unregisterHandler(static_cast<int>(objectType), component);
}

void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, QRectF* param1) {
    self->update(*param1);
}

void QAbstractTextDocumentLayout_Connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot) {
    void (*slotFunc)(QAbstractTextDocumentLayout*, QRectF*) = reinterpret_cast<void (*)(QAbstractTextDocumentLayout*, QRectF*)>(slot);
    QAbstractTextDocumentLayout::connect(self, &QAbstractTextDocumentLayout::update, [self, slotFunc](const QRectF& param1) {
        const QRectF& param1_ret = param1;
        // Cast returned reference into pointer
        QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->draw(painter, *context);
    } else {
        vqabstracttextdocumentlayout->draw(painter, *context);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseDraw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Draw_IsBase(true);
        vqabstracttextdocumentlayout->draw(painter, *context);
    } else {
        vqabstracttextdocumentlayout->draw(painter, *context);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDraw(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Draw_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Draw_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
    } else {
        return vqabstracttextdocumentlayout->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
    }
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBaseHitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_HitTest_IsBase(true);
        return vqabstracttextdocumentlayout->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
    } else {
        return vqabstracttextdocumentlayout->hitTest(*point, static_cast<Qt::HitTestAccuracy>(accuracy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnHitTest(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_HitTest_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_HitTest_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->pageCount();
    } else {
        return vqabstracttextdocumentlayout->pageCount();
    }
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBasePageCount(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PageCount_IsBase(true);
        return vqabstracttextdocumentlayout->pageCount();
    } else {
        return vqabstracttextdocumentlayout->pageCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnPageCount(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PageCount_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_PageCount_Callback>(slot));
    }
}

// Derived class handler implementation
QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return new QSizeF(vqabstracttextdocumentlayout->documentSize());
    } else {
        return new QSizeF(self->documentSize());
    }
}

// Base class handler implementation
QSizeF* QAbstractTextDocumentLayout_QBaseDocumentSize(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentSize_IsBase(true);
        return new QSizeF(vqabstracttextdocumentlayout->documentSize());
    } else {
        return new QSizeF(self->documentSize());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDocumentSize(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentSize_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DocumentSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return new QRectF(vqabstracttextdocumentlayout->frameBoundingRect(frame));
    } else {
        return new QRectF(self->frameBoundingRect(frame));
    }
}

// Base class handler implementation
QRectF* QAbstractTextDocumentLayout_QBaseFrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FrameBoundingRect_IsBase(true);
        return new QRectF(vqabstracttextdocumentlayout->frameBoundingRect(frame));
    } else {
        return new QRectF(self->frameBoundingRect(frame));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnFrameBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FrameBoundingRect_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_FrameBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return new QRectF(vqabstracttextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(self->blockBoundingRect(*block));
    }
}

// Base class handler implementation
QRectF* QAbstractTextDocumentLayout_QBaseBlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_BlockBoundingRect_IsBase(true);
        return new QRectF(vqabstracttextdocumentlayout->blockBoundingRect(*block));
    } else {
        return new QRectF(self->blockBoundingRect(*block));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnBlockBoundingRect(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_BlockBoundingRect_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_BlockBoundingRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
    } else {
        vqabstracttextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseDocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentChanged_IsBase(true);
        vqabstracttextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
    } else {
        vqabstracttextdocumentlayout->documentChanged(static_cast<int>(from), static_cast<int>(charsRemoved), static_cast<int>(charsAdded));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDocumentChanged(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DocumentChanged_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DocumentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ResizeInlineObject_IsBase(true);
        vqabstracttextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnResizeInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ResizeInlineObject_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ResizeInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBasePositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PositionInlineObject_IsBase(true);
        vqabstracttextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->positionInlineObject(*item, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnPositionInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_PositionInlineObject_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_PositionInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseDrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DrawInlineObject_IsBase(true);
        vqabstracttextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    } else {
        vqabstracttextdocumentlayout->drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDrawInlineObject(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DrawInlineObject_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DrawInlineObject_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTextDocumentLayout_Event(QAbstractTextDocumentLayout* self, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return vqabstracttextdocumentlayout->event(event);
    } else {
        return vqabstracttextdocumentlayout->event(event);
    }
}

// Base class handler implementation
bool QAbstractTextDocumentLayout_QBaseEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Event_IsBase(true);
        return vqabstracttextdocumentlayout->event(event);
    } else {
        return vqabstracttextdocumentlayout->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Event_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTextDocumentLayout_EventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return vqabstracttextdocumentlayout->eventFilter(watched, event);
    } else {
        return vqabstracttextdocumentlayout->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractTextDocumentLayout_QBaseEventFilter(QAbstractTextDocumentLayout* self, QObject* watched, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_EventFilter_IsBase(true);
        return vqabstracttextdocumentlayout->eventFilter(watched, event);
    } else {
        return vqabstracttextdocumentlayout->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnEventFilter(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_EventFilter_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_TimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->timerEvent(event);
    } else {
        vqabstracttextdocumentlayout->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseTimerEvent(QAbstractTextDocumentLayout* self, QTimerEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_TimerEvent_IsBase(true);
        vqabstracttextdocumentlayout->timerEvent(event);
    } else {
        vqabstracttextdocumentlayout->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnTimerEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_ChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->childEvent(event);
    } else {
        vqabstracttextdocumentlayout->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseChildEvent(QAbstractTextDocumentLayout* self, QChildEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ChildEvent_IsBase(true);
        vqabstracttextdocumentlayout->childEvent(event);
    } else {
        vqabstracttextdocumentlayout->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnChildEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_CustomEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->customEvent(event);
    } else {
        vqabstracttextdocumentlayout->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseCustomEvent(QAbstractTextDocumentLayout* self, QEvent* event) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_CustomEvent_IsBase(true);
        vqabstracttextdocumentlayout->customEvent(event);
    } else {
        vqabstracttextdocumentlayout->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnCustomEvent(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_ConnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->connectNotify(*signal);
    } else {
        vqabstracttextdocumentlayout->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseConnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ConnectNotify_IsBase(true);
        vqabstracttextdocumentlayout->connectNotify(*signal);
    } else {
        vqabstracttextdocumentlayout->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnConnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractTextDocumentLayout_DisconnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->disconnectNotify(*signal);
    } else {
        vqabstracttextdocumentlayout->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractTextDocumentLayout_QBaseDisconnectNotify(QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DisconnectNotify_IsBase(true);
        vqabstracttextdocumentlayout->disconnectNotify(*signal);
    } else {
        vqabstracttextdocumentlayout->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnDisconnectNotify(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTextDocumentLayout_FormatIndex(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return vqabstracttextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return vqabstracttextdocumentlayout->formatIndex(static_cast<int>(pos));
    }
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBaseFormatIndex(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FormatIndex_IsBase(true);
        return vqabstracttextdocumentlayout->formatIndex(static_cast<int>(pos));
    } else {
        return vqabstracttextdocumentlayout->formatIndex(static_cast<int>(pos));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnFormatIndex(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_FormatIndex_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_FormatIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* QAbstractTextDocumentLayout_Format(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        return new QTextCharFormat(vqabstracttextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* QAbstractTextDocumentLayout_QBaseFormat(QAbstractTextDocumentLayout* self, int pos) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Format_IsBase(true);
        return new QTextCharFormat(vqabstracttextdocumentlayout->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnFormat(QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = dynamic_cast<VirtualQAbstractTextDocumentLayout*>(self)) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Format_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractTextDocumentLayout_Sender(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->sender();
    } else {
        return vqabstracttextdocumentlayout->sender();
    }
}

// Base class handler implementation
QObject* QAbstractTextDocumentLayout_QBaseSender(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Sender_IsBase(true);
        return vqabstracttextdocumentlayout->sender();
    } else {
        return vqabstracttextdocumentlayout->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnSender(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Sender_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTextDocumentLayout_SenderSignalIndex(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->senderSignalIndex();
    } else {
        return vqabstracttextdocumentlayout->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBaseSenderSignalIndex(const QAbstractTextDocumentLayout* self) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_SenderSignalIndex_IsBase(true);
        return vqabstracttextdocumentlayout->senderSignalIndex();
    } else {
        return vqabstracttextdocumentlayout->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnSenderSignalIndex(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractTextDocumentLayout_Receivers(const QAbstractTextDocumentLayout* self, const char* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->receivers(signal);
    } else {
        return vqabstracttextdocumentlayout->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractTextDocumentLayout_QBaseReceivers(const QAbstractTextDocumentLayout* self, const char* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Receivers_IsBase(true);
        return vqabstracttextdocumentlayout->receivers(signal);
    } else {
        return vqabstracttextdocumentlayout->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnReceivers(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_Receivers_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractTextDocumentLayout_IsSignalConnected(const QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        return vqabstracttextdocumentlayout->isSignalConnected(*signal);
    } else {
        return vqabstracttextdocumentlayout->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractTextDocumentLayout_QBaseIsSignalConnected(const QAbstractTextDocumentLayout* self, QMetaMethod* signal) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_IsSignalConnected_IsBase(true);
        return vqabstracttextdocumentlayout->isSignalConnected(*signal);
    } else {
        return vqabstracttextdocumentlayout->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractTextDocumentLayout_OnIsSignalConnected(const QAbstractTextDocumentLayout* self, intptr_t slot) {
    if (auto* vqabstracttextdocumentlayout = const_cast<VirtualQAbstractTextDocumentLayout*>(dynamic_cast<const VirtualQAbstractTextDocumentLayout*>(self))) {
        vqabstracttextdocumentlayout->setQAbstractTextDocumentLayout_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractTextDocumentLayout::QAbstractTextDocumentLayout_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self) {
    delete self;
}

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format) {
    return new QSizeF(self->intrinsicSize(doc, static_cast<int>(posInDocument), *format));
}

void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format) {
    self->drawObject(painter, *rect, doc, static_cast<int>(posInDocument), *format);
}

void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, QTextObjectInterface* param1) {
    self->operator=(*param1);
}

void QTextObjectInterface_Delete(QTextObjectInterface* self) {
    delete self;
}

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1) {
    return new QAbstractTextDocumentLayout::Selection(*param1);
}

void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1) {
    self->operator=(*param1);
}

void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self) {
    delete self;
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new() {
    return new QAbstractTextDocumentLayout::PaintContext();
}

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1) {
    return new QAbstractTextDocumentLayout::PaintContext(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1) {
    self->operator=(*param1);
}

void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self) {
    delete self;
}
