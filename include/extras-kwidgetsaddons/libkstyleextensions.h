#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSTYLEEXTENSIONS_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKSTYLEEXTENSIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstyleextensions.html)

/// [Upstream resources](https://api.kde.org/kstyleextensions.html#customControlElement)
///
/// @param element const char*
/// @param widget QWidget*
///
/// @return enum QStyle__ControlElement
///
int32_t k_styleextensions_custom_control_element(const char* element, void* widget);

/// [Upstream resources](https://api.kde.org/kstyleextensions.html#customStyleHint)
///
/// @param element const char*
/// @param widget QWidget*
///
/// @return enum QStyle__StyleHint
///
int32_t k_styleextensions_custom_style_hint(const char* element, void* widget);

/// [Upstream resources](https://api.kde.org/kstyleextensions.html#customSubElement)
///
/// @param element const char*
/// @param widget QWidget*
///
/// @return enum QStyle__SubElement
///
int32_t k_styleextensions_custom_sub_element(const char* element, void* widget);
#endif
