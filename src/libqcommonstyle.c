#include "libqanystringview.hpp"
#include "libqapplication.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
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
#include "libqcommonstyle.hpp"
#include "libqcommonstyle.h"

/// https://doc.qt.io/qt-6/qcommonstyle.html

/// q_commonstyle_new constructs a new QCommonStyle object.
///
///
QCommonStyle* q_commonstyle_new() {
    return QCommonStyle_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCommonStyle* self ```
QMetaObject* q_commonstyle_meta_object(void* self) {
    return QCommonStyle_MetaObject((QCommonStyle*)self);
}

/// ``` QCommonStyle* self, const char* param1 ```
void* q_commonstyle_metacast(void* self, const char* param1) {
    return QCommonStyle_Metacast((QCommonStyle*)self, param1);
}

/// ``` QCommonStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commonstyle_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCommonStyle_Metacall((QCommonStyle*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QMetaObject__Call, int, void*) ```
void q_commonstyle_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCommonStyle_OnMetacall((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_commonstyle_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCommonStyle_QBaseMetacall((QCommonStyle*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_commonstyle_tr(const char* s) {
    libqt_string _str = QCommonStyle_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawPrimitive)
///
/// ``` QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w) {
    QCommonStyle_DrawPrimitive((QCommonStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__PrimitiveElement, QStyleOption*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnDrawPrimitive((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w) {
    QCommonStyle_QBaseDrawPrimitive((QCommonStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawControl)
///
/// ``` QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QCommonStyle_DrawControl((QCommonStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__ControlElement, QStyleOption*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnDrawControl((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QCommonStyle_QBaseDrawControl((QCommonStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subElementRect)
///
/// ``` QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget ```
QRect* q_commonstyle_sub_element_rect(void* self, int64_t r, void* opt, void* widget) {
    return QCommonStyle_SubElementRect((QCommonStyle*)self, r, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, enum QStyle__SubElement, QStyleOption*, QWidget*) ```
void q_commonstyle_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*)) {
    QCommonStyle_OnSubElementRect((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__SubElement r, QStyleOption* opt, QWidget* widget ```
QRect* q_commonstyle_qbase_sub_element_rect(void* self, int64_t r, void* opt, void* widget) {
    return QCommonStyle_QBaseSubElementRect((QCommonStyle*)self, r, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#drawComplexControl)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w ```
void q_commonstyle_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w) {
    QCommonStyle_DrawComplexControl((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*) ```
void q_commonstyle_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnDrawComplexControl((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w ```
void q_commonstyle_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* w) {
    QCommonStyle_QBaseDrawComplexControl((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#hitTestComplexControl)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w ```
int64_t q_commonstyle_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w) {
    return QCommonStyle_HitTestComplexControl((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int64_t (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*) ```
void q_commonstyle_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnHitTestComplexControl((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w ```
int64_t q_commonstyle_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* w) {
    return QCommonStyle_QBaseHitTestComplexControl((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#subControlRect)
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w ```
QRect* q_commonstyle_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w) {
    return QCommonStyle_SubControlRect((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, enum QStyle__SubControl, QWidget*) ```
void q_commonstyle_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*)) {
    QCommonStyle_OnSubControlRect((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* w ```
QRect* q_commonstyle_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* w) {
    return QCommonStyle_QBaseSubControlRect((QCommonStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#sizeFromContents)
///
/// ``` QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget ```
QSize* q_commonstyle_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget) {
    return QCommonStyle_SizeFromContents((QCommonStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QSize* (*slot)(QCommonStyle*, enum QStyle__ContentsType, QStyleOption*, QSize*, QWidget*) ```
void q_commonstyle_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnSizeFromContents((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget ```
QSize* q_commonstyle_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* widget) {
    return QCommonStyle_QBaseSizeFromContents((QCommonStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#pixelMetric)
///
/// ``` QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget ```
int32_t q_commonstyle_pixel_metric(void* self, int64_t m, void* opt, void* widget) {
    return QCommonStyle_PixelMetric((QCommonStyle*)self, m, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QStyle__PixelMetric, QStyleOption*, QWidget*) ```
void q_commonstyle_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*)) {
    QCommonStyle_OnPixelMetric((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__PixelMetric m, QStyleOption* opt, QWidget* widget ```
int32_t q_commonstyle_qbase_pixel_metric(void* self, int64_t m, void* opt, void* widget) {
    return QCommonStyle_QBasePixelMetric((QCommonStyle*)self, m, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#styleHint)
///
/// ``` QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret ```
int32_t q_commonstyle_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret) {
    return QCommonStyle_StyleHint((QCommonStyle*)self, sh, (QStyleOption*)opt, (QWidget*)w, (QStyleHintReturn*)shret);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QStyle__StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*) ```
void q_commonstyle_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QCommonStyle_OnStyleHint((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StyleHint sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret ```
int32_t q_commonstyle_qbase_style_hint(void* self, int64_t sh, void* opt, void* w, void* shret) {
    return QCommonStyle_QBaseStyleHint((QCommonStyle*)self, sh, (QStyleOption*)opt, (QWidget*)w, (QStyleHintReturn*)shret);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardIcon)
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget ```
QIcon* q_commonstyle_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget) {
    return QCommonStyle_StandardIcon((QCommonStyle*)self, standardIcon, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QIcon* (*slot)(QCommonStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_commonstyle_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*)) {
    QCommonStyle_OnStandardIcon((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* opt, QWidget* widget ```
QIcon* q_commonstyle_qbase_standard_icon(void* self, int64_t standardIcon, void* opt, void* widget) {
    return QCommonStyle_QBaseStandardIcon((QCommonStyle*)self, standardIcon, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#standardPixmap)
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget ```
QPixmap* q_commonstyle_standard_pixmap(void* self, int64_t sp, void* opt, void* widget) {
    return QCommonStyle_StandardPixmap((QCommonStyle*)self, sp, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QPixmap* (*slot)(QCommonStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_commonstyle_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QCommonStyle_OnStandardPixmap((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QStyle__StandardPixmap sp, QStyleOption* opt, QWidget* widget ```
QPixmap* q_commonstyle_qbase_standard_pixmap(void* self, int64_t sp, void* opt, void* widget) {
    return QCommonStyle_QBaseStandardPixmap((QCommonStyle*)self, sp, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#generatedIconPixmap)
///
/// ``` QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_commonstyle_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QCommonStyle_GeneratedIconPixmap((QCommonStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, QPixmap* (*slot)(QCommonStyle*, enum QIcon__Mode, QPixmap*, QStyleOption*) ```
void q_commonstyle_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QCommonStyle_OnGeneratedIconPixmap((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_commonstyle_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QCommonStyle_QBaseGeneratedIconPixmap((QCommonStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#layoutSpacing)
///
/// ``` QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QCommonStyle_LayoutSpacing((QCommonStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, enum QSizePolicy__ControlType, enum QSizePolicy__ControlType, enum Qt__Orientation, QStyleOption*, QWidget*) ```
void q_commonstyle_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*)) {
    QCommonStyle_OnLayoutSpacing((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QCommonStyle_QBaseLayoutSpacing((QCommonStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QPalette* param1 ```
void q_commonstyle_polish(void* self, void* param1) {
    QCommonStyle_Polish((QCommonStyle*)self, (QPalette*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPalette*) ```
void q_commonstyle_on_polish(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnPolish((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, QPalette* param1 ```
void q_commonstyle_qbase_polish(void* self, void* param1) {
    QCommonStyle_QBasePolish((QCommonStyle*)self, (QPalette*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QApplication* app ```
void q_commonstyle_polish_with_app(void* self, void* app) {
    QCommonStyle_PolishWithApp((QCommonStyle*)self, (QApplication*)app);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QApplication*) ```
void q_commonstyle_on_polish_with_app(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnPolishWithApp((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* app ```
void q_commonstyle_qbase_polish_with_app(void* self, void* app) {
    QCommonStyle_QBasePolishWithApp((QCommonStyle*)self, (QApplication*)app);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#polish)
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_polish_with_widget(void* self, void* widget) {
    QCommonStyle_PolishWithWidget((QCommonStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QWidget*) ```
void q_commonstyle_on_polish_with_widget(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnPolishWithWidget((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_qbase_polish_with_widget(void* self, void* widget) {
    QCommonStyle_QBasePolishWithWidget((QCommonStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_unpolish(void* self, void* widget) {
    QCommonStyle_Unpolish((QCommonStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QWidget*) ```
void q_commonstyle_on_unpolish(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnUnpolish((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, QWidget* widget ```
void q_commonstyle_qbase_unpolish(void* self, void* widget) {
    QCommonStyle_QBaseUnpolish((QCommonStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcommonstyle.html#unpolish)
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_unpolish_with_application(void* self, void* application) {
    QCommonStyle_UnpolishWithApplication((QCommonStyle*)self, (QApplication*)application);
}

/// Allows for overriding the related default method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QApplication*) ```
void q_commonstyle_on_unpolish_with_application(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnUnpolishWithApplication((QCommonStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_qbase_unpolish_with_application(void* self, void* application) {
    QCommonStyle_QBaseUnpolishWithApplication((QCommonStyle*)self, (QApplication*)application);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_commonstyle_tr2(const char* s, const char* c) {
    libqt_string _str = QCommonStyle_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_commonstyle_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCommonStyle_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// ``` QCommonStyle* self ```
const char* q_commonstyle_name(void* self) {
    libqt_string _str = QStyle_Name((QStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_polish_with_application(void* self, void* application) {
    QStyle_PolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QApplication*) ```
void q_commonstyle_on_polish_with_application(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithApplication((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QCommonStyle* self, QApplication* application ```
void q_commonstyle_qbase_polish_with_application(void* self, void* application) {
    QStyle_QBasePolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QCommonStyle* self, QPalette* palette ```
void q_commonstyle_polish_with_palette(void* self, void* palette) {
    QStyle_PolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// Inherited from QStyle
///
/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPalette*) ```
void q_commonstyle_on_polish_with_palette(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithPalette((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// Base class method implementation
///
/// ``` QCommonStyle* self, QPalette* palette ```
void q_commonstyle_qbase_polish_with_palette(void* self, void* palette) {
    QStyle_QBasePolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QRect* logicalRect ```
QRect* q_commonstyle_visual_rect(int64_t direction, void* boundingRect, void* logicalRect) {
    return QStyle_VisualRect(direction, (QRect*)boundingRect, (QRect*)logicalRect);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos ```
QPoint* q_commonstyle_visual_pos(int64_t direction, void* boundingRect, void* logicalPos) {
    return QStyle_VisualPos(direction, (QRect*)boundingRect, (QPoint*)logicalPos);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space ```
int32_t q_commonstyle_slider_position_from_value(int min, int max, int val, int space) {
    return QStyle_SliderPositionFromValue(min, max, val, space);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space ```
int32_t q_commonstyle_slider_value_from_position(int min, int max, int pos, int space) {
    return QStyle_SliderValueFromPosition(min, max, pos, space);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// ``` enum Qt__LayoutDirection direction, int alignment ```
int64_t q_commonstyle_visual_alignment(int64_t direction, int64_t alignment) {
    return QStyle_VisualAlignment(direction, alignment);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// ``` enum Qt__LayoutDirection direction, int alignment, QSize* size, QRect* rectangle ```
QRect* q_commonstyle_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle) {
    return QStyle_AlignedRect(direction, alignment, (QSize*)size, (QRect*)rectangle);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation ```
int32_t q_commonstyle_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation) {
    return QStyle_CombinedLayoutSpacing((QStyle*)self, controls1, controls2, orientation);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// ``` QCommonStyle* self ```
QStyle* q_commonstyle_proxy(void* self) {
    return QStyle_Proxy((QStyle*)self);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space, bool upsideDown ```
int32_t q_commonstyle_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle_SliderPositionFromValue5(min, max, val, space, upsideDown);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space, bool upsideDown ```
int32_t q_commonstyle_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle_SliderValueFromPosition5(min, max, pos, space, upsideDown);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option ```
int32_t q_commonstyle_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option) {
    return QStyle_CombinedLayoutSpacing4((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QCommonStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_commonstyle_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget) {
    return QStyle_CombinedLayoutSpacing5((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCommonStyle* self ```
const char* q_commonstyle_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCommonStyle* self, const char* name ```
void q_commonstyle_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCommonStyle* self ```
bool q_commonstyle_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCommonStyle* self, bool b ```
bool q_commonstyle_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCommonStyle* self ```
QThread* q_commonstyle_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCommonStyle* self, QThread* thread ```
void q_commonstyle_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommonStyle* self, int interval ```
int32_t q_commonstyle_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCommonStyle* self, int id ```
void q_commonstyle_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCommonStyle* self ```
libqt_list /* of QObject* */ q_commonstyle_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCommonStyle* self, QObject* parent ```
void q_commonstyle_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCommonStyle* self, QObject* filterObj ```
void q_commonstyle_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCommonStyle* self, QObject* obj ```
void q_commonstyle_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_commonstyle_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommonStyle* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_commonstyle_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_commonstyle_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_commonstyle_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCommonStyle* self, const char* name, QVariant* value ```
bool q_commonstyle_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCommonStyle* self, const char* name ```
QVariant* q_commonstyle_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCommonStyle* self ```
const char** q_commonstyle_dynamic_property_names(void* self) {
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
/// ``` QCommonStyle* self ```
QBindingStorage* q_commonstyle_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCommonStyle* self ```
QBindingStorage* q_commonstyle_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCommonStyle* self, void (*slot)(QObject*) ```
void q_commonstyle_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCommonStyle* self, const char* classname ```
bool q_commonstyle_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCommonStyle* self ```
void q_commonstyle_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCommonStyle* self, int interval, enum Qt__TimerType timerType ```
int32_t q_commonstyle_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commonstyle_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCommonStyle* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_commonstyle_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCommonStyle* self, QObject* param1 ```
void q_commonstyle_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCommonStyle* self, void (*slot)(QObject*, QObject*) ```
void q_commonstyle_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_commonstyle_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QCommonStyle_ItemTextRect((QCommonStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_commonstyle_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QCommonStyle_QBaseItemTextRect((QCommonStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, QFontMetrics*, QRect*, int, bool, const char*) ```
void q_commonstyle_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*)) {
    QCommonStyle_OnItemTextRect((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_commonstyle_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QCommonStyle_ItemPixmapRect((QCommonStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_commonstyle_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QCommonStyle_QBaseItemPixmapRect((QCommonStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QRect* (*slot)(QCommonStyle*, QRect*, int, QPixmap*) ```
void q_commonstyle_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*)) {
    QCommonStyle_OnItemPixmapRect((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_commonstyle_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QCommonStyle_DrawItemText((QCommonStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_commonstyle_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QCommonStyle_QBaseDrawItemText((QCommonStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, enum QPalette__ColorRole) ```
void q_commonstyle_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t)) {
    QCommonStyle_OnDrawItemText((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_commonstyle_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QCommonStyle_DrawItemPixmap((QCommonStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_commonstyle_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QCommonStyle_QBaseDrawItemPixmap((QCommonStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QPainter*, QRect*, int, QPixmap*) ```
void q_commonstyle_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*)) {
    QCommonStyle_OnDrawItemPixmap((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QStyle
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
QPalette* q_commonstyle_standard_palette(void* self) {
    return QCommonStyle_StandardPalette((QCommonStyle*)self);
}

/// Inherited from QStyle
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
QPalette* q_commonstyle_qbase_standard_palette(void* self) {
    return QCommonStyle_QBaseStandardPalette((QCommonStyle*)self);
}

/// Inherited from QStyle
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QPalette* (*slot)() ```
void q_commonstyle_on_standard_palette(void* self, QPalette* (*slot)()) {
    QCommonStyle_OnStandardPalette((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
bool q_commonstyle_event(void* self, void* event) {
    return QCommonStyle_Event((QCommonStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
bool q_commonstyle_qbase_event(void* self, void* event) {
    return QCommonStyle_QBaseEvent((QCommonStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QEvent*) ```
void q_commonstyle_on_event(void* self, bool (*slot)(void*, void*)) {
    QCommonStyle_OnEvent((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QObject* watched, QEvent* event ```
bool q_commonstyle_event_filter(void* self, void* watched, void* event) {
    return QCommonStyle_EventFilter((QCommonStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QObject* watched, QEvent* event ```
bool q_commonstyle_qbase_event_filter(void* self, void* watched, void* event) {
    return QCommonStyle_QBaseEventFilter((QCommonStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QObject*, QEvent*) ```
void q_commonstyle_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCommonStyle_OnEventFilter((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QTimerEvent* event ```
void q_commonstyle_timer_event(void* self, void* event) {
    QCommonStyle_TimerEvent((QCommonStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QTimerEvent* event ```
void q_commonstyle_qbase_timer_event(void* self, void* event) {
    QCommonStyle_QBaseTimerEvent((QCommonStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QTimerEvent*) ```
void q_commonstyle_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnTimerEvent((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QChildEvent* event ```
void q_commonstyle_child_event(void* self, void* event) {
    QCommonStyle_ChildEvent((QCommonStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QChildEvent* event ```
void q_commonstyle_qbase_child_event(void* self, void* event) {
    QCommonStyle_QBaseChildEvent((QCommonStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QChildEvent*) ```
void q_commonstyle_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnChildEvent((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
void q_commonstyle_custom_event(void* self, void* event) {
    QCommonStyle_CustomEvent((QCommonStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QEvent* event ```
void q_commonstyle_qbase_custom_event(void* self, void* event) {
    QCommonStyle_QBaseCustomEvent((QCommonStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QEvent*) ```
void q_commonstyle_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnCustomEvent((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_connect_notify(void* self, void* signal) {
    QCommonStyle_ConnectNotify((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_qbase_connect_notify(void* self, void* signal) {
    QCommonStyle_QBaseConnectNotify((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnConnectNotify((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_disconnect_notify(void* self, void* signal) {
    QCommonStyle_DisconnectNotify((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
void q_commonstyle_qbase_disconnect_notify(void* self, void* signal) {
    QCommonStyle_QBaseDisconnectNotify((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, void (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCommonStyle_OnDisconnectNotify((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_sender(void* self) {
    return QCommonStyle_Sender((QCommonStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
QObject* q_commonstyle_qbase_sender(void* self) {
    return QCommonStyle_QBaseSender((QCommonStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, QObject* (*slot)() ```
void q_commonstyle_on_sender(void* self, QObject* (*slot)()) {
    QCommonStyle_OnSender((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self ```
int32_t q_commonstyle_sender_signal_index(void* self) {
    return QCommonStyle_SenderSignalIndex((QCommonStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self ```
int32_t q_commonstyle_qbase_sender_signal_index(void* self) {
    return QCommonStyle_QBaseSenderSignalIndex((QCommonStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, int32_t (*slot)() ```
void q_commonstyle_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCommonStyle_OnSenderSignalIndex((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, const char* signal ```
int32_t q_commonstyle_receivers(void* self, const char* signal) {
    return QCommonStyle_Receivers((QCommonStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, const char* signal ```
int32_t q_commonstyle_qbase_receivers(void* self, const char* signal) {
    return QCommonStyle_QBaseReceivers((QCommonStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, int32_t (*slot)(QCommonStyle*, const char*) ```
void q_commonstyle_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCommonStyle_OnReceivers((QCommonStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
bool q_commonstyle_is_signal_connected(void* self, void* signal) {
    return QCommonStyle_IsSignalConnected((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCommonStyle* self, QMetaMethod* signal ```
bool q_commonstyle_qbase_is_signal_connected(void* self, void* signal) {
    return QCommonStyle_QBaseIsSignalConnected((QCommonStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCommonStyle* self, bool (*slot)(QCommonStyle*, QMetaMethod*) ```
void q_commonstyle_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCommonStyle_OnIsSignalConnected((QCommonStyle*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCommonStyle* self ```
void q_commonstyle_delete(void* self) {
    QCommonStyle_Delete((QCommonStyle*)(self));
}