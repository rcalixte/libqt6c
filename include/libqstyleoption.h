#pragma once
#ifndef SRCQT6C_LIBQSTYLEOPTION_H
#define SRCQT6C_LIBQSTYLEOPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqtransform.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qstyleoption.html

/// q_styleoption_new constructs a new QStyleOption object.
///
///
QStyleOption* q_styleoption_new();

/// q_styleoption_new2 constructs a new QStyleOption object.
///
/// ``` QStyleOption* other ```
QStyleOption* q_styleoption_new2(void* other);

/// q_styleoption_new3 constructs a new QStyleOption object.
///
/// ``` int version ```
QStyleOption* q_styleoption_new3(int version);

/// q_styleoption_new4 constructs a new QStyleOption object.
///
/// ``` int version, int typeVal ```
QStyleOption* q_styleoption_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOption* self, QWidget* w ```
void q_styleoption_init_from(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOption* self, QStyleOption* other ```
void q_styleoption_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOption* self ```
void q_styleoption_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html

/// q_styleoptionfocusrect_new constructs a new QStyleOptionFocusRect object.
///
///
QStyleOptionFocusRect* q_styleoptionfocusrect_new();

/// q_styleoptionfocusrect_new2 constructs a new QStyleOptionFocusRect object.
///
/// ``` QStyleOptionFocusRect* other ```
QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionFocusRect* self, QWidget* w ```
void q_styleoptionfocusrect_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionFocusRect* self, QStyleOption* other ```
void q_styleoptionfocusrect_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionFocusRect* self ```
void q_styleoptionfocusrect_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionframe.html

/// q_styleoptionframe_new constructs a new QStyleOptionFrame object.
///
///
QStyleOptionFrame* q_styleoptionframe_new();

/// q_styleoptionframe_new2 constructs a new QStyleOptionFrame object.
///
/// ``` QStyleOptionFrame* other ```
QStyleOptionFrame* q_styleoptionframe_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionFrame* self, QWidget* w ```
void q_styleoptionframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionFrame* self, QStyleOption* other ```
void q_styleoptionframe_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionFrame* self ```
void q_styleoptionframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html

/// q_styleoptiontabwidgetframe_new constructs a new QStyleOptionTabWidgetFrame object.
///
///
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new();

/// q_styleoptiontabwidgetframe_new2 constructs a new QStyleOptionTabWidgetFrame object.
///
/// ``` QStyleOptionTabWidgetFrame* other ```
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTabWidgetFrame* self, QWidget* w ```
void q_styleoptiontabwidgetframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTabWidgetFrame* self, QStyleOption* other ```
void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTabWidgetFrame* self ```
void q_styleoptiontabwidgetframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html

/// q_styleoptiontabbarbase_new constructs a new QStyleOptionTabBarBase object.
///
///
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new();

/// q_styleoptiontabbarbase_new2 constructs a new QStyleOptionTabBarBase object.
///
/// ``` QStyleOptionTabBarBase* other ```
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTabBarBase* self, QWidget* w ```
void q_styleoptiontabbarbase_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTabBarBase* self, QStyleOption* other ```
void q_styleoptiontabbarbase_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTabBarBase* self ```
void q_styleoptiontabbarbase_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheader.html

/// q_styleoptionheader_new constructs a new QStyleOptionHeader object.
///
///
QStyleOptionHeader* q_styleoptionheader_new();

/// q_styleoptionheader_new2 constructs a new QStyleOptionHeader object.
///
/// ``` QStyleOptionHeader* other ```
QStyleOptionHeader* q_styleoptionheader_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionHeader* self, QWidget* w ```
void q_styleoptionheader_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionHeader* self, QStyleOption* other ```
void q_styleoptionheader_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionHeader* self ```
void q_styleoptionheader_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html

/// q_styleoptionheaderv2_new constructs a new QStyleOptionHeaderV2 object.
///
///
QStyleOptionHeaderV2* q_styleoptionheaderv2_new();

