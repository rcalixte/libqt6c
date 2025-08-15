#pragma once
#ifndef SRCQT6C_LIBQSTYLEOPTION_H
#define SRCQT6C_LIBQSTYLEOPTION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstyleoption.html

/// q_styleoption_new constructs a new QStyleOption object.
///
QStyleOption* q_styleoption_new();

/// q_styleoption_new2 constructs a new QStyleOption object.
///
/// @param other QStyleOption*
QStyleOption* q_styleoption_new2(void* other);

/// q_styleoption_new3 constructs a new QStyleOption object.
///
/// @param version int
QStyleOption* q_styleoption_new3(int version);

/// q_styleoption_new4 constructs a new QStyleOption object.
///
/// @param version int
/// @param typeVal int
QStyleOption* q_styleoption_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOption*
/// @param w QWidget*
void q_styleoption_init_from(void* self, void* w);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOption*
/// @param other QStyleOption*
void q_styleoption_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#dtor.QStyleOption)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOption*
void q_styleoption_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html

/// q_styleoptionfocusrect_new constructs a new QStyleOptionFocusRect object.
///
QStyleOptionFocusRect* q_styleoptionfocusrect_new();

/// q_styleoptionfocusrect_new2 constructs a new QStyleOptionFocusRect object.
///
/// @param other QStyleOptionFocusRect*
QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionFocusRect*
/// @param w QWidget*
void q_styleoptionfocusrect_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionFocusRect*
/// @param other QStyleOption*
void q_styleoptionfocusrect_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionfocusrect.html#dtor.QStyleOptionFocusRect)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionFocusRect*
void q_styleoptionfocusrect_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionframe.html

/// q_styleoptionframe_new constructs a new QStyleOptionFrame object.
///
QStyleOptionFrame* q_styleoptionframe_new();

/// q_styleoptionframe_new2 constructs a new QStyleOptionFrame object.
///
/// @param other QStyleOptionFrame*
QStyleOptionFrame* q_styleoptionframe_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionFrame*
/// @param w QWidget*
void q_styleoptionframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionFrame*
/// @param other QStyleOption*
void q_styleoptionframe_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionframe.html#dtor.QStyleOptionFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionFrame*
void q_styleoptionframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html

/// q_styleoptiontabwidgetframe_new constructs a new QStyleOptionTabWidgetFrame object.
///
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new();

/// q_styleoptiontabwidgetframe_new2 constructs a new QStyleOptionTabWidgetFrame object.
///
/// @param other QStyleOptionTabWidgetFrame*
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param w QWidget*
void q_styleoptiontabwidgetframe_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTabWidgetFrame*
/// @param other QStyleOption*
void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html#dtor.QStyleOptionTabWidgetFrame)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTabWidgetFrame*
void q_styleoptiontabwidgetframe_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html

/// q_styleoptiontabbarbase_new constructs a new QStyleOptionTabBarBase object.
///
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new();

/// q_styleoptiontabbarbase_new2 constructs a new QStyleOptionTabBarBase object.
///
/// @param other QStyleOptionTabBarBase*
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTabBarBase*
/// @param w QWidget*
void q_styleoptiontabbarbase_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTabBarBase*
/// @param other QStyleOption*
void q_styleoptiontabbarbase_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html#dtor.QStyleOptionTabBarBase)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTabBarBase*
void q_styleoptiontabbarbase_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheader.html

/// q_styleoptionheader_new constructs a new QStyleOptionHeader object.
///
QStyleOptionHeader* q_styleoptionheader_new();

/// q_styleoptionheader_new2 constructs a new QStyleOptionHeader object.
///
/// @param other QStyleOptionHeader*
QStyleOptionHeader* q_styleoptionheader_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionHeader*
/// @param w QWidget*
void q_styleoptionheader_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionHeader*
/// @param other QStyleOption*
void q_styleoptionheader_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheader.html#dtor.QStyleOptionHeader)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionHeader*
void q_styleoptionheader_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html

/// q_styleoptionheaderv2_new constructs a new QStyleOptionHeaderV2 object.
///
QStyleOptionHeaderV2* q_styleoptionheaderv2_new();

/// q_styleoptionheaderv2_new2 constructs a new QStyleOptionHeaderV2 object.
///
/// @param other QStyleOptionHeaderV2*
QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionHeaderV2*
/// @param w QWidget*
void q_styleoptionheaderv2_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionHeaderV2*
/// @param other QStyleOption*
void q_styleoptionheaderv2_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionheaderv2.html#dtor.QStyleOptionHeaderV2)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionHeaderV2*
void q_styleoptionheaderv2_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html

