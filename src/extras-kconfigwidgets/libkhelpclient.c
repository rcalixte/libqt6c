#include "libkhelpclient.hpp"
#include "libkhelpclient.h"

void k_helpclient_invoke_help(const char* anchor, const char* appname) {
    KHelpClient_InvokeHelp(qstring(anchor), qstring(appname));
}