/// q_styleoptionheaderv2_new2 constructs a new QStyleOptionHeaderV2 object.
///
/// ``` QStyleOptionHeaderV2* other ```
QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionHeaderV2* self, QWidget* w ```
void q_styleoptionheaderv2_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionHeaderV2* self, QStyleOption* other ```
void q_styleoptionheaderv2_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionHeaderV2* self ```
void q_styleoptionheaderv2_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html

/// q_styleoptionbutton_new constructs a new QStyleOptionButton object.
///
///
QStyleOptionButton* q_styleoptionbutton_new();

/// q_styleoptionbutton_new2 constructs a new QStyleOptionButton object.
///
/// ``` QStyleOptionButton* other ```
QStyleOptionButton* q_styleoptionbutton_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionButton* self, QWidget* w ```
void q_styleoptionbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionButton* self, QStyleOption* other ```
void q_styleoptionbutton_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionButton* self ```
void q_styleoptionbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontab.html

/// q_styleoptiontab_new constructs a new QStyleOptionTab object.
///
///
QStyleOptionTab* q_styleoptiontab_new();

/// q_styleoptiontab_new2 constructs a new QStyleOptionTab object.
///
/// ``` QStyleOptionTab* other ```
QStyleOptionTab* q_styleoptiontab_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTab* self, QWidget* w ```
void q_styleoptiontab_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTab* self, QStyleOption* other ```
void q_styleoptiontab_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTab* self ```
void q_styleoptiontab_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html

/// q_styleoptiontoolbar_new constructs a new QStyleOptionToolBar object.
///
///
QStyleOptionToolBar* q_styleoptiontoolbar_new();

/// q_styleoptiontoolbar_new2 constructs a new QStyleOptionToolBar object.
///
/// ``` QStyleOptionToolBar* other ```
QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolBar* self, QWidget* w ```
void q_styleoptiontoolbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolBar* self, QStyleOption* other ```
void q_styleoptiontoolbar_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolBar* self ```
void q_styleoptiontoolbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html

/// q_styleoptionprogressbar_new constructs a new QStyleOptionProgressBar object.
///
///
QStyleOptionProgressBar* q_styleoptionprogressbar_new();

/// q_styleoptionprogressbar_new2 constructs a new QStyleOptionProgressBar object.
///
/// ``` QStyleOptionProgressBar* other ```
QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionProgressBar* self, QWidget* w ```
void q_styleoptionprogressbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionProgressBar* self, QStyleOption* other ```
void q_styleoptionprogressbar_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionProgressBar* self ```
void q_styleoptionprogressbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html

/// q_styleoptionmenuitem_new constructs a new QStyleOptionMenuItem object.
///
///
QStyleOptionMenuItem* q_styleoptionmenuitem_new();

/// q_styleoptionmenuitem_new2 constructs a new QStyleOptionMenuItem object.
///
/// ``` QStyleOptionMenuItem* other ```
QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionMenuItem* self, QWidget* w ```
void q_styleoptionmenuitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionMenuItem* self, QStyleOption* other ```
void q_styleoptionmenuitem_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionMenuItem* self ```
void q_styleoptionmenuitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html

/// q_styleoptiondockwidget_new constructs a new QStyleOptionDockWidget object.
///
///
QStyleOptionDockWidget* q_styleoptiondockwidget_new();

/// q_styleoptiondockwidget_new2 constructs a new QStyleOptionDockWidget object.
///
/// ``` QStyleOptionDockWidget* other ```
QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionDockWidget* self, QWidget* w ```
void q_styleoptiondockwidget_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionDockWidget* self, QStyleOption* other ```
void q_styleoptiondockwidget_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionDockWidget* self ```
void q_styleoptiondockwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html

/// q_styleoptionviewitem_new constructs a new QStyleOptionViewItem object.
///
///
QStyleOptionViewItem* q_styleoptionviewitem_new();

/// q_styleoptionviewitem_new2 constructs a new QStyleOptionViewItem object.
///
/// ``` QStyleOptionViewItem* other ```
QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionViewItem* self, QWidget* w ```
void q_styleoptionviewitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionViewItem* self, QStyleOption* other ```
void q_styleoptionviewitem_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionViewItem* self ```
void q_styleoptionviewitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html

/// q_styleoptiontoolbox_new constructs a new QStyleOptionToolBox object.
///
///
QStyleOptionToolBox* q_styleoptiontoolbox_new();

