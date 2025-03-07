#include "libqtransform.hpp"
#include "libqwidget.hpp"
#include "libqstyleoption.hpp"
#include "libqstyleoption.h"

/// https://doc.qt.io/qt-6/qstyleoption.html

/// q_styleoption_new constructs a new QStyleOption object.
///
///
QStyleOption* q_styleoption_new() {
    return QStyleOption_new();
}

/// q_styleoption_new2 constructs a new QStyleOption object.
///
/// ``` QStyleOption* other ```
QStyleOption* q_styleoption_new2(void* other) {
    return QStyleOption_new2((QStyleOption*)other);
}

/// q_styleoption_new3 constructs a new QStyleOption object.
///
/// ``` int version ```
QStyleOption* q_styleoption_new3(int version) {
    return QStyleOption_new3(version);
}

/// q_styleoption_new4 constructs a new QStyleOption object.
///
/// ``` int version, int typeVal ```
QStyleOption* q_styleoption_new4(int version, int typeVal) {
    return QStyleOption_new4(version, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOption* self, QWidget* w ```
void q_styleoption_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOption* self, QStyleOption* other ```
void q_styleoption_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOption* self ```
void q_styleoption_delete(void* self) {
    QStyleOption_Delete((QStyleOption*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionfocusrect.html

/// q_styleoptionfocusrect_new constructs a new QStyleOptionFocusRect object.
///
///
QStyleOptionFocusRect* q_styleoptionfocusrect_new() {
    return QStyleOptionFocusRect_new();
}

/// q_styleoptionfocusrect_new2 constructs a new QStyleOptionFocusRect object.
///
/// ``` QStyleOptionFocusRect* other ```
QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other) {
    return QStyleOptionFocusRect_new2((QStyleOptionFocusRect*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionFocusRect* self, QWidget* w ```
void q_styleoptionfocusrect_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionFocusRect* self, QStyleOption* other ```
void q_styleoptionfocusrect_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionFocusRect* self ```
void q_styleoptionfocusrect_delete(void* self) {
    QStyleOptionFocusRect_Delete((QStyleOptionFocusRect*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionframe.html

/// q_styleoptionframe_new constructs a new QStyleOptionFrame object.
///
///
QStyleOptionFrame* q_styleoptionframe_new() {
    return QStyleOptionFrame_new();
}

/// q_styleoptionframe_new2 constructs a new QStyleOptionFrame object.
///
/// ``` QStyleOptionFrame* other ```
QStyleOptionFrame* q_styleoptionframe_new2(void* other) {
    return QStyleOptionFrame_new2((QStyleOptionFrame*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionFrame* self, QWidget* w ```
void q_styleoptionframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionFrame* self, QStyleOption* other ```
void q_styleoptionframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionFrame* self ```
void q_styleoptionframe_delete(void* self) {
    QStyleOptionFrame_Delete((QStyleOptionFrame*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontabwidgetframe.html

/// q_styleoptiontabwidgetframe_new constructs a new QStyleOptionTabWidgetFrame object.
///
///
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new() {
    return QStyleOptionTabWidgetFrame_new();
}

/// q_styleoptiontabwidgetframe_new2 constructs a new QStyleOptionTabWidgetFrame object.
///
/// ``` QStyleOptionTabWidgetFrame* other ```
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other) {
    return QStyleOptionTabWidgetFrame_new2((QStyleOptionTabWidgetFrame*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTabWidgetFrame* self, QWidget* w ```
void q_styleoptiontabwidgetframe_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTabWidgetFrame* self, QStyleOption* other ```
void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTabWidgetFrame* self ```
void q_styleoptiontabwidgetframe_delete(void* self) {
    QStyleOptionTabWidgetFrame_Delete((QStyleOptionTabWidgetFrame*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontabbarbase.html

/// q_styleoptiontabbarbase_new constructs a new QStyleOptionTabBarBase object.
///
///
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new() {
    return QStyleOptionTabBarBase_new();
}

/// q_styleoptiontabbarbase_new2 constructs a new QStyleOptionTabBarBase object.
///
/// ``` QStyleOptionTabBarBase* other ```
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other) {
    return QStyleOptionTabBarBase_new2((QStyleOptionTabBarBase*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTabBarBase* self, QWidget* w ```
void q_styleoptiontabbarbase_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTabBarBase* self, QStyleOption* other ```
void q_styleoptiontabbarbase_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTabBarBase* self ```
void q_styleoptiontabbarbase_delete(void* self) {
    QStyleOptionTabBarBase_Delete((QStyleOptionTabBarBase*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionheader.html

/// q_styleoptionheader_new constructs a new QStyleOptionHeader object.
///
///
QStyleOptionHeader* q_styleoptionheader_new() {
    return QStyleOptionHeader_new();
}

/// q_styleoptionheader_new2 constructs a new QStyleOptionHeader object.
///
/// ``` QStyleOptionHeader* other ```
QStyleOptionHeader* q_styleoptionheader_new2(void* other) {
    return QStyleOptionHeader_new2((QStyleOptionHeader*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionHeader* self, QWidget* w ```
void q_styleoptionheader_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionHeader* self, QStyleOption* other ```
void q_styleoptionheader_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionHeader* self ```
void q_styleoptionheader_delete(void* self) {
    QStyleOptionHeader_Delete((QStyleOptionHeader*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionheaderv2.html

/// q_styleoptionheaderv2_new constructs a new QStyleOptionHeaderV2 object.
///
///
QStyleOptionHeaderV2* q_styleoptionheaderv2_new() {
    return QStyleOptionHeaderV2_new();
}

/// q_styleoptionheaderv2_new2 constructs a new QStyleOptionHeaderV2 object.
///
/// ``` QStyleOptionHeaderV2* other ```
QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other) {
    return QStyleOptionHeaderV2_new2((QStyleOptionHeaderV2*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionHeaderV2* self, QWidget* w ```
void q_styleoptionheaderv2_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionHeaderV2* self, QStyleOption* other ```
void q_styleoptionheaderv2_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionHeaderV2* self ```
void q_styleoptionheaderv2_delete(void* self) {
    QStyleOptionHeaderV2_Delete((QStyleOptionHeaderV2*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionbutton.html

/// q_styleoptionbutton_new constructs a new QStyleOptionButton object.
///
///
QStyleOptionButton* q_styleoptionbutton_new() {
    return QStyleOptionButton_new();
}

/// q_styleoptionbutton_new2 constructs a new QStyleOptionButton object.
///
/// ``` QStyleOptionButton* other ```
QStyleOptionButton* q_styleoptionbutton_new2(void* other) {
    return QStyleOptionButton_new2((QStyleOptionButton*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionButton* self, QWidget* w ```
void q_styleoptionbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionButton* self, QStyleOption* other ```
void q_styleoptionbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionButton* self ```
void q_styleoptionbutton_delete(void* self) {
    QStyleOptionButton_Delete((QStyleOptionButton*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontab.html

/// q_styleoptiontab_new constructs a new QStyleOptionTab object.
///
///
QStyleOptionTab* q_styleoptiontab_new() {
    return QStyleOptionTab_new();
}

/// q_styleoptiontab_new2 constructs a new QStyleOptionTab object.
///
/// ``` QStyleOptionTab* other ```
QStyleOptionTab* q_styleoptiontab_new2(void* other) {
    return QStyleOptionTab_new2((QStyleOptionTab*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTab* self, QWidget* w ```
void q_styleoptiontab_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTab* self, QStyleOption* other ```
void q_styleoptiontab_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTab* self ```
void q_styleoptiontab_delete(void* self) {
    QStyleOptionTab_Delete((QStyleOptionTab*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontoolbar.html

/// q_styleoptiontoolbar_new constructs a new QStyleOptionToolBar object.
///
///
QStyleOptionToolBar* q_styleoptiontoolbar_new() {
    return QStyleOptionToolBar_new();
}

/// q_styleoptiontoolbar_new2 constructs a new QStyleOptionToolBar object.
///
/// ``` QStyleOptionToolBar* other ```
QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other) {
    return QStyleOptionToolBar_new2((QStyleOptionToolBar*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolBar* self, QWidget* w ```
void q_styleoptiontoolbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolBar* self, QStyleOption* other ```
void q_styleoptiontoolbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolBar* self ```
void q_styleoptiontoolbar_delete(void* self) {
    QStyleOptionToolBar_Delete((QStyleOptionToolBar*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionprogressbar.html

/// q_styleoptionprogressbar_new constructs a new QStyleOptionProgressBar object.
///
///
QStyleOptionProgressBar* q_styleoptionprogressbar_new() {
    return QStyleOptionProgressBar_new();
}

/// q_styleoptionprogressbar_new2 constructs a new QStyleOptionProgressBar object.
///
/// ``` QStyleOptionProgressBar* other ```
QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other) {
    return QStyleOptionProgressBar_new2((QStyleOptionProgressBar*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionProgressBar* self, QWidget* w ```
void q_styleoptionprogressbar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionProgressBar* self, QStyleOption* other ```
void q_styleoptionprogressbar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionProgressBar* self ```
void q_styleoptionprogressbar_delete(void* self) {
    QStyleOptionProgressBar_Delete((QStyleOptionProgressBar*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionmenuitem.html

/// q_styleoptionmenuitem_new constructs a new QStyleOptionMenuItem object.
///
///
QStyleOptionMenuItem* q_styleoptionmenuitem_new() {
    return QStyleOptionMenuItem_new();
}

/// q_styleoptionmenuitem_new2 constructs a new QStyleOptionMenuItem object.
///
/// ``` QStyleOptionMenuItem* other ```
QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other) {
    return QStyleOptionMenuItem_new2((QStyleOptionMenuItem*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionMenuItem* self, QWidget* w ```
void q_styleoptionmenuitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionMenuItem* self, QStyleOption* other ```
void q_styleoptionmenuitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionMenuItem* self ```
void q_styleoptionmenuitem_delete(void* self) {
    QStyleOptionMenuItem_Delete((QStyleOptionMenuItem*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiondockwidget.html

/// q_styleoptiondockwidget_new constructs a new QStyleOptionDockWidget object.
///
///
QStyleOptionDockWidget* q_styleoptiondockwidget_new() {
    return QStyleOptionDockWidget_new();
}

/// q_styleoptiondockwidget_new2 constructs a new QStyleOptionDockWidget object.
///
/// ``` QStyleOptionDockWidget* other ```
QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other) {
    return QStyleOptionDockWidget_new2((QStyleOptionDockWidget*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionDockWidget* self, QWidget* w ```
void q_styleoptiondockwidget_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionDockWidget* self, QStyleOption* other ```
void q_styleoptiondockwidget_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionDockWidget* self ```
void q_styleoptiondockwidget_delete(void* self) {
    QStyleOptionDockWidget_Delete((QStyleOptionDockWidget*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionviewitem.html

/// q_styleoptionviewitem_new constructs a new QStyleOptionViewItem object.
///
///
QStyleOptionViewItem* q_styleoptionviewitem_new() {
    return QStyleOptionViewItem_new();
}

/// q_styleoptionviewitem_new2 constructs a new QStyleOptionViewItem object.
///
/// ``` QStyleOptionViewItem* other ```
QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other) {
    return QStyleOptionViewItem_new2((QStyleOptionViewItem*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionViewItem* self, QWidget* w ```
void q_styleoptionviewitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionViewItem* self, QStyleOption* other ```
void q_styleoptionviewitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionViewItem* self ```
void q_styleoptionviewitem_delete(void* self) {
    QStyleOptionViewItem_Delete((QStyleOptionViewItem*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontoolbox.html

/// q_styleoptiontoolbox_new constructs a new QStyleOptionToolBox object.
///
///
QStyleOptionToolBox* q_styleoptiontoolbox_new() {
    return QStyleOptionToolBox_new();
}

/// q_styleoptiontoolbox_new2 constructs a new QStyleOptionToolBox object.
///
/// ``` QStyleOptionToolBox* other ```
QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other) {
    return QStyleOptionToolBox_new2((QStyleOptionToolBox*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolBox* self, QWidget* w ```
void q_styleoptiontoolbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolBox* self, QStyleOption* other ```
void q_styleoptiontoolbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolBox* self ```
void q_styleoptiontoolbox_delete(void* self) {
    QStyleOptionToolBox_Delete((QStyleOptionToolBox*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionrubberband.html

/// q_styleoptionrubberband_new constructs a new QStyleOptionRubberBand object.
///
///
QStyleOptionRubberBand* q_styleoptionrubberband_new() {
    return QStyleOptionRubberBand_new();
}

/// q_styleoptionrubberband_new2 constructs a new QStyleOptionRubberBand object.
///
/// ``` QStyleOptionRubberBand* other ```
QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other) {
    return QStyleOptionRubberBand_new2((QStyleOptionRubberBand*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionRubberBand* self, QWidget* w ```
void q_styleoptionrubberband_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionRubberBand* self, QStyleOption* other ```
void q_styleoptionrubberband_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionRubberBand* self ```
void q_styleoptionrubberband_delete(void* self) {
    QStyleOptionRubberBand_Delete((QStyleOptionRubberBand*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptioncomplex.html

/// q_styleoptioncomplex_new constructs a new QStyleOptionComplex object.
///
///
QStyleOptionComplex* q_styleoptioncomplex_new() {
    return QStyleOptionComplex_new();
}

/// q_styleoptioncomplex_new2 constructs a new QStyleOptionComplex object.
///
/// ``` QStyleOptionComplex* other ```
QStyleOptionComplex* q_styleoptioncomplex_new2(void* other) {
    return QStyleOptionComplex_new2((QStyleOptionComplex*)other);
}

/// q_styleoptioncomplex_new3 constructs a new QStyleOptionComplex object.
///
/// ``` int version ```
QStyleOptionComplex* q_styleoptioncomplex_new3(int version) {
    return QStyleOptionComplex_new3(version);
}

/// q_styleoptioncomplex_new4 constructs a new QStyleOptionComplex object.
///
/// ``` int version, int typeVal ```
QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal) {
    return QStyleOptionComplex_new4(version, typeVal);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionComplex* self, QWidget* w ```
void q_styleoptioncomplex_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionComplex* self, QStyleOption* other ```
void q_styleoptioncomplex_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionComplex* self ```
void q_styleoptioncomplex_delete(void* self) {
    QStyleOptionComplex_Delete((QStyleOptionComplex*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionslider.html

/// q_styleoptionslider_new constructs a new QStyleOptionSlider object.
///
///
QStyleOptionSlider* q_styleoptionslider_new() {
    return QStyleOptionSlider_new();
}

/// q_styleoptionslider_new2 constructs a new QStyleOptionSlider object.
///
/// ``` QStyleOptionSlider* other ```
QStyleOptionSlider* q_styleoptionslider_new2(void* other) {
    return QStyleOptionSlider_new2((QStyleOptionSlider*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSlider* self, QWidget* w ```
void q_styleoptionslider_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSlider* self, QStyleOption* other ```
void q_styleoptionslider_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSlider* self ```
void q_styleoptionslider_delete(void* self) {
    QStyleOptionSlider_Delete((QStyleOptionSlider*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionspinbox.html

/// q_styleoptionspinbox_new constructs a new QStyleOptionSpinBox object.
///
///
QStyleOptionSpinBox* q_styleoptionspinbox_new() {
    return QStyleOptionSpinBox_new();
}

/// q_styleoptionspinbox_new2 constructs a new QStyleOptionSpinBox object.
///
/// ``` QStyleOptionSpinBox* other ```
QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other) {
    return QStyleOptionSpinBox_new2((QStyleOptionSpinBox*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSpinBox* self, QWidget* w ```
void q_styleoptionspinbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSpinBox* self, QStyleOption* other ```
void q_styleoptionspinbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSpinBox* self ```
void q_styleoptionspinbox_delete(void* self) {
    QStyleOptionSpinBox_Delete((QStyleOptionSpinBox*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontoolbutton.html

/// q_styleoptiontoolbutton_new constructs a new QStyleOptionToolButton object.
///
///
QStyleOptionToolButton* q_styleoptiontoolbutton_new() {
    return QStyleOptionToolButton_new();
}

/// q_styleoptiontoolbutton_new2 constructs a new QStyleOptionToolButton object.
///
/// ``` QStyleOptionToolButton* other ```
QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other) {
    return QStyleOptionToolButton_new2((QStyleOptionToolButton*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionToolButton* self, QWidget* w ```
void q_styleoptiontoolbutton_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionToolButton* self, QStyleOption* other ```
void q_styleoptiontoolbutton_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionToolButton* self ```
void q_styleoptiontoolbutton_delete(void* self) {
    QStyleOptionToolButton_Delete((QStyleOptionToolButton*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptioncombobox.html

/// q_styleoptioncombobox_new constructs a new QStyleOptionComboBox object.
///
///
QStyleOptionComboBox* q_styleoptioncombobox_new() {
    return QStyleOptionComboBox_new();
}

/// q_styleoptioncombobox_new2 constructs a new QStyleOptionComboBox object.
///
/// ``` QStyleOptionComboBox* other ```
QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other) {
    return QStyleOptionComboBox_new2((QStyleOptionComboBox*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionComboBox* self, QWidget* w ```
void q_styleoptioncombobox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionComboBox* self, QStyleOption* other ```
void q_styleoptioncombobox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionComboBox* self ```
void q_styleoptioncombobox_delete(void* self) {
    QStyleOptionComboBox_Delete((QStyleOptionComboBox*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiontitlebar.html

/// q_styleoptiontitlebar_new constructs a new QStyleOptionTitleBar object.
///
///
QStyleOptionTitleBar* q_styleoptiontitlebar_new() {
    return QStyleOptionTitleBar_new();
}

/// q_styleoptiontitlebar_new2 constructs a new QStyleOptionTitleBar object.
///
/// ``` QStyleOptionTitleBar* other ```
QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other) {
    return QStyleOptionTitleBar_new2((QStyleOptionTitleBar*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionTitleBar* self, QWidget* w ```
void q_styleoptiontitlebar_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionTitleBar* self, QStyleOption* other ```
void q_styleoptiontitlebar_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionTitleBar* self ```
void q_styleoptiontitlebar_delete(void* self) {
    QStyleOptionTitleBar_Delete((QStyleOptionTitleBar*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiongroupbox.html

/// q_styleoptiongroupbox_new constructs a new QStyleOptionGroupBox object.
///
///
QStyleOptionGroupBox* q_styleoptiongroupbox_new() {
    return QStyleOptionGroupBox_new();
}

/// q_styleoptiongroupbox_new2 constructs a new QStyleOptionGroupBox object.
///
/// ``` QStyleOptionGroupBox* other ```
QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other) {
    return QStyleOptionGroupBox_new2((QStyleOptionGroupBox*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionGroupBox* self, QWidget* w ```
void q_styleoptiongroupbox_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionGroupBox* self, QStyleOption* other ```
void q_styleoptiongroupbox_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionGroupBox* self ```
void q_styleoptiongroupbox_delete(void* self) {
    QStyleOptionGroupBox_Delete((QStyleOptionGroupBox*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptionsizegrip.html

/// q_styleoptionsizegrip_new constructs a new QStyleOptionSizeGrip object.
///
///
QStyleOptionSizeGrip* q_styleoptionsizegrip_new() {
    return QStyleOptionSizeGrip_new();
}

/// q_styleoptionsizegrip_new2 constructs a new QStyleOptionSizeGrip object.
///
/// ``` QStyleOptionSizeGrip* other ```
QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other) {
    return QStyleOptionSizeGrip_new2((QStyleOptionSizeGrip*)other);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionSizeGrip* self, QWidget* w ```
void q_styleoptionsizegrip_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionSizeGrip* self, QStyleOption* other ```
void q_styleoptionsizegrip_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionSizeGrip* self ```
void q_styleoptionsizegrip_delete(void* self) {
    QStyleOptionSizeGrip_Delete((QStyleOptionSizeGrip*)(self));
}

/// https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html

/// q_styleoptiongraphicsitem_new constructs a new QStyleOptionGraphicsItem object.
///
///
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new() {
    return QStyleOptionGraphicsItem_new();
}

/// q_styleoptiongraphicsitem_new2 constructs a new QStyleOptionGraphicsItem object.
///
/// ``` QStyleOptionGraphicsItem* other ```
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other) {
    return QStyleOptionGraphicsItem_new2((QStyleOptionGraphicsItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoptiongraphicsitem.html#levelOfDetailFromTransform)
///
/// ``` QTransform* worldTransform ```
double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform) {
    return QStyleOptionGraphicsItem_LevelOfDetailFromTransform((QTransform*)worldTransform);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#initFrom)
///
/// ``` QStyleOptionGraphicsItem* self, QWidget* w ```
void q_styleoptiongraphicsitem_init_from(void* self, void* w) {
    QStyleOption_InitFrom((QStyleOption*)self, (QWidget*)w);
}

/// Inherited from QStyleOption
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyleoption.html#operator=)
///
/// ``` QStyleOptionGraphicsItem* self, QStyleOption* other ```
void q_styleoptiongraphicsitem_operator_assign(void* self, void* other) {
    QStyleOption_OperatorAssign((QStyleOption*)self, (QStyleOption*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleOptionGraphicsItem* self ```
void q_styleoptiongraphicsitem_delete(void* self) {
    QStyleOptionGraphicsItem_Delete((QStyleOptionGraphicsItem*)(self));
}

/// https://doc.qt.io/qt-6/qstylehintreturn.html

/// q_stylehintreturn_new constructs a new QStyleHintReturn object.
///
///
QStyleHintReturn* q_stylehintreturn_new() {
    return QStyleHintReturn_new();
}

/// q_stylehintreturn_new2 constructs a new QStyleHintReturn object.
///
/// ``` QStyleHintReturn* param1 ```
QStyleHintReturn* q_stylehintreturn_new2(void* param1) {
    return QStyleHintReturn_new2((QStyleHintReturn*)param1);
}

/// q_stylehintreturn_new3 constructs a new QStyleHintReturn object.
///
/// ``` int version ```
QStyleHintReturn* q_stylehintreturn_new3(int version) {
    return QStyleHintReturn_new3(version);
}

/// q_stylehintreturn_new4 constructs a new QStyleHintReturn object.
///
/// ``` int version, int typeVal ```
QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal) {
    return QStyleHintReturn_new4(version, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturn.html#operator=)
///
/// ``` QStyleHintReturn* self, QStyleHintReturn* param1 ```
void q_stylehintreturn_operator_assign(void* self, void* param1) {
    QStyleHintReturn_OperatorAssign((QStyleHintReturn*)self, (QStyleHintReturn*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturn* self ```
void q_stylehintreturn_delete(void* self) {
    QStyleHintReturn_Delete((QStyleHintReturn*)(self));
}

/// https://doc.qt.io/qt-6/qstylehintreturnmask.html

/// q_stylehintreturnmask_new constructs a new QStyleHintReturnMask object.
///
///
QStyleHintReturnMask* q_stylehintreturnmask_new() {
    return QStyleHintReturnMask_new();
}

/// q_stylehintreturnmask_new2 constructs a new QStyleHintReturnMask object.
///
/// ``` QStyleHintReturnMask* param1 ```
QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1) {
    return QStyleHintReturnMask_new2((QStyleHintReturnMask*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnmask.html#operator=)
///
/// ``` QStyleHintReturnMask* self, QStyleHintReturnMask* param1 ```
void q_stylehintreturnmask_operator_assign(void* self, void* param1) {
    QStyleHintReturnMask_OperatorAssign((QStyleHintReturnMask*)self, (QStyleHintReturnMask*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturnMask* self ```
void q_stylehintreturnmask_delete(void* self) {
    QStyleHintReturnMask_Delete((QStyleHintReturnMask*)(self));
}

/// https://doc.qt.io/qt-6/qstylehintreturnvariant.html

/// q_stylehintreturnvariant_new constructs a new QStyleHintReturnVariant object.
///
///
QStyleHintReturnVariant* q_stylehintreturnvariant_new() {
    return QStyleHintReturnVariant_new();
}

/// q_stylehintreturnvariant_new2 constructs a new QStyleHintReturnVariant object.
///
/// ``` QStyleHintReturnVariant* param1 ```
QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1) {
    return QStyleHintReturnVariant_new2((QStyleHintReturnVariant*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylehintreturnvariant.html#operator=)
///
/// ``` QStyleHintReturnVariant* self, QStyleHintReturnVariant* param1 ```
void q_stylehintreturnvariant_operator_assign(void* self, void* param1) {
    QStyleHintReturnVariant_OperatorAssign((QStyleHintReturnVariant*)self, (QStyleHintReturnVariant*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QStyleHintReturnVariant* self ```
void q_stylehintreturnvariant_delete(void* self) {
    QStyleHintReturnVariant_Delete((QStyleHintReturnVariant*)(self));
}