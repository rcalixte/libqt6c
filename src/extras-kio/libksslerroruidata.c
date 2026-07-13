#include "../network/libqnetworkreply.hpp"
#include "../network/libqsslerror.hpp"
#include "../network/libqsslsocket.hpp"
#include "libksslerroruidata.hpp"
#include "libksslerroruidata.h"

KSslErrorUiData* k_sslerroruidata_new() {
    return KSslErrorUiData_New();
}

KSslErrorUiData* k_sslerroruidata_new2(void* socket) {
    return KSslErrorUiData_New2((QSslSocket*)socket);
}

KSslErrorUiData* k_sslerroruidata_new3(void* reply, libqt_list /* of QSslError* */ sslErrors) {
    return KSslErrorUiData_New3((QNetworkReply*)reply, sslErrors);
}

KSslErrorUiData* k_sslerroruidata_new4(void* other) {
    return KSslErrorUiData_New4((KSslErrorUiData*)other);
}

void k_sslerroruidata_operator_assign(void* self, void* param1) {
    KSslErrorUiData_OperatorAssign((KSslErrorUiData*)self, (KSslErrorUiData*)param1);
}

void k_sslerroruidata_delete(void* self) {
    KSslErrorUiData_Delete((KSslErrorUiData*)(self));
}