/// q_styleoptiontoolbox_new2 constructs a new QStyleOptionToolBox object.
///
/// ``` QStyleOptionToolBox* other ```
QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolBox* self, QWidget* w ```
void q_styleoptiontoolbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolBox* self, QStyleOption* other ```
void q_styleoptiontoolbox_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolBox* self ```
void q_styleoptiontoolbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html

/// q_styleoptionrubberband_new constructs a new QStyleOptionRubberBand object.
///
///
QStyleOptionRubberBand* q_styleoptionrubberband_new();

/// q_styleoptionrubberband_new2 constructs a new QStyleOptionRubberBand object.
///
/// ``` QStyleOptionRubberBand* other ```
QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionRubberBand* self, QWidget* w ```
void q_styleoptionrubberband_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionRubberBand* self, QStyleOption* other ```
void q_styleoptionrubberband_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionRubberBand* self ```
void q_styleoptionrubberband_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html

/// q_styleoptioncomplex_new constructs a new QStyleOptionComplex object.
///
///
QStyleOptionComplex* q_styleoptioncomplex_new();

/// q_styleoptioncomplex_new2 constructs a new QStyleOptionComplex object.
///
/// ``` QStyleOptionComplex* other ```
QStyleOptionComplex* q_styleoptioncomplex_new2(void* other);

/// q_styleoptioncomplex_new3 constructs a new QStyleOptionComplex object.
///
/// ``` int version ```
QStyleOptionComplex* q_styleoptioncomplex_new3(int version);

/// q_styleoptioncomplex_new4 constructs a new QStyleOptionComplex object.
///
/// ``` int version, int typeVal ```
QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionComplex* self, QWidget* w ```
void q_styleoptioncomplex_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionComplex* self, QStyleOption* other ```
void q_styleoptioncomplex_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionComplex* self ```
void q_styleoptioncomplex_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionslider.html

/// q_styleoptionslider_new constructs a new QStyleOptionSlider object.
///
///
QStyleOptionSlider* q_styleoptionslider_new();

/// q_styleoptionslider_new2 constructs a new QStyleOptionSlider object.
///
/// ``` QStyleOptionSlider* other ```
QStyleOptionSlider* q_styleoptionslider_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSlider* self, QWidget* w ```
void q_styleoptionslider_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSlider* self, QStyleOption* other ```
void q_styleoptionslider_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSlider* self ```
void q_styleoptionslider_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html

/// q_styleoptionspinbox_new constructs a new QStyleOptionSpinBox object.
///
///
QStyleOptionSpinBox* q_styleoptionspinbox_new();

/// q_styleoptionspinbox_new2 constructs a new QStyleOptionSpinBox object.
///
/// ``` QStyleOptionSpinBox* other ```
QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSpinBox* self, QWidget* w ```
void q_styleoptionspinbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSpinBox* self, QStyleOption* other ```
void q_styleoptionspinbox_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSpinBox* self ```
void q_styleoptionspinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html

/// q_styleoptiontoolbutton_new constructs a new QStyleOptionToolButton object.
///
///
QStyleOptionToolButton* q_styleoptiontoolbutton_new();

/// q_styleoptiontoolbutton_new2 constructs a new QStyleOptionToolButton object.
///
/// ``` QStyleOptionToolButton* other ```
QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolButton* self, QWidget* w ```
void q_styleoptiontoolbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolButton* self, QStyleOption* other ```
void q_styleoptiontoolbutton_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolButton* self ```
void q_styleoptiontoolbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html

/// q_styleoptioncombobox_new constructs a new QStyleOptionComboBox object.
///
///
QStyleOptionComboBox* q_styleoptioncombobox_new();

/// q_styleoptioncombobox_new2 constructs a new QStyleOptionComboBox object.
///
/// ``` QStyleOptionComboBox* other ```
QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionComboBox* self, QWidget* w ```
void q_styleoptioncombobox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionComboBox* self, QStyleOption* other ```
void q_styleoptioncombobox_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionComboBox* self ```
void q_styleoptioncombobox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html

/// q_styleoptiontitlebar_new constructs a new QStyleOptionTitleBar object.
///
///
QStyleOptionTitleBar* q_styleoptiontitlebar_new();

/// q_styleoptiontitlebar_new2 constructs a new QStyleOptionTitleBar object.
///
/// ``` QStyleOptionTitleBar* other ```
QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTitleBar* self, QWidget* w ```
void q_styleoptiontitlebar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTitleBar* self, QStyleOption* other ```
void q_styleoptiontitlebar_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTitleBar* self ```
void q_styleoptiontitlebar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html

/// q_styleoptiongroupbox_new constructs a new QStyleOptionGroupBox object.
///
///
QStyleOptionGroupBox* q_styleoptiongroupbox_new();

