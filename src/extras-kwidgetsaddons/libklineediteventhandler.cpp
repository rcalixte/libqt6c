#include <KLineEditEventHandler>
#include <QObject>
#include <klineediteventhandler.h>
#include "libklineediteventhandler.hpp"
#include "libklineediteventhandler.hxx"

void KLineEditEventHandler_CatchReturnKey(QObject* lineEdit) {
    KLineEditEventHandler::catchReturnKey(lineEdit);
}

void KLineEditEventHandler_HandleUrlDrops(QObject* lineEdit) {
    KLineEditEventHandler::handleUrlDrops(lineEdit);
}
