#pragma once
#ifndef SRCC_LIBVIRTUALQCOMMONSTYLE_H
#define SRCC_LIBVIRTUALQCOMMONSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommonStyle so that we can call protected methods
class VirtualQCommonStyle : public QCommonStyle {

  public:
    // Virtual class public types (including callbacks)
    using QCommonStyle_Metacall_Callback = int (*)(QCommonStyle*, QMetaObject::Call, int, void**);
    using QCommonStyle_DrawPrimitive_Callback = void (*)(const QCommonStyle*, QStyle::PrimitiveElement, const QStyleOption*, QPainter*, const QWidget*);
    using QCommonStyle_DrawControl_Callback = void (*)(const QCommonStyle*, QStyle::ControlElement, const QStyleOption*, QPainter*, const QWidget*);
    using QCommonStyle_SubElementRect_Callback = QRect (*)(const QCommonStyle*, QStyle::SubElement, const QStyleOption*, const QWidget*);
    using QCommonStyle_DrawComplexControl_Callback = void (*)(const QCommonStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QPainter*, const QWidget*);
    using QCommonStyle_HitTestComplexControl_Callback = QStyle::SubControl (*)(const QCommonStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, const QPoint&, const QWidget*);
    using QCommonStyle_SubControlRect_Callback = QRect (*)(const QCommonStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QStyle::SubControl, const QWidget*);
    using QCommonStyle_SizeFromContents_Callback = QSize (*)(const QCommonStyle*, QStyle::ContentsType, const QStyleOption*, const QSize&, const QWidget*);
    using QCommonStyle_PixelMetric_Callback = int (*)(const QCommonStyle*, QStyle::PixelMetric, const QStyleOption*, const QWidget*);
    using QCommonStyle_StyleHint_Callback = int (*)(const QCommonStyle*, QStyle::StyleHint, const QStyleOption*, const QWidget*, QStyleHintReturn*);
    using QCommonStyle_StandardIcon_Callback = QIcon (*)(const QCommonStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QCommonStyle_StandardPixmap_Callback = QPixmap (*)(const QCommonStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QCommonStyle_GeneratedIconPixmap_Callback = QPixmap (*)(const QCommonStyle*, QIcon::Mode, const QPixmap&, const QStyleOption*);
    using QCommonStyle_LayoutSpacing_Callback = int (*)(const QCommonStyle*, QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption*, const QWidget*);
    using QCommonStyle_Polish_Callback = void (*)(QCommonStyle*, QPalette&);
    using QCommonStyle_PolishWithApp_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_PolishWithWidget_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_Unpolish_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_UnpolishWithApplication_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_ItemTextRect_Callback = QRect (*)(const QCommonStyle*, const QFontMetrics&, const QRect&, int, bool, const QString&);
    using QCommonStyle_ItemPixmapRect_Callback = QRect (*)(const QCommonStyle*, const QRect&, int, const QPixmap&);
    using QCommonStyle_DrawItemText_Callback = void (*)(const QCommonStyle*, QPainter*, const QRect&, int, const QPalette&, bool, const QString&, QPalette::ColorRole);
    using QCommonStyle_DrawItemPixmap_Callback = void (*)(const QCommonStyle*, QPainter*, const QRect&, int, const QPixmap&);
    using QCommonStyle_StandardPalette_Callback = QPalette (*)();
    using QCommonStyle_Event_Callback = bool (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_EventFilter_Callback = bool (*)(QCommonStyle*, QObject*, QEvent*);
    using QCommonStyle_TimerEvent_Callback = void (*)(QCommonStyle*, QTimerEvent*);
    using QCommonStyle_ChildEvent_Callback = void (*)(QCommonStyle*, QChildEvent*);
    using QCommonStyle_CustomEvent_Callback = void (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_ConnectNotify_Callback = void (*)(QCommonStyle*, const QMetaMethod&);
    using QCommonStyle_DisconnectNotify_Callback = void (*)(QCommonStyle*, const QMetaMethod&);
    using QCommonStyle_Sender_Callback = QObject* (*)();
    using QCommonStyle_SenderSignalIndex_Callback = int (*)();
    using QCommonStyle_Receivers_Callback = int (*)(const QCommonStyle*, const char*);
    using QCommonStyle_IsSignalConnected_Callback = bool (*)(const QCommonStyle*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCommonStyle_Metacall_Callback qcommonstyle_metacall_callback = nullptr;
    QCommonStyle_DrawPrimitive_Callback qcommonstyle_drawprimitive_callback = nullptr;
    QCommonStyle_DrawControl_Callback qcommonstyle_drawcontrol_callback = nullptr;
    QCommonStyle_SubElementRect_Callback qcommonstyle_subelementrect_callback = nullptr;
    QCommonStyle_DrawComplexControl_Callback qcommonstyle_drawcomplexcontrol_callback = nullptr;
    QCommonStyle_HitTestComplexControl_Callback qcommonstyle_hittestcomplexcontrol_callback = nullptr;
    QCommonStyle_SubControlRect_Callback qcommonstyle_subcontrolrect_callback = nullptr;
    QCommonStyle_SizeFromContents_Callback qcommonstyle_sizefromcontents_callback = nullptr;
    QCommonStyle_PixelMetric_Callback qcommonstyle_pixelmetric_callback = nullptr;
    QCommonStyle_StyleHint_Callback qcommonstyle_stylehint_callback = nullptr;
    QCommonStyle_StandardIcon_Callback qcommonstyle_standardicon_callback = nullptr;
    QCommonStyle_StandardPixmap_Callback qcommonstyle_standardpixmap_callback = nullptr;
    QCommonStyle_GeneratedIconPixmap_Callback qcommonstyle_generatediconpixmap_callback = nullptr;
    QCommonStyle_LayoutSpacing_Callback qcommonstyle_layoutspacing_callback = nullptr;
    QCommonStyle_Polish_Callback qcommonstyle_polish_callback = nullptr;
    QCommonStyle_PolishWithApp_Callback qcommonstyle_polishwithapp_callback = nullptr;
    QCommonStyle_PolishWithWidget_Callback qcommonstyle_polishwithwidget_callback = nullptr;
    QCommonStyle_Unpolish_Callback qcommonstyle_unpolish_callback = nullptr;
    QCommonStyle_UnpolishWithApplication_Callback qcommonstyle_unpolishwithapplication_callback = nullptr;
    QCommonStyle_ItemTextRect_Callback qcommonstyle_itemtextrect_callback = nullptr;
    QCommonStyle_ItemPixmapRect_Callback qcommonstyle_itempixmaprect_callback = nullptr;
    QCommonStyle_DrawItemText_Callback qcommonstyle_drawitemtext_callback = nullptr;
    QCommonStyle_DrawItemPixmap_Callback qcommonstyle_drawitempixmap_callback = nullptr;
    QCommonStyle_StandardPalette_Callback qcommonstyle_standardpalette_callback = nullptr;
    QCommonStyle_Event_Callback qcommonstyle_event_callback = nullptr;
    QCommonStyle_EventFilter_Callback qcommonstyle_eventfilter_callback = nullptr;
    QCommonStyle_TimerEvent_Callback qcommonstyle_timerevent_callback = nullptr;
    QCommonStyle_ChildEvent_Callback qcommonstyle_childevent_callback = nullptr;
    QCommonStyle_CustomEvent_Callback qcommonstyle_customevent_callback = nullptr;
    QCommonStyle_ConnectNotify_Callback qcommonstyle_connectnotify_callback = nullptr;
    QCommonStyle_DisconnectNotify_Callback qcommonstyle_disconnectnotify_callback = nullptr;
    QCommonStyle_Sender_Callback qcommonstyle_sender_callback = nullptr;
    QCommonStyle_SenderSignalIndex_Callback qcommonstyle_sendersignalindex_callback = nullptr;
    QCommonStyle_Receivers_Callback qcommonstyle_receivers_callback = nullptr;
    QCommonStyle_IsSignalConnected_Callback qcommonstyle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcommonstyle_metacall_isbase = false;
    mutable bool qcommonstyle_drawprimitive_isbase = false;
    mutable bool qcommonstyle_drawcontrol_isbase = false;
    mutable bool qcommonstyle_subelementrect_isbase = false;
    mutable bool qcommonstyle_drawcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_subcontrolrect_isbase = false;
    mutable bool qcommonstyle_sizefromcontents_isbase = false;
    mutable bool qcommonstyle_pixelmetric_isbase = false;
    mutable bool qcommonstyle_stylehint_isbase = false;
    mutable bool qcommonstyle_standardicon_isbase = false;
    mutable bool qcommonstyle_standardpixmap_isbase = false;
    mutable bool qcommonstyle_generatediconpixmap_isbase = false;
    mutable bool qcommonstyle_layoutspacing_isbase = false;
    mutable bool qcommonstyle_polish_isbase = false;
    mutable bool qcommonstyle_polishwithapp_isbase = false;
    mutable bool qcommonstyle_polishwithwidget_isbase = false;
    mutable bool qcommonstyle_unpolish_isbase = false;
    mutable bool qcommonstyle_unpolishwithapplication_isbase = false;
    mutable bool qcommonstyle_itemtextrect_isbase = false;
    mutable bool qcommonstyle_itempixmaprect_isbase = false;
    mutable bool qcommonstyle_drawitemtext_isbase = false;
    mutable bool qcommonstyle_drawitempixmap_isbase = false;
    mutable bool qcommonstyle_standardpalette_isbase = false;
    mutable bool qcommonstyle_event_isbase = false;
    mutable bool qcommonstyle_eventfilter_isbase = false;
    mutable bool qcommonstyle_timerevent_isbase = false;
    mutable bool qcommonstyle_childevent_isbase = false;
    mutable bool qcommonstyle_customevent_isbase = false;
    mutable bool qcommonstyle_connectnotify_isbase = false;
    mutable bool qcommonstyle_disconnectnotify_isbase = false;
    mutable bool qcommonstyle_sender_isbase = false;
    mutable bool qcommonstyle_sendersignalindex_isbase = false;
    mutable bool qcommonstyle_receivers_isbase = false;
    mutable bool qcommonstyle_issignalconnected_isbase = false;

  public:
    VirtualQCommonStyle() : QCommonStyle(){};

    ~VirtualQCommonStyle() {
        qcommonstyle_metacall_callback = nullptr;
        qcommonstyle_drawprimitive_callback = nullptr;
        qcommonstyle_drawcontrol_callback = nullptr;
        qcommonstyle_subelementrect_callback = nullptr;
        qcommonstyle_drawcomplexcontrol_callback = nullptr;
        qcommonstyle_hittestcomplexcontrol_callback = nullptr;
        qcommonstyle_subcontrolrect_callback = nullptr;
        qcommonstyle_sizefromcontents_callback = nullptr;
        qcommonstyle_pixelmetric_callback = nullptr;
        qcommonstyle_stylehint_callback = nullptr;
        qcommonstyle_standardicon_callback = nullptr;
        qcommonstyle_standardpixmap_callback = nullptr;
        qcommonstyle_generatediconpixmap_callback = nullptr;
        qcommonstyle_layoutspacing_callback = nullptr;
        qcommonstyle_polish_callback = nullptr;
        qcommonstyle_polishwithapp_callback = nullptr;
        qcommonstyle_polishwithwidget_callback = nullptr;
        qcommonstyle_unpolish_callback = nullptr;
        qcommonstyle_unpolishwithapplication_callback = nullptr;
        qcommonstyle_itemtextrect_callback = nullptr;
        qcommonstyle_itempixmaprect_callback = nullptr;
        qcommonstyle_drawitemtext_callback = nullptr;
        qcommonstyle_drawitempixmap_callback = nullptr;
        qcommonstyle_standardpalette_callback = nullptr;
        qcommonstyle_event_callback = nullptr;
        qcommonstyle_eventfilter_callback = nullptr;
        qcommonstyle_timerevent_callback = nullptr;
        qcommonstyle_childevent_callback = nullptr;
        qcommonstyle_customevent_callback = nullptr;
        qcommonstyle_connectnotify_callback = nullptr;
        qcommonstyle_disconnectnotify_callback = nullptr;
        qcommonstyle_sender_callback = nullptr;
        qcommonstyle_sendersignalindex_callback = nullptr;
        qcommonstyle_receivers_callback = nullptr;
        qcommonstyle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCommonStyle_Metacall_Callback(QCommonStyle_Metacall_Callback cb) { qcommonstyle_metacall_callback = cb; }
    void setQCommonStyle_DrawPrimitive_Callback(QCommonStyle_DrawPrimitive_Callback cb) { qcommonstyle_drawprimitive_callback = cb; }
    void setQCommonStyle_DrawControl_Callback(QCommonStyle_DrawControl_Callback cb) { qcommonstyle_drawcontrol_callback = cb; }
    void setQCommonStyle_SubElementRect_Callback(QCommonStyle_SubElementRect_Callback cb) { qcommonstyle_subelementrect_callback = cb; }
    void setQCommonStyle_DrawComplexControl_Callback(QCommonStyle_DrawComplexControl_Callback cb) { qcommonstyle_drawcomplexcontrol_callback = cb; }
    void setQCommonStyle_HitTestComplexControl_Callback(QCommonStyle_HitTestComplexControl_Callback cb) { qcommonstyle_hittestcomplexcontrol_callback = cb; }
    void setQCommonStyle_SubControlRect_Callback(QCommonStyle_SubControlRect_Callback cb) { qcommonstyle_subcontrolrect_callback = cb; }
    void setQCommonStyle_SizeFromContents_Callback(QCommonStyle_SizeFromContents_Callback cb) { qcommonstyle_sizefromcontents_callback = cb; }
    void setQCommonStyle_PixelMetric_Callback(QCommonStyle_PixelMetric_Callback cb) { qcommonstyle_pixelmetric_callback = cb; }
    void setQCommonStyle_StyleHint_Callback(QCommonStyle_StyleHint_Callback cb) { qcommonstyle_stylehint_callback = cb; }
    void setQCommonStyle_StandardIcon_Callback(QCommonStyle_StandardIcon_Callback cb) { qcommonstyle_standardicon_callback = cb; }
    void setQCommonStyle_StandardPixmap_Callback(QCommonStyle_StandardPixmap_Callback cb) { qcommonstyle_standardpixmap_callback = cb; }
    void setQCommonStyle_GeneratedIconPixmap_Callback(QCommonStyle_GeneratedIconPixmap_Callback cb) { qcommonstyle_generatediconpixmap_callback = cb; }
    void setQCommonStyle_LayoutSpacing_Callback(QCommonStyle_LayoutSpacing_Callback cb) { qcommonstyle_layoutspacing_callback = cb; }
    void setQCommonStyle_Polish_Callback(QCommonStyle_Polish_Callback cb) { qcommonstyle_polish_callback = cb; }
    void setQCommonStyle_PolishWithApp_Callback(QCommonStyle_PolishWithApp_Callback cb) { qcommonstyle_polishwithapp_callback = cb; }
    void setQCommonStyle_PolishWithWidget_Callback(QCommonStyle_PolishWithWidget_Callback cb) { qcommonstyle_polishwithwidget_callback = cb; }
    void setQCommonStyle_Unpolish_Callback(QCommonStyle_Unpolish_Callback cb) { qcommonstyle_unpolish_callback = cb; }
    void setQCommonStyle_UnpolishWithApplication_Callback(QCommonStyle_UnpolishWithApplication_Callback cb) { qcommonstyle_unpolishwithapplication_callback = cb; }
    void setQCommonStyle_ItemTextRect_Callback(QCommonStyle_ItemTextRect_Callback cb) { qcommonstyle_itemtextrect_callback = cb; }
    void setQCommonStyle_ItemPixmapRect_Callback(QCommonStyle_ItemPixmapRect_Callback cb) { qcommonstyle_itempixmaprect_callback = cb; }
    void setQCommonStyle_DrawItemText_Callback(QCommonStyle_DrawItemText_Callback cb) { qcommonstyle_drawitemtext_callback = cb; }
    void setQCommonStyle_DrawItemPixmap_Callback(QCommonStyle_DrawItemPixmap_Callback cb) { qcommonstyle_drawitempixmap_callback = cb; }
    void setQCommonStyle_StandardPalette_Callback(QCommonStyle_StandardPalette_Callback cb) { qcommonstyle_standardpalette_callback = cb; }
    void setQCommonStyle_Event_Callback(QCommonStyle_Event_Callback cb) { qcommonstyle_event_callback = cb; }
    void setQCommonStyle_EventFilter_Callback(QCommonStyle_EventFilter_Callback cb) { qcommonstyle_eventfilter_callback = cb; }
    void setQCommonStyle_TimerEvent_Callback(QCommonStyle_TimerEvent_Callback cb) { qcommonstyle_timerevent_callback = cb; }
    void setQCommonStyle_ChildEvent_Callback(QCommonStyle_ChildEvent_Callback cb) { qcommonstyle_childevent_callback = cb; }
    void setQCommonStyle_CustomEvent_Callback(QCommonStyle_CustomEvent_Callback cb) { qcommonstyle_customevent_callback = cb; }
    void setQCommonStyle_ConnectNotify_Callback(QCommonStyle_ConnectNotify_Callback cb) { qcommonstyle_connectnotify_callback = cb; }
    void setQCommonStyle_DisconnectNotify_Callback(QCommonStyle_DisconnectNotify_Callback cb) { qcommonstyle_disconnectnotify_callback = cb; }
    void setQCommonStyle_Sender_Callback(QCommonStyle_Sender_Callback cb) { qcommonstyle_sender_callback = cb; }
    void setQCommonStyle_SenderSignalIndex_Callback(QCommonStyle_SenderSignalIndex_Callback cb) { qcommonstyle_sendersignalindex_callback = cb; }
    void setQCommonStyle_Receivers_Callback(QCommonStyle_Receivers_Callback cb) { qcommonstyle_receivers_callback = cb; }
    void setQCommonStyle_IsSignalConnected_Callback(QCommonStyle_IsSignalConnected_Callback cb) { qcommonstyle_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCommonStyle_Metacall_IsBase(bool value) const { qcommonstyle_metacall_isbase = value; }
    void setQCommonStyle_DrawPrimitive_IsBase(bool value) const { qcommonstyle_drawprimitive_isbase = value; }
    void setQCommonStyle_DrawControl_IsBase(bool value) const { qcommonstyle_drawcontrol_isbase = value; }
    void setQCommonStyle_SubElementRect_IsBase(bool value) const { qcommonstyle_subelementrect_isbase = value; }
    void setQCommonStyle_DrawComplexControl_IsBase(bool value) const { qcommonstyle_drawcomplexcontrol_isbase = value; }
    void setQCommonStyle_HitTestComplexControl_IsBase(bool value) const { qcommonstyle_hittestcomplexcontrol_isbase = value; }
    void setQCommonStyle_SubControlRect_IsBase(bool value) const { qcommonstyle_subcontrolrect_isbase = value; }
    void setQCommonStyle_SizeFromContents_IsBase(bool value) const { qcommonstyle_sizefromcontents_isbase = value; }
    void setQCommonStyle_PixelMetric_IsBase(bool value) const { qcommonstyle_pixelmetric_isbase = value; }
    void setQCommonStyle_StyleHint_IsBase(bool value) const { qcommonstyle_stylehint_isbase = value; }
    void setQCommonStyle_StandardIcon_IsBase(bool value) const { qcommonstyle_standardicon_isbase = value; }
    void setQCommonStyle_StandardPixmap_IsBase(bool value) const { qcommonstyle_standardpixmap_isbase = value; }
    void setQCommonStyle_GeneratedIconPixmap_IsBase(bool value) const { qcommonstyle_generatediconpixmap_isbase = value; }
    void setQCommonStyle_LayoutSpacing_IsBase(bool value) const { qcommonstyle_layoutspacing_isbase = value; }
    void setQCommonStyle_Polish_IsBase(bool value) const { qcommonstyle_polish_isbase = value; }
    void setQCommonStyle_PolishWithApp_IsBase(bool value) const { qcommonstyle_polishwithapp_isbase = value; }
    void setQCommonStyle_PolishWithWidget_IsBase(bool value) const { qcommonstyle_polishwithwidget_isbase = value; }
    void setQCommonStyle_Unpolish_IsBase(bool value) const { qcommonstyle_unpolish_isbase = value; }
    void setQCommonStyle_UnpolishWithApplication_IsBase(bool value) const { qcommonstyle_unpolishwithapplication_isbase = value; }
    void setQCommonStyle_ItemTextRect_IsBase(bool value) const { qcommonstyle_itemtextrect_isbase = value; }
    void setQCommonStyle_ItemPixmapRect_IsBase(bool value) const { qcommonstyle_itempixmaprect_isbase = value; }
    void setQCommonStyle_DrawItemText_IsBase(bool value) const { qcommonstyle_drawitemtext_isbase = value; }
    void setQCommonStyle_DrawItemPixmap_IsBase(bool value) const { qcommonstyle_drawitempixmap_isbase = value; }
    void setQCommonStyle_StandardPalette_IsBase(bool value) const { qcommonstyle_standardpalette_isbase = value; }
    void setQCommonStyle_Event_IsBase(bool value) const { qcommonstyle_event_isbase = value; }
    void setQCommonStyle_EventFilter_IsBase(bool value) const { qcommonstyle_eventfilter_isbase = value; }
    void setQCommonStyle_TimerEvent_IsBase(bool value) const { qcommonstyle_timerevent_isbase = value; }
    void setQCommonStyle_ChildEvent_IsBase(bool value) const { qcommonstyle_childevent_isbase = value; }
    void setQCommonStyle_CustomEvent_IsBase(bool value) const { qcommonstyle_customevent_isbase = value; }
    void setQCommonStyle_ConnectNotify_IsBase(bool value) const { qcommonstyle_connectnotify_isbase = value; }
    void setQCommonStyle_DisconnectNotify_IsBase(bool value) const { qcommonstyle_disconnectnotify_isbase = value; }
    void setQCommonStyle_Sender_IsBase(bool value) const { qcommonstyle_sender_isbase = value; }
    void setQCommonStyle_SenderSignalIndex_IsBase(bool value) const { qcommonstyle_sendersignalindex_isbase = value; }
    void setQCommonStyle_Receivers_IsBase(bool value) const { qcommonstyle_receivers_isbase = value; }
    void setQCommonStyle_IsSignalConnected_IsBase(bool value) const { qcommonstyle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommonstyle_metacall_isbase) {
            qcommonstyle_metacall_isbase = false;
            return QCommonStyle::qt_metacall(param1, param2, param3);
        } else if (qcommonstyle_metacall_callback != nullptr) {
            return qcommonstyle_metacall_callback(this, param1, param2, param3);
        } else {
            return QCommonStyle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawprimitive_isbase) {
            qcommonstyle_drawprimitive_isbase = false;
            QCommonStyle::drawPrimitive(pe, opt, p, w);
        } else if (qcommonstyle_drawprimitive_callback != nullptr) {
            qcommonstyle_drawprimitive_callback(this, pe, opt, p, w);
        } else {
            QCommonStyle::drawPrimitive(pe, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcontrol_isbase) {
            qcommonstyle_drawcontrol_isbase = false;
            QCommonStyle::drawControl(element, opt, p, w);
        } else if (qcommonstyle_drawcontrol_callback != nullptr) {
            qcommonstyle_drawcontrol_callback(this, element, opt, p, w);
        } else {
            QCommonStyle::drawControl(element, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement r, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_subelementrect_isbase) {
            qcommonstyle_subelementrect_isbase = false;
            return QCommonStyle::subElementRect(r, opt, widget);
        } else if (qcommonstyle_subelementrect_callback != nullptr) {
            return qcommonstyle_subelementrect_callback(this, r, opt, widget);
        } else {
            return QCommonStyle::subElementRect(r, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcomplexcontrol_isbase) {
            qcommonstyle_drawcomplexcontrol_isbase = false;
            QCommonStyle::drawComplexControl(cc, opt, p, w);
        } else if (qcommonstyle_drawcomplexcontrol_callback != nullptr) {
            qcommonstyle_drawcomplexcontrol_callback(this, cc, opt, p, w);
        } else {
            QCommonStyle::drawComplexControl(cc, opt, p, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* w) const override {
        if (qcommonstyle_hittestcomplexcontrol_isbase) {
            qcommonstyle_hittestcomplexcontrol_isbase = false;
            return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
        } else if (qcommonstyle_hittestcomplexcontrol_callback != nullptr) {
            return qcommonstyle_hittestcomplexcontrol_callback(this, cc, opt, pt, w);
        } else {
            return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* w) const override {
        if (qcommonstyle_subcontrolrect_isbase) {
            qcommonstyle_subcontrolrect_isbase = false;
            return QCommonStyle::subControlRect(cc, opt, sc, w);
        } else if (qcommonstyle_subcontrolrect_callback != nullptr) {
            return qcommonstyle_subcontrolrect_callback(this, cc, opt, sc, w);
        } else {
            return QCommonStyle::subControlRect(cc, opt, sc, w);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* widget) const override {
        if (qcommonstyle_sizefromcontents_isbase) {
            qcommonstyle_sizefromcontents_isbase = false;
            return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
        } else if (qcommonstyle_sizefromcontents_callback != nullptr) {
            return qcommonstyle_sizefromcontents_callback(this, ct, opt, contentsSize, widget);
        } else {
            return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric m, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_pixelmetric_isbase) {
            qcommonstyle_pixelmetric_isbase = false;
            return QCommonStyle::pixelMetric(m, opt, widget);
        } else if (qcommonstyle_pixelmetric_callback != nullptr) {
            return qcommonstyle_pixelmetric_callback(this, m, opt, widget);
        } else {
            return QCommonStyle::pixelMetric(m, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) const override {
        if (qcommonstyle_stylehint_isbase) {
            qcommonstyle_stylehint_isbase = false;
            return QCommonStyle::styleHint(sh, opt, w, shret);
        } else if (qcommonstyle_stylehint_callback != nullptr) {
            return qcommonstyle_stylehint_callback(this, sh, opt, w, shret);
        } else {
            return QCommonStyle::styleHint(sh, opt, w, shret);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardicon_isbase) {
            qcommonstyle_standardicon_isbase = false;
            return QCommonStyle::standardIcon(standardIcon, opt, widget);
        } else if (qcommonstyle_standardicon_callback != nullptr) {
            return qcommonstyle_standardicon_callback(this, standardIcon, opt, widget);
        } else {
            return QCommonStyle::standardIcon(standardIcon, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap sp, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardpixmap_isbase) {
            qcommonstyle_standardpixmap_isbase = false;
            return QCommonStyle::standardPixmap(sp, opt, widget);
        } else if (qcommonstyle_standardpixmap_callback != nullptr) {
            return qcommonstyle_standardpixmap_callback(this, sp, opt, widget);
        } else {
            return QCommonStyle::standardPixmap(sp, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qcommonstyle_generatediconpixmap_isbase) {
            qcommonstyle_generatediconpixmap_isbase = false;
            return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
        } else if (qcommonstyle_generatediconpixmap_callback != nullptr) {
            return qcommonstyle_generatediconpixmap_callback(this, iconMode, pixmap, opt);
        } else {
            return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qcommonstyle_layoutspacing_isbase) {
            qcommonstyle_layoutspacing_isbase = false;
            return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
        } else if (qcommonstyle_layoutspacing_callback != nullptr) {
            return qcommonstyle_layoutspacing_callback(this, control1, control2, orientation, option, widget);
        } else {
            return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& param1) override {
        if (qcommonstyle_polish_isbase) {
            qcommonstyle_polish_isbase = false;
            QCommonStyle::polish(param1);
        } else if (qcommonstyle_polish_callback != nullptr) {
            qcommonstyle_polish_callback(this, param1);
        } else {
            QCommonStyle::polish(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* app) override {
        if (qcommonstyle_polishwithapp_isbase) {
            qcommonstyle_polishwithapp_isbase = false;
            QCommonStyle::polish(app);
        } else if (qcommonstyle_polishwithapp_callback != nullptr) {
            qcommonstyle_polishwithapp_callback(this, app);
        } else {
            QCommonStyle::polish(app);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qcommonstyle_polishwithwidget_isbase) {
            qcommonstyle_polishwithwidget_isbase = false;
            QCommonStyle::polish(widget);
        } else if (qcommonstyle_polishwithwidget_callback != nullptr) {
            qcommonstyle_polishwithwidget_callback(this, widget);
        } else {
            QCommonStyle::polish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qcommonstyle_unpolish_isbase) {
            qcommonstyle_unpolish_isbase = false;
            QCommonStyle::unpolish(widget);
        } else if (qcommonstyle_unpolish_callback != nullptr) {
            qcommonstyle_unpolish_callback(this, widget);
        } else {
            QCommonStyle::unpolish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qcommonstyle_unpolishwithapplication_isbase) {
            qcommonstyle_unpolishwithapplication_isbase = false;
            QCommonStyle::unpolish(application);
        } else if (qcommonstyle_unpolishwithapplication_callback != nullptr) {
            qcommonstyle_unpolishwithapplication_callback(this, application);
        } else {
            QCommonStyle::unpolish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qcommonstyle_itemtextrect_isbase) {
            qcommonstyle_itemtextrect_isbase = false;
            return QCommonStyle::itemTextRect(fm, r, flags, enabled, text);
        } else if (qcommonstyle_itemtextrect_callback != nullptr) {
            return qcommonstyle_itemtextrect_callback(this, fm, r, flags, enabled, text);
        } else {
            return QCommonStyle::itemTextRect(fm, r, flags, enabled, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qcommonstyle_itempixmaprect_isbase) {
            qcommonstyle_itempixmaprect_isbase = false;
            return QCommonStyle::itemPixmapRect(r, flags, pixmap);
        } else if (qcommonstyle_itempixmaprect_callback != nullptr) {
            return qcommonstyle_itempixmaprect_callback(this, r, flags, pixmap);
        } else {
            return QCommonStyle::itemPixmapRect(r, flags, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qcommonstyle_drawitemtext_isbase) {
            qcommonstyle_drawitemtext_isbase = false;
            QCommonStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        } else if (qcommonstyle_drawitemtext_callback != nullptr) {
            qcommonstyle_drawitemtext_callback(this, painter, rect, flags, pal, enabled, text, textRole);
        } else {
            QCommonStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qcommonstyle_drawitempixmap_isbase) {
            qcommonstyle_drawitempixmap_isbase = false;
            QCommonStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        } else if (qcommonstyle_drawitempixmap_callback != nullptr) {
            qcommonstyle_drawitempixmap_callback(this, painter, rect, alignment, pixmap);
        } else {
            QCommonStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qcommonstyle_standardpalette_isbase) {
            qcommonstyle_standardpalette_isbase = false;
            return QCommonStyle::standardPalette();
        } else if (qcommonstyle_standardpalette_callback != nullptr) {
            return qcommonstyle_standardpalette_callback();
        } else {
            return QCommonStyle::standardPalette();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcommonstyle_event_isbase) {
            qcommonstyle_event_isbase = false;
            return QCommonStyle::event(event);
        } else if (qcommonstyle_event_callback != nullptr) {
            return qcommonstyle_event_callback(this, event);
        } else {
            return QCommonStyle::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommonstyle_eventfilter_isbase) {
            qcommonstyle_eventfilter_isbase = false;
            return QCommonStyle::eventFilter(watched, event);
        } else if (qcommonstyle_eventfilter_callback != nullptr) {
            return qcommonstyle_eventfilter_callback(this, watched, event);
        } else {
            return QCommonStyle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcommonstyle_timerevent_isbase) {
            qcommonstyle_timerevent_isbase = false;
            QCommonStyle::timerEvent(event);
        } else if (qcommonstyle_timerevent_callback != nullptr) {
            qcommonstyle_timerevent_callback(this, event);
        } else {
            QCommonStyle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommonstyle_childevent_isbase) {
            qcommonstyle_childevent_isbase = false;
            QCommonStyle::childEvent(event);
        } else if (qcommonstyle_childevent_callback != nullptr) {
            qcommonstyle_childevent_callback(this, event);
        } else {
            QCommonStyle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommonstyle_customevent_isbase) {
            qcommonstyle_customevent_isbase = false;
            QCommonStyle::customEvent(event);
        } else if (qcommonstyle_customevent_callback != nullptr) {
            qcommonstyle_customevent_callback(this, event);
        } else {
            QCommonStyle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_connectnotify_isbase) {
            qcommonstyle_connectnotify_isbase = false;
            QCommonStyle::connectNotify(signal);
        } else if (qcommonstyle_connectnotify_callback != nullptr) {
            qcommonstyle_connectnotify_callback(this, signal);
        } else {
            QCommonStyle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_disconnectnotify_isbase) {
            qcommonstyle_disconnectnotify_isbase = false;
            QCommonStyle::disconnectNotify(signal);
        } else if (qcommonstyle_disconnectnotify_callback != nullptr) {
            qcommonstyle_disconnectnotify_callback(this, signal);
        } else {
            QCommonStyle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcommonstyle_sender_isbase) {
            qcommonstyle_sender_isbase = false;
            return QCommonStyle::sender();
        } else if (qcommonstyle_sender_callback != nullptr) {
            return qcommonstyle_sender_callback();
        } else {
            return QCommonStyle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcommonstyle_sendersignalindex_isbase) {
            qcommonstyle_sendersignalindex_isbase = false;
            return QCommonStyle::senderSignalIndex();
        } else if (qcommonstyle_sendersignalindex_callback != nullptr) {
            return qcommonstyle_sendersignalindex_callback();
        } else {
            return QCommonStyle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcommonstyle_receivers_isbase) {
            qcommonstyle_receivers_isbase = false;
            return QCommonStyle::receivers(signal);
        } else if (qcommonstyle_receivers_callback != nullptr) {
            return qcommonstyle_receivers_callback(this, signal);
        } else {
            return QCommonStyle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcommonstyle_issignalconnected_isbase) {
            qcommonstyle_issignalconnected_isbase = false;
            return QCommonStyle::isSignalConnected(signal);
        } else if (qcommonstyle_issignalconnected_callback != nullptr) {
            return qcommonstyle_issignalconnected_callback(this, signal);
        } else {
            return QCommonStyle::isSignalConnected(signal);
        }
    }
};

#endif
