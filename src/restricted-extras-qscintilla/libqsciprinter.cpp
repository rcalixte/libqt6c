#include <QList>
#include <QMarginsF>
#include <QPageLayout>
#include <QPageRanges>
#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QPrintEngine>
#include <QPrinter>
#include <QRect>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsciprinter.h>
#include "libqsciprinter.hpp"
#include "libqsciprinter.hxx"

QsciPrinter* QsciPrinter_new() {
    return new VirtualQsciPrinter();
}

QsciPrinter* QsciPrinter_new2(int mode) {
    return new VirtualQsciPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

int QsciPrinter_Magnification(const QsciPrinter* self) {
    return self->magnification();
}

int QsciPrinter_WrapMode(const QsciPrinter* self) {
    return static_cast<int>(self->wrapMode());
}

// Derived class handler implementation
void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
    } else {
        vqsciprinter->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
    }
}

// Base class handler implementation
void QsciPrinter_QBaseFormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_FormatPage_IsBase(true);
        vqsciprinter->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
    } else {
        vqsciprinter->formatPage(*painter, drawing, *area, static_cast<int>(pagenr));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnFormatPage(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_FormatPage_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_FormatPage_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setMagnification(static_cast<int>(magnification));
    } else {
        vqsciprinter->setMagnification(static_cast<int>(magnification));
    }
}

// Base class handler implementation
void QsciPrinter_QBaseSetMagnification(QsciPrinter* self, int magnification) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetMagnification_IsBase(true);
        vqsciprinter->setMagnification(static_cast<int>(magnification));
    } else {
        vqsciprinter->setMagnification(static_cast<int>(magnification));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetMagnification(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetMagnification_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetMagnification_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
    } else {
        return vqsciprinter->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
    }
}

// Base class handler implementation
int QsciPrinter_QBasePrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_PrintRange_IsBase(true);
        return vqsciprinter->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
    } else {
        return vqsciprinter->printRange(qsb, *painter, static_cast<int>(from), static_cast<int>(to));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPrintRange(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_PrintRange_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PrintRange_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
    } else {
        return vqsciprinter->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
    }
}

// Base class handler implementation
int QsciPrinter_QBasePrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_PrintRange2_IsBase(true);
        return vqsciprinter->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
    } else {
        return vqsciprinter->printRange(qsb, static_cast<int>(from), static_cast<int>(to));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPrintRange2(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_PrintRange2_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PrintRange2_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
    } else {
        vqsciprinter->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
    }
}

