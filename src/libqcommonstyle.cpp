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
#include <qcommonstyle.h>
#include "libqcommonstyle.hpp"
#include "libqcommonstyle.hxx"

QCommonStyle* QCommonStyle_new() {
    return new VirtualQCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(const QCommonStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCommonStyle_Metacast(QCommonStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCommonStyle_Metacall(QCommonStyle* self, int param1, int param2, void** param3) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QCommonStyle_OnMetacall(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Metacall_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QCommonStyle_QBaseMetacall(QCommonStyle* self, int param1, int param2, void** param3) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Metacall_IsBase(true);
        return vqcommonstyle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QCommonStyle_Tr(const char* s) {
    QString _ret = QCommonStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCommonStyle_Tr2(const char* s, const char* c) {
    QString _ret = QCommonStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QCommonStyle_Tr3(const char* s, const char* c, int n) {
    QString _ret = QCommonStyle::tr(s, c, static_cast<int>(n));
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
void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawPrimitive(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawPrimitive_IsBase(true);
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        vqcommonstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawPrimitive(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawPrimitive_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawControl(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawControl(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawControl_IsBase(true);
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        vqcommonstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawControl(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QRect(vqcommonstyle->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubElementRect(const QCommonStyle* self, int r, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SubElementRect_IsBase(true);
        return new QRect(vqcommonstyle->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubElementRect(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SubElementRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubElementRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    } else {
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawComplexControl_IsBase(true);
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    } else {
        vqcommonstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawComplexControl(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    } else {
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    }
}

// Base class handler implementation
int QCommonStyle_QBaseHitTestComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_HitTestComplexControl_IsBase(true);
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    } else {
        return static_cast<int>(vqcommonstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnHitTestComplexControl(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_HitTestComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QRect(vqcommonstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseSubControlRect(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SubControlRect_IsBase(true);
        return new QRect(vqcommonstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSubControlRect(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SubControlRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SubControlRect_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QSize(vqcommonstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    }
}

// Base class handler implementation
QSize* QCommonStyle_QBaseSizeFromContents(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SizeFromContents_IsBase(true);
        return new QSize(vqcommonstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSizeFromContents(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SizeFromContents_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_PixelMetric(const QCommonStyle* self, int m, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    } else {
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    }
}

// Base class handler implementation
int QCommonStyle_QBasePixelMetric(const QCommonStyle* self, int m, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_PixelMetric_IsBase(true);
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    } else {
        return vqcommonstyle->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPixelMetric(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_PixelMetric_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PixelMetric_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_StyleHint(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    } else {
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseStyleHint(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StyleHint_IsBase(true);
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    } else {
        return vqcommonstyle->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStyleHint(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StyleHint_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StyleHint_Callback>(slot));
    }
}

// Derived class handler implementation
QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QIcon(vqcommonstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    }
}

// Base class handler implementation
QIcon* QCommonStyle_QBaseStandardIcon(const QCommonStyle* self, int standardIcon, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardIcon_IsBase(true);
        return new QIcon(vqcommonstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardIcon(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardIcon_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardIcon_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QPixmap(vqcommonstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    }
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseStandardPixmap(const QCommonStyle* self, int sp, QStyleOption* opt, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardPixmap_IsBase(true);
        return new QPixmap(vqcommonstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPixmap(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QPixmap(vqcommonstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Base class handler implementation
QPixmap* QCommonStyle_QBaseGeneratedIconPixmap(const QCommonStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_IsBase(true);
        return new QPixmap(vqcommonstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnGeneratedIconPixmap(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_GeneratedIconPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseLayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_LayoutSpacing_IsBase(true);
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqcommonstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnLayoutSpacing(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_LayoutSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->polish(*param1);
    } else {
        vqcommonstyle->polish(*param1);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolish(QCommonStyle* self, QPalette* param1) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Polish_IsBase(true);
        vqcommonstyle->polish(*param1);
    } else {
        vqcommonstyle->polish(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolish(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Polish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Polish_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_PolishWithApp(QCommonStyle* self, QApplication* app) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->polish(app);
    } else {
        vqcommonstyle->polish(app);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolishWithApp(QCommonStyle* self, QApplication* app) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_PolishWithApp_IsBase(true);
        vqcommonstyle->polish(app);
    } else {
        vqcommonstyle->polish(app);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolishWithApp(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_PolishWithApp_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PolishWithApp_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_PolishWithWidget(QCommonStyle* self, QWidget* widget) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->polish(widget);
    } else {
        vqcommonstyle->polish(widget);
    }
}

// Base class handler implementation
void QCommonStyle_QBasePolishWithWidget(QCommonStyle* self, QWidget* widget) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_PolishWithWidget_IsBase(true);
        vqcommonstyle->polish(widget);
    } else {
        vqcommonstyle->polish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnPolishWithWidget(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_PolishWithWidget_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_PolishWithWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->unpolish(widget);
    } else {
        vqcommonstyle->unpolish(widget);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolish(QCommonStyle* self, QWidget* widget) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Unpolish_IsBase(true);
        vqcommonstyle->unpolish(widget);
    } else {
        vqcommonstyle->unpolish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolish(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Unpolish_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Unpolish_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_UnpolishWithApplication(QCommonStyle* self, QApplication* application) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->unpolish(application);
    } else {
        vqcommonstyle->unpolish(application);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseUnpolishWithApplication(QCommonStyle* self, QApplication* application) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_UnpolishWithApplication_IsBase(true);
        vqcommonstyle->unpolish(application);
    } else {
        vqcommonstyle->unpolish(application);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnUnpolishWithApplication(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_UnpolishWithApplication_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_UnpolishWithApplication_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_ItemTextRect(const QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QRect(vqcommonstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseItemTextRect(const QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_ItemTextRect_IsBase(true);
        return new QRect(vqcommonstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemTextRect(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_ItemTextRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemTextRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QCommonStyle_ItemPixmapRect(const QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QRect(vqcommonstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Base class handler implementation
QRect* QCommonStyle_QBaseItemPixmapRect(const QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_ItemPixmapRect_IsBase(true);
        return new QRect(vqcommonstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnItemPixmapRect(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_ItemPixmapRect_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ItemPixmapRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawItemText(const QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawItemText(const QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawItemText_IsBase(true);
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqcommonstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemText(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawItemText_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemText_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DrawItemPixmap(const QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDrawItemPixmap(const QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawItemPixmap_IsBase(true);
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqcommonstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDrawItemPixmap(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_DrawItemPixmap_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DrawItemPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPalette* QCommonStyle_StandardPalette(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return new QPalette(vqcommonstyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Base class handler implementation
QPalette* QCommonStyle_QBaseStandardPalette(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardPalette_IsBase(true);
        return new QPalette(vqcommonstyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnStandardPalette(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_StandardPalette_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_StandardPalette_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_Event(QCommonStyle* self, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        return vqcommonstyle->event(event);
    } else {
        return vqcommonstyle->event(event);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseEvent(QCommonStyle* self, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Event_IsBase(true);
        return vqcommonstyle->event(event);
    } else {
        return vqcommonstyle->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_Event_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_EventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        return vqcommonstyle->eventFilter(watched, event);
    } else {
        return vqcommonstyle->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseEventFilter(QCommonStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_EventFilter_IsBase(true);
        return vqcommonstyle->eventFilter(watched, event);
    } else {
        return vqcommonstyle->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnEventFilter(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_EventFilter_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_TimerEvent(QCommonStyle* self, QTimerEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->timerEvent(event);
    } else {
        vqcommonstyle->timerEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseTimerEvent(QCommonStyle* self, QTimerEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_TimerEvent_IsBase(true);
        vqcommonstyle->timerEvent(event);
    } else {
        vqcommonstyle->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnTimerEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_TimerEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_ChildEvent(QCommonStyle* self, QChildEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->childEvent(event);
    } else {
        vqcommonstyle->childEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseChildEvent(QCommonStyle* self, QChildEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_ChildEvent_IsBase(true);
        vqcommonstyle->childEvent(event);
    } else {
        vqcommonstyle->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnChildEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_ChildEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_CustomEvent(QCommonStyle* self, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->customEvent(event);
    } else {
        vqcommonstyle->customEvent(event);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseCustomEvent(QCommonStyle* self, QEvent* event) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_CustomEvent_IsBase(true);
        vqcommonstyle->customEvent(event);
    } else {
        vqcommonstyle->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnCustomEvent(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_CustomEvent_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_ConnectNotify(QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->connectNotify(*signal);
    } else {
        vqcommonstyle->connectNotify(*signal);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseConnectNotify(QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_ConnectNotify_IsBase(true);
        vqcommonstyle->connectNotify(*signal);
    } else {
        vqcommonstyle->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnConnectNotify(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_ConnectNotify_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QCommonStyle_DisconnectNotify(QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->disconnectNotify(*signal);
    } else {
        vqcommonstyle->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QCommonStyle_QBaseDisconnectNotify(QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_DisconnectNotify_IsBase(true);
        vqcommonstyle->disconnectNotify(*signal);
    } else {
        vqcommonstyle->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnDisconnectNotify(QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = dynamic_cast<VirtualQCommonStyle*>(self)) {
        vqcommonstyle->setQCommonStyle_DisconnectNotify_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QCommonStyle_Sender(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->sender();
    } else {
        return vqcommonstyle->sender();
    }
}

// Base class handler implementation
QObject* QCommonStyle_QBaseSender(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_Sender_IsBase(true);
        return vqcommonstyle->sender();
    } else {
        return vqcommonstyle->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSender(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_Sender_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_SenderSignalIndex(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->senderSignalIndex();
    } else {
        return vqcommonstyle->senderSignalIndex();
    }
}

// Base class handler implementation
int QCommonStyle_QBaseSenderSignalIndex(const QCommonStyle* self) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SenderSignalIndex_IsBase(true);
        return vqcommonstyle->senderSignalIndex();
    } else {
        return vqcommonstyle->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnSenderSignalIndex(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QCommonStyle_Receivers(const QCommonStyle* self, const char* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->receivers(signal);
    } else {
        return vqcommonstyle->receivers(signal);
    }
}

// Base class handler implementation
int QCommonStyle_QBaseReceivers(const QCommonStyle* self, const char* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_Receivers_IsBase(true);
        return vqcommonstyle->receivers(signal);
    } else {
        return vqcommonstyle->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnReceivers(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_Receivers_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QCommonStyle_IsSignalConnected(const QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        return vqcommonstyle->isSignalConnected(*signal);
    } else {
        return vqcommonstyle->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QCommonStyle_QBaseIsSignalConnected(const QCommonStyle* self, QMetaMethod* signal) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_IsSignalConnected_IsBase(true);
        return vqcommonstyle->isSignalConnected(*signal);
    } else {
        return vqcommonstyle->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QCommonStyle_OnIsSignalConnected(const QCommonStyle* self, intptr_t slot) {
    if (auto* vqcommonstyle = const_cast<VirtualQCommonStyle*>(dynamic_cast<const VirtualQCommonStyle*>(self))) {
        vqcommonstyle->setQCommonStyle_IsSignalConnected_Callback(reinterpret_cast<VirtualQCommonStyle::QCommonStyle_IsSignalConnected_Callback>(slot));
    }
}

void QCommonStyle_Delete(QCommonStyle* self) {
    delete self;
}
