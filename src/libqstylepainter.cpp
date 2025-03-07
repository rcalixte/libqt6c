#include <QBrush>
#include <QColor>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGlyphRun>
#include <QImage>
#include <QLine>
#include <QLineF>
#include <QList>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPainter__PixmapFragment
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPicture>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QStaticText>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QStylePainter>
#include <QTextItem>
#include <QTextOption>
#include <QTransform>
#include <QWidget>
#include <qstylepainter.h>
#include "libqstylepainter.hpp"
#include "libqstylepainter.hxx"

QStylePainter* QStylePainter_new(QWidget* w) {
    return new QStylePainter(w);
}

QStylePainter* QStylePainter_new2() {
    return new QStylePainter();
}

QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w) {
    return new QStylePainter(pd, w);
}

bool QStylePainter_Begin(QStylePainter* self, QWidget* w) {
    return self->begin(w);
}

bool QStylePainter_Begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w) {
    return self->begin(pd, w);
}

void QStylePainter_DrawPrimitive(QStylePainter* self, int pe, QStyleOption* opt) {
    self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), *opt);
}

void QStylePainter_DrawControl(QStylePainter* self, int ce, QStyleOption* opt) {
    self->drawControl(static_cast<QStyle::ControlElement>(ce), *opt);
}

void QStylePainter_DrawComplexControl(QStylePainter* self, int cc, QStyleOptionComplex* opt) {
    self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), *opt);
}

void QStylePainter_DrawItemText(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->drawItemText(*r, static_cast<int>(flags), *pal, enabled, text_QString);
}

void QStylePainter_DrawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap) {
    self->drawItemPixmap(*r, static_cast<int>(flags), *pixmap);
}

QStyle* QStylePainter_Style(const QStylePainter* self) {
    return self->style();
}

void QStylePainter_DrawItemText6(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, libqt_string text, int textRole) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->drawItemText(*r, static_cast<int>(flags), *pal, enabled, text_QString, static_cast<QPalette::ColorRole>(textRole));
}

void QStylePainter_Delete(QStylePainter* self) {
    delete self;
}
