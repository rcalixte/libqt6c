#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciPrinter so that we can call protected methods
class VirtualQsciPrinter : public QsciPrinter {

  public:
    // Virtual class public types (including callbacks)
    using QsciPrinter_FormatPage_Callback = void (*)(QsciPrinter*, QPainter&, bool, QRect&, int);
    using QsciPrinter_SetMagnification_Callback = void (*)(QsciPrinter*, int);
    using QsciPrinter_PrintRange_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, QPainter&, int, int);
    using QsciPrinter_PrintRange2_Callback = int (*)(QsciPrinter*, QsciScintillaBase*, int, int);
    using QsciPrinter_SetWrapMode_Callback = void (*)(QsciPrinter*, QsciScintilla::WrapMode);
    using QsciPrinter_DevType_Callback = int (*)();
    using QsciPrinter_NewPage_Callback = bool (*)();
    using QsciPrinter_PaintEngine_Callback = QPaintEngine* (*)();
    using QsciPrinter_Metric_Callback = int (*)(const QsciPrinter*, QPaintDevice::PaintDeviceMetric);
    using QsciPrinter_SetPageLayout_Callback = bool (*)(QsciPrinter*, const QPageLayout&);
    using QsciPrinter_SetPageSize_Callback = bool (*)(QsciPrinter*, const QPageSize&);
    using QsciPrinter_SetPageOrientation_Callback = bool (*)(QsciPrinter*, QPageLayout::Orientation);
    using QsciPrinter_SetPageMargins_Callback = bool (*)(QsciPrinter*, const QMarginsF&, QPageLayout::Unit);
    using QsciPrinter_SetPageRanges_Callback = void (*)(QsciPrinter*, const QPageRanges&);
    using QsciPrinter_InitPainter_Callback = void (*)(const QsciPrinter*, QPainter*);
    using QsciPrinter_Redirected_Callback = QPaintDevice* (*)(const QsciPrinter*, QPoint*);
    using QsciPrinter_SharedPainter_Callback = QPainter* (*)();
    using QsciPrinter_SetEngines_Callback = void (*)(QsciPrinter*, QPrintEngine*, QPaintEngine*);

  protected:
    // Instance callback storage
    QsciPrinter_FormatPage_Callback qsciprinter_formatpage_callback = nullptr;
    QsciPrinter_SetMagnification_Callback qsciprinter_setmagnification_callback = nullptr;
    QsciPrinter_PrintRange_Callback qsciprinter_printrange_callback = nullptr;
    QsciPrinter_PrintRange2_Callback qsciprinter_printrange2_callback = nullptr;
    QsciPrinter_SetWrapMode_Callback qsciprinter_setwrapmode_callback = nullptr;
    QsciPrinter_DevType_Callback qsciprinter_devtype_callback = nullptr;
    QsciPrinter_NewPage_Callback qsciprinter_newpage_callback = nullptr;
    QsciPrinter_PaintEngine_Callback qsciprinter_paintengine_callback = nullptr;
    QsciPrinter_Metric_Callback qsciprinter_metric_callback = nullptr;
    QsciPrinter_SetPageLayout_Callback qsciprinter_setpagelayout_callback = nullptr;
    QsciPrinter_SetPageSize_Callback qsciprinter_setpagesize_callback = nullptr;
    QsciPrinter_SetPageOrientation_Callback qsciprinter_setpageorientation_callback = nullptr;
    QsciPrinter_SetPageMargins_Callback qsciprinter_setpagemargins_callback = nullptr;
    QsciPrinter_SetPageRanges_Callback qsciprinter_setpageranges_callback = nullptr;
    QsciPrinter_InitPainter_Callback qsciprinter_initpainter_callback = nullptr;
    QsciPrinter_Redirected_Callback qsciprinter_redirected_callback = nullptr;
    QsciPrinter_SharedPainter_Callback qsciprinter_sharedpainter_callback = nullptr;
    QsciPrinter_SetEngines_Callback qsciprinter_setengines_callback = nullptr;

    // Instance base flags
    mutable bool qsciprinter_formatpage_isbase = false;
    mutable bool qsciprinter_setmagnification_isbase = false;
    mutable bool qsciprinter_printrange_isbase = false;
    mutable bool qsciprinter_printrange2_isbase = false;
    mutable bool qsciprinter_setwrapmode_isbase = false;
    mutable bool qsciprinter_devtype_isbase = false;
    mutable bool qsciprinter_newpage_isbase = false;
    mutable bool qsciprinter_paintengine_isbase = false;
    mutable bool qsciprinter_metric_isbase = false;
    mutable bool qsciprinter_setpagelayout_isbase = false;
    mutable bool qsciprinter_setpagesize_isbase = false;
    mutable bool qsciprinter_setpageorientation_isbase = false;
    mutable bool qsciprinter_setpagemargins_isbase = false;
    mutable bool qsciprinter_setpageranges_isbase = false;
    mutable bool qsciprinter_initpainter_isbase = false;
    mutable bool qsciprinter_redirected_isbase = false;
    mutable bool qsciprinter_sharedpainter_isbase = false;
    mutable bool qsciprinter_setengines_isbase = false;

  public:
    VirtualQsciPrinter() : QsciPrinter(){};
    VirtualQsciPrinter(QPrinter::PrinterMode mode) : QsciPrinter(mode){};

    ~VirtualQsciPrinter() {
        qsciprinter_formatpage_callback = nullptr;
        qsciprinter_setmagnification_callback = nullptr;
        qsciprinter_printrange_callback = nullptr;
        qsciprinter_printrange2_callback = nullptr;
        qsciprinter_setwrapmode_callback = nullptr;
        qsciprinter_devtype_callback = nullptr;
        qsciprinter_newpage_callback = nullptr;
        qsciprinter_paintengine_callback = nullptr;
        qsciprinter_metric_callback = nullptr;
        qsciprinter_setpagelayout_callback = nullptr;
        qsciprinter_setpagesize_callback = nullptr;
        qsciprinter_setpageorientation_callback = nullptr;
        qsciprinter_setpagemargins_callback = nullptr;
        qsciprinter_setpageranges_callback = nullptr;
        qsciprinter_initpainter_callback = nullptr;
        qsciprinter_redirected_callback = nullptr;
        qsciprinter_sharedpainter_callback = nullptr;
        qsciprinter_setengines_callback = nullptr;
    }

    // Callback setters
    void setQsciPrinter_FormatPage_Callback(QsciPrinter_FormatPage_Callback cb) { qsciprinter_formatpage_callback = cb; }
    void setQsciPrinter_SetMagnification_Callback(QsciPrinter_SetMagnification_Callback cb) { qsciprinter_setmagnification_callback = cb; }
    void setQsciPrinter_PrintRange_Callback(QsciPrinter_PrintRange_Callback cb) { qsciprinter_printrange_callback = cb; }
    void setQsciPrinter_PrintRange2_Callback(QsciPrinter_PrintRange2_Callback cb) { qsciprinter_printrange2_callback = cb; }
    void setQsciPrinter_SetWrapMode_Callback(QsciPrinter_SetWrapMode_Callback cb) { qsciprinter_setwrapmode_callback = cb; }
    void setQsciPrinter_DevType_Callback(QsciPrinter_DevType_Callback cb) { qsciprinter_devtype_callback = cb; }
    void setQsciPrinter_NewPage_Callback(QsciPrinter_NewPage_Callback cb) { qsciprinter_newpage_callback = cb; }
    void setQsciPrinter_PaintEngine_Callback(QsciPrinter_PaintEngine_Callback cb) { qsciprinter_paintengine_callback = cb; }
    void setQsciPrinter_Metric_Callback(QsciPrinter_Metric_Callback cb) { qsciprinter_metric_callback = cb; }
    void setQsciPrinter_SetPageLayout_Callback(QsciPrinter_SetPageLayout_Callback cb) { qsciprinter_setpagelayout_callback = cb; }
    void setQsciPrinter_SetPageSize_Callback(QsciPrinter_SetPageSize_Callback cb) { qsciprinter_setpagesize_callback = cb; }
    void setQsciPrinter_SetPageOrientation_Callback(QsciPrinter_SetPageOrientation_Callback cb) { qsciprinter_setpageorientation_callback = cb; }
    void setQsciPrinter_SetPageMargins_Callback(QsciPrinter_SetPageMargins_Callback cb) { qsciprinter_setpagemargins_callback = cb; }
    void setQsciPrinter_SetPageRanges_Callback(QsciPrinter_SetPageRanges_Callback cb) { qsciprinter_setpageranges_callback = cb; }
    void setQsciPrinter_InitPainter_Callback(QsciPrinter_InitPainter_Callback cb) { qsciprinter_initpainter_callback = cb; }
    void setQsciPrinter_Redirected_Callback(QsciPrinter_Redirected_Callback cb) { qsciprinter_redirected_callback = cb; }
    void setQsciPrinter_SharedPainter_Callback(QsciPrinter_SharedPainter_Callback cb) { qsciprinter_sharedpainter_callback = cb; }
    void setQsciPrinter_SetEngines_Callback(QsciPrinter_SetEngines_Callback cb) { qsciprinter_setengines_callback = cb; }

    // Base flag setters
    void setQsciPrinter_FormatPage_IsBase(bool value) const { qsciprinter_formatpage_isbase = value; }
    void setQsciPrinter_SetMagnification_IsBase(bool value) const { qsciprinter_setmagnification_isbase = value; }
    void setQsciPrinter_PrintRange_IsBase(bool value) const { qsciprinter_printrange_isbase = value; }
    void setQsciPrinter_PrintRange2_IsBase(bool value) const { qsciprinter_printrange2_isbase = value; }
    void setQsciPrinter_SetWrapMode_IsBase(bool value) const { qsciprinter_setwrapmode_isbase = value; }
    void setQsciPrinter_DevType_IsBase(bool value) const { qsciprinter_devtype_isbase = value; }
    void setQsciPrinter_NewPage_IsBase(bool value) const { qsciprinter_newpage_isbase = value; }
    void setQsciPrinter_PaintEngine_IsBase(bool value) const { qsciprinter_paintengine_isbase = value; }
    void setQsciPrinter_Metric_IsBase(bool value) const { qsciprinter_metric_isbase = value; }
    void setQsciPrinter_SetPageLayout_IsBase(bool value) const { qsciprinter_setpagelayout_isbase = value; }
    void setQsciPrinter_SetPageSize_IsBase(bool value) const { qsciprinter_setpagesize_isbase = value; }
    void setQsciPrinter_SetPageOrientation_IsBase(bool value) const { qsciprinter_setpageorientation_isbase = value; }
    void setQsciPrinter_SetPageMargins_IsBase(bool value) const { qsciprinter_setpagemargins_isbase = value; }
    void setQsciPrinter_SetPageRanges_IsBase(bool value) const { qsciprinter_setpageranges_isbase = value; }
    void setQsciPrinter_InitPainter_IsBase(bool value) const { qsciprinter_initpainter_isbase = value; }
    void setQsciPrinter_Redirected_IsBase(bool value) const { qsciprinter_redirected_isbase = value; }
    void setQsciPrinter_SharedPainter_IsBase(bool value) const { qsciprinter_sharedpainter_isbase = value; }
    void setQsciPrinter_SetEngines_IsBase(bool value) const { qsciprinter_setengines_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void formatPage(QPainter& painter, bool drawing, QRect& area, int pagenr) override {
        if (qsciprinter_formatpage_isbase) {
            qsciprinter_formatpage_isbase = false;
            QsciPrinter::formatPage(painter, drawing, area, pagenr);
        } else if (qsciprinter_formatpage_callback != nullptr) {
            qsciprinter_formatpage_callback(this, painter, drawing, area, pagenr);
        } else {
            QsciPrinter::formatPage(painter, drawing, area, pagenr);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setMagnification(int magnification) override {
        if (qsciprinter_setmagnification_isbase) {
            qsciprinter_setmagnification_isbase = false;
            QsciPrinter::setMagnification(magnification);
        } else if (qsciprinter_setmagnification_callback != nullptr) {
            qsciprinter_setmagnification_callback(this, magnification);
        } else {
            QsciPrinter::setMagnification(magnification);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, QPainter& painter, int from, int to) override {
        if (qsciprinter_printrange_isbase) {
            qsciprinter_printrange_isbase = false;
            return QsciPrinter::printRange(qsb, painter, from, to);
        } else if (qsciprinter_printrange_callback != nullptr) {
            return qsciprinter_printrange_callback(this, qsb, painter, from, to);
        } else {
            return QsciPrinter::printRange(qsb, painter, from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int printRange(QsciScintillaBase* qsb, int from, int to) override {
        if (qsciprinter_printrange2_isbase) {
            qsciprinter_printrange2_isbase = false;
            return QsciPrinter::printRange(qsb, from, to);
        } else if (qsciprinter_printrange2_callback != nullptr) {
            return qsciprinter_printrange2_callback(this, qsb, from, to);
        } else {
            return QsciPrinter::printRange(qsb, from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setWrapMode(QsciScintilla::WrapMode wmode) override {
        if (qsciprinter_setwrapmode_isbase) {
            qsciprinter_setwrapmode_isbase = false;
            QsciPrinter::setWrapMode(wmode);
        } else if (qsciprinter_setwrapmode_callback != nullptr) {
            qsciprinter_setwrapmode_callback(this, wmode);
        } else {
            QsciPrinter::setWrapMode(wmode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciprinter_devtype_isbase) {
            qsciprinter_devtype_isbase = false;
            return QsciPrinter::devType();
        } else if (qsciprinter_devtype_callback != nullptr) {
            return qsciprinter_devtype_callback();
        } else {
            return QsciPrinter::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qsciprinter_newpage_isbase) {
            qsciprinter_newpage_isbase = false;
            return QsciPrinter::newPage();
        } else if (qsciprinter_newpage_callback != nullptr) {
            return qsciprinter_newpage_callback();
        } else {
            return QsciPrinter::newPage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciprinter_paintengine_isbase) {
            qsciprinter_paintengine_isbase = false;
            return QsciPrinter::paintEngine();
        } else if (qsciprinter_paintengine_callback != nullptr) {
            return qsciprinter_paintengine_callback();
        } else {
            return QsciPrinter::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciprinter_metric_isbase) {
            qsciprinter_metric_isbase = false;
            return QsciPrinter::metric(param1);
        } else if (qsciprinter_metric_callback != nullptr) {
            return qsciprinter_metric_callback(this, param1);
        } else {
            return QsciPrinter::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qsciprinter_setpagelayout_isbase) {
            qsciprinter_setpagelayout_isbase = false;
            return QsciPrinter::setPageLayout(pageLayout);
        } else if (qsciprinter_setpagelayout_callback != nullptr) {
            return qsciprinter_setpagelayout_callback(this, pageLayout);
        } else {
            return QsciPrinter::setPageLayout(pageLayout);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qsciprinter_setpagesize_isbase) {
            qsciprinter_setpagesize_isbase = false;
            return QsciPrinter::setPageSize(pageSize);
        } else if (qsciprinter_setpagesize_callback != nullptr) {
            return qsciprinter_setpagesize_callback(this, pageSize);
        } else {
            return QsciPrinter::setPageSize(pageSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qsciprinter_setpageorientation_isbase) {
            qsciprinter_setpageorientation_isbase = false;
            return QsciPrinter::setPageOrientation(orientation);
        } else if (qsciprinter_setpageorientation_callback != nullptr) {
            return qsciprinter_setpageorientation_callback(this, orientation);
        } else {
            return QsciPrinter::setPageOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qsciprinter_setpagemargins_isbase) {
            qsciprinter_setpagemargins_isbase = false;
            return QsciPrinter::setPageMargins(margins, units);
        } else if (qsciprinter_setpagemargins_callback != nullptr) {
            return qsciprinter_setpagemargins_callback(this, margins, units);
        } else {
            return QsciPrinter::setPageMargins(margins, units);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qsciprinter_setpageranges_isbase) {
            qsciprinter_setpageranges_isbase = false;
            QsciPrinter::setPageRanges(ranges);
        } else if (qsciprinter_setpageranges_callback != nullptr) {
            qsciprinter_setpageranges_callback(this, ranges);
        } else {
            QsciPrinter::setPageRanges(ranges);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciprinter_initpainter_isbase) {
            qsciprinter_initpainter_isbase = false;
            QsciPrinter::initPainter(painter);
        } else if (qsciprinter_initpainter_callback != nullptr) {
            qsciprinter_initpainter_callback(this, painter);
        } else {
            QsciPrinter::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciprinter_redirected_isbase) {
            qsciprinter_redirected_isbase = false;
            return QsciPrinter::redirected(offset);
        } else if (qsciprinter_redirected_callback != nullptr) {
            return qsciprinter_redirected_callback(this, offset);
        } else {
            return QsciPrinter::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciprinter_sharedpainter_isbase) {
            qsciprinter_sharedpainter_isbase = false;
            return QsciPrinter::sharedPainter();
        } else if (qsciprinter_sharedpainter_callback != nullptr) {
            return qsciprinter_sharedpainter_callback();
        } else {
            return QsciPrinter::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setEngines(QPrintEngine* printEngine, QPaintEngine* paintEngine) {
        if (qsciprinter_setengines_isbase) {
            qsciprinter_setengines_isbase = false;
            QsciPrinter::setEngines(printEngine, paintEngine);
        } else if (qsciprinter_setengines_callback != nullptr) {
            qsciprinter_setengines_callback(this, printEngine, paintEngine);
        } else {
            QsciPrinter::setEngines(printEngine, paintEngine);
        }
    }
};

#endif
