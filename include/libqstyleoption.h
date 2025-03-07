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

QStyleOption* q_styleoption_new();
QStyleOption* q_styleoption_new2(void* other);
QStyleOption* q_styleoption_new3(int version);
QStyleOption* q_styleoption_new4(int version, int typeVal);
void q_styleoption_init_from(void* self, void* w);
void q_styleoption_operator_assign(void* self, void* other);
void q_styleoption_delete(void* self);

QStyleOptionFocusRect* q_styleoptionfocusrect_new();
QStyleOptionFocusRect* q_styleoptionfocusrect_new2(void* other);
void q_styleoptionfocusrect_init_from(void* self, void* w);
void q_styleoptionfocusrect_operator_assign(void* self, void* other);
void q_styleoptionfocusrect_delete(void* self);

QStyleOptionFrame* q_styleoptionframe_new();
QStyleOptionFrame* q_styleoptionframe_new2(void* other);
void q_styleoptionframe_init_from(void* self, void* w);
void q_styleoptionframe_operator_assign(void* self, void* other);
void q_styleoptionframe_delete(void* self);

QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new();
QStyleOptionTabWidgetFrame* q_styleoptiontabwidgetframe_new2(void* other);
void q_styleoptiontabwidgetframe_init_from(void* self, void* w);
void q_styleoptiontabwidgetframe_operator_assign(void* self, void* other);
void q_styleoptiontabwidgetframe_delete(void* self);

QStyleOptionTabBarBase* q_styleoptiontabbarbase_new();
QStyleOptionTabBarBase* q_styleoptiontabbarbase_new2(void* other);
void q_styleoptiontabbarbase_init_from(void* self, void* w);
void q_styleoptiontabbarbase_operator_assign(void* self, void* other);
void q_styleoptiontabbarbase_delete(void* self);

QStyleOptionHeader* q_styleoptionheader_new();
QStyleOptionHeader* q_styleoptionheader_new2(void* other);
void q_styleoptionheader_init_from(void* self, void* w);
void q_styleoptionheader_operator_assign(void* self, void* other);
void q_styleoptionheader_delete(void* self);

QStyleOptionHeaderV2* q_styleoptionheaderv2_new();
QStyleOptionHeaderV2* q_styleoptionheaderv2_new2(void* other);
void q_styleoptionheaderv2_init_from(void* self, void* w);
void q_styleoptionheaderv2_operator_assign(void* self, void* other);
void q_styleoptionheaderv2_delete(void* self);

QStyleOptionButton* q_styleoptionbutton_new();
QStyleOptionButton* q_styleoptionbutton_new2(void* other);
void q_styleoptionbutton_init_from(void* self, void* w);
void q_styleoptionbutton_operator_assign(void* self, void* other);
void q_styleoptionbutton_delete(void* self);

QStyleOptionTab* q_styleoptiontab_new();
QStyleOptionTab* q_styleoptiontab_new2(void* other);
void q_styleoptiontab_init_from(void* self, void* w);
void q_styleoptiontab_operator_assign(void* self, void* other);
void q_styleoptiontab_delete(void* self);

QStyleOptionToolBar* q_styleoptiontoolbar_new();
QStyleOptionToolBar* q_styleoptiontoolbar_new2(void* other);
void q_styleoptiontoolbar_init_from(void* self, void* w);
void q_styleoptiontoolbar_operator_assign(void* self, void* other);
void q_styleoptiontoolbar_delete(void* self);

QStyleOptionProgressBar* q_styleoptionprogressbar_new();
QStyleOptionProgressBar* q_styleoptionprogressbar_new2(void* other);
void q_styleoptionprogressbar_init_from(void* self, void* w);
void q_styleoptionprogressbar_operator_assign(void* self, void* other);
void q_styleoptionprogressbar_delete(void* self);

QStyleOptionMenuItem* q_styleoptionmenuitem_new();
QStyleOptionMenuItem* q_styleoptionmenuitem_new2(void* other);
void q_styleoptionmenuitem_init_from(void* self, void* w);
void q_styleoptionmenuitem_operator_assign(void* self, void* other);
void q_styleoptionmenuitem_delete(void* self);

QStyleOptionDockWidget* q_styleoptiondockwidget_new();
QStyleOptionDockWidget* q_styleoptiondockwidget_new2(void* other);
void q_styleoptiondockwidget_init_from(void* self, void* w);
void q_styleoptiondockwidget_operator_assign(void* self, void* other);
void q_styleoptiondockwidget_delete(void* self);

QStyleOptionViewItem* q_styleoptionviewitem_new();
QStyleOptionViewItem* q_styleoptionviewitem_new2(void* other);
void q_styleoptionviewitem_init_from(void* self, void* w);
void q_styleoptionviewitem_operator_assign(void* self, void* other);
void q_styleoptionviewitem_delete(void* self);