/// q_styleoptiongroupbox_new2 constructs a new QStyleOptionGroupBox object.
///
/// ``` QStyleOptionGroupBox* other ```
QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionGroupBox* self, QWidget* w ```
void q_styleoptiongroupbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionGroupBox* self, QStyleOption* other ```
void q_styleoptiongroupbox_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionGroupBox* self ```
void q_styleoptiongroupbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html

/// q_styleoptionsizegrip_new constructs a new QStyleOptionSizeGrip object.
///
///
QStyleOptionSizeGrip* q_styleoptionsizegrip_new();

/// q_styleoptionsizegrip_new2 constructs a new QStyleOptionSizeGrip object.
///
/// ``` QStyleOptionSizeGrip* other ```
QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSizeGrip* self, QWidget* w ```
void q_styleoptionsizegrip_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSizeGrip* self, QStyleOption* other ```
void q_styleoptionsizegrip_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSizeGrip* self ```
void q_styleoptionsizegrip_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html

/// q_styleoptiongraphicsitem_new constructs a new QStyleOptionGraphicsItem object.
///
///
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new();

/// q_styleoptiongraphicsitem_new2 constructs a new QStyleOptionGraphicsItem object.
///
/// ``` QStyleOptionGraphicsItem* other ```
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
///
/// ``` QTransform* worldTransform ```
double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionGraphicsItem* self, QWidget* w ```
void q_styleoptiongraphicsitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionGraphicsItem* self, QStyleOption* other ```
void q_styleoptiongraphicsitem_operator_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionGraphicsItem* self ```
void q_styleoptiongraphicsitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturn.html

/// q_stylehintreturn_new constructs a new QStyleHintReturn object.
///
///
QStyleHintReturn* q_stylehintreturn_new();

/// q_stylehintreturn_new2 constructs a new QStyleHintReturn object.
///
/// ``` QStyleHintReturn* param1 ```
QStyleHintReturn* q_stylehintreturn_new2(void* param1);

/// q_stylehintreturn_new3 constructs a new QStyleHintReturn object.
///
/// ``` int version ```
QStyleHintReturn* q_stylehintreturn_new3(int version);

/// q_stylehintreturn_new4 constructs a new QStyleHintReturn object.
///
/// ``` int version, int typeVal ```
QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator=)
///
/// ``` QStyleHintReturn* self, QStyleHintReturn* param1 ```
void q_stylehintreturn_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturn* self ```
void q_stylehintreturn_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html

/// q_stylehintreturnmask_new constructs a new QStyleHintReturnMask object.
///
///
QStyleHintReturnMask* q_stylehintreturnmask_new();

/// q_stylehintreturnmask_new2 constructs a new QStyleHintReturnMask object.
///
/// ``` QStyleHintReturnMask* param1 ```
QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator=)
///
/// ``` QStyleHintReturnMask* self, QStyleHintReturnMask* param1 ```
void q_stylehintreturnmask_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturnMask* self ```
void q_stylehintreturnmask_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html

/// q_stylehintreturnvariant_new constructs a new QStyleHintReturnVariant object.
///
///
QStyleHintReturnVariant* q_stylehintreturnvariant_new();

/// q_stylehintreturnvariant_new2 constructs a new QStyleHintReturnVariant object.
///
/// ``` QStyleHintReturnVariant* param1 ```
QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator=)
///
/// ``` QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1 ```
void q_stylehintreturnvariant_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturnVariant* self ```
void q_stylehintreturnvariant_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoption.html#types

