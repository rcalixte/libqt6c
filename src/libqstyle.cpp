#include <QAnyStringView>
#include <QApplication>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
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
#include <qstyle.h>
#include "libqstyle.hpp"
#include "libqstyle.hxx"

QStyle* QStyle_new() {
    return new VirtualQStyle();
}

QMetaObject* QStyle_MetaObject(const QStyle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStyle_Metacast(QStyle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStyle_Metacall(QStyle* self, int param1, int param2, void** param3) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStyle_OnMetacall(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Metacall_Callback(reinterpret_cast<VirtualQStyle::QStyle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStyle_QBaseMetacall(QStyle* self, int param1, int param2, void** param3) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Metacall_IsBase(true);
        return vqstyle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStyle_Tr(const char* s) {
    QString _ret = QStyle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStyle_Name(const QStyle* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QRect* QStyle_VisualRect(int direction, QRect* boundingRect, QRect* logicalRect) {
    return new QRect(QStyle::visualRect(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalRect));
}

QPoint* QStyle_VisualPos(int direction, QRect* boundingRect, QPoint* logicalPos) {
    return new QPoint(QStyle::visualPos(static_cast<Qt::LayoutDirection>(direction), *boundingRect, *logicalPos));
}

int QStyle_SliderPositionFromValue(int min, int max, int val, int space) {
    return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space));
}

int QStyle_SliderValueFromPosition(int min, int max, int pos, int space) {
    return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space));
}

int QStyle_VisualAlignment(int direction, int alignment) {
    return static_cast<int>(QStyle::visualAlignment(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment)));
}

QRect* QStyle_AlignedRect(int direction, int alignment, QSize* size, QRect* rectangle) {
    return new QRect(QStyle::alignedRect(static_cast<Qt::LayoutDirection>(direction), static_cast<Qt::Alignment>(alignment), *size, *rectangle));
}

int QStyle_CombinedLayoutSpacing(const QStyle* self, int controls1, int controls2, int orientation) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation));
}

QStyle* QStyle_Proxy(const QStyle* self) {
    return (QStyle*)self->proxy();
}

libqt_string QStyle_Tr2(const char* s, const char* c) {
    QString _ret = QStyle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStyle_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStyle::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QStyle_SliderPositionFromValue5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle::sliderPositionFromValue(static_cast<int>(min), static_cast<int>(max), static_cast<int>(val), static_cast<int>(space), upsideDown);
}

int QStyle_SliderValueFromPosition5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle::sliderValueFromPosition(static_cast<int>(min), static_cast<int>(max), static_cast<int>(pos), static_cast<int>(space), upsideDown);
}

int QStyle_CombinedLayoutSpacing4(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option);
}

int QStyle_CombinedLayoutSpacing5(const QStyle* self, int controls1, int controls2, int orientation, QStyleOption* option, QWidget* widget) {
    return self->combinedLayoutSpacing(static_cast<QSizePolicy::ControlTypes>(controls1), static_cast<QSizePolicy::ControlTypes>(controls2), static_cast<Qt::Orientation>(orientation), option, widget);
}

// Derived class handler implementation
void QStyle_Polish(QStyle* self, QWidget* widget) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->polish(widget);
    } else {
        vqstyle->polish(widget);
    }
}