/// q_styleoptionbutton_new constructs a new QStyleOptionButton object.
///
QStyleOptionButton* q_styleoptionbutton_new();

/// q_styleoptionbutton_new2 constructs a new QStyleOptionButton object.
///
/// @param other QStyleOptionButton*
QStyleOptionButton* q_styleoptionbutton_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionButton*
/// @param w QWidget*
void q_styleoptionbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionButton*
/// @param other QStyleOption*
void q_styleoptionbutton_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionbutton.html#dtor.QStyleOptionButton)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionButton*
void q_styleoptionbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontab.html

/// q_styleoptiontab_new constructs a new QStyleOptionTab object.
///
QStyleOptionTab* q_styleoptiontab_new();

/// q_styleoptiontab_new2 constructs a new QStyleOptionTab object.
///
/// @param other QStyleOptionTab*
QStyleOptionTab* q_styleoptiontab_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTab*
/// @param w QWidget*
void q_styleoptiontab_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTab*
/// @param other QStyleOption*
void q_styleoptiontab_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontab.html#dtor.QStyleOptionTab)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTab*
void q_styleoptiontab_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html

/// q_styleoptiontoolbar_new constructs a new QStyleOptionToolBar object.
///
QStyleOptionToolBar* q_styleoptiontoolbar_new();

/// q_styleoptiontoolbar_new2 constructs a new QStyleOptionToolBar object.
///
/// @param other QStyleOptionToolBar*
QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolBar*
/// @param w QWidget*
void q_styleoptiontoolbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolBar*
/// @param other QStyleOption*
void q_styleoptiontoolbar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbar.html#dtor.QStyleOptionToolBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolBar*
void q_styleoptiontoolbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html

/// q_styleoptionprogressbar_new constructs a new QStyleOptionProgressBar object.
///
QStyleOptionProgressBar* q_styleoptionprogressbar_new();

/// q_styleoptionprogressbar_new2 constructs a new QStyleOptionProgressBar object.
///
/// @param other QStyleOptionProgressBar*
QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionProgressBar*
/// @param w QWidget*
void q_styleoptionprogressbar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionProgressBar*
/// @param other QStyleOption*
void q_styleoptionprogressbar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionprogressbar.html#dtor.QStyleOptionProgressBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionProgressBar*
void q_styleoptionprogressbar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html

/// q_styleoptionmenuitem_new constructs a new QStyleOptionMenuItem object.
///
QStyleOptionMenuItem* q_styleoptionmenuitem_new();

/// q_styleoptionmenuitem_new2 constructs a new QStyleOptionMenuItem object.
///
/// @param other QStyleOptionMenuItem*
QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionMenuItem*
/// @param w QWidget*
void q_styleoptionmenuitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionMenuItem*
/// @param other QStyleOption*
void q_styleoptionmenuitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionmenuitem.html#dtor.QStyleOptionMenuItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionMenuItem*
void q_styleoptionmenuitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html

/// q_styleoptiondockwidget_new constructs a new QStyleOptionDockWidget object.
///
QStyleOptionDockWidget* q_styleoptiondockwidget_new();

/// q_styleoptiondockwidget_new2 constructs a new QStyleOptionDockWidget object.
///
/// @param other QStyleOptionDockWidget*
QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionDockWidget*
/// @param w QWidget*
void q_styleoptiondockwidget_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionDockWidget*
/// @param other QStyleOption*
void q_styleoptiondockwidget_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiondockwidget.html#dtor.QStyleOptionDockWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionDockWidget*
void q_styleoptiondockwidget_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html

/// q_styleoptionviewitem_new constructs a new QStyleOptionViewItem object.
///
QStyleOptionViewItem* q_styleoptionviewitem_new();

/// q_styleoptionviewitem_new2 constructs a new QStyleOptionViewItem object.
///
/// @param other QStyleOptionViewItem*
QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionViewItem*
/// @param w QWidget*
void q_styleoptionviewitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionViewItem*
/// @param other QStyleOption*
void q_styleoptionviewitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionviewitem.html#dtor.QStyleOptionViewItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionViewItem*
void q_styleoptionviewitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html

/// q_styleoptiontoolbox_new constructs a new QStyleOptionToolBox object.
///
QStyleOptionToolBox* q_styleoptiontoolbox_new();

