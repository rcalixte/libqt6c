#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqitemeditorfactory.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqitemdelegate.hpp"
#include "libqitemdelegate.h"

/// https://doc.qt.io/qt-6/qitemdelegate.html

/// q_itemdelegate_new constructs a new QItemDelegate object.
///
///
QItemDelegate* q_itemdelegate_new() {
    return QItemDelegate_new();
}

/// q_itemdelegate_new2 constructs a new QItemDelegate object.
///
/// ``` QObject* parent ```
QItemDelegate* q_itemdelegate_new2(void* parent) {
    return QItemDelegate_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QItemDelegate* self ```
QMetaObject* q_itemdelegate_meta_object(void* self) {
    return QItemDelegate_MetaObject((QItemDelegate*)self);
}

/// ``` QItemDelegate* self, const char* param1 ```
void* q_itemdelegate_metacast(void* self, const char* param1) {
    return QItemDelegate_Metacast((QItemDelegate*)self, param1);
}

/// ``` QItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemdelegate_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemDelegate_Metacall((QItemDelegate*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, int32_t (*slot)(QItemDelegate*, enum QMetaObject__Call, int, void*) ```
void q_itemdelegate_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QItemDelegate_OnMetacall((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_itemdelegate_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QItemDelegate_QBaseMetacall((QItemDelegate*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_itemdelegate_tr(const char* s) {
    libqt_string _str = QItemDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#hasClipping)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_has_clipping(void* self) {
    return QItemDelegate_HasClipping((QItemDelegate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setClipping)
///
/// ``` QItemDelegate* self, bool clip ```
void q_itemdelegate_set_clipping(void* self, bool clip) {
    QItemDelegate_SetClipping((QItemDelegate*)self, clip);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#paint)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_paint(void* self, void* painter, void* option, void* index) {
    QItemDelegate_Paint((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnPaint((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_paint(void* self, void* painter, void* option, void* index) {
    QItemDelegate_QBasePaint((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#sizeHint)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_itemdelegate_size_hint(void* self, void* option, void* index) {
    return QItemDelegate_SizeHint((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QSize* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_size_hint(void* self, QSize* (*slot)(void*, void*, void*)) {
    QItemDelegate_OnSizeHint((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index ```
QSize* q_itemdelegate_qbase_size_hint(void* self, void* option, void* index) {
    return QItemDelegate_QBaseSizeHint((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#createEditor)
///
/// ``` QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_itemdelegate_create_editor(void* self, void* parent, void* option, void* index) {
    return QItemDelegate_CreateEditor((QItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QWidget* (*slot)(QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_create_editor(void* self, QWidget* (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnCreateEditor((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index ```
QWidget* q_itemdelegate_qbase_create_editor(void* self, void* parent, void* option, void* index) {
    return QItemDelegate_QBaseCreateEditor((QItemDelegate*)self, (QWidget*)parent, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setEditorData)
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_set_editor_data(void* self, void* editor, void* index) {
    QItemDelegate_SetEditorData((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QModelIndex*) ```
void q_itemdelegate_on_set_editor_data(void* self, void (*slot)(void*, void*, void*)) {
    QItemDelegate_OnSetEditorData((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_qbase_set_editor_data(void* self, void* editor, void* index) {
    QItemDelegate_QBaseSetEditorData((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setModelData)
///
/// ``` QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_itemdelegate_set_model_data(void* self, void* editor, void* model, void* index) {
    QItemDelegate_SetModelData((QItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QAbstractItemModel*, QModelIndex*) ```
void q_itemdelegate_on_set_model_data(void* self, void (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnSetModelData((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index ```
void q_itemdelegate_qbase_set_model_data(void* self, void* editor, void* model, void* index) {
    QItemDelegate_QBaseSetModelData((QItemDelegate*)self, (QWidget*)editor, (QAbstractItemModel*)model, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#updateEditorGeometry)
///
/// ``` QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QItemDelegate_UpdateEditorGeometry((QItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_update_editor_geometry(void* self, void (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnUpdateEditorGeometry((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_update_editor_geometry(void* self, void* editor, void* option, void* index) {
    QItemDelegate_QBaseUpdateEditorGeometry((QItemDelegate*)self, (QWidget*)editor, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#itemEditorFactory)
///
/// ``` QItemDelegate* self ```
QItemEditorFactory* q_itemdelegate_item_editor_factory(void* self) {
    return QItemDelegate_ItemEditorFactory((QItemDelegate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setItemEditorFactory)
///
/// ``` QItemDelegate* self, QItemEditorFactory* factory ```
void q_itemdelegate_set_item_editor_factory(void* self, void* factory) {
    QItemDelegate_SetItemEditorFactory((QItemDelegate*)self, (QItemEditorFactory*)factory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDisplay)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text ```
void q_itemdelegate_draw_display(void* self, void* painter, void* option, void* rect, const char* text) {
    QItemDelegate_DrawDisplay((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, const char*) ```
void q_itemdelegate_on_draw_display(void* self, void (*slot)(void*, void*, void*, void*, const char*)) {
    QItemDelegate_OnDrawDisplay((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, const char* text ```
void q_itemdelegate_qbase_draw_display(void* self, void* painter, void* option, void* rect, const char* text) {
    QItemDelegate_QBaseDrawDisplay((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawDecoration)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap ```
void q_itemdelegate_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap) {
    QItemDelegate_DrawDecoration((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, (QPixmap*)pixmap);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, QPixmap*) ```
void q_itemdelegate_on_draw_decoration(void* self, void (*slot)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnDrawDecoration((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap ```
void q_itemdelegate_qbase_draw_decoration(void* self, void* painter, void* option, void* rect, void* pixmap) {
    QItemDelegate_QBaseDrawDecoration((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawFocus)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect ```
void q_itemdelegate_draw_focus(void* self, void* painter, void* option, void* rect) {
    QItemDelegate_DrawFocus((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*) ```
void q_itemdelegate_on_draw_focus(void* self, void (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnDrawFocus((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect ```
void q_itemdelegate_qbase_draw_focus(void* self, void* painter, void* option, void* rect) {
    QItemDelegate_QBaseDrawFocus((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawCheck)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state ```
void q_itemdelegate_draw_check(void* self, void* painter, void* option, void* rect, int64_t state) {
    QItemDelegate_DrawCheck((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, state);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QRect*, enum Qt__CheckState) ```
void q_itemdelegate_on_draw_check(void* self, void (*slot)(void*, void*, void*, void*, int64_t)) {
    QItemDelegate_OnDrawCheck((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, enum Qt__CheckState state ```
void q_itemdelegate_qbase_draw_check(void* self, void* painter, void* option, void* rect, int64_t state) {
    QItemDelegate_QBaseDrawCheck((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QRect*)rect, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#drawBackground)
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_draw_background(void* self, void* painter, void* option, void* index) {
    QItemDelegate_DrawBackground((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_draw_background(void* self, void (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnDrawBackground((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index ```
void q_itemdelegate_qbase_draw_background(void* self, void* painter, void* option, void* index) {
    QItemDelegate_QBaseDrawBackground((QItemDelegate*)self, (QPainter*)painter, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doLayout)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint ```
void q_itemdelegate_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint) {
    QItemDelegate_DoLayout((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)checkRect, (QRect*)iconRect, (QRect*)textRect, hint);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QStyleOptionViewItem*, QRect*, QRect*, QRect*, bool) ```
void q_itemdelegate_on_do_layout(void* self, void (*slot)(void*, void*, void*, void*, void*, bool)) {
    QItemDelegate_OnDoLayout((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint ```
void q_itemdelegate_qbase_do_layout(void* self, void* option, void* checkRect, void* iconRect, void* textRect, bool hint) {
    QItemDelegate_QBaseDoLayout((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)checkRect, (QRect*)iconRect, (QRect*)textRect, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#rect)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role ```
QRect* q_itemdelegate_rect(void* self, void* option, void* index, int role) {
    return QItemDelegate_Rect((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index, role);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QModelIndex*, int) ```
void q_itemdelegate_on_rect(void* self, QRect* (*slot)(void*, void*, void*, int)) {
    QItemDelegate_OnRect((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index, int role ```
QRect* q_itemdelegate_qbase_rect(void* self, void* option, void* index, int role) {
    return QItemDelegate_QBaseRect((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QModelIndex*)index, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#eventFilter)
///
/// ``` QItemDelegate* self, QObject* object, QEvent* event ```
bool q_itemdelegate_event_filter(void* self, void* object, void* event) {
    return QItemDelegate_EventFilter((QItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QObject*, QEvent*) ```
void q_itemdelegate_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QItemDelegate_OnEventFilter((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QObject* object, QEvent* event ```
bool q_itemdelegate_qbase_event_filter(void* self, void* object, void* event) {
    return QItemDelegate_QBaseEventFilter((QItemDelegate*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#editorEvent)
///
/// ``` QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QItemDelegate_EditorEvent((QItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QEvent*, QAbstractItemModel*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_editor_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnEditorEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_qbase_editor_event(void* self, void* event, void* model, void* option, void* index) {
    return QItemDelegate_QBaseEditorEvent((QItemDelegate*)self, (QEvent*)event, (QAbstractItemModel*)model, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#setOptions)
///
/// ``` QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option ```
QStyleOptionViewItem* q_itemdelegate_set_options(void* self, void* index, void* option) {
    return QItemDelegate_SetOptions((QItemDelegate*)self, (QModelIndex*)index, (QStyleOptionViewItem*)option);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* (*slot)(QItemDelegate*, QModelIndex*, QStyleOptionViewItem*) ```
void q_itemdelegate_on_set_options(void* self, QStyleOptionViewItem* (*slot)(void*, void*, void*)) {
    QItemDelegate_OnSetOptions((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QModelIndex* index, QStyleOptionViewItem* option ```
QStyleOptionViewItem* q_itemdelegate_qbase_set_options(void* self, void* index, void* option) {
    return QItemDelegate_QBaseSetOptions((QItemDelegate*)self, (QModelIndex*)index, (QStyleOptionViewItem*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#decoration)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant ```
QPixmap* q_itemdelegate_decoration(void* self, void* option, void* variant) {
    return QItemDelegate_Decoration((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QVariant*)variant);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QPixmap* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QVariant*) ```
void q_itemdelegate_on_decoration(void* self, QPixmap* (*slot)(void*, void*, void*)) {
    QItemDelegate_OnDecoration((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QVariant* variant ```
QPixmap* q_itemdelegate_qbase_decoration(void* self, void* option, void* variant) {
    return QItemDelegate_QBaseDecoration((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QVariant*)variant);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#doCheck)
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant ```
QRect* q_itemdelegate_do_check(void* self, void* option, void* bounding, void* variant) {
    return QItemDelegate_DoCheck((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)bounding, (QVariant*)variant);
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QStyleOptionViewItem*, QRect*, QVariant*) ```
void q_itemdelegate_on_do_check(void* self, QRect* (*slot)(void*, void*, void*, void*)) {
    QItemDelegate_OnDoCheck((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QStyleOptionViewItem* option, QRect* bounding, QVariant* variant ```
QRect* q_itemdelegate_qbase_do_check(void* self, void* option, void* bounding, void* variant) {
    return QItemDelegate_QBaseDoCheck((QItemDelegate*)self, (QStyleOptionViewItem*)option, (QRect*)bounding, (QVariant*)variant);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qitemdelegate.html#textRectangle)
///
/// ``` QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, const char* text ```
QRect* q_itemdelegate_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text) {
    return QItemDelegate_TextRectangle((QItemDelegate*)self, (QPainter*)painter, (QRect*)rect, (QFont*)font, qstring(text));
}

/// Allows for overriding the related default method
///
/// ``` QItemDelegate* self, QRect* (*slot)(QItemDelegate*, QPainter*, QRect*, QFont*, const char*) ```
void q_itemdelegate_on_text_rectangle(void* self, QRect* (*slot)(void*, void*, void*, void*, const char*)) {
    QItemDelegate_OnTextRectangle((QItemDelegate*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QItemDelegate* self, QPainter* painter, QRect* rect, QFont* font, const char* text ```
QRect* q_itemdelegate_qbase_text_rectangle(void* self, void* painter, void* rect, void* font, const char* text) {
    return QItemDelegate_QBaseTextRectangle((QItemDelegate*)self, (QPainter*)painter, (QRect*)rect, (QFont*)font, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_itemdelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QItemDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_itemdelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QItemDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#commitData)
///
/// ``` QItemDelegate* self, QWidget* editor ```
void q_itemdelegate_commit_data(void* self, void* editor) {
    QAbstractItemDelegate_CommitData((QAbstractItemDelegate*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemDelegate
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_itemdelegate_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CommitData((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, QWidget* editor ```
void q_itemdelegate_close_editor(void* self, void* editor) {
    QAbstractItemDelegate_CloseEditor((QAbstractItemDelegate*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemDelegate
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*) ```
void q_itemdelegate_on_close_editor(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_CloseEditor((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#sizeHintChanged)
///
/// ``` QItemDelegate* self, QModelIndex* param1 ```
void q_itemdelegate_size_hint_changed(void* self, void* param1) {
    QAbstractItemDelegate_SizeHintChanged((QAbstractItemDelegate*)self, (QModelIndex*)param1);
}

/// Inherited from QAbstractItemDelegate
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QModelIndex*) ```
void q_itemdelegate_on_size_hint_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemDelegate_Connect_SizeHintChanged((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#closeEditor)
///
/// ``` QItemDelegate* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_itemdelegate_close_editor2(void* self, void* editor, int64_t hint) {
    QAbstractItemDelegate_CloseEditor2((QAbstractItemDelegate*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemDelegate
///
/// ``` QItemDelegate* self, void (*slot)(QAbstractItemDelegate*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_itemdelegate_on_close_editor2(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemDelegate_Connect_CloseEditor2((QAbstractItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QItemDelegate* self ```
const char* q_itemdelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QItemDelegate* self, const char* name ```
void q_itemdelegate_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QItemDelegate* self ```
bool q_itemdelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QItemDelegate* self, bool b ```
bool q_itemdelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QItemDelegate* self ```
QThread* q_itemdelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QItemDelegate* self, QThread* thread ```
void q_itemdelegate_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemDelegate* self, int interval ```
int32_t q_itemdelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QItemDelegate* self, int id ```
void q_itemdelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QItemDelegate* self ```
libqt_list /* of QObject* */ q_itemdelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QItemDelegate* self, QObject* parent ```
void q_itemdelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QItemDelegate* self, QObject* filterObj ```
void q_itemdelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QItemDelegate* self, QObject* obj ```
void q_itemdelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_itemdelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemDelegate* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_itemdelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_itemdelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_itemdelegate_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QItemDelegate* self, const char* name, QVariant* value ```
bool q_itemdelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QItemDelegate* self, const char* name ```
QVariant* q_itemdelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QItemDelegate* self ```
const char** q_itemdelegate_dynamic_property_names(void* self) {
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
/// ``` QItemDelegate* self ```
QBindingStorage* q_itemdelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QItemDelegate* self ```
QBindingStorage* q_itemdelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QItemDelegate* self, void (*slot)(QObject*) ```
void q_itemdelegate_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QItemDelegate* self, const char* classname ```
bool q_itemdelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QItemDelegate* self, int interval, enum Qt__TimerType timerType ```
int32_t q_itemdelegate_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemdelegate_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QItemDelegate* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_itemdelegate_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QItemDelegate* self, QObject* param1 ```
void q_itemdelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QItemDelegate* self, void (*slot)(QObject*, QObject*) ```
void q_itemdelegate_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#destroyEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_destroy_editor(void* self, void* editor, void* index) {
    QItemDelegate_DestroyEditor((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QWidget* editor, QModelIndex* index ```
void q_itemdelegate_qbase_destroy_editor(void* self, void* editor, void* index) {
    QItemDelegate_QBaseDestroyEditor((QItemDelegate*)self, (QWidget*)editor, (QModelIndex*)index);
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QWidget*, QModelIndex*) ```
void q_itemdelegate_on_destroy_editor(void* self, void (*slot)(void*, void*, void*)) {
    QItemDelegate_OnDestroyEditor((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#helpEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QItemDelegate_HelpEvent((QItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index ```
bool q_itemdelegate_qbase_help_event(void* self, void* event, void* view, void* option, void* index) {
    return QItemDelegate_QBaseHelpEvent((QItemDelegate*)self, (QHelpEvent*)event, (QAbstractItemView*)view, (QStyleOptionViewItem*)option, (QModelIndex*)index);
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QHelpEvent*, QAbstractItemView*, QStyleOptionViewItem*, QModelIndex*) ```
void q_itemdelegate_on_help_event(void* self, bool (*slot)(void*, void*, void*, void*, void*)) {
    QItemDelegate_OnHelpEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemDelegate
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemdelegate.html#paintingRoles)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
libqt_list /* of int */ q_itemdelegate_painting_roles(void* self) {
    libqt_list _arr = QItemDelegate_PaintingRoles((QItemDelegate*)self);
    return _arr;
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
libqt_list /* of int */ q_itemdelegate_qbase_painting_roles(void* self) {
    libqt_list _arr = QItemDelegate_QBasePaintingRoles((QItemDelegate*)self);
    return _arr;
}

/// Inherited from QAbstractItemDelegate
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, libqt_list /* of int */ (*slot)() ```
void q_itemdelegate_on_painting_roles(void* self, libqt_list /* of int */ (*slot)()) {
    QItemDelegate_OnPaintingRoles((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
bool q_itemdelegate_event(void* self, void* event) {
    return QItemDelegate_Event((QItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
bool q_itemdelegate_qbase_event(void* self, void* event) {
    return QItemDelegate_QBaseEvent((QItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QEvent*) ```
void q_itemdelegate_on_event(void* self, bool (*slot)(void*, void*)) {
    QItemDelegate_OnEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QTimerEvent* event ```
void q_itemdelegate_timer_event(void* self, void* event) {
    QItemDelegate_TimerEvent((QItemDelegate*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QTimerEvent* event ```
void q_itemdelegate_qbase_timer_event(void* self, void* event) {
    QItemDelegate_QBaseTimerEvent((QItemDelegate*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QTimerEvent*) ```
void q_itemdelegate_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QItemDelegate_OnTimerEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QChildEvent* event ```
void q_itemdelegate_child_event(void* self, void* event) {
    QItemDelegate_ChildEvent((QItemDelegate*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QChildEvent* event ```
void q_itemdelegate_qbase_child_event(void* self, void* event) {
    QItemDelegate_QBaseChildEvent((QItemDelegate*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QChildEvent*) ```
void q_itemdelegate_on_child_event(void* self, void (*slot)(void*, void*)) {
    QItemDelegate_OnChildEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
void q_itemdelegate_custom_event(void* self, void* event) {
    QItemDelegate_CustomEvent((QItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QEvent* event ```
void q_itemdelegate_qbase_custom_event(void* self, void* event) {
    QItemDelegate_QBaseCustomEvent((QItemDelegate*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QEvent*) ```
void q_itemdelegate_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QItemDelegate_OnCustomEvent((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_connect_notify(void* self, void* signal) {
    QItemDelegate_ConnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_qbase_connect_notify(void* self, void* signal) {
    QItemDelegate_QBaseConnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QItemDelegate_OnConnectNotify((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_disconnect_notify(void* self, void* signal) {
    QItemDelegate_DisconnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
void q_itemdelegate_qbase_disconnect_notify(void* self, void* signal) {
    QItemDelegate_QBaseDisconnectNotify((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, void (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QItemDelegate_OnDisconnectNotify((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_sender(void* self) {
    return QItemDelegate_Sender((QItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
QObject* q_itemdelegate_qbase_sender(void* self) {
    return QItemDelegate_QBaseSender((QItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, QObject* (*slot)() ```
void q_itemdelegate_on_sender(void* self, QObject* (*slot)()) {
    QItemDelegate_OnSender((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self ```
int32_t q_itemdelegate_sender_signal_index(void* self) {
    return QItemDelegate_SenderSignalIndex((QItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self ```
int32_t q_itemdelegate_qbase_sender_signal_index(void* self) {
    return QItemDelegate_QBaseSenderSignalIndex((QItemDelegate*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, int32_t (*slot)() ```
void q_itemdelegate_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QItemDelegate_OnSenderSignalIndex((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, const char* signal ```
int32_t q_itemdelegate_receivers(void* self, const char* signal) {
    return QItemDelegate_Receivers((QItemDelegate*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, const char* signal ```
int32_t q_itemdelegate_qbase_receivers(void* self, const char* signal) {
    return QItemDelegate_QBaseReceivers((QItemDelegate*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, int32_t (*slot)(QItemDelegate*, const char*) ```
void q_itemdelegate_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QItemDelegate_OnReceivers((QItemDelegate*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
bool q_itemdelegate_is_signal_connected(void* self, void* signal) {
    return QItemDelegate_IsSignalConnected((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QItemDelegate* self, QMetaMethod* signal ```
bool q_itemdelegate_qbase_is_signal_connected(void* self, void* signal) {
    return QItemDelegate_QBaseIsSignalConnected((QItemDelegate*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QItemDelegate* self, bool (*slot)(QItemDelegate*, QMetaMethod*) ```
void q_itemdelegate_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QItemDelegate_OnIsSignalConnected((QItemDelegate*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QItemDelegate* self ```
void q_itemdelegate_delete(void* self) {
    QItemDelegate_Delete((QItemDelegate*)(self));
}