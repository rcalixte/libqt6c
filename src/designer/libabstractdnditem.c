#include "../libqpoint.hpp"
#include "../libqwidget.hpp"
#include "libabstractdnditem.hpp"
#include "libabstractdnditem.h"

QWidget* q_designerdnditeminterface_widget(void* self) {
    return QDesignerDnDItemInterface_Widget((QDesignerDnDItemInterface*)self);
}

QWidget* q_designerdnditeminterface_decoration(void* self) {
    return QDesignerDnDItemInterface_Decoration((QDesignerDnDItemInterface*)self);
}

QPoint* q_designerdnditeminterface_hot_spot(void* self) {
    return QDesignerDnDItemInterface_HotSpot((QDesignerDnDItemInterface*)self);
}

int32_t q_designerdnditeminterface_type(void* self) {
    return QDesignerDnDItemInterface_Type((QDesignerDnDItemInterface*)self);
}

QWidget* q_designerdnditeminterface_source(void* self) {
    return QDesignerDnDItemInterface_Source((QDesignerDnDItemInterface*)self);
}

void q_designerdnditeminterface_delete(void* self) {
    QDesignerDnDItemInterface_Delete((QDesignerDnDItemInterface*)(self));
}