/// q_styleoptiontoolbox_new2 constructs a new QStyleOptionToolBox object.
///
/// @param other QStyleOptionToolBox*
QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolBox*
/// @param w QWidget*
void q_styleoptiontoolbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolBox*
/// @param other QStyleOption*
void q_styleoptiontoolbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbox.html#dtor.QStyleOptionToolBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolBox*
void q_styleoptiontoolbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html

/// q_styleoptionrubberband_new constructs a new QStyleOptionRubberBand object.
///
QStyleOptionRubberBand* q_styleoptionrubberband_new();

/// q_styleoptionrubberband_new2 constructs a new QStyleOptionRubberBand object.
///
/// @param other QStyleOptionRubberBand*
QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionRubberBand*
/// @param w QWidget*
void q_styleoptionrubberband_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionRubberBand*
/// @param other QStyleOption*
void q_styleoptionrubberband_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionrubberband.html#dtor.QStyleOptionRubberBand)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionRubberBand*
void q_styleoptionrubberband_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html

/// q_styleoptioncomplex_new constructs a new QStyleOptionComplex object.
///
QStyleOptionComplex* q_styleoptioncomplex_new();

/// q_styleoptioncomplex_new2 constructs a new QStyleOptionComplex object.
///
/// @param other QStyleOptionComplex*
QStyleOptionComplex* q_styleoptioncomplex_new2(void* other);

/// q_styleoptioncomplex_new3 constructs a new QStyleOptionComplex object.
///
/// @param version int
QStyleOptionComplex* q_styleoptioncomplex_new3(int version);

/// q_styleoptioncomplex_new4 constructs a new QStyleOptionComplex object.
///
/// @param version int
/// @param typeVal int
QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionComplex*
/// @param w QWidget*
void q_styleoptioncomplex_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionComplex*
/// @param other QStyleOption*
void q_styleoptioncomplex_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncomplex.html#dtor.QStyleOptionComplex)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionComplex*
void q_styleoptioncomplex_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionslider.html

/// q_styleoptionslider_new constructs a new QStyleOptionSlider object.
///
QStyleOptionSlider* q_styleoptionslider_new();

/// q_styleoptionslider_new2 constructs a new QStyleOptionSlider object.
///
/// @param other QStyleOptionSlider*
QStyleOptionSlider* q_styleoptionslider_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSlider*
/// @param w QWidget*
void q_styleoptionslider_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSlider*
/// @param other QStyleOption*
void q_styleoptionslider_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionslider.html#dtor.QStyleOptionSlider)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSlider*
void q_styleoptionslider_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html

/// q_styleoptionspinbox_new constructs a new QStyleOptionSpinBox object.
///
QStyleOptionSpinBox* q_styleoptionspinbox_new();

/// q_styleoptionspinbox_new2 constructs a new QStyleOptionSpinBox object.
///
/// @param other QStyleOptionSpinBox*
QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSpinBox*
/// @param w QWidget*
void q_styleoptionspinbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSpinBox*
/// @param other QStyleOption*
void q_styleoptionspinbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionspinbox.html#dtor.QStyleOptionSpinBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSpinBox*
void q_styleoptionspinbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html

/// q_styleoptiontoolbutton_new constructs a new QStyleOptionToolButton object.
///
QStyleOptionToolButton* q_styleoptiontoolbutton_new();

/// q_styleoptiontoolbutton_new2 constructs a new QStyleOptionToolButton object.
///
/// @param other QStyleOptionToolButton*
QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionToolButton*
/// @param w QWidget*
void q_styleoptiontoolbutton_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionToolButton*
/// @param other QStyleOption*
void q_styleoptiontoolbutton_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html#dtor.QStyleOptionToolButton)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionToolButton*
void q_styleoptiontoolbutton_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html

/// q_styleoptioncombobox_new constructs a new QStyleOptionComboBox object.
///
QStyleOptionComboBox* q_styleoptioncombobox_new();

/// q_styleoptioncombobox_new2 constructs a new QStyleOptionComboBox object.
///
/// @param other QStyleOptionComboBox*
QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionComboBox*
/// @param w QWidget*
void q_styleoptioncombobox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionComboBox*
/// @param other QStyleOption*
void q_styleoptioncombobox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptioncombobox.html#dtor.QStyleOptionComboBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionComboBox*
void q_styleoptioncombobox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html

/// q_styleoptiontitlebar_new constructs a new QStyleOptionTitleBar object.
///
QStyleOptionTitleBar* q_styleoptiontitlebar_new();

