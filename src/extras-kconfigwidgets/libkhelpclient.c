#include "libkhelpclient.hpp"
#include "libkhelpclient.h"

void k_helpclient_invoke_help(const char* param1, const char* param2) {
    KHelpClient_InvokeHelp(qstring(param1), qstring(param2));
}
