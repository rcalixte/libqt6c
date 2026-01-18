#include "../libqwidget.hpp"
#include "libkstyleextensions.hpp"
#include "libkstyleextensions.h"

int32_t k_styleextensions_custom_control_element(const char* param1, void* param2) {
    return KStyleExtensions_CustomControlElement(qstring(param1), (QWidget*)param2);
}

int32_t k_styleextensions_custom_style_hint(const char* param1, void* param2) {
    return KStyleExtensions_CustomStyleHint(qstring(param1), (QWidget*)param2);
}

int32_t k_styleextensions_custom_sub_element(const char* param1, void* param2) {
    return KStyleExtensions_CustomSubElement(qstring(param1), (QWidget*)param2);
}
