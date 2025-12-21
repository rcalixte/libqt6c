#include "libabstractwidgetdatabase.hpp"
#include "libabstractpromotioninterface.hpp"
#include "libabstractpromotioninterface.h"

libqt_list /* of QDesignerPromotionInterface__PromotedClass* */ q_designerpromotioninterface_promoted_classes(void* self) {
    libqt_list _arr = QDesignerPromotionInterface_PromotedClasses((QDesignerPromotionInterface*)self);
    return _arr;
}

libqt_list /* of const char* */ q_designerpromotioninterface_referenced_promoted_class_names(void* self) {
    return QDesignerPromotionInterface_ReferencedPromotedClassNames((QDesignerPromotionInterface*)self);
}

libqt_list /* of QDesignerWidgetDataBaseItemInterface* */ q_designerpromotioninterface_promotion_base_classes(void* self) {
    libqt_list _arr = QDesignerPromotionInterface_PromotionBaseClasses((QDesignerPromotionInterface*)self);
    return _arr;
}

void q_designerpromotioninterface_delete(void* self) {
    QDesignerPromotionInterface_Delete((QDesignerPromotionInterface*)(self));
}

QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_base_item(void* self) {
    return QDesignerPromotionInterface__PromotedClass_BaseItem((QDesignerPromotionInterface__PromotedClass*)self);
}

void q_designerpromotioninterface__promotedclass_set_base_item(void* self, void* baseItem) {
    QDesignerPromotionInterface__PromotedClass_SetBaseItem((QDesignerPromotionInterface__PromotedClass*)self, (QDesignerWidgetDataBaseItemInterface*)baseItem);
}

QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_promoted_item(void* self) {
    return QDesignerPromotionInterface__PromotedClass_PromotedItem((QDesignerPromotionInterface__PromotedClass*)self);
}

void q_designerpromotioninterface__promotedclass_set_promoted_item(void* self, void* promotedItem) {
    QDesignerPromotionInterface__PromotedClass_SetPromotedItem((QDesignerPromotionInterface__PromotedClass*)self, (QDesignerWidgetDataBaseItemInterface*)promotedItem);
}

void q_designerpromotioninterface__promotedclass_delete(void* self) {
    QDesignerPromotionInterface__PromotedClass_Delete((QDesignerPromotionInterface__PromotedClass*)(self));
}
