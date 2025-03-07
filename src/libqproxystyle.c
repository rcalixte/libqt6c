#include "libqanystringview.hpp"
#include "libqapplication.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcommonstyle.hpp"
#include "libqfontmetrics.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqproxystyle.hpp"
#include "libqproxystyle.h"

/// https://doc.qt.io/qt-6/qproxystyle.html

/// q_proxystyle_new constructs a new QProxyStyle object.
///
///
QProxyStyle* q_proxystyle_new() {
    return QProxyStyle_new();
}

/// q_proxystyle_new2 constructs a new QProxyStyle object.
///
/// ``` const char* key ```
QProxyStyle* q_proxystyle_new2(const char* key) {
    return QProxyStyle_new2(qstring(key));
}

/// q_proxystyle_new3 constructs a new QProxyStyle object.
///
/// ``` QStyle* style ```
QProxyStyle* q_proxystyle_new3(void* style) {
    return QProxyStyle_new3((QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProxyStyle* self ```
QMetaObject* q_proxystyle_meta_object(void* self) {
    return QProxyStyle_MetaObject((QProxyStyle*)self);
}

/// ``` QProxyStyle* self, const char* param1 ```
void* q_proxystyle_metacast(void* self, const char* param1) {
    return QProxyStyle_Metacast((QProxyStyle*)self, param1);
}

/// ``` QProxyStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_proxystyle_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProxyStyle_Metacall((QProxyStyle*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QMetaObject__Call, int, void*) ```
void q_proxystyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProxyStyle_OnMetacall((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_proxystyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProxyStyle_QBaseMetacall((QProxyStyle*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_proxystyle_tr(const char* s) {
    libqt_string _str = QProxyStyle_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#baseStyle)
///
/// ``` QProxyStyle* self ```
QStyle* q_proxystyle_base_style(void* self) {
    return QProxyStyle_BaseStyle((QProxyStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#setBaseStyle)
///
/// ``` QProxyStyle* self, QStyle* style ```
void q_proxystyle_set_base_style(void* self, void* style) {
    QProxyStyle_SetBaseStyle((QProxyStyle*)self, (QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawPrimitive)
///
/// ``` QProxyStyle* self, enum QStyle__PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget) {
    QProxyStyle_DrawPrimitive((QProxyStyle*)self, element, (QStyleOption*)option, (QPainter*)painter, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__PrimitiveElement, QStyleOption*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnDrawPrimitive((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__PrimitiveElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_primitive(void* self, int64_t element, void* option, void* painter, void* widget) {
    QProxyStyle_QBaseDrawPrimitive((QProxyStyle*)self, element, (QStyleOption*)option, (QPainter*)painter, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawControl)
///
/// ``` QProxyStyle* self, enum QStyle__ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_control(void* self, int64_t element, void* option, void* painter, void* widget) {
    QProxyStyle_DrawControl((QProxyStyle*)self, element, (QStyleOption*)option, (QPainter*)painter, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__ControlElement, QStyleOption*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnDrawControl((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ControlElement element, QStyleOption* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_control(void* self, int64_t element, void* option, void* painter, void* widget) {
    QProxyStyle_QBaseDrawControl((QProxyStyle*)self, element, (QStyleOption*)option, (QPainter*)painter, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawComplexControl)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget) {
    QProxyStyle_DrawComplexControl((QProxyStyle*)self, control, (QStyleOptionComplex*)option, (QPainter*)painter, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*) ```
void q_proxystyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnDrawComplexControl((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPainter* painter, QWidget* widget ```
void q_proxystyle_qbase_draw_complex_control(void* self, int64_t control, void* option, void* painter, void* widget) {
    QProxyStyle_QBaseDrawComplexControl((QProxyStyle*)self, control, (QStyleOptionComplex*)option, (QPainter*)painter, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemText)
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_proxystyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QProxyStyle_DrawItemText((QProxyStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, enum QPalette__ColorRole) ```
void q_proxystyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t)) {
    QProxyStyle_OnDrawItemText((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_proxystyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QProxyStyle_QBaseDrawItemText((QProxyStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#drawItemPixmap)
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_proxystyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QProxyStyle_DrawItemPixmap((QProxyStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPainter*, QRect*, int, QPixmap*) ```
void q_proxystyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*)) {
    QProxyStyle_OnDrawItemPixmap((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_proxystyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QProxyStyle_QBaseDrawItemPixmap((QProxyStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#sizeFromContents)
///
/// ``` QProxyStyle* self, enum QStyle__ContentsType typeVal, QStyleOption* option, QSize* size, QWidget* widget ```
QSize* q_proxystyle_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget) {
    return QProxyStyle_SizeFromContents((QProxyStyle*)self, typeVal, (QStyleOption*)option, (QSize*)size, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QSize* (*slot)(QProxyStyle*, enum QStyle__ContentsType, QStyleOption*, QSize*, QWidget*) ```
void q_proxystyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnSizeFromContents((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ContentsType typeVal, QStyleOption* option, QSize* size, QWidget* widget ```
QSize* q_proxystyle_qbase_size_from_contents(void* self, int64_t typeVal, void* option, void* size, void* widget) {
    return QProxyStyle_QBaseSizeFromContents((QProxyStyle*)self, typeVal, (QStyleOption*)option, (QSize*)size, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subElementRect)
///
/// ``` QProxyStyle* self, enum QStyle__SubElement element, QStyleOption* option, QWidget* widget ```
QRect* q_proxystyle_sub_element_rect(void* self, int64_t element, void* option, void* widget) {
    return QProxyStyle_SubElementRect((QProxyStyle*)self, element, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, enum QStyle__SubElement, QStyleOption*, QWidget*) ```
void q_proxystyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*)) {
    QProxyStyle_OnSubElementRect((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__SubElement element, QStyleOption* option, QWidget* widget ```
QRect* q_proxystyle_qbase_sub_element_rect(void* self, int64_t element, void* option, void* widget) {
    return QProxyStyle_QBaseSubElementRect((QProxyStyle*)self, element, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#subControlRect)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_proxystyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QProxyStyle_SubControlRect((QProxyStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, enum QStyle__SubControl, QWidget*) ```
void q_proxystyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*)) {
    QProxyStyle_OnSubControlRect((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_proxystyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QProxyStyle_QBaseSubControlRect((QProxyStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemTextRect)
///
/// ``` QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_proxystyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QProxyStyle_ItemTextRect((QProxyStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, QFontMetrics*, QRect*, int, bool, const char*) ```
void q_proxystyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*)) {
    QProxyStyle_OnItemTextRect((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_proxystyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QProxyStyle_QBaseItemTextRect((QProxyStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#itemPixmapRect)
///
/// ``` QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_proxystyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QProxyStyle_ItemPixmapRect((QProxyStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QRect* (*slot)(QProxyStyle*, QRect*, int, QPixmap*) ```
void q_proxystyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*)) {
    QProxyStyle_OnItemPixmapRect((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_proxystyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QProxyStyle_QBaseItemPixmapRect((QProxyStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#hitTestComplexControl)
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget ```
int64_t q_proxystyle_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget) {
    return QProxyStyle_HitTestComplexControl((QProxyStyle*)self, control, (QStyleOptionComplex*)option, (QPoint*)pos, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int64_t (*slot)(QProxyStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*) ```
void q_proxystyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnHitTestComplexControl((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__ComplexControl control, QStyleOptionComplex* option, QPoint* pos, QWidget* widget ```
int64_t q_proxystyle_qbase_hit_test_complex_control(void* self, int64_t control, void* option, void* pos, void* widget) {
    return QProxyStyle_QBaseHitTestComplexControl((QProxyStyle*)self, control, (QStyleOptionComplex*)option, (QPoint*)pos, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#styleHint)
///
/// ``` QProxyStyle* self, enum QStyle__StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_proxystyle_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData) {
    return QProxyStyle_StyleHint((QProxyStyle*)self, hint, (QStyleOption*)option, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QStyle__StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*) ```
void q_proxystyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QProxyStyle_OnStyleHint((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StyleHint hint, QStyleOption* option, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_proxystyle_qbase_style_hint(void* self, int64_t hint, void* option, void* widget, void* returnData) {
    return QProxyStyle_QBaseStyleHint((QProxyStyle*)self, hint, (QStyleOption*)option, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#pixelMetric)
///
/// ``` QProxyStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QProxyStyle_PixelMetric((QProxyStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QStyle__PixelMetric, QStyleOption*, QWidget*) ```
void q_proxystyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*)) {
    QProxyStyle_OnPixelMetric((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QProxyStyle_QBasePixelMetric((QProxyStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#layoutSpacing)
///
/// ``` QProxyStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QProxyStyle_LayoutSpacing((QProxyStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, enum QSizePolicy__ControlType, enum QSizePolicy__ControlType, enum Qt__Orientation, QStyleOption*, QWidget*) ```
void q_proxystyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*)) {
    QProxyStyle_OnLayoutSpacing((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QProxyStyle_QBaseLayoutSpacing((QProxyStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardIcon)
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_proxystyle_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QProxyStyle_StandardIcon((QProxyStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QIcon* (*slot)(QProxyStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_proxystyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*)) {
    QProxyStyle_OnStandardIcon((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_proxystyle_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QProxyStyle_QBaseStandardIcon((QProxyStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPixmap)
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_proxystyle_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QProxyStyle_StandardPixmap((QProxyStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPixmap* (*slot)(QProxyStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_proxystyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QProxyStyle_OnStandardPixmap((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_proxystyle_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QProxyStyle_QBaseStandardPixmap((QProxyStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#generatedIconPixmap)
///
/// ``` QProxyStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_proxystyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QProxyStyle_GeneratedIconPixmap((QProxyStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPixmap* (*slot)(QProxyStyle*, enum QIcon__Mode, QPixmap*, QStyleOption*) ```
void q_proxystyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QProxyStyle_OnGeneratedIconPixmap((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_proxystyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QProxyStyle_QBaseGeneratedIconPixmap((QProxyStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#standardPalette)
///
/// ``` QProxyStyle* self ```
QPalette* q_proxystyle_standard_palette(void* self) {
    return QProxyStyle_StandardPalette((QProxyStyle*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, QPalette* (*slot)() ```
void q_proxystyle_on_standard_palette(void* self, QPalette* (*slot)()) {
    QProxyStyle_OnStandardPalette((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self ```
QPalette* q_proxystyle_qbase_standard_palette(void* self) {
    return QProxyStyle_QBaseStandardPalette((QProxyStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_polish(void* self, void* widget) {
    QProxyStyle_Polish((QProxyStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QWidget*) ```
void q_proxystyle_on_polish(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnPolish((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_qbase_polish(void* self, void* widget) {
    QProxyStyle_QBasePolish((QProxyStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QPalette* pal ```
void q_proxystyle_polish_with_pal(void* self, void* pal) {
    QProxyStyle_PolishWithPal((QProxyStyle*)self, (QPalette*)pal);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QPalette*) ```
void q_proxystyle_on_polish_with_pal(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnPolishWithPal((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QPalette* pal ```
void q_proxystyle_qbase_polish_with_pal(void* self, void* pal) {
    QProxyStyle_QBasePolishWithPal((QProxyStyle*)self, (QPalette*)pal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#polish)
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_polish_with_app(void* self, void* app) {
    QProxyStyle_PolishWithApp((QProxyStyle*)self, (QApplication*)app);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QApplication*) ```
void q_proxystyle_on_polish_with_app(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnPolishWithApp((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_qbase_polish_with_app(void* self, void* app) {
    QProxyStyle_QBasePolishWithApp((QProxyStyle*)self, (QApplication*)app);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_unpolish(void* self, void* widget) {
    QProxyStyle_Unpolish((QProxyStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QWidget*) ```
void q_proxystyle_on_unpolish(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnUnpolish((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_qbase_unpolish(void* self, void* widget) {
    QProxyStyle_QBaseUnpolish((QProxyStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#unpolish)
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_unpolish_with_app(void* self, void* app) {
    QProxyStyle_UnpolishWithApp((QProxyStyle*)self, (QApplication*)app);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QApplication*) ```
void q_proxystyle_on_unpolish_with_app(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnUnpolishWithApp((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* app ```
void q_proxystyle_qbase_unpolish_with_app(void* self, void* app) {
    QProxyStyle_QBaseUnpolishWithApp((QProxyStyle*)self, (QApplication*)app);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qproxystyle.html#event)
///
/// ``` QProxyStyle* self, QEvent* e ```
bool q_proxystyle_event(void* self, void* e) {
    return QProxyStyle_Event((QProxyStyle*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QEvent*) ```
void q_proxystyle_on_event(void* self, bool (*slot)(void*, void*)) {
    QProxyStyle_OnEvent((QProxyStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProxyStyle* self, QEvent* e ```
bool q_proxystyle_qbase_event(void* self, void* e) {
    return QProxyStyle_QBaseEvent((QProxyStyle*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_proxystyle_tr2(const char* s, const char* c) {
    libqt_string _str = QProxyStyle_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_proxystyle_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProxyStyle_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QCommonStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_polish_with_widget(void* self, void* widget) {
    QCommonStyle_PolishWithWidget((QCommonStyle*)self, (QWidget*)widget);
}

/// Inherited from QCommonStyle
///
/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QWidget*) ```
void q_proxystyle_on_polish_with_widget(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnPolishWithWidget((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QCommonStyle
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QWidget* widget ```
void q_proxystyle_qbase_polish_with_widget(void* self, void* widget) {
    QCommonStyle_QBasePolishWithWidget((QCommonStyle*)self, (QWidget*)widget);
}

/// Inherited from QCommonStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// ``` QProxyStyle* self, QApplication* application ```
void q_proxystyle_unpolish_with_application(void* self, void* application) {
    QCommonStyle_UnpolishWithApplication((QCommonStyle*)self, (QApplication*)application);
}

/// Inherited from QCommonStyle
///
/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QApplication*) ```
void q_proxystyle_on_unpolish_with_application(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnUnpolishWithApplication((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QCommonStyle
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* application ```
void q_proxystyle_qbase_unpolish_with_application(void* self, void* application) {
    QCommonStyle_QBaseUnpolishWithApplication((QCommonStyle*)self, (QApplication*)application);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// ``` QProxyStyle* self ```
const char* q_proxystyle_name(void* self) {
    libqt_string _str = QStyle_Name((QStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QProxyStyle* self, QApplication* application ```
void q_proxystyle_polish_with_application(void* self, void* application) {
    QStyle_PolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QApplication*) ```
void q_proxystyle_on_polish_with_application(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithApplication((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QApplication* application ```
void q_proxystyle_qbase_polish_with_application(void* self, void* application) {
    QStyle_QBasePolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QProxyStyle* self, QPalette* palette ```
void q_proxystyle_polish_with_palette(void* self, void* palette) {
    QStyle_PolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPalette*) ```
void q_proxystyle_on_polish_with_palette(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithPalette((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QProxyStyle* self, QPalette* palette ```
void q_proxystyle_qbase_polish_with_palette(void* self, void* palette) {
    QStyle_QBasePolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QRect* logicalRect ```
QRect* q_proxystyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect) {
    return QStyle_VisualRect(direction, (QRect*)boundingRect, (QRect*)logicalRect);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos ```
QPoint* q_proxystyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos) {
    return QStyle_VisualPos(direction, (QRect*)boundingRect, (QPoint*)logicalPos);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space ```
int32_t q_proxystyle_slider_position_from_value(int min, int max, int val, int space) {
    return QStyle_SliderPositionFromValue(min, max, val, space);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space ```
int32_t q_proxystyle_slider_value_from_position(int min, int max, int pos, int space) {
    return QStyle_SliderValueFromPosition(min, max, pos, space);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// ``` enum Qt__LayoutDirection direction, int alignment ```
int64_t q_proxystyle_visual_alignment(int64_t direction, int64_t alignment) {
    return QStyle_VisualAlignment(direction, alignment);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// ``` enum Qt__LayoutDirection direction, int alignment, QSize* size, QRect* rectangle ```
QRect* q_proxystyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle) {
    return QStyle_AlignedRect(direction, alignment, (QSize*)size, (QRect*)rectangle);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation ```
int32_t q_proxystyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation) {
    return QStyle_CombinedLayoutSpacing((QStyle*)self, controls1, controls2, orientation);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// ``` QProxyStyle* self ```
QStyle* q_proxystyle_proxy(void* self) {
    return QStyle_Proxy((QStyle*)self);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space, bool upsideDown ```
int32_t q_proxystyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle_SliderPositionFromValue5(min, max, val, space, upsideDown);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space, bool upsideDown ```
int32_t q_proxystyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle_SliderValueFromPosition5(min, max, pos, space, upsideDown);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option ```
int32_t q_proxystyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option) {
    return QStyle_CombinedLayoutSpacing4((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QProxyStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_proxystyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget) {
    return QStyle_CombinedLayoutSpacing5((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProxyStyle* self ```
const char* q_proxystyle_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProxyStyle* self, const char* name ```
void q_proxystyle_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProxyStyle* self ```
bool q_proxystyle_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProxyStyle* self, bool b ```
bool q_proxystyle_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProxyStyle* self ```
QThread* q_proxystyle_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProxyStyle* self, QThread* thread ```
void q_proxystyle_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProxyStyle* self, int interval ```
int32_t q_proxystyle_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProxyStyle* self, int id ```
void q_proxystyle_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProxyStyle* self ```
libqt_list /* of QObject* */ q_proxystyle_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QProxyStyle* self, QObject* parent ```
void q_proxystyle_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProxyStyle* self, QObject* filterObj ```
void q_proxystyle_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProxyStyle* self, QObject* obj ```
void q_proxystyle_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_proxystyle_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProxyStyle* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_proxystyle_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_proxystyle_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_proxystyle_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProxyStyle* self, const char* name, QVariant* value ```
bool q_proxystyle_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProxyStyle* self, const char* name ```
QVariant* q_proxystyle_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProxyStyle* self ```
const char** q_proxystyle_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProxyStyle* self ```
QBindingStorage* q_proxystyle_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProxyStyle* self ```
QBindingStorage* q_proxystyle_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QProxyStyle* self, void (*slot)(QObject*) ```
void q_proxystyle_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProxyStyle* self, const char* classname ```
bool q_proxystyle_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProxyStyle* self ```
void q_proxystyle_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProxyStyle* self, int interval, enum Qt__TimerType timerType ```
int32_t q_proxystyle_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_proxystyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProxyStyle* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_proxystyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProxyStyle* self, QObject* param1 ```
void q_proxystyle_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QProxyStyle* self, void (*slot)(QObject*, QObject*) ```
void q_proxystyle_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QObject* watched, QEvent* event ```
bool q_proxystyle_event_filter(void* self, void* watched, void* event) {
    return QProxyStyle_EventFilter((QProxyStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QObject* watched, QEvent* event ```
bool q_proxystyle_qbase_event_filter(void* self, void* watched, void* event) {
    return QProxyStyle_QBaseEventFilter((QProxyStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QObject*, QEvent*) ```
void q_proxystyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProxyStyle_OnEventFilter((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QTimerEvent* event ```
void q_proxystyle_timer_event(void* self, void* event) {
    QProxyStyle_TimerEvent((QProxyStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QTimerEvent* event ```
void q_proxystyle_qbase_timer_event(void* self, void* event) {
    QProxyStyle_QBaseTimerEvent((QProxyStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QTimerEvent*) ```
void q_proxystyle_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnTimerEvent((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QChildEvent* event ```
void q_proxystyle_child_event(void* self, void* event) {
    QProxyStyle_ChildEvent((QProxyStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QChildEvent* event ```
void q_proxystyle_qbase_child_event(void* self, void* event) {
    QProxyStyle_QBaseChildEvent((QProxyStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QChildEvent*) ```
void q_proxystyle_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnChildEvent((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QEvent* event ```
void q_proxystyle_custom_event(void* self, void* event) {
    QProxyStyle_CustomEvent((QProxyStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QEvent* event ```
void q_proxystyle_qbase_custom_event(void* self, void* event) {
    QProxyStyle_QBaseCustomEvent((QProxyStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QEvent*) ```
void q_proxystyle_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnCustomEvent((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_connect_notify(void* self, void* signal) {
    QProxyStyle_ConnectNotify((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_qbase_connect_notify(void* self, void* signal) {
    QProxyStyle_QBaseConnectNotify((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnConnectNotify((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_disconnect_notify(void* self, void* signal) {
    QProxyStyle_DisconnectNotify((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
void q_proxystyle_qbase_disconnect_notify(void* self, void* signal) {
    QProxyStyle_QBaseDisconnectNotify((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, void (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProxyStyle_OnDisconnectNotify((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_sender(void* self) {
    return QProxyStyle_Sender((QProxyStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self ```
QObject* q_proxystyle_qbase_sender(void* self) {
    return QProxyStyle_QBaseSender((QProxyStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, QObject* (*slot)() ```
void q_proxystyle_on_sender(void* self, QObject* (*slot)()) {
    QProxyStyle_OnSender((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self ```
int32_t q_proxystyle_sender_signal_index(void* self) {
    return QProxyStyle_SenderSignalIndex((QProxyStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self ```
int32_t q_proxystyle_qbase_sender_signal_index(void* self) {
    return QProxyStyle_QBaseSenderSignalIndex((QProxyStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, int32_t (*slot)() ```
void q_proxystyle_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProxyStyle_OnSenderSignalIndex((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, const char* signal ```
int32_t q_proxystyle_receivers(void* self, const char* signal) {
    return QProxyStyle_Receivers((QProxyStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, const char* signal ```
int32_t q_proxystyle_qbase_receivers(void* self, const char* signal) {
    return QProxyStyle_QBaseReceivers((QProxyStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, int32_t (*slot)(QProxyStyle*, const char*) ```
void q_proxystyle_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProxyStyle_OnReceivers((QProxyStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
bool q_proxystyle_is_signal_connected(void* self, void* signal) {
    return QProxyStyle_IsSignalConnected((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProxyStyle* self, QMetaMethod* signal ```
bool q_proxystyle_qbase_is_signal_connected(void* self, void* signal) {
    return QProxyStyle_QBaseIsSignalConnected((QProxyStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProxyStyle* self, bool (*slot)(QProxyStyle*, QMetaMethod*) ```
void q_proxystyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProxyStyle_OnIsSignalConnected((QProxyStyle*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QProxyStyle* self ```
void q_proxystyle_delete(void* self) {
    QProxyStyle_Delete((QProxyStyle*)(self));
}