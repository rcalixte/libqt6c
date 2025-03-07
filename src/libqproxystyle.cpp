#include <QAnyStringView>
#include <QApplication>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCommonStyle>
#include <QEvent>
#include <QFontMetrics>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QProxyStyle>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qproxystyle.h>
#include "libqproxystyle.hpp"
#include "libqproxystyle.hxx"

QProxyStyle* QProxyStyle_new() {
    return new VirtualQProxyStyle();
}

QProxyStyle* QProxyStyle_new2(libqt_string key) {
    QString key_QString = QString::fromUtf8(key.data, key.len);
    return new VirtualQProxyStyle(key_QString);
}

QProxyStyle* QProxyStyle_new3(QStyle* style) {
    return new VirtualQProxyStyle(style);
}

QMetaObject* QProxyStyle_MetaObject(const QProxyStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProxyStyle_Metacast(QProxyStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProxyStyle_Metacall(QProxyStyle* self, int param1, int param2, void** param3) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QProxyStyle_OnMetacall(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Metacall_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QProxyStyle_QBaseMetacall(QProxyStyle* self, int param1, int param2, void** param3) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Metacall_IsBase(true);
        return vqproxystyle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QProxyStyle_Tr(const char* s) {
    QString _ret = QProxyStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QStyle* QProxyStyle_BaseStyle(const QProxyStyle* self) {
    return self->baseStyle();
}

void QProxyStyle_SetBaseStyle(QProxyStyle* self, QStyle* style) {
    self->setBaseStyle(style);
}

libqt_string QProxyStyle_Tr2(const char* s, const char* c) {
    QString _ret = QProxyStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QProxyStyle_Tr3(const char* s, const char* c, int n) {
    QString _ret = QProxyStyle::tr(s, c, static_cast<int>(n));
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
void QProxyStyle_DrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
    } else {
        vqproxystyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDrawPrimitive(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawPrimitive_IsBase(true);
        vqproxystyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
    } else {
        vqproxystyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(element), option, painter, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawPrimitive(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawPrimitive_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_DrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
    } else {
        vqproxystyle->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDrawControl(const QProxyStyle* self, int element, QStyleOption* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawControl_IsBase(true);
        vqproxystyle->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
    } else {
        vqproxystyle->drawControl(static_cast<QStyle::ControlElement>(element), option, painter, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawControl(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawControl_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawControl_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_DrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
    } else {
        vqproxystyle->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDrawComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawComplexControl_IsBase(true);
        vqproxystyle->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
    } else {
        vqproxystyle->drawComplexControl(static_cast<QStyle::ComplexControl>(control), option, painter, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawComplexControl(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_DrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqproxystyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDrawItemText(const QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawItemText_IsBase(true);
        vqproxystyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqproxystyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawItemText(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawItemText_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawItemText_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_DrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqproxystyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDrawItemPixmap(const QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawItemPixmap_IsBase(true);
        vqproxystyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqproxystyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDrawItemPixmap(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_DrawItemPixmap_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DrawItemPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QProxyStyle_SizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QSize(vqproxystyle->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
    }
}

// Base class handler implementation
QSize* QProxyStyle_QBaseSizeFromContents(const QProxyStyle* self, int typeVal, QStyleOption* option, QSize* size, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SizeFromContents_IsBase(true);
        return new QSize(vqproxystyle->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(typeVal), option, *size, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSizeFromContents(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SizeFromContents_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QProxyStyle_SubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QRect(vqproxystyle->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
    }
}

// Base class handler implementation
QRect* QProxyStyle_QBaseSubElementRect(const QProxyStyle* self, int element, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SubElementRect_IsBase(true);
        return new QRect(vqproxystyle->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(element), option, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSubElementRect(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SubElementRect_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SubElementRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QProxyStyle_SubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QRect(vqproxystyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

// Base class handler implementation
QRect* QProxyStyle_QBaseSubControlRect(const QProxyStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SubControlRect_IsBase(true);
        return new QRect(vqproxystyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSubControlRect(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SubControlRect_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SubControlRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QProxyStyle_ItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QRect(vqproxystyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Base class handler implementation
QRect* QProxyStyle_QBaseItemTextRect(const QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_ItemTextRect_IsBase(true);
        return new QRect(vqproxystyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnItemTextRect(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_ItemTextRect_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ItemTextRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QProxyStyle_ItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QRect(vqproxystyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Base class handler implementation
QRect* QProxyStyle_QBaseItemPixmapRect(const QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_ItemPixmapRect_IsBase(true);
        return new QRect(vqproxystyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnItemPixmapRect(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_ItemPixmapRect_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ItemPixmapRect_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_HitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return static_cast<int>(vqproxystyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
    } else {
        return static_cast<int>(vqproxystyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
    }
}

// Base class handler implementation
int QProxyStyle_QBaseHitTestComplexControl(const QProxyStyle* self, int control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_HitTestComplexControl_IsBase(true);
        return static_cast<int>(vqproxystyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
    } else {
        return static_cast<int>(vqproxystyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(control), option, *pos, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnHitTestComplexControl(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_HitTestComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_StyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
    } else {
        return vqproxystyle->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
    }
}

// Base class handler implementation
int QProxyStyle_QBaseStyleHint(const QProxyStyle* self, int hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StyleHint_IsBase(true);
        return vqproxystyle->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
    } else {
        return vqproxystyle->styleHint(static_cast<QStyle::StyleHint>(hint), option, widget, returnData);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStyleHint(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StyleHint_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StyleHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_PixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return vqproxystyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

// Base class handler implementation
int QProxyStyle_QBasePixelMetric(const QProxyStyle* self, int metric, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_PixelMetric_IsBase(true);
        return vqproxystyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return vqproxystyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPixelMetric(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_PixelMetric_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_PixelMetric_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_LayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqproxystyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Base class handler implementation
int QProxyStyle_QBaseLayoutSpacing(const QProxyStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_LayoutSpacing_IsBase(true);
        return vqproxystyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqproxystyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnLayoutSpacing(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_LayoutSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
QIcon* QProxyStyle_StandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QIcon(vqproxystyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

// Base class handler implementation
QIcon* QProxyStyle_QBaseStandardIcon(const QProxyStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardIcon_IsBase(true);
        return new QIcon(vqproxystyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardIcon(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardIcon_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardIcon_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QProxyStyle_StandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QPixmap(vqproxystyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

// Base class handler implementation
QPixmap* QProxyStyle_QBaseStandardPixmap(const QProxyStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardPixmap_IsBase(true);
        return new QPixmap(vqproxystyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardPixmap(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QProxyStyle_GeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QPixmap(vqproxystyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Base class handler implementation
QPixmap* QProxyStyle_QBaseGeneratedIconPixmap(const QProxyStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_GeneratedIconPixmap_IsBase(true);
        return new QPixmap(vqproxystyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnGeneratedIconPixmap(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_GeneratedIconPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPalette* QProxyStyle_StandardPalette(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return new QPalette(vqproxystyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Base class handler implementation
QPalette* QProxyStyle_QBaseStandardPalette(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardPalette_IsBase(true);
        return new QPalette(vqproxystyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnStandardPalette(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_StandardPalette_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_StandardPalette_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_Polish(QProxyStyle* self, QWidget* widget) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->polish(widget);
    } else {
        vqproxystyle->polish(widget);
    }
}

// Base class handler implementation
void QProxyStyle_QBasePolish(QProxyStyle* self, QWidget* widget) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Polish_IsBase(true);
        vqproxystyle->polish(widget);
    } else {
        vqproxystyle->polish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolish(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Polish_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Polish_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_PolishWithPal(QProxyStyle* self, QPalette* pal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->polish(*pal);
    } else {
        vqproxystyle->polish(*pal);
    }
}

// Base class handler implementation
void QProxyStyle_QBasePolishWithPal(QProxyStyle* self, QPalette* pal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_PolishWithPal_IsBase(true);
        vqproxystyle->polish(*pal);
    } else {
        vqproxystyle->polish(*pal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolishWithPal(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_PolishWithPal_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_PolishWithPal_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_PolishWithApp(QProxyStyle* self, QApplication* app) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->polish(app);
    } else {
        vqproxystyle->polish(app);
    }
}

// Base class handler implementation
void QProxyStyle_QBasePolishWithApp(QProxyStyle* self, QApplication* app) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_PolishWithApp_IsBase(true);
        vqproxystyle->polish(app);
    } else {
        vqproxystyle->polish(app);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnPolishWithApp(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_PolishWithApp_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_PolishWithApp_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_Unpolish(QProxyStyle* self, QWidget* widget) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->unpolish(widget);
    } else {
        vqproxystyle->unpolish(widget);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseUnpolish(QProxyStyle* self, QWidget* widget) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Unpolish_IsBase(true);
        vqproxystyle->unpolish(widget);
    } else {
        vqproxystyle->unpolish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnUnpolish(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Unpolish_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Unpolish_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_UnpolishWithApp(QProxyStyle* self, QApplication* app) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->unpolish(app);
    } else {
        vqproxystyle->unpolish(app);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseUnpolishWithApp(QProxyStyle* self, QApplication* app) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_UnpolishWithApp_IsBase(true);
        vqproxystyle->unpolish(app);
    } else {
        vqproxystyle->unpolish(app);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnUnpolishWithApp(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_UnpolishWithApp_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_UnpolishWithApp_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProxyStyle_Event(QProxyStyle* self, QEvent* e) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        return vqproxystyle->event(e);
    } else {
        return vqproxystyle->event(e);
    }
}

// Base class handler implementation
bool QProxyStyle_QBaseEvent(QProxyStyle* self, QEvent* e) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Event_IsBase(true);
        return vqproxystyle->event(e);
    } else {
        return vqproxystyle->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_Event_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProxyStyle_EventFilter(QProxyStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        return vqproxystyle->eventFilter(watched, event);
    } else {
        return vqproxystyle->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QProxyStyle_QBaseEventFilter(QProxyStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_EventFilter_IsBase(true);
        return vqproxystyle->eventFilter(watched, event);
    } else {
        return vqproxystyle->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnEventFilter(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_EventFilter_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_TimerEvent(QProxyStyle* self, QTimerEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->timerEvent(event);
    } else {
        vqproxystyle->timerEvent(event);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseTimerEvent(QProxyStyle* self, QTimerEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_TimerEvent_IsBase(true);
        vqproxystyle->timerEvent(event);
    } else {
        vqproxystyle->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnTimerEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_TimerEvent_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_ChildEvent(QProxyStyle* self, QChildEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->childEvent(event);
    } else {
        vqproxystyle->childEvent(event);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseChildEvent(QProxyStyle* self, QChildEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_ChildEvent_IsBase(true);
        vqproxystyle->childEvent(event);
    } else {
        vqproxystyle->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnChildEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_ChildEvent_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_CustomEvent(QProxyStyle* self, QEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->customEvent(event);
    } else {
        vqproxystyle->customEvent(event);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseCustomEvent(QProxyStyle* self, QEvent* event) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_CustomEvent_IsBase(true);
        vqproxystyle->customEvent(event);
    } else {
        vqproxystyle->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnCustomEvent(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_CustomEvent_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_ConnectNotify(QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->connectNotify(*signal);
    } else {
        vqproxystyle->connectNotify(*signal);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseConnectNotify(QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_ConnectNotify_IsBase(true);
        vqproxystyle->connectNotify(*signal);
    } else {
        vqproxystyle->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnConnectNotify(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_ConnectNotify_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProxyStyle_DisconnectNotify(QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->disconnectNotify(*signal);
    } else {
        vqproxystyle->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QProxyStyle_QBaseDisconnectNotify(QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_DisconnectNotify_IsBase(true);
        vqproxystyle->disconnectNotify(*signal);
    } else {
        vqproxystyle->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnDisconnectNotify(QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = dynamic_cast<VirtualQProxyStyle*>(self)) {
        vqproxystyle->setQProxyStyle_DisconnectNotify_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QProxyStyle_Sender(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->sender();
    } else {
        return vqproxystyle->sender();
    }
}

// Base class handler implementation
QObject* QProxyStyle_QBaseSender(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_Sender_IsBase(true);
        return vqproxystyle->sender();
    } else {
        return vqproxystyle->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSender(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_Sender_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_SenderSignalIndex(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->senderSignalIndex();
    } else {
        return vqproxystyle->senderSignalIndex();
    }
}

// Base class handler implementation
int QProxyStyle_QBaseSenderSignalIndex(const QProxyStyle* self) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SenderSignalIndex_IsBase(true);
        return vqproxystyle->senderSignalIndex();
    } else {
        return vqproxystyle->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnSenderSignalIndex(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QProxyStyle_Receivers(const QProxyStyle* self, const char* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->receivers(signal);
    } else {
        return vqproxystyle->receivers(signal);
    }
}

// Base class handler implementation
int QProxyStyle_QBaseReceivers(const QProxyStyle* self, const char* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_Receivers_IsBase(true);
        return vqproxystyle->receivers(signal);
    } else {
        return vqproxystyle->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnReceivers(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_Receivers_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProxyStyle_IsSignalConnected(const QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        return vqproxystyle->isSignalConnected(*signal);
    } else {
        return vqproxystyle->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QProxyStyle_QBaseIsSignalConnected(const QProxyStyle* self, QMetaMethod* signal) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_IsSignalConnected_IsBase(true);
        return vqproxystyle->isSignalConnected(*signal);
    } else {
        return vqproxystyle->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProxyStyle_OnIsSignalConnected(const QProxyStyle* self, intptr_t slot) {
    if (auto* vqproxystyle = const_cast<VirtualQProxyStyle*>(dynamic_cast<const VirtualQProxyStyle*>(self))) {
        vqproxystyle->setQProxyStyle_IsSignalConnected_Callback(reinterpret_cast<VirtualQProxyStyle::QProxyStyle_IsSignalConnected_Callback>(slot));
    }
}

void QProxyStyle_Delete(QProxyStyle* self) {
    delete self;
}
