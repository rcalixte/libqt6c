#include "../libqobject.hpp"
#include "libklineediteventhandler.hpp"
#include "libklineediteventhandler.h"

void k_lineediteventhandler_catch_return_key(void* lineEdit) {
    KLineEditEventHandler_CatchReturnKey((QObject*)lineEdit);
}

void k_lineediteventhandler_handle_url_drops(void* lineEdit) {
    KLineEditEventHandler_HandleUrlDrops((QObject*)lineEdit);
}
