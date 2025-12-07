#include <QDBusPendingCall>
#include <QDBusPendingReplyBase>
#include <qdbuspendingreply.h>
#include "libqdbuspendingreply.hpp"
#include "libqdbuspendingreply.hxx"

QDBusPendingReplyBase* QDBusPendingReplyBase_new(const QDBusPendingReplyBase* param1) {
    return new QDBusPendingReplyBase(*param1);
}