typedef enum {
    QSTYLEOPTION_OPTIONTYPE_SO_DEFAULT = 0,
    QSTYLEOPTION_OPTIONTYPE_SO_FOCUSRECT = 1,
    QSTYLEOPTION_OPTIONTYPE_SO_BUTTON = 2,
    QSTYLEOPTION_OPTIONTYPE_SO_TAB = 3,
    QSTYLEOPTION_OPTIONTYPE_SO_MENUITEM = 4,
    QSTYLEOPTION_OPTIONTYPE_SO_FRAME = 5,
    QSTYLEOPTION_OPTIONTYPE_SO_PROGRESSBAR = 6,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBOX = 7,
    QSTYLEOPTION_OPTIONTYPE_SO_HEADER = 8,
    QSTYLEOPTION_OPTIONTYPE_SO_DOCKWIDGET = 9,
    QSTYLEOPTION_OPTIONTYPE_SO_VIEWITEM = 10,
    QSTYLEOPTION_OPTIONTYPE_SO_TABWIDGETFRAME = 11,
    QSTYLEOPTION_OPTIONTYPE_SO_TABBARBASE = 12,
    QSTYLEOPTION_OPTIONTYPE_SO_RUBBERBAND = 13,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBAR = 14,
    QSTYLEOPTION_OPTIONTYPE_SO_GRAPHICSITEM = 15,
    QSTYLEOPTION_OPTIONTYPE_SO_COMPLEX = 983040,
    QSTYLEOPTION_OPTIONTYPE_SO_SLIDER = 983041,
    QSTYLEOPTION_OPTIONTYPE_SO_SPINBOX = 983042,
    QSTYLEOPTION_OPTIONTYPE_SO_TOOLBUTTON = 983043,
    QSTYLEOPTION_OPTIONTYPE_SO_COMBOBOX = 983044,
    QSTYLEOPTION_OPTIONTYPE_SO_TITLEBAR = 983045,
    QSTYLEOPTION_OPTIONTYPE_SO_GROUPBOX = 983046,
    QSTYLEOPTION_OPTIONTYPE_SO_SIZEGRIP = 983047,
    QSTYLEOPTION_OPTIONTYPE_SO_CUSTOMBASE = 3840,
    QSTYLEOPTION_OPTIONTYPE_SO_COMPLEXCUSTOMBASE = 251658240
} QStyleOption__OptionType;

typedef enum {
    QSTYLEOPTION_STYLEOPTIONTYPE_TYPE = 0
} QStyleOption__StyleOptionType;

typedef enum {
    QSTYLEOPTION_STYLEOPTIONVERSION_VERSION = 1
} QStyleOption__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFOCUSRECT_STYLEOPTIONTYPE_TYPE = 1
} QStyleOptionFocusRect__StyleOptionType;

typedef enum {
    QSTYLEOPTIONFOCUSRECT_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionFocusRect__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFRAME_STYLEOPTIONTYPE_TYPE = 5
} QStyleOptionFrame__StyleOptionType;

typedef enum {
    QSTYLEOPTIONFRAME_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionFrame__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONFRAME_FRAMEFEATURE_NONE = 0,
    QSTYLEOPTIONFRAME_FRAMEFEATURE_FLAT = 1,
    QSTYLEOPTIONFRAME_FRAMEFEATURE_ROUNDED = 2
} QStyleOptionFrame__FrameFeature;

typedef enum {
    QSTYLEOPTIONTABWIDGETFRAME_STYLEOPTIONTYPE_TYPE = 11
} QStyleOptionTabWidgetFrame__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTABWIDGETFRAME_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTabWidgetFrame__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTABBARBASE_STYLEOPTIONTYPE_TYPE = 12
} QStyleOptionTabBarBase__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTABBARBASE_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTabBarBase__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONHEADER_STYLEOPTIONTYPE_TYPE = 8
} QStyleOptionHeader__StyleOptionType;

typedef enum {
    QSTYLEOPTIONHEADER_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionHeader__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONHEADER_SECTIONPOSITION_BEGINNING = 0,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_MIDDLE = 1,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_END = 2,
    QSTYLEOPTIONHEADER_SECTIONPOSITION_ONLYONESECTION = 3
} QStyleOptionHeader__SectionPosition;

typedef enum {
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_PREVIOUSISSELECTED = 2,
    QSTYLEOPTIONHEADER_SELECTEDPOSITION_NEXTANDPREVIOUSARESELECTED = 3
} QStyleOptionHeader__SelectedPosition;

typedef enum {
    QSTYLEOPTIONHEADER_SORTINDICATOR_NONE = 0,
    QSTYLEOPTIONHEADER_SORTINDICATOR_SORTUP = 1,
    QSTYLEOPTIONHEADER_SORTINDICATOR_SORTDOWN = 2
} QStyleOptionHeader__SortIndicator;

typedef enum {
    QSTYLEOPTIONHEADERV2_STYLEOPTIONTYPE_TYPE = 8
} QStyleOptionHeaderV2__StyleOptionType;

typedef enum {
    QSTYLEOPTIONHEADERV2_STYLEOPTIONVERSION_VERSION = 2
} QStyleOptionHeaderV2__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONBUTTON_STYLEOPTIONTYPE_TYPE = 2
} QStyleOptionButton__StyleOptionType;

