#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTPROMOTIONINTERFACE_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTPROMOTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotedClasses)
///
/// @param self QDesignerPromotionInterface*
///
libqt_list /* of QDesignerPromotionInterface__PromotedClass* */ q_designerpromotioninterface_promoted_classes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#referencedPromotedClassNames)
///
/// @param self QDesignerPromotionInterface*
///
libqt_list /* of const char* */ q_designerpromotioninterface_referenced_promoted_class_names(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotionBaseClasses)
///
/// @param self QDesignerPromotionInterface*
///
libqt_list /* of QDesignerWidgetDataBaseItemInterface* */ q_designerpromotioninterface_promotion_base_classes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#dtor.QDesignerPromotionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerPromotionInterface*
///
void q_designerpromotioninterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
///
/// @param self QDesignerPromotionInterface__PromotedClass*
///
QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_base_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
///
/// @param self QDesignerPromotionInterface__PromotedClass*
/// @param baseItem QDesignerWidgetDataBaseItemInterface*
///
void q_designerpromotioninterface__promotedclass_set_base_item(void* self, void* baseItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
///
/// @param self QDesignerPromotionInterface__PromotedClass*
///
QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_promoted_item(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
///
/// @param self QDesignerPromotionInterface__PromotedClass*
/// @param promotedItem QDesignerWidgetDataBaseItemInterface*
///
void q_designerpromotioninterface__promotedclass_set_promoted_item(void* self, void* promotedItem);

/// Delete this object from C++ memory.
///
/// @param self QDesignerPromotionInterface__PromotedClass*
///
void q_designerpromotioninterface__promotedclass_delete(void* self);

#endif
