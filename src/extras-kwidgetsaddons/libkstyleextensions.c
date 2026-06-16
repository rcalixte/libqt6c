#include "../libqwidget.hpp"
#include "libkstyleextensions.hpp"
#include "libkstyleextensions.h"

int32_t k_styleextensions_custom_control_element(const char* element, void* widget) {
    return KStyleExtensions_CustomControlElement(qstring(element), (QWidget*)widget);
}

int32_t k_styleextensions_custom_style_hint(const char* element, void* widget) {
    return KStyleExtensions_CustomStyleHint(qstring(element), (QWidget*)widget);
}

int32_t k_styleextensions_custom_sub_element(const char* element, void* widget) {
    return KStyleExtensions_CustomSubElement(qstring(element), (QWidget*)widget);
}
