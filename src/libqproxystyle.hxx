#pragma once
#ifndef SRCC_LIBVIRTUALQPROXYSTYLE_H
#define SRCC_LIBVIRTUALQPROXYSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProxyStyle so that we can call protected methods
class VirtualQProxyStyle : public QProxyStyle {

  public:
    // Virtual class public types (including callbacks)
    using QProxyStyle_Metacall_Callback = int (*)(QProxyStyle*, QMetaObject::Call, int, void**);
    using QProxyStyle_DrawPrimitive_Callback = void (*)(const QProxyStyle*, QStyle::PrimitiveElement, const QStyleOption*, QPainter*, const QWidget*);
    using QProxyStyle_DrawControl_Callback = void (*)(const QProxyStyle*, QStyle::ControlElement, const QStyleOption*, QPainter*, const QWidget*);
    using QProxyStyle_DrawComplexControl_Callback = void (*)(const QProxyStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QPainter*, const QWidget*);
    using QProxyStyle_DrawItemText_Callback = void (*)(const QProxyStyle*, QPainter*, const QRect&, int, const QPalette&, bool, const QString&, QPalette::ColorRole);
    using QProxyStyle_DrawItemPixmap_Callback = void (*)(const QProxyStyle*, QPainter*, const QRect&, int, const QPixmap&);
    using QProxyStyle_SizeFromContents_Callback = QSize (*)(const QProxyStyle*, QStyle::ContentsType, const QStyleOption*, const QSize&, const QWidget*);
    using QProxyStyle_SubElementRect_Callback = QRect (*)(const QProxyStyle*, QStyle::SubElement, const QStyleOption*, const QWidget*);
    using QProxyStyle_SubControlRect_Callback = QRect (*)(const QProxyStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QStyle::SubControl, const QWidget*);
    using QProxyStyle_ItemTextRect_Callback = QRect (*)(const QProxyStyle*, const QFontMetrics&, const QRect&, int, bool, const QString&);
    using QProxyStyle_ItemPixmapRect_Callback = QRect (*)(const QProxyStyle*, const QRect&, int, const QPixmap&);
    using QProxyStyle_HitTestComplexControl_Callback = QStyle::SubControl (*)(const QProxyStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, const QPoint&, const QWidget*);
    using QProxyStyle_StyleHint_Callback = int (*)(const QProxyStyle*, QStyle::StyleHint, const QStyleOption*, const QWidget*, QStyleHintReturn*);
    using QProxyStyle_PixelMetric_Callback = int (*)(const QProxyStyle*, QStyle::PixelMetric, const QStyleOption*, const QWidget*);
    using QProxyStyle_LayoutSpacing_Callback = int (*)(const QProxyStyle*, QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption*, const QWidget*);
    using QProxyStyle_StandardIcon_Callback = QIcon (*)(const QProxyStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QProxyStyle_StandardPixmap_Callback = QPixmap (*)(const QProxyStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QProxyStyle_GeneratedIconPixmap_Callback = QPixmap (*)(const QProxyStyle*, QIcon::Mode, const QPixmap&, const QStyleOption*);
    using QProxyStyle_StandardPalette_Callback = QPalette (*)();
    using QProxyStyle_Polish_Callback = void (*)(QProxyStyle*, QWidget*);
    using QProxyStyle_PolishWithPal_Callback = void (*)(QProxyStyle*, QPalette&);
    using QProxyStyle_PolishWithApp_Callback = void (*)(QProxyStyle*, QApplication*);
    using QProxyStyle_Unpolish_Callback = void (*)(QProxyStyle*, QWidget*);
    using QProxyStyle_UnpolishWithApp_Callback = void (*)(QProxyStyle*, QApplication*);
    using QProxyStyle_Event_Callback = bool (*)(QProxyStyle*, QEvent*);
    using QProxyStyle_EventFilter_Callback = bool (*)(QProxyStyle*, QObject*, QEvent*);
    using QProxyStyle_TimerEvent_Callback = void (*)(QProxyStyle*, QTimerEvent*);
    using QProxyStyle_ChildEvent_Callback = void (*)(QProxyStyle*, QChildEvent*);
    using QProxyStyle_CustomEvent_Callback = void (*)(QProxyStyle*, QEvent*);
    using QProxyStyle_ConnectNotify_Callback = void (*)(QProxyStyle*, const QMetaMethod&);
    using QProxyStyle_DisconnectNotify_Callback = void (*)(QProxyStyle*, const QMetaMethod&);
    using QProxyStyle_Sender_Callback = QObject* (*)();
    using QProxyStyle_SenderSignalIndex_Callback = int (*)();
    using QProxyStyle_Receivers_Callback = int (*)(const QProxyStyle*, const char*);
    using QProxyStyle_IsSignalConnected_Callback = bool (*)(const QProxyStyle*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QProxyStyle_Metacall_Callback qproxystyle_metacall_callback = nullptr;
    QProxyStyle_DrawPrimitive_Callback qproxystyle_drawprimitive_callback = nullptr;
    QProxyStyle_DrawControl_Callback qproxystyle_drawcontrol_callback = nullptr;
    QProxyStyle_DrawComplexControl_Callback qproxystyle_drawcomplexcontrol_callback = nullptr;
    QProxyStyle_DrawItemText_Callback qproxystyle_drawitemtext_callback = nullptr;
    QProxyStyle_DrawItemPixmap_Callback qproxystyle_drawitempixmap_callback = nullptr;
    QProxyStyle_SizeFromContents_Callback qproxystyle_sizefromcontents_callback = nullptr;
    QProxyStyle_SubElementRect_Callback qproxystyle_subelementrect_callback = nullptr;
    QProxyStyle_SubControlRect_Callback qproxystyle_subcontrolrect_callback = nullptr;
    QProxyStyle_ItemTextRect_Callback qproxystyle_itemtextrect_callback = nullptr;
    QProxyStyle_ItemPixmapRect_Callback qproxystyle_itempixmaprect_callback = nullptr;
    QProxyStyle_HitTestComplexControl_Callback qproxystyle_hittestcomplexcontrol_callback = nullptr;
    QProxyStyle_StyleHint_Callback qproxystyle_stylehint_callback = nullptr;
    QProxyStyle_PixelMetric_Callback qproxystyle_pixelmetric_callback = nullptr;
    QProxyStyle_LayoutSpacing_Callback qproxystyle_layoutspacing_callback = nullptr;
    QProxyStyle_StandardIcon_Callback qproxystyle_standardicon_callback = nullptr;
    QProxyStyle_StandardPixmap_Callback qproxystyle_standardpixmap_callback = nullptr;
    QProxyStyle_GeneratedIconPixmap_Callback qproxystyle_generatediconpixmap_callback = nullptr;
    QProxyStyle_StandardPalette_Callback qproxystyle_standardpalette_callback = nullptr;
    QProxyStyle_Polish_Callback qproxystyle_polish_callback = nullptr;
    QProxyStyle_PolishWithPal_Callback qproxystyle_polishwithpal_callback = nullptr;
    QProxyStyle_PolishWithApp_Callback qproxystyle_polishwithapp_callback = nullptr;
    QProxyStyle_Unpolish_Callback qproxystyle_unpolish_callback = nullptr;
    QProxyStyle_UnpolishWithApp_Callback qproxystyle_unpolishwithapp_callback = nullptr;
    QProxyStyle_Event_Callback qproxystyle_event_callback = nullptr;
    QProxyStyle_EventFilter_Callback qproxystyle_eventfilter_callback = nullptr;
    QProxyStyle_TimerEvent_Callback qproxystyle_timerevent_callback = nullptr;
    QProxyStyle_ChildEvent_Callback qproxystyle_childevent_callback = nullptr;
    QProxyStyle_CustomEvent_Callback qproxystyle_customevent_callback = nullptr;
    QProxyStyle_ConnectNotify_Callback qproxystyle_connectnotify_callback = nullptr;
    QProxyStyle_DisconnectNotify_Callback qproxystyle_disconnectnotify_callback = nullptr;
    QProxyStyle_Sender_Callback qproxystyle_sender_callback = nullptr;
    QProxyStyle_SenderSignalIndex_Callback qproxystyle_sendersignalindex_callback = nullptr;
    QProxyStyle_Receivers_Callback qproxystyle_receivers_callback = nullptr;
    QProxyStyle_IsSignalConnected_Callback qproxystyle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qproxystyle_metacall_isbase = false;
    mutable bool qproxystyle_drawprimitive_isbase = false;
    mutable bool qproxystyle_drawcontrol_isbase = false;
    mutable bool qproxystyle_drawcomplexcontrol_isbase = false;
    mutable bool qproxystyle_drawitemtext_isbase = false;
    mutable bool qproxystyle_drawitempixmap_isbase = false;
    mutable bool qproxystyle_sizefromcontents_isbase = false;
    mutable bool qproxystyle_subelementrect_isbase = false;
    mutable bool qproxystyle_subcontrolrect_isbase = false;
    mutable bool qproxystyle_itemtextrect_isbase = false;
    mutable bool qproxystyle_itempixmaprect_isbase = false;
    mutable bool qproxystyle_hittestcomplexcontrol_isbase = false;
    mutable bool qproxystyle_stylehint_isbase = false;
    mutable bool qproxystyle_pixelmetric_isbase = false;
    mutable bool qproxystyle_layoutspacing_isbase = false;
    mutable bool qproxystyle_standardicon_isbase = false;
    mutable bool qproxystyle_standardpixmap_isbase = false;
    mutable bool qproxystyle_generatediconpixmap_isbase = false;
    mutable bool qproxystyle_standardpalette_isbase = false;
    mutable bool qproxystyle_polish_isbase = false;
    mutable bool qproxystyle_polishwithpal_isbase = false;
    mutable bool qproxystyle_polishwithapp_isbase = false;
    mutable bool qproxystyle_unpolish_isbase = false;
    mutable bool qproxystyle_unpolishwithapp_isbase = false;
    mutable bool qproxystyle_event_isbase = false;
    mutable bool qproxystyle_eventfilter_isbase = false;
    mutable bool qproxystyle_timerevent_isbase = false;
    mutable bool qproxystyle_childevent_isbase = false;
    mutable bool qproxystyle_customevent_isbase = false;
    mutable bool qproxystyle_connectnotify_isbase = false;
    mutable bool qproxystyle_disconnectnotify_isbase = false;
    mutable bool qproxystyle_sender_isbase = false;
    mutable bool qproxystyle_sendersignalindex_isbase = false;
    mutable bool qproxystyle_receivers_isbase = false;
    mutable bool qproxystyle_issignalconnected_isbase = false;

  public:
    VirtualQProxyStyle() : QProxyStyle(){};
    VirtualQProxyStyle(const QString& key) : QProxyStyle(key){};
    VirtualQProxyStyle(QStyle* style) : QProxyStyle(style){};

    ~VirtualQProxyStyle() {
        qproxystyle_metacall_callback = nullptr;
        qproxystyle_drawprimitive_callback = nullptr;
        qproxystyle_drawcontrol_callback = nullptr;
        qproxystyle_drawcomplexcontrol_callback = nullptr;
        qproxystyle_drawitemtext_callback = nullptr;
        qproxystyle_drawitempixmap_callback = nullptr;
        qproxystyle_sizefromcontents_callback = nullptr;
        qproxystyle_subelementrect_callback = nullptr;
        qproxystyle_subcontrolrect_callback = nullptr;
        qproxystyle_itemtextrect_callback = nullptr;
        qproxystyle_itempixmaprect_callback = nullptr;
        qproxystyle_hittestcomplexcontrol_callback = nullptr;
        qproxystyle_stylehint_callback = nullptr;
        qproxystyle_pixelmetric_callback = nullptr;
        qproxystyle_layoutspacing_callback = nullptr;
        qproxystyle_standardicon_callback = nullptr;
        qproxystyle_standardpixmap_callback = nullptr;
        qproxystyle_generatediconpixmap_callback = nullptr;
        qproxystyle_standardpalette_callback = nullptr;
        qproxystyle_polish_callback = nullptr;
        qproxystyle_polishwithpal_callback = nullptr;
        qproxystyle_polishwithapp_callback = nullptr;
        qproxystyle_unpolish_callback = nullptr;
        qproxystyle_unpolishwithapp_callback = nullptr;
        qproxystyle_event_callback = nullptr;
        qproxystyle_eventfilter_callback = nullptr;
        qproxystyle_timerevent_callback = nullptr;
        qproxystyle_childevent_callback = nullptr;
        qproxystyle_customevent_callback = nullptr;
        qproxystyle_connectnotify_callback = nullptr;
        qproxystyle_disconnectnotify_callback = nullptr;
        qproxystyle_sender_callback = nullptr;
        qproxystyle_sendersignalindex_callback = nullptr;
        qproxystyle_receivers_callback = nullptr;
        qproxystyle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQProxyStyle_Metacall_Callback(QProxyStyle_Metacall_Callback cb) { qproxystyle_metacall_callback = cb; }
    void setQProxyStyle_DrawPrimitive_Callback(QProxyStyle_DrawPrimitive_Callback cb) { qproxystyle_drawprimitive_callback = cb; }
    void setQProxyStyle_DrawControl_Callback(QProxyStyle_DrawControl_Callback cb) { qproxystyle_drawcontrol_callback = cb; }
    void setQProxyStyle_DrawComplexControl_Callback(QProxyStyle_DrawComplexControl_Callback cb) { qproxystyle_drawcomplexcontrol_callback = cb; }
    void setQProxyStyle_DrawItemText_Callback(QProxyStyle_DrawItemText_Callback cb) { qproxystyle_drawitemtext_callback = cb; }
    void setQProxyStyle_DrawItemPixmap_Callback(QProxyStyle_DrawItemPixmap_Callback cb) { qproxystyle_drawitempixmap_callback = cb; }
    void setQProxyStyle_SizeFromContents_Callback(QProxyStyle_SizeFromContents_Callback cb) { qproxystyle_sizefromcontents_callback = cb; }
    void setQProxyStyle_SubElementRect_Callback(QProxyStyle_SubElementRect_Callback cb) { qproxystyle_subelementrect_callback = cb; }
    void setQProxyStyle_SubControlRect_Callback(QProxyStyle_SubControlRect_Callback cb) { qproxystyle_subcontrolrect_callback = cb; }
    void setQProxyStyle_ItemTextRect_Callback(QProxyStyle_ItemTextRect_Callback cb) { qproxystyle_itemtextrect_callback = cb; }
    void setQProxyStyle_ItemPixmapRect_Callback(QProxyStyle_ItemPixmapRect_Callback cb) { qproxystyle_itempixmaprect_callback = cb; }
    void setQProxyStyle_HitTestComplexControl_Callback(QProxyStyle_HitTestComplexControl_Callback cb) { qproxystyle_hittestcomplexcontrol_callback = cb; }
    void setQProxyStyle_StyleHint_Callback(QProxyStyle_StyleHint_Callback cb) { qproxystyle_stylehint_callback = cb; }
    void setQProxyStyle_PixelMetric_Callback(QProxyStyle_PixelMetric_Callback cb) { qproxystyle_pixelmetric_callback = cb; }
    void setQProxyStyle_LayoutSpacing_Callback(QProxyStyle_LayoutSpacing_Callback cb) { qproxystyle_layoutspacing_callback = cb; }
    void setQProxyStyle_StandardIcon_Callback(QProxyStyle_StandardIcon_Callback cb) { qproxystyle_standardicon_callback = cb; }
    void setQProxyStyle_StandardPixmap_Callback(QProxyStyle_StandardPixmap_Callback cb) { qproxystyle_standardpixmap_callback = cb; }
    void setQProxyStyle_GeneratedIconPixmap_Callback(QProxyStyle_GeneratedIconPixmap_Callback cb) { qproxystyle_generatediconpixmap_callback = cb; }
    void setQProxyStyle_StandardPalette_Callback(QProxyStyle_StandardPalette_Callback cb) { qproxystyle_standardpalette_callback = cb; }
    void setQProxyStyle_Polish_Callback(QProxyStyle_Polish_Callback cb) { qproxystyle_polish_callback = cb; }
    void setQProxyStyle_PolishWithPal_Callback(QProxyStyle_PolishWithPal_Callback cb) { qproxystyle_polishwithpal_callback = cb; }
    void setQProxyStyle_PolishWithApp_Callback(QProxyStyle_PolishWithApp_Callback cb) { qproxystyle_polishwithapp_callback = cb; }
    void setQProxyStyle_Unpolish_Callback(QProxyStyle_Unpolish_Callback cb) { qproxystyle_unpolish_callback = cb; }
    void setQProxyStyle_UnpolishWithApp_Callback(QProxyStyle_UnpolishWithApp_Callback cb) { qproxystyle_unpolishwithapp_callback = cb; }
    void setQProxyStyle_Event_Callback(QProxyStyle_Event_Callback cb) { qproxystyle_event_callback = cb; }
    void setQProxyStyle_EventFilter_Callback(QProxyStyle_EventFilter_Callback cb) { qproxystyle_eventfilter_callback = cb; }
    void setQProxyStyle_TimerEvent_Callback(QProxyStyle_TimerEvent_Callback cb) { qproxystyle_timerevent_callback = cb; }
    void setQProxyStyle_ChildEvent_Callback(QProxyStyle_ChildEvent_Callback cb) { qproxystyle_childevent_callback = cb; }
    void setQProxyStyle_CustomEvent_Callback(QProxyStyle_CustomEvent_Callback cb) { qproxystyle_customevent_callback = cb; }
    void setQProxyStyle_ConnectNotify_Callback(QProxyStyle_ConnectNotify_Callback cb) { qproxystyle_connectnotify_callback = cb; }
    void setQProxyStyle_DisconnectNotify_Callback(QProxyStyle_DisconnectNotify_Callback cb) { qproxystyle_disconnectnotify_callback = cb; }
    void setQProxyStyle_Sender_Callback(QProxyStyle_Sender_Callback cb) { qproxystyle_sender_callback = cb; }
    void setQProxyStyle_SenderSignalIndex_Callback(QProxyStyle_SenderSignalIndex_Callback cb) { qproxystyle_sendersignalindex_callback = cb; }
    void setQProxyStyle_Receivers_Callback(QProxyStyle_Receivers_Callback cb) { qproxystyle_receivers_callback = cb; }
    void setQProxyStyle_IsSignalConnected_Callback(QProxyStyle_IsSignalConnected_Callback cb) { qproxystyle_issignalconnected_callback = cb; }

    // Base flag setters
    void setQProxyStyle_Metacall_IsBase(bool value) const { qproxystyle_metacall_isbase = value; }
    void setQProxyStyle_DrawPrimitive_IsBase(bool value) const { qproxystyle_drawprimitive_isbase = value; }
    void setQProxyStyle_DrawControl_IsBase(bool value) const { qproxystyle_drawcontrol_isbase = value; }
    void setQProxyStyle_DrawComplexControl_IsBase(bool value) const { qproxystyle_drawcomplexcontrol_isbase = value; }
    void setQProxyStyle_DrawItemText_IsBase(bool value) const { qproxystyle_drawitemtext_isbase = value; }
    void setQProxyStyle_DrawItemPixmap_IsBase(bool value) const { qproxystyle_drawitempixmap_isbase = value; }
    void setQProxyStyle_SizeFromContents_IsBase(bool value) const { qproxystyle_sizefromcontents_isbase = value; }
    void setQProxyStyle_SubElementRect_IsBase(bool value) const { qproxystyle_subelementrect_isbase = value; }
    void setQProxyStyle_SubControlRect_IsBase(bool value) const { qproxystyle_subcontrolrect_isbase = value; }
    void setQProxyStyle_ItemTextRect_IsBase(bool value) const { qproxystyle_itemtextrect_isbase = value; }
    void setQProxyStyle_ItemPixmapRect_IsBase(bool value) const { qproxystyle_itempixmaprect_isbase = value; }
    void setQProxyStyle_HitTestComplexControl_IsBase(bool value) const { qproxystyle_hittestcomplexcontrol_isbase = value; }
    void setQProxyStyle_StyleHint_IsBase(bool value) const { qproxystyle_stylehint_isbase = value; }
    void setQProxyStyle_PixelMetric_IsBase(bool value) const { qproxystyle_pixelmetric_isbase = value; }
    void setQProxyStyle_LayoutSpacing_IsBase(bool value) const { qproxystyle_layoutspacing_isbase = value; }
    void setQProxyStyle_StandardIcon_IsBase(bool value) const { qproxystyle_standardicon_isbase = value; }
    void setQProxyStyle_StandardPixmap_IsBase(bool value) const { qproxystyle_standardpixmap_isbase = value; }
    void setQProxyStyle_GeneratedIconPixmap_IsBase(bool value) const { qproxystyle_generatediconpixmap_isbase = value; }
    void setQProxyStyle_StandardPalette_IsBase(bool value) const { qproxystyle_standardpalette_isbase = value; }
    void setQProxyStyle_Polish_IsBase(bool value) const { qproxystyle_polish_isbase = value; }
    void setQProxyStyle_PolishWithPal_IsBase(bool value) const { qproxystyle_polishwithpal_isbase = value; }
    void setQProxyStyle_PolishWithApp_IsBase(bool value) const { qproxystyle_polishwithapp_isbase = value; }
    void setQProxyStyle_Unpolish_IsBase(bool value) const { qproxystyle_unpolish_isbase = value; }
    void setQProxyStyle_UnpolishWithApp_IsBase(bool value) const { qproxystyle_unpolishwithapp_isbase = value; }
    void setQProxyStyle_Event_IsBase(bool value) const { qproxystyle_event_isbase = value; }
    void setQProxyStyle_EventFilter_IsBase(bool value) const { qproxystyle_eventfilter_isbase = value; }
    void setQProxyStyle_TimerEvent_IsBase(bool value) const { qproxystyle_timerevent_isbase = value; }
    void setQProxyStyle_ChildEvent_IsBase(bool value) const { qproxystyle_childevent_isbase = value; }
    void setQProxyStyle_CustomEvent_IsBase(bool value) const { qproxystyle_customevent_isbase = value; }
    void setQProxyStyle_ConnectNotify_IsBase(bool value) const { qproxystyle_connectnotify_isbase = value; }
    void setQProxyStyle_DisconnectNotify_IsBase(bool value) const { qproxystyle_disconnectnotify_isbase = value; }
    void setQProxyStyle_Sender_IsBase(bool value) const { qproxystyle_sender_isbase = value; }
    void setQProxyStyle_SenderSignalIndex_IsBase(bool value) const { qproxystyle_sendersignalindex_isbase = value; }
    void setQProxyStyle_Receivers_IsBase(bool value) const { qproxystyle_receivers_isbase = value; }
    void setQProxyStyle_IsSignalConnected_IsBase(bool value) const { qproxystyle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qproxystyle_metacall_isbase) {
            qproxystyle_metacall_isbase = false;
            return QProxyStyle::qt_metacall(param1, param2, param3);
        } else if (qproxystyle_metacall_callback != nullptr) {
            return qproxystyle_metacall_callback(this, param1, param2, param3);
        } else {
            return QProxyStyle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawprimitive_isbase) {
            qproxystyle_drawprimitive_isbase = false;
            QProxyStyle::drawPrimitive(element, option, painter, widget);
        } else if (qproxystyle_drawprimitive_callback != nullptr) {
            qproxystyle_drawprimitive_callback(this, element, option, painter, widget);
        } else {
            QProxyStyle::drawPrimitive(element, option, painter, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawcontrol_isbase) {
            qproxystyle_drawcontrol_isbase = false;
            QProxyStyle::drawControl(element, option, painter, widget);
        } else if (qproxystyle_drawcontrol_callback != nullptr) {
            qproxystyle_drawcontrol_callback(this, element, option, painter, widget);
        } else {
            QProxyStyle::drawControl(element, option, painter, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawcomplexcontrol_isbase) {
            qproxystyle_drawcomplexcontrol_isbase = false;
            QProxyStyle::drawComplexControl(control, option, painter, widget);
        } else if (qproxystyle_drawcomplexcontrol_callback != nullptr) {
            qproxystyle_drawcomplexcontrol_callback(this, control, option, painter, widget);
        } else {
            QProxyStyle::drawComplexControl(control, option, painter, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qproxystyle_drawitemtext_isbase) {
            qproxystyle_drawitemtext_isbase = false;
            QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        } else if (qproxystyle_drawitemtext_callback != nullptr) {
            qproxystyle_drawitemtext_callback(this, painter, rect, flags, pal, enabled, text, textRole);
        } else {
            QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qproxystyle_drawitempixmap_isbase) {
            qproxystyle_drawitempixmap_isbase = false;
            QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        } else if (qproxystyle_drawitempixmap_callback != nullptr) {
            qproxystyle_drawitempixmap_callback(this, painter, rect, alignment, pixmap);
        } else {
            QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType typeVal, const QStyleOption* option, const QSize& size, const QWidget* widget) const override {
        if (qproxystyle_sizefromcontents_isbase) {
            qproxystyle_sizefromcontents_isbase = false;
            return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
        } else if (qproxystyle_sizefromcontents_callback != nullptr) {
            return qproxystyle_sizefromcontents_callback(this, typeVal, option, size, widget);
        } else {
            return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement element, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_subelementrect_isbase) {
            qproxystyle_subelementrect_isbase = false;
            return QProxyStyle::subElementRect(element, option, widget);
        } else if (qproxystyle_subelementrect_callback != nullptr) {
            return qproxystyle_subelementrect_callback(this, element, option, widget);
        } else {
            return QProxyStyle::subElementRect(element, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
        if (qproxystyle_subcontrolrect_isbase) {
            qproxystyle_subcontrolrect_isbase = false;
            return QProxyStyle::subControlRect(cc, opt, sc, widget);
        } else if (qproxystyle_subcontrolrect_callback != nullptr) {
            return qproxystyle_subcontrolrect_callback(this, cc, opt, sc, widget);
        } else {
            return QProxyStyle::subControlRect(cc, opt, sc, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qproxystyle_itemtextrect_isbase) {
            qproxystyle_itemtextrect_isbase = false;
            return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
        } else if (qproxystyle_itemtextrect_callback != nullptr) {
            return qproxystyle_itemtextrect_callback(this, fm, r, flags, enabled, text);
        } else {
            return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qproxystyle_itempixmaprect_isbase) {
            qproxystyle_itempixmaprect_isbase = false;
            return QProxyStyle::itemPixmapRect(r, flags, pixmap);
        } else if (qproxystyle_itempixmaprect_callback != nullptr) {
            return qproxystyle_itempixmaprect_callback(this, r, flags, pixmap);
        } else {
            return QProxyStyle::itemPixmapRect(r, flags, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, const QPoint& pos, const QWidget* widget) const override {
        if (qproxystyle_hittestcomplexcontrol_isbase) {
            qproxystyle_hittestcomplexcontrol_isbase = false;
            return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
        } else if (qproxystyle_hittestcomplexcontrol_callback != nullptr) {
            return qproxystyle_hittestcomplexcontrol_callback(this, control, option, pos, widget);
        } else {
            return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) const override {
        if (qproxystyle_stylehint_isbase) {
            qproxystyle_stylehint_isbase = false;
            return QProxyStyle::styleHint(hint, option, widget, returnData);
        } else if (qproxystyle_stylehint_callback != nullptr) {
            return qproxystyle_stylehint_callback(this, hint, option, widget, returnData);
        } else {
            return QProxyStyle::styleHint(hint, option, widget, returnData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_pixelmetric_isbase) {
            qproxystyle_pixelmetric_isbase = false;
            return QProxyStyle::pixelMetric(metric, option, widget);
        } else if (qproxystyle_pixelmetric_callback != nullptr) {
            return qproxystyle_pixelmetric_callback(this, metric, option, widget);
        } else {
            return QProxyStyle::pixelMetric(metric, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_layoutspacing_isbase) {
            qproxystyle_layoutspacing_isbase = false;
            return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
        } else if (qproxystyle_layoutspacing_callback != nullptr) {
            return qproxystyle_layoutspacing_callback(this, control1, control2, orientation, option, widget);
        } else {
            return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_standardicon_isbase) {
            qproxystyle_standardicon_isbase = false;
            return QProxyStyle::standardIcon(standardIcon, option, widget);
        } else if (qproxystyle_standardicon_callback != nullptr) {
            return qproxystyle_standardicon_callback(this, standardIcon, option, widget);
        } else {
            return QProxyStyle::standardIcon(standardIcon, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
        if (qproxystyle_standardpixmap_isbase) {
            qproxystyle_standardpixmap_isbase = false;
            return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
        } else if (qproxystyle_standardpixmap_callback != nullptr) {
            return qproxystyle_standardpixmap_callback(this, standardPixmap, opt, widget);
        } else {
            return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qproxystyle_generatediconpixmap_isbase) {
            qproxystyle_generatediconpixmap_isbase = false;
            return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
        } else if (qproxystyle_generatediconpixmap_callback != nullptr) {
            return qproxystyle_generatediconpixmap_callback(this, iconMode, pixmap, opt);
        } else {
            return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qproxystyle_standardpalette_isbase) {
            qproxystyle_standardpalette_isbase = false;
            return QProxyStyle::standardPalette();
        } else if (qproxystyle_standardpalette_callback != nullptr) {
            return qproxystyle_standardpalette_callback();
        } else {
            return QProxyStyle::standardPalette();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qproxystyle_polish_isbase) {
            qproxystyle_polish_isbase = false;
            QProxyStyle::polish(widget);
        } else if (qproxystyle_polish_callback != nullptr) {
            qproxystyle_polish_callback(this, widget);
        } else {
            QProxyStyle::polish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& pal) override {
        if (qproxystyle_polishwithpal_isbase) {
            qproxystyle_polishwithpal_isbase = false;
            QProxyStyle::polish(pal);
        } else if (qproxystyle_polishwithpal_callback != nullptr) {
            qproxystyle_polishwithpal_callback(this, pal);
        } else {
            QProxyStyle::polish(pal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* app) override {
        if (qproxystyle_polishwithapp_isbase) {
            qproxystyle_polishwithapp_isbase = false;
            QProxyStyle::polish(app);
        } else if (qproxystyle_polishwithapp_callback != nullptr) {
            qproxystyle_polishwithapp_callback(this, app);
        } else {
            QProxyStyle::polish(app);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qproxystyle_unpolish_isbase) {
            qproxystyle_unpolish_isbase = false;
            QProxyStyle::unpolish(widget);
        } else if (qproxystyle_unpolish_callback != nullptr) {
            qproxystyle_unpolish_callback(this, widget);
        } else {
            QProxyStyle::unpolish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* app) override {
        if (qproxystyle_unpolishwithapp_isbase) {
            qproxystyle_unpolishwithapp_isbase = false;
            QProxyStyle::unpolish(app);
        } else if (qproxystyle_unpolishwithapp_callback != nullptr) {
            qproxystyle_unpolishwithapp_callback(this, app);
        } else {
            QProxyStyle::unpolish(app);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qproxystyle_event_isbase) {
            qproxystyle_event_isbase = false;
            return QProxyStyle::event(e);
        } else if (qproxystyle_event_callback != nullptr) {
            return qproxystyle_event_callback(this, e);
        } else {
            return QProxyStyle::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qproxystyle_eventfilter_isbase) {
            qproxystyle_eventfilter_isbase = false;
            return QProxyStyle::eventFilter(watched, event);
        } else if (qproxystyle_eventfilter_callback != nullptr) {
            return qproxystyle_eventfilter_callback(this, watched, event);
        } else {
            return QProxyStyle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qproxystyle_timerevent_isbase) {
            qproxystyle_timerevent_isbase = false;
            QProxyStyle::timerEvent(event);
        } else if (qproxystyle_timerevent_callback != nullptr) {
            qproxystyle_timerevent_callback(this, event);
        } else {
            QProxyStyle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qproxystyle_childevent_isbase) {
            qproxystyle_childevent_isbase = false;
            QProxyStyle::childEvent(event);
        } else if (qproxystyle_childevent_callback != nullptr) {
            qproxystyle_childevent_callback(this, event);
        } else {
            QProxyStyle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qproxystyle_customevent_isbase) {
            qproxystyle_customevent_isbase = false;
            QProxyStyle::customEvent(event);
        } else if (qproxystyle_customevent_callback != nullptr) {
            qproxystyle_customevent_callback(this, event);
        } else {
            QProxyStyle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qproxystyle_connectnotify_isbase) {
            qproxystyle_connectnotify_isbase = false;
            QProxyStyle::connectNotify(signal);
        } else if (qproxystyle_connectnotify_callback != nullptr) {
            qproxystyle_connectnotify_callback(this, signal);
        } else {
            QProxyStyle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qproxystyle_disconnectnotify_isbase) {
            qproxystyle_disconnectnotify_isbase = false;
            QProxyStyle::disconnectNotify(signal);
        } else if (qproxystyle_disconnectnotify_callback != nullptr) {
            qproxystyle_disconnectnotify_callback(this, signal);
        } else {
            QProxyStyle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qproxystyle_sender_isbase) {
            qproxystyle_sender_isbase = false;
            return QProxyStyle::sender();
        } else if (qproxystyle_sender_callback != nullptr) {
            return qproxystyle_sender_callback();
        } else {
            return QProxyStyle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qproxystyle_sendersignalindex_isbase) {
            qproxystyle_sendersignalindex_isbase = false;
            return QProxyStyle::senderSignalIndex();
        } else if (qproxystyle_sendersignalindex_callback != nullptr) {
            return qproxystyle_sendersignalindex_callback();
        } else {
            return QProxyStyle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qproxystyle_receivers_isbase) {
            qproxystyle_receivers_isbase = false;
            return QProxyStyle::receivers(signal);
        } else if (qproxystyle_receivers_callback != nullptr) {
            return qproxystyle_receivers_callback(this, signal);
        } else {
            return QProxyStyle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qproxystyle_issignalconnected_isbase) {
            qproxystyle_issignalconnected_isbase = false;
            return QProxyStyle::isSignalConnected(signal);
        } else if (qproxystyle_issignalconnected_callback != nullptr) {
            return qproxystyle_issignalconnected_callback(this, signal);
        } else {
            return QProxyStyle::isSignalConnected(signal);
        }
    }
};

#endif
