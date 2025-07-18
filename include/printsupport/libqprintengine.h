#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTENGINE_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qprintengine.html

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#setProperty)
///
/// ``` QPrintEngine* self, enum QPrintEngine__PrintEnginePropertyKey key, QVariant* value ```
void q_printengine_set_property(void* self, int64_t key, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#property)
///
/// ``` QPrintEngine* self, enum QPrintEngine__PrintEnginePropertyKey key ```
QVariant* q_printengine_property(void* self, int64_t key);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#newPage)
///
/// ``` QPrintEngine* self ```
bool q_printengine_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#abort)
///
/// ``` QPrintEngine* self ```
bool q_printengine_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#metric)
///
/// ``` QPrintEngine* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printengine_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#printerState)
///
/// ``` QPrintEngine* self ```
int64_t q_printengine_printer_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#operator-eq)
///
/// ``` QPrintEngine* self, QPrintEngine* param1 ```
void q_printengine_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#dtor.QPrintEngine)
///
/// Delete this object from C++ memory.
///
/// ``` QPrintEngine* self ```
void q_printengine_delete(void* self);

/// https://doc.qt.io/qt-6/qprintengine.html#types

typedef enum {
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_COLLATECOPIES = 0,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_COLORMODE = 1,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_CREATOR = 2,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_DOCUMENTNAME = 3,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_FULLPAGE = 4,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_NUMBEROFCOPIES = 5,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_ORIENTATION = 6,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_OUTPUTFILENAME = 7,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAGEORDER = 8,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAGERECT = 9,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAGESIZE = 10,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAPERRECT = 11,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAPERSOURCE = 12,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PRINTERNAME = 13,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PRINTERPROGRAM = 14,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_RESOLUTION = 15,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_SELECTIONOPTION = 16,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_SUPPORTEDRESOLUTIONS = 17,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_WINDOWSPAGESIZE = 18,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_FONTEMBEDDING = 19,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_DUPLEX = 20,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAPERSOURCES = 21,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_CUSTOMPAPERSIZE = 22,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAGEMARGINS = 23,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_COPYCOUNT = 24,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_SUPPORTSMULTIPLECOPIES = 25,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAPERNAME = 26,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_QPAGESIZE = 27,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_QPAGEMARGINS = 28,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_QPAGELAYOUT = 29,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_PAPERSIZE = 10,
    QPRINTENGINE_PRINTENGINEPROPERTYKEY_PPK_CUSTOMBASE = 65280
} QPrintEngine__PrintEnginePropertyKey;

#endif
