#include "libqtransform.hpp"
#include "libqwidget.hpp"
#include "libqstyleoption.hpp"
#include "libqstyleoption.h"

QStyleOption* q_styleoption_new() {
    return QStyleOption_new();
}

QStyleOption* q_styleoption_new2(void* other) {
    return QStyleOption_new2((QStyleOption*)other);
}

QStyleOption* q_styleoption_new3(int version) {
    return QStyleOption_new3(version);
}

QStyleOption* q_styleoption_new4(int version, int typeVal) {
    return QStyleOption_new4(version, typeVal);
}

void q_styleoption_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoption_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoption_delete(void* self) {
    QStyleOption_Delete((QStyleOption*)(self));
}

QStyleOptionFocusRect* q_styleoptionfocusrect_new() {
    return QStyleOptionFocusRect_new();
}

QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other) {
    return QStyleOptionFocusRect_new2((QStyleOptionFocusRect*)other);
}

void q_styleoptionfocusrect_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionfocusrect_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionfocusrect_delete(void* self) {
    QStyleOptionFocusRect_Delete((QStyleOptionFocusRect*)(self));
}

QStyleOptionFrame* q_styleoptionframe_new() {
    return QStyleOptionFrame_new();
}

QStyleOptionFrame* q_styleoptionframe_new2(void* other) {
    return QStyleOptionFrame_new2((QStyleOptionFrame*)other);
}

void q_styleoptionframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionframe_delete(void* self) {
    QStyleOptionFrame_Delete((QStyleOptionFrame*)(self));
}

QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new() {
    return QStyleOptionTabWidgetFrame_new();
}

QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other) {
    return QStyleOptionTabWidgetFrame_new2((QStyleOptionTabWidgetFrame*)other);
}

void q_styleoptiontabwidgetframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontabwidgetframe_delete(void* self) {
    QStyleOptionTabWidgetFrame_Delete((QStyleOptionTabWidgetFrame*)(self));
}

QStyleOptionTabBarBase* q_styleoptiontabbarbase_new() {
    return QStyleOptionTabBarBase_new();
}

QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other) {
    return QStyleOptionTabBarBase_new2((QStyleOptionTabBarBase*)other);
}

void q_styleoptiontabbarbase_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontabbarbase_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontabbarbase_delete(void* self) {
    QStyleOptionTabBarBase_Delete((QStyleOptionTabBarBase*)(self));
}

QStyleOptionHeader* q_styleoptionheader_new() {
    return QStyleOptionHeader_new();
}

QStyleOptionHeader* q_styleoptionheader_new2(void* other) {
    return QStyleOptionHeader_new2((QStyleOptionHeader*)other);
}

void q_styleoptionheader_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionheader_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionheader_delete(void* self) {
    QStyleOptionHeader_Delete((QStyleOptionHeader*)(self));
}

QStyleOptionHeaderV2* q_styleoptionheaderv2_new() {
    return QStyleOptionHeaderV2_new();
}

QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other) {
    return QStyleOptionHeaderV2_new2((QStyleOptionHeaderV2*)other);
}

void q_styleoptionheaderv2_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionheaderv2_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionheaderv2_delete(void* self) {
    QStyleOptionHeaderV2_Delete((QStyleOptionHeaderV2*)(self));
}

QStyleOptionButton* q_styleoptionbutton_new() {
    return QStyleOptionButton_new();
}

QStyleOptionButton* q_styleoptionbutton_new2(void* other) {
    return QStyleOptionButton_new2((QStyleOptionButton*)other);
}

void q_styleoptionbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionbutton_delete(void* self) {
    QStyleOptionButton_Delete((QStyleOptionButton*)(self));
}

QStyleOptionTab* q_styleoptiontab_new() {
    return QStyleOptionTab_new();
}

QStyleOptionTab* q_styleoptiontab_new2(void* other) {
    return QStyleOptionTab_new2((QStyleOptionTab*)other);
}

void q_styleoptiontab_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontab_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontab_delete(void* self) {
    QStyleOptionTab_Delete((QStyleOptionTab*)(self));
}

QStyleOptionToolBar* q_styleoptiontoolbar_new() {
    return QStyleOptionToolBar_new();
}

QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other) {
    return QStyleOptionToolBar_new2((QStyleOptionToolBar*)other);
}

