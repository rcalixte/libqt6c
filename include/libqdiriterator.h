#pragma once
#ifndef SRCQT6C_LIBQDIRITERATOR_H
#define SRCQT6C_LIBQDIRITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdiriterator.html#types

typedef enum {
    QDIRITERATOR_ITERATORFLAG_NOITERATORFLAGS = 0,
    QDIRITERATOR_ITERATORFLAG_FOLLOWSYMLINKS = 1,
    QDIRITERATOR_ITERATORFLAG_SUBDIRECTORIES = 2
} QDirIterator__IteratorFlag;

#endif
