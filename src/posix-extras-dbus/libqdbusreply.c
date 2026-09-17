#include "libqdbuserror.hpp"
#include "libqdbusmessage.hpp"
#include "../libqvariant.hpp"
#include "libqdbusreply.hpp"
#include "libqdbusreply.h"

void q_qdbusreply_h_q_d_bus_reply_fill(void* reply, void* error, void* data) {
    qdbusreply_h_QDBusReplyFill((QDBusMessage*)reply, (QDBusError*)error, (QVariant*)data);
}