/// q_styleoptiontitlebar_new2 constructs a new QStyleOptionTitleBar object.
///
/// @param other QStyleOptionTitleBar*
QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionTitleBar*
/// @param w QWidget*
void q_styleoptiontitlebar_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionTitleBar*
/// @param other QStyleOption*
void q_styleoptiontitlebar_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiontitlebar.html#dtor.QStyleOptionTitleBar)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionTitleBar*
void q_styleoptiontitlebar_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html

/// q_styleoptiongroupbox_new constructs a new QStyleOptionGroupBox object.
///
QStyleOptionGroupBox* q_styleoptiongroupbox_new();

/// q_styleoptiongroupbox_new2 constructs a new QStyleOptionGroupBox object.
///
/// @param other QStyleOptionGroupBox*
QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionGroupBox*
/// @param w QWidget*
void q_styleoptiongroupbox_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionGroupBox*
/// @param other QStyleOption*
void q_styleoptiongroupbox_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongroupbox.html#dtor.QStyleOptionGroupBox)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionGroupBox*
void q_styleoptiongroupbox_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html

/// q_styleoptionsizegrip_new constructs a new QStyleOptionSizeGrip object.
///
QStyleOptionSizeGrip* q_styleoptionsizegrip_new();

/// q_styleoptionsizegrip_new2 constructs a new QStyleOptionSizeGrip object.
///
/// @param other QStyleOptionSizeGrip*
QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionSizeGrip*
/// @param w QWidget*
void q_styleoptionsizegrip_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionSizeGrip*
/// @param other QStyleOption*
void q_styleoptionsizegrip_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptionsizegrip.html#dtor.QStyleOptionSizeGrip)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionSizeGrip*
void q_styleoptionsizegrip_delete(void* self);

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html

/// q_styleoptiongraphicsitem_new constructs a new QStyleOptionGraphicsItem object.
///
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new();

/// q_styleoptiongraphicsitem_new2 constructs a new QStyleOptionGraphicsItem object.
///
/// @param other QStyleOptionGraphicsItem*
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
///
/// @param worldTransform QTransform*
double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// @param self QStyleOptionGraphicsItem*
/// @param w QWidget*
void q_styleoptiongraphicsitem_init_from(void* self, void* w);

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator-eq)
///
/// @param self QStyleOptionGraphicsItem*
/// @param other QStyleOption*
void q_styleoptiongraphicsitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#dtor.QStyleOptionGraphicsItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleOptionGraphicsItem*
void q_styleoptiongraphicsitem_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturn.html

/// q_stylehintreturn_new constructs a new QStyleHintReturn object.
///
QStyleHintReturn* q_stylehintreturn_new();

/// q_stylehintreturn_new2 constructs a new QStyleHintReturn object.
///
/// @param param1 QStyleHintReturn*
QStyleHintReturn* q_stylehintreturn_new2(void* param1);

/// q_stylehintreturn_new3 constructs a new QStyleHintReturn object.
///
/// @param version int
QStyleHintReturn* q_stylehintreturn_new3(int version);

/// q_stylehintreturn_new4 constructs a new QStyleHintReturn object.
///
/// @param version int
/// @param typeVal int
QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator-eq)
///
/// @param self QStyleHintReturn*
/// @param param1 QStyleHintReturn*
void q_stylehintreturn_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#dtor.QStyleHintReturn)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturn*
void q_stylehintreturn_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html

/// q_stylehintreturnmask_new constructs a new QStyleHintReturnMask object.
///
QStyleHintReturnMask* q_stylehintreturnmask_new();

/// q_stylehintreturnmask_new2 constructs a new QStyleHintReturnMask object.
///
/// @param param1 QStyleHintReturnMask*
QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator-eq)
///
/// @param self QStyleHintReturnMask*
/// @param param1 QStyleHintReturnMask*
void q_stylehintreturnmask_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#dtor.QStyleHintReturnMask)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturnMask*
void q_stylehintreturnmask_delete(void* self);

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html

/// q_stylehintreturnvariant_new constructs a new QStyleHintReturnVariant object.
///
QStyleHintReturnVariant* q_stylehintreturnvariant_new();

/// q_stylehintreturnvariant_new2 constructs a new QStyleHintReturnVariant object.
///
/// @param param1 QStyleHintReturnVariant*
QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator-eq)
///
/// @param self QStyleHintReturnVariant*
/// @param param1 QStyleHintReturnVariant*
void q_stylehintreturnvariant_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#dtor.QStyleHintReturnVariant)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleHintReturnVariant*
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
    QSTYLEOPTIONTAB_TABPOSITION_ONLYONETAB = 3,
    QSTYLEOPTIONTAB_TABPOSITION_MOVING = 4
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
