#pragma once
#ifndef DESIGNER_LIBABSTRACTPROMOTIONINTERFACE_H
#define DESIGNER_LIBABSTRACTPROMOTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotedClasses)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QDesignerPromotionInterface*
///
/// @return libqt_list of QDesignerPromotionInterface__PromotedClass*
///
libqt_list q_designerpromotioninterface_promoted_classes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#referencedPromotedClassNames)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QDesignerPromotionInterface*
///
/// @return libqt_list set of const char*
///
libqt_list q_designerpromotioninterface_referenced_promoted_class_names(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface.html#promotionBaseClasses)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QDesignerPromotionInterface*
///
/// @return libqt_list of QDesignerWidgetDataBaseItemInterface*
///
libqt_list q_designerpromotioninterface_promotion_base_classes(const void* self);

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
/// @param self const QDesignerPromotionInterface__PromotedClass*
///
QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_base_item(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#baseItem-var)
///
/// @param self QDesignerPromotionInterface__PromotedClass*
/// @param baseItem QDesignerWidgetDataBaseItemInterface*
///
void q_designerpromotioninterface__promotedclass_set_base_item(void* self, void* baseItem);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerpromotioninterface-promotedclass.html#promotedItem-var)
///
/// @param self const QDesignerPromotionInterface__PromotedClass*
///
QDesignerWidgetDataBaseItemInterface* q_designerpromotioninterface__promotedclass_promoted_item(const void* self);

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
