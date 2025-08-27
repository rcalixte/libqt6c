#include "../libqcolor.hpp"
#include "../libqdrag.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "libkcolormimedata.hpp"
#include "libkcolormimedata.h"

void k_colormimedata_populate_mime_data(void* param1, void* param2) {
    KColorMimeData_PopulateMimeData((QMimeData*)param1, (QColor*)param2);
}

bool k_colormimedata_can_decode(void* param1) {
    return KColorMimeData_CanDecode((QMimeData*)param1);
}

QColor* k_colormimedata_from_mime_data(void* param1) {
    return KColorMimeData_FromMimeData((QMimeData*)param1);
}

QDrag* k_colormimedata_create_drag(void* param1, void* param2) {
    return KColorMimeData_CreateDrag((QColor*)param1, (QObject*)param2);
}