typedef enum {
    QSTYLEOPTIONBUTTON_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionButton__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_NONE = 0,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_FLAT = 1,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_HASMENU = 2,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_DEFAULTBUTTON = 4,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_AUTODEFAULTBUTTON = 8,
    QSTYLEOPTIONBUTTON_BUTTONFEATURE_COMMANDLINKBUTTON = 16
} QStyleOptionButton__ButtonFeature;

typedef enum {
    QSTYLEOPTIONTAB_STYLEOPTIONTYPE_TYPE = 3
} QStyleOptionTab__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTAB_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTab__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTAB_TABPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTAB_TABPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTAB_TABPOSITION_END = 2,
    QSTYLEOPTIONTAB_TABPOSITION_ONLYONETAB = 3
} QStyleOptionTab__TabPosition;

typedef enum {
    QSTYLEOPTIONTAB_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONTAB_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONTAB_SELECTEDPOSITION_PREVIOUSISSELECTED = 2
} QStyleOptionTab__SelectedPosition;

typedef enum {
    QSTYLEOPTIONTAB_CORNERWIDGET_NOCORNERWIDGETS = 0,
    QSTYLEOPTIONTAB_CORNERWIDGET_LEFTCORNERWIDGET = 1,
    QSTYLEOPTIONTAB_CORNERWIDGET_RIGHTCORNERWIDGET = 2
} QStyleOptionTab__CornerWidget;

typedef enum {
    QSTYLEOPTIONTAB_TABFEATURE_NONE = 0,
    QSTYLEOPTIONTAB_TABFEATURE_HASFRAME = 1
} QStyleOptionTab__TabFeature;

typedef enum {
    QSTYLEOPTIONTOOLBAR_STYLEOPTIONTYPE_TYPE = 14
} QStyleOptionToolBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_END = 2,
    QSTYLEOPTIONTOOLBAR_TOOLBARPOSITION_ONLYONE = 3
} QStyleOptionToolBar__ToolBarPosition;

typedef enum {
    QSTYLEOPTIONTOOLBAR_TOOLBARFEATURE_NONE = 0,
    QSTYLEOPTIONTOOLBAR_TOOLBARFEATURE_MOVABLE = 1
} QStyleOptionToolBar__ToolBarFeature;

typedef enum {
    QSTYLEOPTIONPROGRESSBAR_STYLEOPTIONTYPE_TYPE = 6
} QStyleOptionProgressBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONPROGRESSBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionProgressBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONMENUITEM_STYLEOPTIONTYPE_TYPE = 4
} QStyleOptionMenuItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONMENUITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionMenuItem__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_NORMAL = 0,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_DEFAULTITEM = 1,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SEPARATOR = 2,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SUBMENU = 3,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_SCROLLER = 4,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_TEAROFF = 5,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_MARGIN = 6,
    QSTYLEOPTIONMENUITEM_MENUITEMTYPE_EMPTYAREA = 7
} QStyleOptionMenuItem__MenuItemType;

typedef enum {
    QSTYLEOPTIONMENUITEM_CHECKTYPE_NOTCHECKABLE = 0,
    QSTYLEOPTIONMENUITEM_CHECKTYPE_EXCLUSIVE = 1,
    QSTYLEOPTIONMENUITEM_CHECKTYPE_NONEXCLUSIVE = 2
} QStyleOptionMenuItem__CheckType;

typedef enum {
    QSTYLEOPTIONDOCKWIDGET_STYLEOPTIONTYPE_TYPE = 9
} QStyleOptionDockWidget__StyleOptionType;

typedef enum {
    QSTYLEOPTIONDOCKWIDGET_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionDockWidget__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONVIEWITEM_STYLEOPTIONTYPE_TYPE = 10
} QStyleOptionViewItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONVIEWITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionViewItem__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONVIEWITEM_POSITION_LEFT = 0,
    QSTYLEOPTIONVIEWITEM_POSITION_RIGHT = 1,
    QSTYLEOPTIONVIEWITEM_POSITION_TOP = 2,
    QSTYLEOPTIONVIEWITEM_POSITION_BOTTOM = 3
} QStyleOptionViewItem__Position;

typedef enum {
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_NONE = 0,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_WRAPTEXT = 1,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_ALTERNATE = 2,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASCHECKINDICATOR = 4,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASDISPLAY = 8,
    QSTYLEOPTIONVIEWITEM_VIEWITEMFEATURE_HASDECORATION = 16
} QStyleOptionViewItem__ViewItemFeature;

