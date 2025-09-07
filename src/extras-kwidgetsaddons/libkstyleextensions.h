#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKSTYLEEXTENSIONS_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKSTYLEEXTENSIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kstyleextensions.html

/// [Qt documentation](https://api.kde.org/kstyleextensions.html#customControlElement)
///
/// @param param1 const char*
/// @param param2 QWidget*
///
/// @return enum QStyle__ControlElement
int64_t k_styleextensions_custom_control_element(const char* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kstyleextensions.html#customStyleHint)
///
/// @param param1 const char*
/// @param param2 QWidget*
///
/// @return enum QStyle__StyleHint
int64_t k_styleextensions_custom_style_hint(const char* param1, void* param2);

/// [Qt documentation](https://api.kde.org/kstyleextensions.html#customSubElement)
///
/// @param param1 const char*
/// @param param2 QWidget*
///
/// @return enum QStyle__SubElement
int64_t k_styleextensions_custom_sub_element(const char* param1, void* param2);
#endif