// Base class handler implementation
void QsciPrinter_QBaseSetWrapMode(QsciPrinter* self, int wmode) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetWrapMode_IsBase(true);
        vqsciprinter->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
    } else {
        vqsciprinter->setWrapMode(static_cast<QsciScintilla::WrapMode>(wmode));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetWrapMode(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetWrapMode_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetWrapMode_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciPrinter_DevType(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->devType();
    } else {
        return vqsciprinter->devType();
    }
}

// Base class handler implementation
int QsciPrinter_QBaseDevType(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_DevType_IsBase(true);
        return vqsciprinter->devType();
    } else {
        return vqsciprinter->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnDevType(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_DevType_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciPrinter_NewPage(QsciPrinter* self) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->newPage();
    } else {
        return vqsciprinter->newPage();
    }
}

// Base class handler implementation
bool QsciPrinter_QBaseNewPage(QsciPrinter* self) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_NewPage_IsBase(true);
        return vqsciprinter->newPage();
    } else {
        return vqsciprinter->newPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnNewPage(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_NewPage_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_NewPage_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QsciPrinter_PaintEngine(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->paintEngine();
    } else {
        return vqsciprinter->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QsciPrinter_QBasePaintEngine(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_PaintEngine_IsBase(true);
        return vqsciprinter->paintEngine();
    } else {
        return vqsciprinter->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnPaintEngine(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_PaintEngine_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciPrinter_Metric(const QsciPrinter* self, int param1) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QsciPrinter_QBaseMetric(const QsciPrinter* self, int param1) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_Metric_IsBase(true);
        return vqsciprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnMetric(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_Metric_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciPrinter_SetPageLayout(QsciPrinter* self, QPageLayout* pageLayout) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->setPageLayout(*pageLayout);
    } else {
        return vqsciprinter->setPageLayout(*pageLayout);
    }
}

// Base class handler implementation
bool QsciPrinter_QBaseSetPageLayout(QsciPrinter* self, QPageLayout* pageLayout) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageLayout_IsBase(true);
        return vqsciprinter->setPageLayout(*pageLayout);
    } else {
        return vqsciprinter->setPageLayout(*pageLayout);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageLayout(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageLayout_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageLayout_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciPrinter_SetPageSize(QsciPrinter* self, QPageSize* pageSize) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->setPageSize(*pageSize);
    } else {
        return vqsciprinter->setPageSize(*pageSize);
    }
}

// Base class handler implementation
bool QsciPrinter_QBaseSetPageSize(QsciPrinter* self, QPageSize* pageSize) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageSize_IsBase(true);
        return vqsciprinter->setPageSize(*pageSize);
    } else {
        return vqsciprinter->setPageSize(*pageSize);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageSize(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageSize_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageSize_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciPrinter_SetPageOrientation(QsciPrinter* self, int orientation) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return vqsciprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Base class handler implementation
bool QsciPrinter_QBaseSetPageOrientation(QsciPrinter* self, int orientation) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageOrientation_IsBase(true);
        return vqsciprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    } else {
        return vqsciprinter->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageOrientation(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageOrientation_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageOrientation_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciPrinter_SetPageMargins(QsciPrinter* self, QMarginsF* margins, int units) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        return vqsciprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return vqsciprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Base class handler implementation
bool QsciPrinter_QBaseSetPageMargins(QsciPrinter* self, QMarginsF* margins, int units) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageMargins_IsBase(true);
        return vqsciprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    } else {
        return vqsciprinter->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageMargins(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageMargins_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciPrinter_SetPageRanges(QsciPrinter* self, QPageRanges* ranges) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setPageRanges(*ranges);
    } else {
        vqsciprinter->setPageRanges(*ranges);
    }
}

// Base class handler implementation
void QsciPrinter_QBaseSetPageRanges(QsciPrinter* self, QPageRanges* ranges) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageRanges_IsBase(true);
        vqsciprinter->setPageRanges(*ranges);
    } else {
        vqsciprinter->setPageRanges(*ranges);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetPageRanges(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetPageRanges_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetPageRanges_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciPrinter_InitPainter(const QsciPrinter* self, QPainter* painter) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->initPainter(painter);
    } else {
        vqsciprinter->initPainter(painter);
    }
}

// Base class handler implementation
void QsciPrinter_QBaseInitPainter(const QsciPrinter* self, QPainter* painter) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_InitPainter_IsBase(true);
        vqsciprinter->initPainter(painter);
    } else {
        vqsciprinter->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnInitPainter(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_InitPainter_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QsciPrinter_Redirected(const QsciPrinter* self, QPoint* offset) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->redirected(offset);
    } else {
        return vqsciprinter->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QsciPrinter_QBaseRedirected(const QsciPrinter* self, QPoint* offset) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_Redirected_IsBase(true);
        return vqsciprinter->redirected(offset);
    } else {
        return vqsciprinter->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnRedirected(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_Redirected_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QsciPrinter_SharedPainter(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        return vqsciprinter->sharedPainter();
    } else {
        return vqsciprinter->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QsciPrinter_QBaseSharedPainter(const QsciPrinter* self) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_SharedPainter_IsBase(true);
        return vqsciprinter->sharedPainter();
    } else {
        return vqsciprinter->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSharedPainter(const QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = const_cast<VirtualQsciPrinter*>(dynamic_cast<const VirtualQsciPrinter*>(self))) {
        vqsciprinter->setQsciPrinter_SharedPainter_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciPrinter_SetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setEngines(printEngine, paintEngine);
    } else {
        vqsciprinter->setEngines(printEngine, paintEngine);
    }
}

// Base class handler implementation
void QsciPrinter_QBaseSetEngines(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetEngines_IsBase(true);
        vqsciprinter->setEngines(printEngine, paintEngine);
    } else {
        vqsciprinter->setEngines(printEngine, paintEngine);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciPrinter_OnSetEngines(QsciPrinter* self, intptr_t slot) {
    if (auto* vqsciprinter = dynamic_cast<VirtualQsciPrinter*>(self)) {
        vqsciprinter->setQsciPrinter_SetEngines_Callback(reinterpret_cast<VirtualQsciPrinter::QsciPrinter_SetEngines_Callback>(slot));
    }
}

void QsciPrinter_Delete(QsciPrinter* self) {
    delete self;
}
