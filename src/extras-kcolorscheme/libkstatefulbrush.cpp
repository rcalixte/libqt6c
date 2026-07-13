#include <KStatefulBrush>
#include <QBrush>
#include <QPalette>
#include <kstatefulbrush.h>
#include "libkstatefulbrush.hpp"
#include "libkstatefulbrush.hxx"

KStatefulBrush* KStatefulBrush_New() {
    return new KStatefulBrush();
}

KStatefulBrush* KStatefulBrush_New2(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::ForegroundRole>(param2));
}

KStatefulBrush* KStatefulBrush_New3(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::BackgroundRole>(param2));
}

KStatefulBrush* KStatefulBrush_New4(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::DecorationRole>(param2));
}

KStatefulBrush* KStatefulBrush_New5(const QBrush* param1) {
    return new KStatefulBrush(*param1);
}

KStatefulBrush* KStatefulBrush_New6(const QBrush* param1, const QBrush* background) {
    return new KStatefulBrush(*param1, *background);
}

KStatefulBrush* KStatefulBrush_New7(const KStatefulBrush* param1) {
    return new KStatefulBrush(*param1);
}

void KStatefulBrush_OperatorAssign(KStatefulBrush* self, const KStatefulBrush* param1) {
    self->operator=(*param1);
}

QBrush* KStatefulBrush_Brush(const KStatefulBrush* self, int param1) {
    return new QBrush(self->brush(static_cast<QPalette::ColorGroup>(param1)));
}

QBrush* KStatefulBrush_Brush2(const KStatefulBrush* self, const QPalette* param1) {
    return new QBrush(self->brush(*param1));
}

void KStatefulBrush_Delete(KStatefulBrush* self) {
    delete self;
}
