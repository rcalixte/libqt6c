#include <QWebEngineFindTextResult>
#include <qwebenginefindtextresult.h>
#include "libqwebenginefindtextresult.hpp"
#include "libqwebenginefindtextresult.hxx"

QWebEngineFindTextResult* QWebEngineFindTextResult_New() {
    return new QWebEngineFindTextResult();
}

QWebEngineFindTextResult* QWebEngineFindTextResult_New2(const QWebEngineFindTextResult* other) {
    return new QWebEngineFindTextResult(*other);
}

int QWebEngineFindTextResult_NumberOfMatches(const QWebEngineFindTextResult* self) {
    return self->numberOfMatches();
}

int QWebEngineFindTextResult_ActiveMatch(const QWebEngineFindTextResult* self) {
    return self->activeMatch();
}

void QWebEngineFindTextResult_OperatorAssign(QWebEngineFindTextResult* self, const QWebEngineFindTextResult* other) {
    self->operator=(*other);
}

void QWebEngineFindTextResult_Delete(QWebEngineFindTextResult* self) {
    delete self;
}
