#include "libsecuritycontext.hpp"
#include "libsecuritycontext.h"

SignOn__SecurityContext* q_signon__securitycontext_new() {
    return SignOn__SecurityContext_new();
}

SignOn__SecurityContext* q_signon__securitycontext_new2(const char* systemContext, const char* applicationContext) {
    return SignOn__SecurityContext_new2(qstring(systemContext), qstring(applicationContext));
}

SignOn__SecurityContext* q_signon__securitycontext_new3(void* param1) {
    return SignOn__SecurityContext_new3((SignOn__SecurityContext*)param1);
}

void q_signon__securitycontext_set_system_context(void* self, const char* systemContext) {
    SignOn__SecurityContext_SetSystemContext((SignOn__SecurityContext*)self, qstring(systemContext));
}

const char* q_signon__securitycontext_system_context(void* self) {
    libqt_string _str = SignOn__SecurityContext_SystemContext((SignOn__SecurityContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__securitycontext_set_application_context(void* self, const char* applicationContext) {
    SignOn__SecurityContext_SetApplicationContext((SignOn__SecurityContext*)self, qstring(applicationContext));
}

const char* q_signon__securitycontext_application_context(void* self) {
    libqt_string _str = SignOn__SecurityContext_ApplicationContext((SignOn__SecurityContext*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__securitycontext_delete(void* self) {
    SignOn__SecurityContext_Delete((SignOn__SecurityContext*)(self));
}
