#pragma once
#ifndef SRCC_LIBVIRTUALQSTYLE_H
#define SRCC_LIBVIRTUALQSTYLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStyle so that we can call protected methods
class VirtualQStyle : public QStyle {

  public:
    // Virtual class public types (including callbacks)
    using QStyle_Metacall_Callback = int (*)(QStyle*, QMetaObject::Call, int, void**);
    using QStyle_Polish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_Unpolish_Callback = void (*)(QStyle*, QWidget*);
    using QStyle_PolishWithApplication_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_UnpolishWithApplication_Callback = void (*)(QStyle*, QApplication*);
    using QStyle_PolishWithPalette_Callback = void (*)(QStyle*, QPalette&);
    using QStyle_ItemTextRect_Callback = QRect (*)(const QStyle*, const QFontMetrics&, const QRect&, int, bool, const QString&);
    using QStyle_ItemPixmapRect_Callback = QRect (*)(const QStyle*, const QRect&, int, const QPixmap&);
    using QStyle_DrawItemText_Callback = void (*)(const QStyle*, QPainter*, const QRect&, int, const QPalette&, bool, const QString&, QPalette::ColorRole);
    using QStyle_DrawItemPixmap_Callback = void (*)(const QStyle*, QPainter*, const QRect&, int, const QPixmap&);
    using QStyle_StandardPalette_Callback = QPalette (*)();
    using QStyle_DrawPrimitive_Callback = void (*)(const QStyle*, QStyle::PrimitiveElement, const QStyleOption*, QPainter*, const QWidget*);
    using QStyle_DrawControl_Callback = void (*)(const QStyle*, QStyle::ControlElement, const QStyleOption*, QPainter*, const QWidget*);
    using QStyle_SubElementRect_Callback = QRect (*)(const QStyle*, QStyle::SubElement, const QStyleOption*, const QWidget*);
    using QStyle_DrawComplexControl_Callback = void (*)(const QStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QPainter*, const QWidget*);
    using QStyle_HitTestComplexControl_Callback = QStyle::SubControl (*)(const QStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, const QPoint&, const QWidget*);
    using QStyle_SubControlRect_Callback = QRect (*)(const QStyle*, QStyle::ComplexControl, const QStyleOptionComplex*, QStyle::SubControl, const QWidget*);
    using QStyle_PixelMetric_Callback = int (*)(const QStyle*, QStyle::PixelMetric, const QStyleOption*, const QWidget*);
    using QStyle_SizeFromContents_Callback = QSize (*)(const QStyle*, QStyle::ContentsType, const QStyleOption*, const QSize&, const QWidget*);
    using QStyle_StyleHint_Callback = int (*)(const QStyle*, QStyle::StyleHint, const QStyleOption*, const QWidget*, QStyleHintReturn*);
    using QStyle_StandardPixmap_Callback = QPixmap (*)(const QStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QStyle_StandardIcon_Callback = QIcon (*)(const QStyle*, QStyle::StandardPixmap, const QStyleOption*, const QWidget*);
    using QStyle_GeneratedIconPixmap_Callback = QPixmap (*)(const QStyle*, QIcon::Mode, const QPixmap&, const QStyleOption*);
    using QStyle_LayoutSpacing_Callback = int (*)(const QStyle*, QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption*, const QWidget*);
    using QStyle_Event_Callback = bool (*)(QStyle*, QEvent*);
    using QStyle_EventFilter_Callback = bool (*)(QStyle*, QObject*, QEvent*);
    using QStyle_TimerEvent_Callback = void (*)(QStyle*, QTimerEvent*);
    using QStyle_ChildEvent_Callback = void (*)(QStyle*, QChildEvent*);
    using QStyle_CustomEvent_Callback = void (*)(QStyle*, QEvent*);
    using QStyle_ConnectNotify_Callback = void (*)(QStyle*, const QMetaMethod&);
    using QStyle_DisconnectNotify_Callback = void (*)(QStyle*, const QMetaMethod&);
    using QStyle_Sender_Callback = QObject* (*)();
    using QStyle_SenderSignalIndex_Callback = int (*)();
    using QStyle_Receivers_Callback = int (*)(const QStyle*, const char*);
    using QStyle_IsSignalConnected_Callback = bool (*)(const QStyle*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QStyle_Metacall_Callback qstyle_metacall_callback = nullptr;
    QStyle_Polish_Callback qstyle_polish_callback = nullptr;
    QStyle_Unpolish_Callback qstyle_unpolish_callback = nullptr;
    QStyle_PolishWithApplication_Callback qstyle_polishwithapplication_callback = nullptr;
    QStyle_UnpolishWithApplication_Callback qstyle_unpolishwithapplication_callback = nullptr;
    QStyle_PolishWithPalette_Callback qstyle_polishwithpalette_callback = nullptr;
    QStyle_ItemTextRect_Callback qstyle_itemtextrect_callback = nullptr;
    QStyle_ItemPixmapRect_Callback qstyle_itempixmaprect_callback = nullptr;
    QStyle_DrawItemText_Callback qstyle_drawitemtext_callback = nullptr;
    QStyle_DrawItemPixmap_Callback qstyle_drawitempixmap_callback = nullptr;
    QStyle_StandardPalette_Callback qstyle_standardpalette_callback = nullptr;
    QStyle_DrawPrimitive_Callback qstyle_drawprimitive_callback = nullptr;
    QStyle_DrawControl_Callback qstyle_drawcontrol_callback = nullptr;
    QStyle_SubElementRect_Callback qstyle_subelementrect_callback = nullptr;
    QStyle_DrawComplexControl_Callback qstyle_drawcomplexcontrol_callback = nullptr;
    QStyle_HitTestComplexControl_Callback qstyle_hittestcomplexcontrol_callback = nullptr;
    QStyle_SubControlRect_Callback qstyle_subcontrolrect_callback = nullptr;
    QStyle_PixelMetric_Callback qstyle_pixelmetric_callback = nullptr;
    QStyle_SizeFromContents_Callback qstyle_sizefromcontents_callback = nullptr;
    QStyle_StyleHint_Callback qstyle_stylehint_callback = nullptr;
    QStyle_StandardPixmap_Callback qstyle_standardpixmap_callback = nullptr;
    QStyle_StandardIcon_Callback qstyle_standardicon_callback = nullptr;
    QStyle_GeneratedIconPixmap_Callback qstyle_generatediconpixmap_callback = nullptr;
    QStyle_LayoutSpacing_Callback qstyle_layoutspacing_callback = nullptr;
    QStyle_Event_Callback qstyle_event_callback = nullptr;
    QStyle_EventFilter_Callback qstyle_eventfilter_callback = nullptr;
    QStyle_TimerEvent_Callback qstyle_timerevent_callback = nullptr;
    QStyle_ChildEvent_Callback qstyle_childevent_callback = nullptr;
    QStyle_CustomEvent_Callback qstyle_customevent_callback = nullptr;
    QStyle_ConnectNotify_Callback qstyle_connectnotify_callback = nullptr;
    QStyle_DisconnectNotify_Callback qstyle_disconnectnotify_callback = nullptr;
    QStyle_Sender_Callback qstyle_sender_callback = nullptr;
    QStyle_SenderSignalIndex_Callback qstyle_sendersignalindex_callback = nullptr;
    QStyle_Receivers_Callback qstyle_receivers_callback = nullptr;
    QStyle_IsSignalConnected_Callback qstyle_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstyle_metacall_isbase = false;
    mutable bool qstyle_polish_isbase = false;
    mutable bool qstyle_unpolish_isbase = false;
    mutable bool qstyle_polishwithapplication_isbase = false;
    mutable bool qstyle_unpolishwithapplication_isbase = false;
    mutable bool qstyle_polishwithpalette_isbase = false;
    mutable bool qstyle_itemtextrect_isbase = false;
    mutable bool qstyle_itempixmaprect_isbase = false;
    mutable bool qstyle_drawitemtext_isbase = false;
    mutable bool qstyle_drawitempixmap_isbase = false;
    mutable bool qstyle_standardpalette_isbase = false;
    mutable bool qstyle_drawprimitive_isbase = false;
    mutable bool qstyle_drawcontrol_isbase = false;
    mutable bool qstyle_subelementrect_isbase = false;
    mutable bool qstyle_drawcomplexcontrol_isbase = false;
    mutable bool qstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qstyle_subcontrolrect_isbase = false;
    mutable bool qstyle_pixelmetric_isbase = false;
    mutable bool qstyle_sizefromcontents_isbase = false;
    mutable bool qstyle_stylehint_isbase = false;
    mutable bool qstyle_standardpixmap_isbase = false;
    mutable bool qstyle_standardicon_isbase = false;
    mutable bool qstyle_generatediconpixmap_isbase = false;
    mutable bool qstyle_layoutspacing_isbase = false;
    mutable bool qstyle_event_isbase = false;
    mutable bool qstyle_eventfilter_isbase = false;
    mutable bool qstyle_timerevent_isbase = false;
    mutable bool qstyle_childevent_isbase = false;
    mutable bool qstyle_customevent_isbase = false;
    mutable bool qstyle_connectnotify_isbase = false;
    mutable bool qstyle_disconnectnotify_isbase = false;
    mutable bool qstyle_sender_isbase = false;
    mutable bool qstyle_sendersignalindex_isbase = false;
    mutable bool qstyle_receivers_isbase = false;
    mutable bool qstyle_issignalconnected_isbase = false;

  public:
    VirtualQStyle() : QStyle(){};

    ~VirtualQStyle() {
        qstyle_metacall_callback = nullptr;
        qstyle_polish_callback = nullptr;
        qstyle_unpolish_callback = nullptr;
        qstyle_polishwithapplication_callback = nullptr;
        qstyle_unpolishwithapplication_callback = nullptr;
        qstyle_polishwithpalette_callback = nullptr;
        qstyle_itemtextrect_callback = nullptr;
        qstyle_itempixmaprect_callback = nullptr;
        qstyle_drawitemtext_callback = nullptr;
        qstyle_drawitempixmap_callback = nullptr;
        qstyle_standardpalette_callback = nullptr;
        qstyle_drawprimitive_callback = nullptr;
        qstyle_drawcontrol_callback = nullptr;
        qstyle_subelementrect_callback = nullptr;
        qstyle_drawcomplexcontrol_callback = nullptr;
        qstyle_hittestcomplexcontrol_callback = nullptr;
        qstyle_subcontrolrect_callback = nullptr;
        qstyle_pixelmetric_callback = nullptr;
        qstyle_sizefromcontents_callback = nullptr;
        qstyle_stylehint_callback = nullptr;
        qstyle_standardpixmap_callback = nullptr;
        qstyle_standardicon_callback = nullptr;
        qstyle_generatediconpixmap_callback = nullptr;
        qstyle_layoutspacing_callback = nullptr;
        qstyle_event_callback = nullptr;
        qstyle_eventfilter_callback = nullptr;
        qstyle_timerevent_callback = nullptr;
        qstyle_childevent_callback = nullptr;
        qstyle_customevent_callback = nullptr;
        qstyle_connectnotify_callback = nullptr;
        qstyle_disconnectnotify_callback = nullptr;
        qstyle_sender_callback = nullptr;
        qstyle_sendersignalindex_callback = nullptr;
        qstyle_receivers_callback = nullptr;
        qstyle_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQStyle_Metacall_Callback(QStyle_Metacall_Callback cb) { qstyle_metacall_callback = cb; }
    void setQStyle_Polish_Callback(QStyle_Polish_Callback cb) { qstyle_polish_callback = cb; }
    void setQStyle_Unpolish_Callback(QStyle_Unpolish_Callback cb) { qstyle_unpolish_callback = cb; }
    void setQStyle_PolishWithApplication_Callback(QStyle_PolishWithApplication_Callback cb) { qstyle_polishwithapplication_callback = cb; }
    void setQStyle_UnpolishWithApplication_Callback(QStyle_UnpolishWithApplication_Callback cb) { qstyle_unpolishwithapplication_callback = cb; }
    void setQStyle_PolishWithPalette_Callback(QStyle_PolishWithPalette_Callback cb) { qstyle_polishwithpalette_callback = cb; }
    void setQStyle_ItemTextRect_Callback(QStyle_ItemTextRect_Callback cb) { qstyle_itemtextrect_callback = cb; }
    void setQStyle_ItemPixmapRect_Callback(QStyle_ItemPixmapRect_Callback cb) { qstyle_itempixmaprect_callback = cb; }
    void setQStyle_DrawItemText_Callback(QStyle_DrawItemText_Callback cb) { qstyle_drawitemtext_callback = cb; }
    void setQStyle_DrawItemPixmap_Callback(QStyle_DrawItemPixmap_Callback cb) { qstyle_drawitempixmap_callback = cb; }
    void setQStyle_StandardPalette_Callback(QStyle_StandardPalette_Callback cb) { qstyle_standardpalette_callback = cb; }
    void setQStyle_DrawPrimitive_Callback(QStyle_DrawPrimitive_Callback cb) { qstyle_drawprimitive_callback = cb; }
    void setQStyle_DrawControl_Callback(QStyle_DrawControl_Callback cb) { qstyle_drawcontrol_callback = cb; }
    void setQStyle_SubElementRect_Callback(QStyle_SubElementRect_Callback cb) { qstyle_subelementrect_callback = cb; }
    void setQStyle_DrawComplexControl_Callback(QStyle_DrawComplexControl_Callback cb) { qstyle_drawcomplexcontrol_callback = cb; }
    void setQStyle_HitTestComplexControl_Callback(QStyle_HitTestComplexControl_Callback cb) { qstyle_hittestcomplexcontrol_callback = cb; }
    void setQStyle_SubControlRect_Callback(QStyle_SubControlRect_Callback cb) { qstyle_subcontrolrect_callback = cb; }
    void setQStyle_PixelMetric_Callback(QStyle_PixelMetric_Callback cb) { qstyle_pixelmetric_callback = cb; }
    void setQStyle_SizeFromContents_Callback(QStyle_SizeFromContents_Callback cb) { qstyle_sizefromcontents_callback = cb; }
    void setQStyle_StyleHint_Callback(QStyle_StyleHint_Callback cb) { qstyle_stylehint_callback = cb; }
    void setQStyle_StandardPixmap_Callback(QStyle_StandardPixmap_Callback cb) { qstyle_standardpixmap_callback = cb; }
    void setQStyle_StandardIcon_Callback(QStyle_StandardIcon_Callback cb) { qstyle_standardicon_callback = cb; }
    void setQStyle_GeneratedIconPixmap_Callback(QStyle_GeneratedIconPixmap_Callback cb) { qstyle_generatediconpixmap_callback = cb; }
    void setQStyle_LayoutSpacing_Callback(QStyle_LayoutSpacing_Callback cb) { qstyle_layoutspacing_callback = cb; }
    void setQStyle_Event_Callback(QStyle_Event_Callback cb) { qstyle_event_callback = cb; }
    void setQStyle_EventFilter_Callback(QStyle_EventFilter_Callback cb) { qstyle_eventfilter_callback = cb; }
    void setQStyle_TimerEvent_Callback(QStyle_TimerEvent_Callback cb) { qstyle_timerevent_callback = cb; }
    void setQStyle_ChildEvent_Callback(QStyle_ChildEvent_Callback cb) { qstyle_childevent_callback = cb; }
    void setQStyle_CustomEvent_Callback(QStyle_CustomEvent_Callback cb) { qstyle_customevent_callback = cb; }
    void setQStyle_ConnectNotify_Callback(QStyle_ConnectNotify_Callback cb) { qstyle_connectnotify_callback = cb; }
    void setQStyle_DisconnectNotify_Callback(QStyle_DisconnectNotify_Callback cb) { qstyle_disconnectnotify_callback = cb; }
    void setQStyle_Sender_Callback(QStyle_Sender_Callback cb) { qstyle_sender_callback = cb; }
    void setQStyle_SenderSignalIndex_Callback(QStyle_SenderSignalIndex_Callback cb) { qstyle_sendersignalindex_callback = cb; }
    void setQStyle_Receivers_Callback(QStyle_Receivers_Callback cb) { qstyle_receivers_callback = cb; }
    void setQStyle_IsSignalConnected_Callback(QStyle_IsSignalConnected_Callback cb) { qstyle_issignalconnected_callback = cb; }

    // Base flag setters
    void setQStyle_Metacall_IsBase(bool value) const { qstyle_metacall_isbase = value; }
    void setQStyle_Polish_IsBase(bool value) const { qstyle_polish_isbase = value; }
    void setQStyle_Unpolish_IsBase(bool value) const { qstyle_unpolish_isbase = value; }
    void setQStyle_PolishWithApplication_IsBase(bool value) const { qstyle_polishwithapplication_isbase = value; }
    void setQStyle_UnpolishWithApplication_IsBase(bool value) const { qstyle_unpolishwithapplication_isbase = value; }
    void setQStyle_PolishWithPalette_IsBase(bool value) const { qstyle_polishwithpalette_isbase = value; }
    void setQStyle_ItemTextRect_IsBase(bool value) const { qstyle_itemtextrect_isbase = value; }
    void setQStyle_ItemPixmapRect_IsBase(bool value) const { qstyle_itempixmaprect_isbase = value; }
    void setQStyle_DrawItemText_IsBase(bool value) const { qstyle_drawitemtext_isbase = value; }
    void setQStyle_DrawItemPixmap_IsBase(bool value) const { qstyle_drawitempixmap_isbase = value; }
    void setQStyle_StandardPalette_IsBase(bool value) const { qstyle_standardpalette_isbase = value; }
    void setQStyle_DrawPrimitive_IsBase(bool value) const { qstyle_drawprimitive_isbase = value; }
    void setQStyle_DrawControl_IsBase(bool value) const { qstyle_drawcontrol_isbase = value; }
    void setQStyle_SubElementRect_IsBase(bool value) const { qstyle_subelementrect_isbase = value; }
    void setQStyle_DrawComplexControl_IsBase(bool value) const { qstyle_drawcomplexcontrol_isbase = value; }
    void setQStyle_HitTestComplexControl_IsBase(bool value) const { qstyle_hittestcomplexcontrol_isbase = value; }
    void setQStyle_SubControlRect_IsBase(bool value) const { qstyle_subcontrolrect_isbase = value; }
    void setQStyle_PixelMetric_IsBase(bool value) const { qstyle_pixelmetric_isbase = value; }
    void setQStyle_SizeFromContents_IsBase(bool value) const { qstyle_sizefromcontents_isbase = value; }
    void setQStyle_StyleHint_IsBase(bool value) const { qstyle_stylehint_isbase = value; }
    void setQStyle_StandardPixmap_IsBase(bool value) const { qstyle_standardpixmap_isbase = value; }
    void setQStyle_StandardIcon_IsBase(bool value) const { qstyle_standardicon_isbase = value; }
    void setQStyle_GeneratedIconPixmap_IsBase(bool value) const { qstyle_generatediconpixmap_isbase = value; }
    void setQStyle_LayoutSpacing_IsBase(bool value) const { qstyle_layoutspacing_isbase = value; }
    void setQStyle_Event_IsBase(bool value) const { qstyle_event_isbase = value; }
    void setQStyle_EventFilter_IsBase(bool value) const { qstyle_eventfilter_isbase = value; }
    void setQStyle_TimerEvent_IsBase(bool value) const { qstyle_timerevent_isbase = value; }
    void setQStyle_ChildEvent_IsBase(bool value) const { qstyle_childevent_isbase = value; }
    void setQStyle_CustomEvent_IsBase(bool value) const { qstyle_customevent_isbase = value; }
    void setQStyle_ConnectNotify_IsBase(bool value) const { qstyle_connectnotify_isbase = value; }
    void setQStyle_DisconnectNotify_IsBase(bool value) const { qstyle_disconnectnotify_isbase = value; }
    void setQStyle_Sender_IsBase(bool value) const { qstyle_sender_isbase = value; }
    void setQStyle_SenderSignalIndex_IsBase(bool value) const { qstyle_sendersignalindex_isbase = value; }
    void setQStyle_Receivers_IsBase(bool value) const { qstyle_receivers_isbase = value; }
    void setQStyle_IsSignalConnected_IsBase(bool value) const { qstyle_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyle_metacall_isbase) {
            qstyle_metacall_isbase = false;
            return QStyle::qt_metacall(param1, param2, param3);
        } else if (qstyle_metacall_callback != nullptr) {
            return qstyle_metacall_callback(this, param1, param2, param3);
        } else {
            return QStyle::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qstyle_polish_isbase) {
            qstyle_polish_isbase = false;
            QStyle::polish(widget);
        } else if (qstyle_polish_callback != nullptr) {
            qstyle_polish_callback(this, widget);
        } else {
            QStyle::polish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qstyle_unpolish_isbase) {
            qstyle_unpolish_isbase = false;
            QStyle::unpolish(widget);
        } else if (qstyle_unpolish_callback != nullptr) {
            qstyle_unpolish_callback(this, widget);
        } else {
            QStyle::unpolish(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* application) override {
        if (qstyle_polishwithapplication_isbase) {
            qstyle_polishwithapplication_isbase = false;
            QStyle::polish(application);
        } else if (qstyle_polishwithapplication_callback != nullptr) {
            qstyle_polishwithapplication_callback(this, application);
        } else {
            QStyle::polish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qstyle_unpolishwithapplication_isbase) {
            qstyle_unpolishwithapplication_isbase = false;
            QStyle::unpolish(application);
        } else if (qstyle_unpolishwithapplication_callback != nullptr) {
            qstyle_unpolishwithapplication_callback(this, application);
        } else {
            QStyle::unpolish(application);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& palette) override {
        if (qstyle_polishwithpalette_isbase) {
            qstyle_polishwithpalette_isbase = false;
            QStyle::polish(palette);
        } else if (qstyle_polishwithpalette_callback != nullptr) {
            qstyle_polishwithpalette_callback(this, palette);
        } else {
            QStyle::polish(palette);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qstyle_itemtextrect_isbase) {
            qstyle_itemtextrect_isbase = false;
            return QStyle::itemTextRect(fm, r, flags, enabled, text);
        } else if (qstyle_itemtextrect_callback != nullptr) {
            return qstyle_itemtextrect_callback(this, fm, r, flags, enabled, text);
        } else {
            return QStyle::itemTextRect(fm, r, flags, enabled, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qstyle_itempixmaprect_isbase) {
            qstyle_itempixmaprect_isbase = false;
            return QStyle::itemPixmapRect(r, flags, pixmap);
        } else if (qstyle_itempixmaprect_callback != nullptr) {
            return qstyle_itempixmaprect_callback(this, r, flags, pixmap);
        } else {
            return QStyle::itemPixmapRect(r, flags, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qstyle_drawitemtext_isbase) {
            qstyle_drawitemtext_isbase = false;
            QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        } else if (qstyle_drawitemtext_callback != nullptr) {
            qstyle_drawitemtext_callback(this, painter, rect, flags, pal, enabled, text, textRole);
        } else {
            QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qstyle_drawitempixmap_isbase) {
            qstyle_drawitempixmap_isbase = false;
            QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        } else if (qstyle_drawitempixmap_callback != nullptr) {
            qstyle_drawitempixmap_callback(this, painter, rect, alignment, pixmap);
        } else {
            QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qstyle_standardpalette_isbase) {
            qstyle_standardpalette_isbase = false;
            return QStyle::standardPalette();
        } else if (qstyle_standardpalette_callback != nullptr) {
            return qstyle_standardpalette_callback();
        } else {
            return QStyle::standardPalette();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        qstyle_drawprimitive_callback(this, pe, opt, p, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        qstyle_drawcontrol_callback(this, element, opt, p, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
        return qstyle_subelementrect_callback(this, subElement, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
        qstyle_drawcomplexcontrol_callback(this, cc, opt, p, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
        return qstyle_hittestcomplexcontrol_callback(this, cc, opt, pt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
        return qstyle_subcontrolrect_callback(this, cc, opt, sc, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
        return qstyle_pixelmetric_callback(this, metric, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
        return qstyle_sizefromcontents_callback(this, ct, opt, contentsSize, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
        return qstyle_stylehint_callback(this, stylehint, opt, widget, returnData);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
        return qstyle_standardpixmap_callback(this, standardPixmap, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
        return qstyle_standardicon_callback(this, standardIcon, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        return qstyle_generatediconpixmap_callback(this, iconMode, pixmap, opt);
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        return qstyle_layoutspacing_callback(this, control1, control2, orientation, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyle_event_isbase) {
            qstyle_event_isbase = false;
            return QStyle::event(event);
        } else if (qstyle_event_callback != nullptr) {
            return qstyle_event_callback(this, event);
        } else {
            return QStyle::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstyle_eventfilter_isbase) {
            qstyle_eventfilter_isbase = false;
            return QStyle::eventFilter(watched, event);
        } else if (qstyle_eventfilter_callback != nullptr) {
            return qstyle_eventfilter_callback(this, watched, event);
        } else {
            return QStyle::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyle_timerevent_isbase) {
            qstyle_timerevent_isbase = false;
            QStyle::timerEvent(event);
        } else if (qstyle_timerevent_callback != nullptr) {
            qstyle_timerevent_callback(this, event);
        } else {
            QStyle::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyle_childevent_isbase) {
            qstyle_childevent_isbase = false;
            QStyle::childEvent(event);
        } else if (qstyle_childevent_callback != nullptr) {
            qstyle_childevent_callback(this, event);
        } else {
            QStyle::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyle_customevent_isbase) {
            qstyle_customevent_isbase = false;
            QStyle::customEvent(event);
        } else if (qstyle_customevent_callback != nullptr) {
            qstyle_customevent_callback(this, event);
        } else {
            QStyle::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyle_connectnotify_isbase) {
            qstyle_connectnotify_isbase = false;
            QStyle::connectNotify(signal);
        } else if (qstyle_connectnotify_callback != nullptr) {
            qstyle_connectnotify_callback(this, signal);
        } else {
            QStyle::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyle_disconnectnotify_isbase) {
            qstyle_disconnectnotify_isbase = false;
            QStyle::disconnectNotify(signal);
        } else if (qstyle_disconnectnotify_callback != nullptr) {
            qstyle_disconnectnotify_callback(this, signal);
        } else {
            QStyle::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstyle_sender_isbase) {
            qstyle_sender_isbase = false;
            return QStyle::sender();
        } else if (qstyle_sender_callback != nullptr) {
            return qstyle_sender_callback();
        } else {
            return QStyle::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstyle_sendersignalindex_isbase) {
            qstyle_sendersignalindex_isbase = false;
            return QStyle::senderSignalIndex();
        } else if (qstyle_sendersignalindex_callback != nullptr) {
            return qstyle_sendersignalindex_callback();
        } else {
            return QStyle::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstyle_receivers_isbase) {
            qstyle_receivers_isbase = false;
            return QStyle::receivers(signal);
        } else if (qstyle_receivers_callback != nullptr) {
            return qstyle_receivers_callback(this, signal);
        } else {
            return QStyle::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstyle_issignalconnected_isbase) {
            qstyle_issignalconnected_isbase = false;
            return QStyle::isSignalConnected(signal);
        } else if (qstyle_issignalconnected_callback != nullptr) {
            return qstyle_issignalconnected_callback(this, signal);
        } else {
            return QStyle::isSignalConnected(signal);
        }
    }
};

#endif
