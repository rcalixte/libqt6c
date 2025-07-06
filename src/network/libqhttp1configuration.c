#include "libqhttp1configuration.hpp"
#include "libqhttp1configuration.h"

QHttp1Configuration* q_http1configuration_new() {
    return QHttp1Configuration_new();
}

QHttp1Configuration* q_http1configuration_new2(void* other) {
    return QHttp1Configuration_new2((QHttp1Configuration*)other);
}

void q_http1configuration_operator_assign(void* self, void* other) {
    QHttp1Configuration_OperatorAssign((QHttp1Configuration*)self, (QHttp1Configuration*)other);
}

void q_http1configuration_set_number_of_connections_per_host(void* self, int64_t amount) {
    QHttp1Configuration_SetNumberOfConnectionsPerHost((QHttp1Configuration*)self, amount);
}

int64_t q_http1configuration_number_of_connections_per_host(void* self) {
    return QHttp1Configuration_NumberOfConnectionsPerHost((QHttp1Configuration*)self);
}

void q_http1configuration_swap(void* self, void* other) {
    QHttp1Configuration_Swap((QHttp1Configuration*)self, (QHttp1Configuration*)other);
}

void q_http1configuration_delete(void* self) {
    QHttp1Configuration_Delete((QHttp1Configuration*)(self));
}
