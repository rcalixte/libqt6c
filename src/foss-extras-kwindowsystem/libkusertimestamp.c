#include "libkusertimestamp.hpp"
#include "libkusertimestamp.h"

uint64_t k_usertimestamp_user_timestamp() {
    return KUserTimestamp_UserTimestamp();
}

void k_usertimestamp_update_user_timestamp(uint64_t param1) {
    KUserTimestamp_UpdateUserTimestamp(param1);
}
