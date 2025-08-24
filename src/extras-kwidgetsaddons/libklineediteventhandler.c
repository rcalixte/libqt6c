#include "../libqobject.hpp"
#include "libklineediteventhandler.hpp"
#include "libklineediteventhandler.h"

void k_lineediteventhandler_catch_return_key(void* param1) {
    KLineEditEventHandler_CatchReturnKey((QObject*)param1);
}

void k_lineediteventhandler_handle_url_drops(void* param1) {
    KLineEditEventHandler_HandleUrlDrops((QObject*)param1);
}
