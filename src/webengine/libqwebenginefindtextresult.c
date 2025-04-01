#include "libqwebenginefindtextresult.hpp"
#include "libqwebenginefindtextresult.h"

QWebEngineFindTextResult* q_webenginefindtextresult_new() {
    return QWebEngineFindTextResult_new();
}

QWebEngineFindTextResult* q_webenginefindtextresult_new2(void* other) {
    return QWebEngineFindTextResult_new2((QWebEngineFindTextResult*)other);
}

int32_t q_webenginefindtextresult_number_of_matches(void* self) {
    return QWebEngineFindTextResult_NumberOfMatches((QWebEngineFindTextResult*)self);
}

int32_t q_webenginefindtextresult_active_match(void* self) {
    return QWebEngineFindTextResult_ActiveMatch((QWebEngineFindTextResult*)self);
}

void q_webenginefindtextresult_operator_assign(void* self, void* other) {
    QWebEngineFindTextResult_OperatorAssign((QWebEngineFindTextResult*)self, (QWebEngineFindTextResult*)other);
}

void q_webenginefindtextresult_delete(void* self) {
    QWebEngineFindTextResult_Delete((QWebEngineFindTextResult*)(self));
}
