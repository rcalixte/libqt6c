#include "../libqcolor.hpp"
#include "../libqdrag.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "libkcolormimedata.hpp"
#include "libkcolormimedata.h"

void k_colormimedata_populate_mime_data(void* mimeData, const void* color) {
    KColorMimeData_PopulateMimeData((QMimeData*)mimeData, (QColor*)color);
}

bool k_colormimedata_can_decode(const void* mimeData) {
    return KColorMimeData_CanDecode((QMimeData*)mimeData);
}

QColor* k_colormimedata_from_mime_data(const void* mimeData) {
    return KColorMimeData_FromMimeData((QMimeData*)mimeData);
}

QDrag* k_colormimedata_create_drag(const void* color, void* dragsource) {
    return KColorMimeData_CreateDrag((QColor*)color, (QObject*)dragsource);
}
