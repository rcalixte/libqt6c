#include "../extras-kcoreaddons/libkjobuidelegate.hpp"
#include "../libqwidget.hpp"
#include "libjobuidelegatefactory.hpp"
#include "libjobuidelegatefactory.h"

KJobUiDelegate* k_io__jobuidelegatefactory_create_delegate(void* self) {
    return KIO__JobUiDelegateFactory_CreateDelegate((KIO__JobUiDelegateFactory*)self);
}

KJobUiDelegate* k_io__jobuidelegatefactory_create_delegate2(void* self, int32_t flags, void* window) {
    return KIO__JobUiDelegateFactory_CreateDelegate2((KIO__JobUiDelegateFactory*)self, flags, (QWidget*)window);
}

KJobUiDelegate* k_io_create_default_job_ui_delegate() {
    return KIO_CreateDefaultJobUiDelegate();
}

KJobUiDelegate* k_io_create_default_job_ui_delegate2(int32_t param1, void* param2) {
    return KIO_CreateDefaultJobUiDelegate2(param1, (QWidget*)param2);
}

KIO__JobUiDelegateFactory* k_io_default_job_ui_delegate_factory() {
    return KIO_DefaultJobUiDelegateFactory();
}

void k_io_set_default_job_ui_delegate_factory(void* param1) {
    KIO_SetDefaultJobUiDelegateFactory((KIO__JobUiDelegateFactory*)param1);
}