void q_styleoptiontoolbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbar_delete(void* self) {
    QStyleOptionToolBar_Delete((QStyleOptionToolBar*)(self));
}

QStyleOptionProgressBar* q_styleoptionprogressbar_new() {
    return QStyleOptionProgressBar_new();
}

QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other) {
    return QStyleOptionProgressBar_new2((QStyleOptionProgressBar*)other);
}

void q_styleoptionprogressbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionprogressbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionprogressbar_delete(void* self) {
    QStyleOptionProgressBar_Delete((QStyleOptionProgressBar*)(self));
}

QStyleOptionMenuItem* q_styleoptionmenuitem_new() {
    return QStyleOptionMenuItem_new();
}

QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other) {
    return QStyleOptionMenuItem_new2((QStyleOptionMenuItem*)other);
}

void q_styleoptionmenuitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionmenuitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionmenuitem_delete(void* self) {
    QStyleOptionMenuItem_Delete((QStyleOptionMenuItem*)(self));
}

QStyleOptionDockWidget* q_styleoptiondockwidget_new() {
    return QStyleOptionDockWidget_new();
}

QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other) {
    return QStyleOptionDockWidget_new2((QStyleOptionDockWidget*)other);
}

void q_styleoptiondockwidget_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiondockwidget_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiondockwidget_delete(void* self) {
    QStyleOptionDockWidget_Delete((QStyleOptionDockWidget*)(self));
}

QStyleOptionViewItem* q_styleoptionviewitem_new() {
    return QStyleOptionViewItem_new();
}

QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other) {
    return QStyleOptionViewItem_new2((QStyleOptionViewItem*)other);
}

void q_styleoptionviewitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionviewitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionviewitem_delete(void* self) {
    QStyleOptionViewItem_Delete((QStyleOptionViewItem*)(self));
}

QStyleOptionToolBox* q_styleoptiontoolbox_new() {
    return QStyleOptionToolBox_new();
}

QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other) {
    return QStyleOptionToolBox_new2((QStyleOptionToolBox*)other);
}

void q_styleoptiontoolbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbox_delete(void* self) {
    QStyleOptionToolBox_Delete((QStyleOptionToolBox*)(self));
}

QStyleOptionRubberBand* q_styleoptionrubberband_new() {
    return QStyleOptionRubberBand_new();
}

QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other) {
    return QStyleOptionRubberBand_new2((QStyleOptionRubberBand*)other);
}

void q_styleoptionrubberband_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionrubberband_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionrubberband_delete(void* self) {
    QStyleOptionRubberBand_Delete((QStyleOptionRubberBand*)(self));
}

QStyleOptionComplex* q_styleoptioncomplex_new() {
    return QStyleOptionComplex_new();
}

QStyleOptionComplex* q_styleoptioncomplex_new2(void* other) {
    return QStyleOptionComplex_new2((QStyleOptionComplex*)other);
}

QStyleOptionComplex* q_styleoptioncomplex_new3(int version) {
    return QStyleOptionComplex_new3(version);
}

QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal) {
    return QStyleOptionComplex_new4(version, typeVal);
}

void q_styleoptioncomplex_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptioncomplex_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptioncomplex_delete(void* self) {
    QStyleOptionComplex_Delete((QStyleOptionComplex*)(self));
}

QStyleOptionSlider* q_styleoptionslider_new() {
    return QStyleOptionSlider_new();
}

QStyleOptionSlider* q_styleoptionslider_new2(void* other) {
    return QStyleOptionSlider_new2((QStyleOptionSlider*)other);
}

void q_styleoptionslider_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionslider_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionslider_delete(void* self) {
    QStyleOptionSlider_Delete((QStyleOptionSlider*)(self));
}

QStyleOptionSpinBox* q_styleoptionspinbox_new() {
    return QStyleOptionSpinBox_new();
}

QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other) {
    return QStyleOptionSpinBox_new2((QStyleOptionSpinBox*)other);
}

void q_styleoptionspinbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionspinbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionspinbox_delete(void* self) {
    QStyleOptionSpinBox_Delete((QStyleOptionSpinBox*)(self));
}

QStyleOptionToolButton* q_styleoptiontoolbutton_new() {
    return QStyleOptionToolButton_new();
}

QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other) {
    return QStyleOptionToolButton_new2((QStyleOptionToolButton*)other);
}