QStyleOptionToolBox* q_styleoptiontoolbox_new();
QStyleOptionToolBox* q_styleoptiontoolbox_new2(void* other);
void q_styleoptiontoolbox_init_from(void* self, void* w);
void q_styleoptiontoolbox_operator_assign(void* self, void* other);
void q_styleoptiontoolbox_delete(void* self);

QStyleOptionRubberBand* q_styleoptionrubberband_new();
QStyleOptionRubberBand* q_styleoptionrubberband_new2(void* other);
void q_styleoptionrubberband_init_from(void* self, void* w);
void q_styleoptionrubberband_operator_assign(void* self, void* other);
void q_styleoptionrubberband_delete(void* self);

QStyleOptionComplex* q_styleoptioncomplex_new();
QStyleOptionComplex* q_styleoptioncomplex_new2(void* other);
QStyleOptionComplex* q_styleoptioncomplex_new3(int version);
QStyleOptionComplex* q_styleoptioncomplex_new4(int version, int typeVal);
void q_styleoptioncomplex_init_from(void* self, void* w);
void q_styleoptioncomplex_operator_assign(void* self, void* other);
void q_styleoptioncomplex_delete(void* self);

QStyleOptionSlider* q_styleoptionslider_new();
QStyleOptionSlider* q_styleoptionslider_new2(void* other);
void q_styleoptionslider_init_from(void* self, void* w);
void q_styleoptionslider_operator_assign(void* self, void* other);
void q_styleoptionslider_delete(void* self);

QStyleOptionSpinBox* q_styleoptionspinbox_new();
QStyleOptionSpinBox* q_styleoptionspinbox_new2(void* other);
void q_styleoptionspinbox_init_from(void* self, void* w);
void q_styleoptionspinbox_operator_assign(void* self, void* other);
void q_styleoptionspinbox_delete(void* self);

QStyleOptionToolButton* q_styleoptiontoolbutton_new();
QStyleOptionToolButton* q_styleoptiontoolbutton_new2(void* other);
void q_styleoptiontoolbutton_init_from(void* self, void* w);
void q_styleoptiontoolbutton_operator_assign(void* self, void* other);
void q_styleoptiontoolbutton_delete(void* self);

QStyleOptionComboBox* q_styleoptioncombobox_new();
QStyleOptionComboBox* q_styleoptioncombobox_new2(void* other);
void q_styleoptioncombobox_init_from(void* self, void* w);
void q_styleoptioncombobox_operator_assign(void* self, void* other);
void q_styleoptioncombobox_delete(void* self);

QStyleOptionTitleBar* q_styleoptiontitlebar_new();
QStyleOptionTitleBar* q_styleoptiontitlebar_new2(void* other);
void q_styleoptiontitlebar_init_from(void* self, void* w);
void q_styleoptiontitlebar_operator_assign(void* self, void* other);
void q_styleoptiontitlebar_delete(void* self);

QStyleOptionGroupBox* q_styleoptiongroupbox_new();
QStyleOptionGroupBox* q_styleoptiongroupbox_new2(void* other);
void q_styleoptiongroupbox_init_from(void* self, void* w);
void q_styleoptiongroupbox_operator_assign(void* self, void* other);
void q_styleoptiongroupbox_delete(void* self);

QStyleOptionSizeGrip* q_styleoptionsizegrip_new();
QStyleOptionSizeGrip* q_styleoptionsizegrip_new2(void* other);
void q_styleoptionsizegrip_init_from(void* self, void* w);
void q_styleoptionsizegrip_operator_assign(void* self, void* other);
void q_styleoptionsizegrip_delete(void* self);

QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new();
QStyleOptionGraphicsItem* q_styleoptiongraphicsitem_new2(void* other);
double q_styleoptiongraphicsitem_level_of_detail_from_transform(void* worldTransform);
void q_styleoptiongraphicsitem_init_from(void* self, void* w);
void q_styleoptiongraphicsitem_operator_assign(void* self, void* other);
void q_styleoptiongraphicsitem_delete(void* self);

QStyleHintReturn* q_stylehintreturn_new();
QStyleHintReturn* q_stylehintreturn_new2(void* param1);
QStyleHintReturn* q_stylehintreturn_new3(int version);
QStyleHintReturn* q_stylehintreturn_new4(int version, int typeVal);
void q_stylehintreturn_operator_assign(void* self, void* param1);
void q_stylehintreturn_delete(void* self);

QStyleHintReturnMask* q_stylehintreturnmask_new();
QStyleHintReturnMask* q_stylehintreturnmask_new2(void* param1);
void q_stylehintreturnmask_operator_assign(void* self, void* param1);
void q_stylehintreturnmask_delete(void* self);

QStyleHintReturnVariant* q_stylehintreturnvariant_new();
QStyleHintReturnVariant* q_stylehintreturnvariant_new2(void* param1);
void q_stylehintreturnvariant_operator_assign(void* self, void* param1);
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