// Base class handler implementation
void QStyle_QBasePolish(QStyle* self, QWidget* widget) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Polish_IsBase(true);
        vqstyle->polish(widget);
    } else {
        vqstyle->polish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolish(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Polish_Callback(reinterpret_cast<VirtualQStyle::QStyle_Polish_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_Unpolish(QStyle* self, QWidget* widget) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->unpolish(widget);
    } else {
        vqstyle->unpolish(widget);
    }
}

// Base class handler implementation
void QStyle_QBaseUnpolish(QStyle* self, QWidget* widget) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Unpolish_IsBase(true);
        vqstyle->unpolish(widget);
    } else {
        vqstyle->unpolish(widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnUnpolish(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Unpolish_Callback(reinterpret_cast<VirtualQStyle::QStyle_Unpolish_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_PolishWithApplication(QStyle* self, QApplication* application) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->polish(application);
    } else {
        vqstyle->polish(application);
    }
}

// Base class handler implementation
void QStyle_QBasePolishWithApplication(QStyle* self, QApplication* application) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_PolishWithApplication_IsBase(true);
        vqstyle->polish(application);
    } else {
        vqstyle->polish(application);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolishWithApplication(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_PolishWithApplication_Callback(reinterpret_cast<VirtualQStyle::QStyle_PolishWithApplication_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_UnpolishWithApplication(QStyle* self, QApplication* application) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->unpolish(application);
    } else {
        vqstyle->unpolish(application);
    }
}

// Base class handler implementation
void QStyle_QBaseUnpolishWithApplication(QStyle* self, QApplication* application) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_UnpolishWithApplication_IsBase(true);
        vqstyle->unpolish(application);
    } else {
        vqstyle->unpolish(application);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnUnpolishWithApplication(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_UnpolishWithApplication_Callback(reinterpret_cast<VirtualQStyle::QStyle_UnpolishWithApplication_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_PolishWithPalette(QStyle* self, QPalette* palette) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->polish(*palette);
    } else {
        vqstyle->polish(*palette);
    }
}

// Base class handler implementation
void QStyle_QBasePolishWithPalette(QStyle* self, QPalette* palette) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_PolishWithPalette_IsBase(true);
        vqstyle->polish(*palette);
    } else {
        vqstyle->polish(*palette);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPolishWithPalette(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_PolishWithPalette_Callback(reinterpret_cast<VirtualQStyle::QStyle_PolishWithPalette_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStyle_ItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QRect(vqstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Base class handler implementation
QRect* QStyle_QBaseItemTextRect(const QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_ItemTextRect_IsBase(true);
        return new QRect(vqstyle->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    } else {
        return new QRect(self->itemTextRect(*fm, *r, static_cast<int>(flags), enabled, text_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnItemTextRect(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_ItemTextRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_ItemTextRect_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStyle_ItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QRect(vqstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Base class handler implementation
QRect* QStyle_QBaseItemPixmapRect(const QStyle* self, QRect* r, int flags, QPixmap* pixmap) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_ItemPixmapRect_IsBase(true);
        return new QRect(vqstyle->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    } else {
        return new QRect(self->itemPixmapRect(*r, static_cast<int>(flags), *pixmap));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnItemPixmapRect(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_ItemPixmapRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_ItemPixmapRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Base class handler implementation
void QStyle_QBaseDrawItemText(const QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawItemText_IsBase(true);
        vqstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    } else {
        vqstyle->drawItemText(painter, *rect, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawItemText(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawItemText_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawItemText_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Base class handler implementation
void QStyle_QBaseDrawItemPixmap(const QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawItemPixmap_IsBase(true);
        vqstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    } else {
        vqstyle->drawItemPixmap(painter, *rect, static_cast<int>(alignment), *pixmap);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawItemPixmap(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawItemPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawItemPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPalette* QStyle_StandardPalette(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QPalette(vqstyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Base class handler implementation
QPalette* QStyle_QBaseStandardPalette(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardPalette_IsBase(true);
        return new QPalette(vqstyle->standardPalette());
    } else {
        return new QPalette(self->standardPalette());
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardPalette(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardPalette_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardPalette_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DrawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Base class handler implementation
void QStyle_QBaseDrawPrimitive(const QStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawPrimitive_IsBase(true);
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    } else {
        vqstyle->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawPrimitive(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawPrimitive_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawPrimitive_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DrawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Base class handler implementation
void QStyle_QBaseDrawControl(const QStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawControl_IsBase(true);
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    } else {
        vqstyle->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawControl(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStyle_SubElementRect(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QRect(vqstyle->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    }
}

// Base class handler implementation
QRect* QStyle_QBaseSubElementRect(const QStyle* self, int subElement, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SubElementRect_IsBase(true);
        return new QRect(vqstyle->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    } else {
        return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(subElement), option, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSubElementRect(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SubElementRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_SubElementRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DrawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    } else {
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    }
}

// Base class handler implementation
void QStyle_QBaseDrawComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawComplexControl_IsBase(true);
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    } else {
        vqstyle->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDrawComplexControl(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_DrawComplexControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_DrawComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_HitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    } else {
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    }
}

// Base class handler implementation
int QStyle_QBaseHitTestComplexControl(const QStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_HitTestComplexControl_IsBase(true);
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    } else {
        return static_cast<int>(vqstyle->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnHitTestComplexControl(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_HitTestComplexControl_Callback(reinterpret_cast<VirtualQStyle::QStyle_HitTestComplexControl_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QStyle_SubControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QRect(vqstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

// Base class handler implementation
QRect* QStyle_QBaseSubControlRect(const QStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SubControlRect_IsBase(true);
        return new QRect(vqstyle->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    } else {
        return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSubControlRect(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SubControlRect_Callback(reinterpret_cast<VirtualQStyle::QStyle_SubControlRect_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_PixelMetric(const QStyle* self, int metric, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

// Base class handler implementation
int QStyle_QBasePixelMetric(const QStyle* self, int metric, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_PixelMetric_IsBase(true);
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    } else {
        return vqstyle->pixelMetric(static_cast<QStyle::PixelMetric>(metric), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnPixelMetric(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_PixelMetric_Callback(reinterpret_cast<VirtualQStyle::QStyle_PixelMetric_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStyle_SizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QSize(vqstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    }
}

// Base class handler implementation
QSize* QStyle_QBaseSizeFromContents(const QStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* w) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SizeFromContents_IsBase(true);
        return new QSize(vqstyle->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    } else {
        return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, w));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSizeFromContents(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SizeFromContents_Callback(reinterpret_cast<VirtualQStyle::QStyle_SizeFromContents_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_StyleHint(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    } else {
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    }
}

// Base class handler implementation
int QStyle_QBaseStyleHint(const QStyle* self, int stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StyleHint_IsBase(true);
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    } else {
        return vqstyle->styleHint(static_cast<QStyle::StyleHint>(stylehint), opt, widget, returnData);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStyleHint(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StyleHint_Callback(reinterpret_cast<VirtualQStyle::QStyle_StyleHint_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QStyle_StandardPixmap(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QPixmap(vqstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

// Base class handler implementation
QPixmap* QStyle_QBaseStandardPixmap(const QStyle* self, int standardPixmap, QStyleOption* opt, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardPixmap_IsBase(true);
        return new QPixmap(vqstyle->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    } else {
        return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(standardPixmap), opt, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardPixmap(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QIcon* QStyle_StandardIcon(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QIcon(vqstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

// Base class handler implementation
QIcon* QStyle_QBaseStandardIcon(const QStyle* self, int standardIcon, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardIcon_IsBase(true);
        return new QIcon(vqstyle->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    } else {
        return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), option, widget));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnStandardIcon(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_StandardIcon_Callback(reinterpret_cast<VirtualQStyle::QStyle_StandardIcon_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QStyle_GeneratedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return new QPixmap(vqstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Base class handler implementation
QPixmap* QStyle_QBaseGeneratedIconPixmap(const QStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_GeneratedIconPixmap_IsBase(true);
        return new QPixmap(vqstyle->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    } else {
        return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnGeneratedIconPixmap(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_GeneratedIconPixmap_Callback(reinterpret_cast<VirtualQStyle::QStyle_GeneratedIconPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_LayoutSpacing(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Base class handler implementation
int QStyle_QBaseLayoutSpacing(const QStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_LayoutSpacing_IsBase(true);
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    } else {
        return vqstyle->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnLayoutSpacing(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_LayoutSpacing_Callback(reinterpret_cast<VirtualQStyle::QStyle_LayoutSpacing_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyle_Event(QStyle* self, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        return vqstyle->event(event);
    } else {
        return vqstyle->event(event);
    }
}

// Base class handler implementation
bool QStyle_QBaseEvent(QStyle* self, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Event_IsBase(true);
        return vqstyle->event(event);
    } else {
        return vqstyle->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_Event_Callback(reinterpret_cast<VirtualQStyle::QStyle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyle_EventFilter(QStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        return vqstyle->eventFilter(watched, event);
    } else {
        return vqstyle->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStyle_QBaseEventFilter(QStyle* self, QObject* watched, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_EventFilter_IsBase(true);
        return vqstyle->eventFilter(watched, event);
    } else {
        return vqstyle->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnEventFilter(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_EventFilter_Callback(reinterpret_cast<VirtualQStyle::QStyle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_TimerEvent(QStyle* self, QTimerEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->timerEvent(event);
    } else {
        vqstyle->timerEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseTimerEvent(QStyle* self, QTimerEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_TimerEvent_IsBase(true);
        vqstyle->timerEvent(event);
    } else {
        vqstyle->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnTimerEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_TimerEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_ChildEvent(QStyle* self, QChildEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->childEvent(event);
    } else {
        vqstyle->childEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseChildEvent(QStyle* self, QChildEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_ChildEvent_IsBase(true);
        vqstyle->childEvent(event);
    } else {
        vqstyle->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnChildEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_ChildEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_CustomEvent(QStyle* self, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->customEvent(event);
    } else {
        vqstyle->customEvent(event);
    }
}

// Base class handler implementation
void QStyle_QBaseCustomEvent(QStyle* self, QEvent* event) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_CustomEvent_IsBase(true);
        vqstyle->customEvent(event);
    } else {
        vqstyle->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnCustomEvent(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_CustomEvent_Callback(reinterpret_cast<VirtualQStyle::QStyle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_ConnectNotify(QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->connectNotify(*signal);
    } else {
        vqstyle->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStyle_QBaseConnectNotify(QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_ConnectNotify_IsBase(true);
        vqstyle->connectNotify(*signal);
    } else {
        vqstyle->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnConnectNotify(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_ConnectNotify_Callback(reinterpret_cast<VirtualQStyle::QStyle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStyle_DisconnectNotify(QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->disconnectNotify(*signal);
    } else {
        vqstyle->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStyle_QBaseDisconnectNotify(QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_DisconnectNotify_IsBase(true);
        vqstyle->disconnectNotify(*signal);
    } else {
        vqstyle->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnDisconnectNotify(QStyle* self, intptr_t slot) {
    if (auto* vqstyle = dynamic_cast<VirtualQStyle*>(self)) {
        vqstyle->setQStyle_DisconnectNotify_Callback(reinterpret_cast<VirtualQStyle::QStyle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStyle_Sender(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->sender();
    } else {
        return vqstyle->sender();
    }
}

// Base class handler implementation
QObject* QStyle_QBaseSender(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_Sender_IsBase(true);
        return vqstyle->sender();
    } else {
        return vqstyle->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSender(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_Sender_Callback(reinterpret_cast<VirtualQStyle::QStyle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_SenderSignalIndex(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->senderSignalIndex();
    } else {
        return vqstyle->senderSignalIndex();
    }
}

// Base class handler implementation
int QStyle_QBaseSenderSignalIndex(const QStyle* self) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SenderSignalIndex_IsBase(true);
        return vqstyle->senderSignalIndex();
    } else {
        return vqstyle->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnSenderSignalIndex(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStyle::QStyle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStyle_Receivers(const QStyle* self, const char* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->receivers(signal);
    } else {
        return vqstyle->receivers(signal);
    }
}

// Base class handler implementation
int QStyle_QBaseReceivers(const QStyle* self, const char* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_Receivers_IsBase(true);
        return vqstyle->receivers(signal);
    } else {
        return vqstyle->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnReceivers(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_Receivers_Callback(reinterpret_cast<VirtualQStyle::QStyle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStyle_IsSignalConnected(const QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        return vqstyle->isSignalConnected(*signal);
    } else {
        return vqstyle->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStyle_QBaseIsSignalConnected(const QStyle* self, QMetaMethod* signal) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_IsSignalConnected_IsBase(true);
        return vqstyle->isSignalConnected(*signal);
    } else {
        return vqstyle->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStyle_OnIsSignalConnected(const QStyle* self, intptr_t slot) {
    if (auto* vqstyle = const_cast<VirtualQStyle*>(dynamic_cast<const VirtualQStyle*>(self))) {
        vqstyle->setQStyle_IsSignalConnected_Callback(reinterpret_cast<VirtualQStyle::QStyle_IsSignalConnected_Callback>(slot));
    }
}

void QStyle_Delete(QStyle* self) {
    delete self;
}
