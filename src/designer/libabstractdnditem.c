#include "../libqpoint.hpp"
#include "../libqwidget.hpp"
#include "libabstractdnditem.hpp"
#include "libabstractdnditem.h"

void q_designerdnditeminterface_delete(void* self) {
    QDesignerDnDItemInterface_Delete((QDesignerDnDItemInterface*)(self));
}