typedef enum {
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_INVALID = 0,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_BEGINNING = 1,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_MIDDLE = 2,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_END = 3,
    QSTYLEOPTIONVIEWITEM_VIEWITEMPOSITION_ONLYONE = 4
} QStyleOptionViewItem__ViewItemPosition;

typedef enum {
    QSTYLEOPTIONTOOLBOX_STYLEOPTIONTYPE_TYPE = 7
} QStyleOptionToolBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBOX_TABPOSITION_BEGINNING = 0,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_MIDDLE = 1,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_END = 2,
    QSTYLEOPTIONTOOLBOX_TABPOSITION_ONLYONETAB = 3
} QStyleOptionToolBox__TabPosition;

typedef enum {
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_NOTADJACENT = 0,
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_NEXTISSELECTED = 1,
    QSTYLEOPTIONTOOLBOX_SELECTEDPOSITION_PREVIOUSISSELECTED = 2
} QStyleOptionToolBox__SelectedPosition;

typedef enum {
    QSTYLEOPTIONRUBBERBAND_STYLEOPTIONTYPE_TYPE = 13
} QStyleOptionRubberBand__StyleOptionType;

typedef enum {
    QSTYLEOPTIONRUBBERBAND_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionRubberBand__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONCOMPLEX_STYLEOPTIONTYPE_TYPE = 983040
} QStyleOptionComplex__StyleOptionType;

typedef enum {
    QSTYLEOPTIONCOMPLEX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionComplex__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSLIDER_STYLEOPTIONTYPE_TYPE = 983041
} QStyleOptionSlider__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSLIDER_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSlider__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSPINBOX_STYLEOPTIONTYPE_TYPE = 983042
} QStyleOptionSpinBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSPINBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSpinBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_STYLEOPTIONTYPE_TYPE = 983043
} QStyleOptionToolButton__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionToolButton__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_NONE = 0,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_ARROW = 1,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_MENU = 4,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_MENUBUTTONPOPUP = 4,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_POPUPDELAY = 8,
    QSTYLEOPTIONTOOLBUTTON_TOOLBUTTONFEATURE_HASMENU = 16
} QStyleOptionToolButton__ToolButtonFeature;

typedef enum {
    QSTYLEOPTIONCOMBOBOX_STYLEOPTIONTYPE_TYPE = 983044
} QStyleOptionComboBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONCOMBOBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionComboBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONTITLEBAR_STYLEOPTIONTYPE_TYPE = 983045
} QStyleOptionTitleBar__StyleOptionType;

typedef enum {
    QSTYLEOPTIONTITLEBAR_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionTitleBar__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONGROUPBOX_STYLEOPTIONTYPE_TYPE = 983046
} QStyleOptionGroupBox__StyleOptionType;

typedef enum {
    QSTYLEOPTIONGROUPBOX_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionGroupBox__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONSIZEGRIP_STYLEOPTIONTYPE_TYPE = 983047
} QStyleOptionSizeGrip__StyleOptionType;

typedef enum {
    QSTYLEOPTIONSIZEGRIP_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionSizeGrip__StyleOptionVersion;

typedef enum {
    QSTYLEOPTIONGRAPHICSITEM_STYLEOPTIONTYPE_TYPE = 15
} QStyleOptionGraphicsItem__StyleOptionType;

typedef enum {
    QSTYLEOPTIONGRAPHICSITEM_STYLEOPTIONVERSION_VERSION = 1
} QStyleOptionGraphicsItem__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_DEFAULT = 61440,
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_MASK = 61441,
    QSTYLEHINTRETURN_HINTRETURNTYPE_SH_VARIANT = 61442
} QStyleHintReturn__HintReturnType;

typedef enum {
    QSTYLEHINTRETURN_STYLEOPTIONTYPE_TYPE = 61440
} QStyleHintReturn__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURN_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturn__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURNMASK_STYLEOPTIONTYPE_TYPE = 61441
} QStyleHintReturnMask__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURNMASK_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturnMask__StyleOptionVersion;

typedef enum {
    QSTYLEHINTRETURNVARIANT_STYLEOPTIONTYPE_TYPE = 61442
} QStyleHintReturnVariant__StyleOptionType;

typedef enum {
    QSTYLEHINTRETURNVARIANT_STYLEOPTIONVERSION_VERSION = 1
} QStyleHintReturnVariant__StyleOptionVersion;

#endif
