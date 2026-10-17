#include <QSurfaceFormat>
#include <qutils.h>
#include "libqutils.hpp"
#include "libqutils.hxx"

QSurfaceFormat* qutils_h_QDefaultSurfaceFormat(bool antialias) {
    return new QSurfaceFormat(qDefaultSurfaceFormat(antialias));
}
