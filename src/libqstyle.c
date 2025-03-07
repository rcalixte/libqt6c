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
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqstyle.hpp"
#include "libqstyle.h"

/// https://doc.qt.io/qt-6/qstyle.html

/// q_style_new constructs a new QStyle object.
///
///
QStyle* q_style_new() {
    return QStyle_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStyle* self ```
QMetaObject* q_style_meta_object(void* self) {
    return QStyle_MetaObject((QStyle*)self);
}

/// ``` QStyle* self, const char* param1 ```
void* q_style_metacast(void* self, const char* param1) {
    return QStyle_Metacast((QStyle*)self, param1);
}

/// ``` QStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_style_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyle_Metacall((QStyle*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, int32_t (*slot)(QStyle*, enum QMetaObject__Call, int, void*) ```
void q_style_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStyle_OnMetacall((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_style_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStyle_QBaseMetacall((QStyle*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_style_tr(const char* s) {
    libqt_string _str = QStyle_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#name)
///
/// ``` QStyle* self ```
const char* q_style_name(void* self) {
    libqt_string _str = QStyle_Name((QStyle*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QStyle* self, QWidget* widget ```
void q_style_polish(void* self, void* widget) {
    QStyle_Polish((QStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QWidget*) ```
void q_style_on_polish(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolish((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QWidget* widget ```
void q_style_qbase_polish(void* self, void* widget) {
    QStyle_QBasePolish((QStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// ``` QStyle* self, QWidget* widget ```
void q_style_unpolish(void* self, void* widget) {
    QStyle_Unpolish((QStyle*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QWidget*) ```
void q_style_on_unpolish(void* self, void (*slot)(void*, void*)) {
    QStyle_OnUnpolish((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QWidget* widget ```
void q_style_qbase_unpolish(void* self, void* widget) {
    QStyle_QBaseUnpolish((QStyle*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QStyle* self, QApplication* application ```
void q_style_polish_with_application(void* self, void* application) {
    QStyle_PolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QApplication*) ```
void q_style_on_polish_with_application(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithApplication((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QApplication* application ```
void q_style_qbase_polish_with_application(void* self, void* application) {
    QStyle_QBasePolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#unpolish)
///
/// ``` QStyle* self, QApplication* application ```
void q_style_unpolish_with_application(void* self, void* application) {
    QStyle_UnpolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QApplication*) ```
void q_style_on_unpolish_with_application(void* self, void (*slot)(void*, void*)) {
    QStyle_OnUnpolishWithApplication((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QApplication* application ```
void q_style_qbase_unpolish_with_application(void* self, void* application) {
    QStyle_QBaseUnpolishWithApplication((QStyle*)self, (QApplication*)application);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#polish)
///
/// ``` QStyle* self, QPalette* palette ```
void q_style_polish_with_palette(void* self, void* palette) {
    QStyle_PolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPalette*) ```
void q_style_on_polish_with_palette(void* self, void (*slot)(void*, void*)) {
    QStyle_OnPolishWithPalette((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QPalette* palette ```
void q_style_qbase_polish_with_palette(void* self, void* palette) {
    QStyle_QBasePolishWithPalette((QStyle*)self, (QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemTextRect)
///
/// ``` QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_style_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QStyle_ItemTextRect((QStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QRect* (*slot)(QStyle*, QFontMetrics*, QRect*, int, bool, const char*) ```
void q_style_on_item_text_rect(void* self, QRect* (*slot)(void*, void*, void*, int, bool, const char*)) {
    QStyle_OnItemTextRect((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QFontMetrics* fm, QRect* r, int flags, bool enabled, const char* text ```
QRect* q_style_qbase_item_text_rect(void* self, void* fm, void* r, int flags, bool enabled, const char* text) {
    return QStyle_QBaseItemTextRect((QStyle*)self, (QFontMetrics*)fm, (QRect*)r, flags, enabled, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#itemPixmapRect)
///
/// ``` QStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_style_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QStyle_ItemPixmapRect((QStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QRect* (*slot)(QStyle*, QRect*, int, QPixmap*) ```
void q_style_on_item_pixmap_rect(void* self, QRect* (*slot)(void*, void*, int, void*)) {
    QStyle_OnItemPixmapRect((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QRect* r, int flags, QPixmap* pixmap ```
QRect* q_style_qbase_item_pixmap_rect(void* self, void* r, int flags, void* pixmap) {
    return QStyle_QBaseItemPixmapRect((QStyle*)self, (QRect*)r, flags, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemText)
///
/// ``` QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_style_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QStyle_DrawItemText((QStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, enum QPalette__ColorRole) ```
void q_style_on_draw_item_text(void* self, void (*slot)(void*, void*, void*, int, void*, bool, const char*, int64_t)) {
    QStyle_OnDrawItemText((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QPainter* painter, QRect* rect, int flags, QPalette* pal, bool enabled, const char* text, enum QPalette__ColorRole textRole ```
void q_style_qbase_draw_item_text(void* self, void* painter, void* rect, int flags, void* pal, bool enabled, const char* text, int64_t textRole) {
    QStyle_QBaseDrawItemText((QStyle*)self, (QPainter*)painter, (QRect*)rect, flags, (QPalette*)pal, enabled, qstring(text), textRole);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawItemPixmap)
///
/// ``` QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_style_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QStyle_DrawItemPixmap((QStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QPainter*, QRect*, int, QPixmap*) ```
void q_style_on_draw_item_pixmap(void* self, void (*slot)(void*, void*, void*, int, void*)) {
    QStyle_OnDrawItemPixmap((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, QPainter* painter, QRect* rect, int alignment, QPixmap* pixmap ```
void q_style_qbase_draw_item_pixmap(void* self, void* painter, void* rect, int alignment, void* pixmap) {
    QStyle_QBaseDrawItemPixmap((QStyle*)self, (QPainter*)painter, (QRect*)rect, alignment, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPalette)
///
/// ``` QStyle* self ```
QPalette* q_style_standard_palette(void* self) {
    return QStyle_StandardPalette((QStyle*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QPalette* (*slot)() ```
void q_style_on_standard_palette(void* self, QPalette* (*slot)()) {
    QStyle_OnStandardPalette((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self ```
QPalette* q_style_qbase_standard_palette(void* self) {
    return QStyle_QBaseStandardPalette((QStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawPrimitive)
///
/// ``` QStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_style_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w) {
    QStyle_DrawPrimitive((QStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, enum QStyle__PrimitiveElement, QStyleOption*, QPainter*, QWidget*) ```
void q_style_on_draw_primitive(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnDrawPrimitive((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__PrimitiveElement pe, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_style_qbase_draw_primitive(void* self, int64_t pe, void* opt, void* p, void* w) {
    QStyle_QBaseDrawPrimitive((QStyle*)self, pe, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawControl)
///
/// ``` QStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_style_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QStyle_DrawControl((QStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, enum QStyle__ControlElement, QStyleOption*, QPainter*, QWidget*) ```
void q_style_on_draw_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnDrawControl((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__ControlElement element, QStyleOption* opt, QPainter* p, QWidget* w ```
void q_style_qbase_draw_control(void* self, int64_t element, void* opt, void* p, void* w) {
    QStyle_QBaseDrawControl((QStyle*)self, element, (QStyleOption*)opt, (QPainter*)p, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subElementRect)
///
/// ``` QStyle* self, enum QStyle__SubElement subElement, QStyleOption* option, QWidget* widget ```
QRect* q_style_sub_element_rect(void* self, int64_t subElement, void* option, void* widget) {
    return QStyle_SubElementRect((QStyle*)self, subElement, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QRect* (*slot)(QStyle*, enum QStyle__SubElement, QStyleOption*, QWidget*) ```
void q_style_on_sub_element_rect(void* self, QRect* (*slot)(void*, int64_t, void*, void*)) {
    QStyle_OnSubElementRect((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__SubElement subElement, QStyleOption* option, QWidget* widget ```
QRect* q_style_qbase_sub_element_rect(void* self, int64_t subElement, void* option, void* widget) {
    return QStyle_QBaseSubElementRect((QStyle*)self, subElement, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#drawComplexControl)
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget ```
void q_style_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget) {
    QStyle_DrawComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, void (*slot)(QStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPainter*, QWidget*) ```
void q_style_on_draw_complex_control(void* self, void (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnDrawComplexControl((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPainter* p, QWidget* widget ```
void q_style_qbase_draw_complex_control(void* self, int64_t cc, void* opt, void* p, void* widget) {
    QStyle_QBaseDrawComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPainter*)p, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#hitTestComplexControl)
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget ```
int64_t q_style_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget) {
    return QStyle_HitTestComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, int64_t (*slot)(QStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, QPoint*, QWidget*) ```
void q_style_on_hit_test_complex_control(void* self, int64_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnHitTestComplexControl((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* widget ```
int64_t q_style_qbase_hit_test_complex_control(void* self, int64_t cc, void* opt, void* pt, void* widget) {
    return QStyle_QBaseHitTestComplexControl((QStyle*)self, cc, (QStyleOptionComplex*)opt, (QPoint*)pt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#subControlRect)
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_style_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QStyle_SubControlRect((QStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QRect* (*slot)(QStyle*, enum QStyle__ComplexControl, QStyleOptionComplex*, enum QStyle__SubControl, QWidget*) ```
void q_style_on_sub_control_rect(void* self, QRect* (*slot)(void*, int64_t, void*, int64_t, void*)) {
    QStyle_OnSubControlRect((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__ComplexControl cc, QStyleOptionComplex* opt, enum QStyle__SubControl sc, QWidget* widget ```
QRect* q_style_qbase_sub_control_rect(void* self, int64_t cc, void* opt, int64_t sc, void* widget) {
    return QStyle_QBaseSubControlRect((QStyle*)self, cc, (QStyleOptionComplex*)opt, sc, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#pixelMetric)
///
/// ``` QStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_style_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QStyle_PixelMetric((QStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, int32_t (*slot)(QStyle*, enum QStyle__PixelMetric, QStyleOption*, QWidget*) ```
void q_style_on_pixel_metric(void* self, int32_t (*slot)(void*, int64_t, void*, void*)) {
    QStyle_OnPixelMetric((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__PixelMetric metric, QStyleOption* option, QWidget* widget ```
int32_t q_style_qbase_pixel_metric(void* self, int64_t metric, void* option, void* widget) {
    return QStyle_QBasePixelMetric((QStyle*)self, metric, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sizeFromContents)
///
/// ``` QStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* w ```
QSize* q_style_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w) {
    return QStyle_SizeFromContents((QStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)w);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QSize* (*slot)(QStyle*, enum QStyle__ContentsType, QStyleOption*, QSize*, QWidget*) ```
void q_style_on_size_from_contents(void* self, QSize* (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnSizeFromContents((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__ContentsType ct, QStyleOption* opt, QSize* contentsSize, QWidget* w ```
QSize* q_style_qbase_size_from_contents(void* self, int64_t ct, void* opt, void* contentsSize, void* w) {
    return QStyle_QBaseSizeFromContents((QStyle*)self, ct, (QStyleOption*)opt, (QSize*)contentsSize, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#styleHint)
///
/// ``` QStyle* self, enum QStyle__StyleHint stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_style_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData) {
    return QStyle_StyleHint((QStyle*)self, stylehint, (QStyleOption*)opt, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, int32_t (*slot)(QStyle*, enum QStyle__StyleHint, QStyleOption*, QWidget*, QStyleHintReturn*) ```
void q_style_on_style_hint(void* self, int32_t (*slot)(void*, int64_t, void*, void*, void*)) {
    QStyle_OnStyleHint((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__StyleHint stylehint, QStyleOption* opt, QWidget* widget, QStyleHintReturn* returnData ```
int32_t q_style_qbase_style_hint(void* self, int64_t stylehint, void* opt, void* widget, void* returnData) {
    return QStyle_QBaseStyleHint((QStyle*)self, stylehint, (QStyleOption*)opt, (QWidget*)widget, (QStyleHintReturn*)returnData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardPixmap)
///
/// ``` QStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_style_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QStyle_StandardPixmap((QStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QPixmap* (*slot)(QStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_style_on_standard_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QStyle_OnStandardPixmap((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__StandardPixmap standardPixmap, QStyleOption* opt, QWidget* widget ```
QPixmap* q_style_qbase_standard_pixmap(void* self, int64_t standardPixmap, void* opt, void* widget) {
    return QStyle_QBaseStandardPixmap((QStyle*)self, standardPixmap, (QStyleOption*)opt, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#standardIcon)
///
/// ``` QStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_style_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QStyle_StandardIcon((QStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QIcon* (*slot)(QStyle*, enum QStyle__StandardPixmap, QStyleOption*, QWidget*) ```
void q_style_on_standard_icon(void* self, QIcon* (*slot)(void*, int64_t, void*, void*)) {
    QStyle_OnStandardIcon((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QStyle__StandardPixmap standardIcon, QStyleOption* option, QWidget* widget ```
QIcon* q_style_qbase_standard_icon(void* self, int64_t standardIcon, void* option, void* widget) {
    return QStyle_QBaseStandardIcon((QStyle*)self, standardIcon, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#generatedIconPixmap)
///
/// ``` QStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_style_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QStyle_GeneratedIconPixmap((QStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, QPixmap* (*slot)(QStyle*, enum QIcon__Mode, QPixmap*, QStyleOption*) ```
void q_style_on_generated_icon_pixmap(void* self, QPixmap* (*slot)(void*, int64_t, void*, void*)) {
    QStyle_OnGeneratedIconPixmap((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QIcon__Mode iconMode, QPixmap* pixmap, QStyleOption* opt ```
QPixmap* q_style_qbase_generated_icon_pixmap(void* self, int64_t iconMode, void* pixmap, void* opt) {
    return QStyle_QBaseGeneratedIconPixmap((QStyle*)self, iconMode, (QPixmap*)pixmap, (QStyleOption*)opt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualRect)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QRect* logicalRect ```
QRect* q_style_visual_rect(int64_t direction, void* boundingRect, void* logicalRect) {
    return QStyle_VisualRect(direction, (QRect*)boundingRect, (QRect*)logicalRect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualPos)
///
/// ``` enum Qt__LayoutDirection direction, QRect* boundingRect, QPoint* logicalPos ```
QPoint* q_style_visual_pos(int64_t direction, void* boundingRect, void* logicalPos) {
    return QStyle_VisualPos(direction, (QRect*)boundingRect, (QPoint*)logicalPos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space ```
int32_t q_style_slider_position_from_value(int min, int max, int val, int space) {
    return QStyle_SliderPositionFromValue(min, max, val, space);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space ```
int32_t q_style_slider_value_from_position(int min, int max, int pos, int space) {
    return QStyle_SliderValueFromPosition(min, max, pos, space);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#visualAlignment)
///
/// ``` enum Qt__LayoutDirection direction, int alignment ```
int64_t q_style_visual_alignment(int64_t direction, int64_t alignment) {
    return QStyle_VisualAlignment(direction, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#alignedRect)
///
/// ``` enum Qt__LayoutDirection direction, int alignment, QSize* size, QRect* rectangle ```
QRect* q_style_aligned_rect(int64_t direction, int64_t alignment, void* size, void* rectangle) {
    return QStyle_AlignedRect(direction, alignment, (QSize*)size, (QRect*)rectangle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#layoutSpacing)
///
/// ``` QStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_style_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QStyle_LayoutSpacing((QStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QStyle* self, int32_t (*slot)(QStyle*, enum QSizePolicy__ControlType, enum QSizePolicy__ControlType, enum Qt__Orientation, QStyleOption*, QWidget*) ```
void q_style_on_layout_spacing(void* self, int32_t (*slot)(void*, int64_t, int64_t, int64_t, void*, void*)) {
    QStyle_OnLayoutSpacing((QStyle*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStyle* self, enum QSizePolicy__ControlType control1, enum QSizePolicy__ControlType control2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_style_qbase_layout_spacing(void* self, int64_t control1, int64_t control2, int64_t orientation, void* option, void* widget) {
    return QStyle_QBaseLayoutSpacing((QStyle*)self, control1, control2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QStyle* self, int controls1, int controls2, enum Qt__Orientation orientation ```
int32_t q_style_combined_layout_spacing(void* self, int64_t controls1, int64_t controls2, int64_t orientation) {
    return QStyle_CombinedLayoutSpacing((QStyle*)self, controls1, controls2, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#proxy)
///
/// ``` QStyle* self ```
QStyle* q_style_proxy(void* self) {
    return QStyle_Proxy((QStyle*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_style_tr2(const char* s, const char* c) {
    libqt_string _str = QStyle_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_style_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStyle_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderPositionFromValue)
///
/// ``` int min, int max, int val, int space, bool upsideDown ```
int32_t q_style_slider_position_from_value5(int min, int max, int val, int space, bool upsideDown) {
    return QStyle_SliderPositionFromValue5(min, max, val, space, upsideDown);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#sliderValueFromPosition)
///
/// ``` int min, int max, int pos, int space, bool upsideDown ```
int32_t q_style_slider_value_from_position5(int min, int max, int pos, int space, bool upsideDown) {
    return QStyle_SliderValueFromPosition5(min, max, pos, space, upsideDown);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option ```
int32_t q_style_combined_layout_spacing4(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option) {
    return QStyle_CombinedLayoutSpacing4((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstyle.html#combinedLayoutSpacing)
///
/// ``` QStyle* self, int controls1, int controls2, enum Qt__Orientation orientation, QStyleOption* option, QWidget* widget ```
int32_t q_style_combined_layout_spacing5(void* self, int64_t controls1, int64_t controls2, int64_t orientation, void* option, void* widget) {
    return QStyle_CombinedLayoutSpacing5((QStyle*)self, controls1, controls2, orientation, (QStyleOption*)option, (QWidget*)widget);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStyle* self ```
const char* q_style_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStyle* self, const char* name ```
void q_style_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStyle* self ```
bool q_style_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStyle* self ```
bool q_style_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStyle* self ```
bool q_style_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStyle* self ```
bool q_style_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStyle* self, bool b ```
bool q_style_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStyle* self ```
QThread* q_style_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStyle* self, QThread* thread ```
void q_style_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyle* self, int interval ```
int32_t q_style_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStyle* self, int id ```
void q_style_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStyle* self ```
libqt_list /* of QObject* */ q_style_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStyle* self, QObject* parent ```
void q_style_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStyle* self, QObject* filterObj ```
void q_style_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStyle* self, QObject* obj ```
void q_style_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_style_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyle* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_style_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_style_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_style_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStyle* self ```
void q_style_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStyle* self ```
void q_style_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStyle* self, const char* name, QVariant* value ```
bool q_style_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStyle* self, const char* name ```
QVariant* q_style_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStyle* self ```
const char** q_style_dynamic_property_names(void* self) {
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
/// ``` QStyle* self ```
QBindingStorage* q_style_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStyle* self ```
QBindingStorage* q_style_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyle* self ```
void q_style_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStyle* self, void (*slot)(QObject*) ```
void q_style_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStyle* self ```
QObject* q_style_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStyle* self, const char* classname ```
bool q_style_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStyle* self ```
void q_style_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStyle* self, int interval, enum Qt__TimerType timerType ```
int32_t q_style_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_style_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStyle* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_style_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStyle* self, QObject* param1 ```
void q_style_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStyle* self, void (*slot)(QObject*, QObject*) ```
void q_style_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QEvent* event ```
bool q_style_event(void* self, void* event) {
    return QStyle_Event((QStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QEvent* event ```
bool q_style_qbase_event(void* self, void* event) {
    return QStyle_QBaseEvent((QStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, bool (*slot)(QStyle*, QEvent*) ```
void q_style_on_event(void* self, bool (*slot)(void*, void*)) {
    QStyle_OnEvent((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QObject* watched, QEvent* event ```
bool q_style_event_filter(void* self, void* watched, void* event) {
    return QStyle_EventFilter((QStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QObject* watched, QEvent* event ```
bool q_style_qbase_event_filter(void* self, void* watched, void* event) {
    return QStyle_QBaseEventFilter((QStyle*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, bool (*slot)(QStyle*, QObject*, QEvent*) ```
void q_style_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStyle_OnEventFilter((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QTimerEvent* event ```
void q_style_timer_event(void* self, void* event) {
    QStyle_TimerEvent((QStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QTimerEvent* event ```
void q_style_qbase_timer_event(void* self, void* event) {
    QStyle_QBaseTimerEvent((QStyle*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QTimerEvent*) ```
void q_style_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStyle_OnTimerEvent((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QChildEvent* event ```
void q_style_child_event(void* self, void* event) {
    QStyle_ChildEvent((QStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QChildEvent* event ```
void q_style_qbase_child_event(void* self, void* event) {
    QStyle_QBaseChildEvent((QStyle*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QChildEvent*) ```
void q_style_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStyle_OnChildEvent((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QEvent* event ```
void q_style_custom_event(void* self, void* event) {
    QStyle_CustomEvent((QStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QEvent* event ```
void q_style_qbase_custom_event(void* self, void* event) {
    QStyle_QBaseCustomEvent((QStyle*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QEvent*) ```
void q_style_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStyle_OnCustomEvent((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
void q_style_connect_notify(void* self, void* signal) {
    QStyle_ConnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
void q_style_qbase_connect_notify(void* self, void* signal) {
    QStyle_QBaseConnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QMetaMethod*) ```
void q_style_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStyle_OnConnectNotify((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
void q_style_disconnect_notify(void* self, void* signal) {
    QStyle_DisconnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
void q_style_qbase_disconnect_notify(void* self, void* signal) {
    QStyle_QBaseDisconnectNotify((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, void (*slot)(QStyle*, QMetaMethod*) ```
void q_style_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStyle_OnDisconnectNotify((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self ```
QObject* q_style_sender(void* self) {
    return QStyle_Sender((QStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self ```
QObject* q_style_qbase_sender(void* self) {
    return QStyle_QBaseSender((QStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, QObject* (*slot)() ```
void q_style_on_sender(void* self, QObject* (*slot)()) {
    QStyle_OnSender((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self ```
int32_t q_style_sender_signal_index(void* self) {
    return QStyle_SenderSignalIndex((QStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self ```
int32_t q_style_qbase_sender_signal_index(void* self) {
    return QStyle_QBaseSenderSignalIndex((QStyle*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, int32_t (*slot)() ```
void q_style_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStyle_OnSenderSignalIndex((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, const char* signal ```
int32_t q_style_receivers(void* self, const char* signal) {
    return QStyle_Receivers((QStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, const char* signal ```
int32_t q_style_qbase_receivers(void* self, const char* signal) {
    return QStyle_QBaseReceivers((QStyle*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, int32_t (*slot)(QStyle*, const char*) ```
void q_style_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStyle_OnReceivers((QStyle*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
bool q_style_is_signal_connected(void* self, void* signal) {
    return QStyle_IsSignalConnected((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStyle* self, QMetaMethod* signal ```
bool q_style_qbase_is_signal_connected(void* self, void* signal) {
    return QStyle_QBaseIsSignalConnected((QStyle*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStyle* self, bool (*slot)(QStyle*, QMetaMethod*) ```
void q_style_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStyle_OnIsSignalConnected((QStyle*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStyle* self ```
void q_style_delete(void* self) {
    QStyle_Delete((QStyle*)(self));
}