void q_styleoptiontoolbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontoolbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontoolbutton_delete(void* self) {
    QStyleOptionToolButton_Delete((QStyleOptionToolButton*)(self));
}

QStyleOptionComboBox* q_styleoptioncombobox_new() {
    return QStyleOptionComboBox_new();
}

QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other) {
    return QStyleOptionComboBox_new2((QStyleOptionComboBox*)other);
}

void q_styleoptioncombobox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptioncombobox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptioncombobox_delete(void* self) {
    QStyleOptionComboBox_Delete((QStyleOptionComboBox*)(self));
}

QStyleOptionTitleBar* q_styleoptiontitlebar_new() {
    return QStyleOptionTitleBar_new();
}

QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other) {
    return QStyleOptionTitleBar_new2((QStyleOptionTitleBar*)other);
}

void q_styleoptiontitlebar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiontitlebar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiontitlebar_delete(void* self) {
    QStyleOptionTitleBar_Delete((QStyleOptionTitleBar*)(self));
}

QStyleOptionGroupBox* q_styleoptiongroupbox_new() {
    return QStyleOptionGroupBox_new();
}

QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other) {
    return QStyleOptionGroupBox_new2((QStyleOptionGroupBox*)other);
}

void q_styleoptiongroupbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiongroupbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiongroupbox_delete(void* self) {
    QStyleOptionGroupBox_Delete((QStyleOptionGroupBox*)(self));
}

QStyleOptionSizeGrip* q_styleoptionsizegrip_new() {
    return QStyleOptionSizeGrip_new();
}

QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other) {
    return QStyleOptionSizeGrip_new2((QStyleOptionSizeGrip*)other);
}

void q_styleoptionsizegrip_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptionsizegrip_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptionsizegrip_delete(void* self) {
    QStyleOptionSizeGrip_Delete((QStyleOptionSizeGrip*)(self));
}

QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new() {
    return QStyleOptionGraphicsItem_new();
}

QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other) {
    return QStyleOptionGraphicsItem_new2((QStyleOptionGraphicsItem*)other);
}

double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform) {
    return QStyleOptionGraphicsItem_LevelOfDetailFromTransform((QTransform*)worldTransform);
}

void q_styleoptiongraphicsitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

void q_styleoptiongraphicsitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

void q_styleoptiongraphicsitem_delete(void* self) {
    QStyleOptionGraphicsItem_Delete((QStyleOptionGraphicsItem*)(self));
}

QStyleHintReturn* q_stylehintreturn_new() {
    return QStyleHintReturn_new();
}

QStyleHintReturn* q_stylehintreturn_new2(void* param1) {
    return QStyleHintReturn_new2((QStyleHintReturn*)param1);
}

QStyleHintReturn* q_stylehintreturn_new3(int version) {
    return QStyleHintReturn_new3(version);
}

QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal) {
    return QStyleHintReturn_new4(version, typeVal);
}

void q_stylehintreturn_operator_assign(void* self, void* param1) {
    QStyleHintReturn_OperatorAssign((QStyleHintReturn*)self, (QStyleHintReturn*)param1);
}

void q_stylehintreturn_delete(void* self) {
    QStyleHintReturn_Delete((QStyleHintReturn*)(self));
}

QStyleHintReturnMask* q_stylehintreturnmask_new() {
    return QStyleHintReturnMask_new();
}

QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1) {
    return QStyleHintReturnMask_new2((QStyleHintReturnMask*)param1);
}

void q_stylehintreturnmask_operator_assign(void* self, void* param1) {
    QStyleHintReturnMask_OperatorAssign((QStyleHintReturnMask*)self, (QStyleHintReturnMask*)param1);
}

void q_stylehintreturnmask_delete(void* self) {
    QStyleHintReturnMask_Delete((QStyleHintReturnMask*)(self));
}

QStyleHintReturnVariant* q_stylehintreturnvariant_new() {
    return QStyleHintReturnVariant_new();
}

QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1) {
    return QStyleHintReturnVariant_new2((QStyleHintReturnVariant*)param1);
}

void q_stylehintreturnvariant_operator_assign(void* self, void* param1) {
    QStyleHintReturnVariant_OperatorAssign((QStyleHintReturnVariant*)self, (QStyleHintReturnVariant*)param1);
}

void q_stylehintreturnvariant_delete(void* self) {
    QStyleHintReturnVariant_Delete((QStyleHintReturnVariant*)(self));
}
