#include "../libqsurfaceformat.hpp"
#include "libqutils.hpp"
#include "libqutils.h"

QSurfaceFormat* q_qutils_h_q_default_surface_format(bool antialias) {
    return qutils_h_QDefaultSurfaceFormat(antialias);
}
