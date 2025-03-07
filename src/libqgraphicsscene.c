#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqbrush.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqgraphicsview.hpp"
#include "libqgraphicswidget.hpp"
#include "libqline.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpen.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicsscene.h"

/// https://doc.qt.io/qt-6/qgraphicsscene.html

/// q_graphicsscene_new constructs a new QGraphicsScene object.
///
///
QGraphicsScene* q_graphicsscene_new() {
    return QGraphicsScene_new();
}

/// q_graphicsscene_new2 constructs a new QGraphicsScene object.
///
/// ``` QRectF* sceneRect ```
QGraphicsScene* q_graphicsscene_new2(void* sceneRect) {
    return QGraphicsScene_new2((QRectF*)sceneRect);
}

/// q_graphicsscene_new3 constructs a new QGraphicsScene object.
///
/// ``` double x, double y, double width, double height ```
QGraphicsScene* q_graphicsscene_new3(double x, double y, double width, double height) {
    return QGraphicsScene_new3(x, y, width, height);
}

/// q_graphicsscene_new4 constructs a new QGraphicsScene object.
///
/// ``` QObject* parent ```
QGraphicsScene* q_graphicsscene_new4(void* parent) {
    return QGraphicsScene_new4((QObject*)parent);
}

/// q_graphicsscene_new5 constructs a new QGraphicsScene object.
///
/// ``` QRectF* sceneRect, QObject* parent ```
QGraphicsScene* q_graphicsscene_new5(void* sceneRect, void* parent) {
    return QGraphicsScene_new5((QRectF*)sceneRect, (QObject*)parent);
}

/// q_graphicsscene_new6 constructs a new QGraphicsScene object.
///
/// ``` double x, double y, double width, double height, QObject* parent ```
QGraphicsScene* q_graphicsscene_new6(double x, double y, double width, double height, void* parent) {
    return QGraphicsScene_new6(x, y, width, height, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsScene* self ```
QMetaObject* q_graphicsscene_meta_object(void* self) {
    return QGraphicsScene_MetaObject((QGraphicsScene*)self);
}

/// ``` QGraphicsScene* self, const char* param1 ```
void* q_graphicsscene_metacast(void* self, const char* param1) {
    return QGraphicsScene_Metacast((QGraphicsScene*)self, param1);
}

/// ``` QGraphicsScene* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscene_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsScene_Metacall((QGraphicsScene*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, int32_t (*slot)(QGraphicsScene*, enum QMetaObject__Call, int, void*) ```
void q_graphicsscene_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsScene_OnMetacall((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscene_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsScene_QBaseMetacall((QGraphicsScene*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsscene_tr(const char* s) {
    libqt_string _str = QGraphicsScene_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRect)
///
/// ``` QGraphicsScene* self ```
QRectF* q_graphicsscene_scene_rect(void* self) {
    return QGraphicsScene_SceneRect((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#width)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_width(void* self) {
    return QGraphicsScene_Width((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#height)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_height(void* self) {
    return QGraphicsScene_Height((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_set_scene_rect(void* self, void* rect) {
    QGraphicsScene_SetSceneRect((QGraphicsScene*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSceneRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_set_scene_rect2(void* self, double x, double y, double w, double h) {
    QGraphicsScene_SetSceneRect2((QGraphicsScene*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter ```
void q_graphicsscene_render(void* self, void* painter) {
    QGraphicsScene_Render((QGraphicsScene*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemIndexMethod)
///
/// ``` QGraphicsScene* self ```
int64_t q_graphicsscene_item_index_method(void* self) {
    return QGraphicsScene_ItemIndexMethod((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setItemIndexMethod)
///
/// ``` QGraphicsScene* self, enum QGraphicsScene__ItemIndexMethod method ```
void q_graphicsscene_set_item_index_method(void* self, int64_t method) {
    QGraphicsScene_SetItemIndexMethod((QGraphicsScene*)self, method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#bspTreeDepth)
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_bsp_tree_depth(void* self) {
    return QGraphicsScene_BspTreeDepth((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBspTreeDepth)
///
/// ``` QGraphicsScene* self, int depth ```
void q_graphicsscene_set_bsp_tree_depth(void* self, int depth) {
    QGraphicsScene_SetBspTreeDepth((QGraphicsScene*)self, depth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemsBoundingRect)
///
/// ``` QGraphicsScene* self ```
QRectF* q_graphicsscene_items_bounding_rect(void* self) {
    return QGraphicsScene_ItemsBoundingRect((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items(void* self) {
    libqt_list _arr = QGraphicsScene_Items((QGraphicsScene*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_pos(void* self, void* pos) {
    libqt_list _arr = QGraphicsScene_ItemsWithPos((QGraphicsScene*)self, (QPointF*)pos);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_rect(void* self, void* rect) {
    libqt_list _arr = QGraphicsScene_ItemsWithRect((QGraphicsScene*)self, (QRectF*)rect);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items_with_path(void* self, void* path) {
    libqt_list _arr = QGraphicsScene_ItemsWithPath((QGraphicsScene*)self, (QPainterPath*)path);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items2(void* self, double x, double y, double w, double h, int64_t mode, int64_t order) {
    libqt_list _arr = QGraphicsScene_Items2((QGraphicsScene*)self, x, y, w, h, mode, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items(void* self, void* item) {
    libqt_list _arr = QGraphicsScene_CollidingItems((QGraphicsScene*)self, (QGraphicsItem*)item);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// ``` QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform ```
QGraphicsItem* q_graphicsscene_item_at(void* self, void* pos, void* deviceTransform) {
    return QGraphicsScene_ItemAt((QGraphicsScene*)self, (QPointF*)pos, (QTransform*)deviceTransform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#itemAt)
///
/// ``` QGraphicsScene* self, double x, double y, QTransform* deviceTransform ```
QGraphicsItem* q_graphicsscene_item_at2(void* self, double x, double y, void* deviceTransform) {
    return QGraphicsScene_ItemAt2((QGraphicsScene*)self, x, y, (QTransform*)deviceTransform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectedItems)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_selected_items(void* self) {
    libqt_list _arr = QGraphicsScene_SelectedItems((QGraphicsScene*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionArea)
///
/// ``` QGraphicsScene* self ```
QPainterPath* q_graphicsscene_selection_area(void* self) {
    return QGraphicsScene_SelectionArea((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform ```
void q_graphicsscene_set_selection_area(void* self, void* path, void* deviceTransform) {
    QGraphicsScene_SetSelectionArea((QGraphicsScene*)self, (QPainterPath*)path, (QTransform*)deviceTransform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
void q_graphicsscene_set_selection_area_with_path(void* self, void* path) {
    QGraphicsScene_SetSelectionAreaWithPath((QGraphicsScene*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#createItemGroup)
///
/// ``` QGraphicsScene* self, QGraphicsItem* items[] ```
QGraphicsItemGroup* q_graphicsscene_create_item_group(void* self, void* items[]) {
    QGraphicsItem** items_arr = (QGraphicsItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QGraphicsItem*)items},
    };
    return QGraphicsScene_CreateItemGroup((QGraphicsScene*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#destroyItemGroup)
///
/// ``` QGraphicsScene* self, QGraphicsItemGroup* group ```
void q_graphicsscene_destroy_item_group(void* self, void* group) {
    QGraphicsScene_DestroyItemGroup((QGraphicsScene*)self, (QGraphicsItemGroup*)group);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_add_item(void* self, void* item) {
    QGraphicsScene_AddItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse(void* self, void* rect) {
    return QGraphicsScene_AddEllipse((QGraphicsScene*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, QLineF* line ```
QGraphicsLineItem* q_graphicsscene_add_line(void* self, void* line) {
    return QGraphicsScene_AddLine((QGraphicsScene*)self, (QLineF*)line);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path ```
QGraphicsPathItem* q_graphicsscene_add_path(void* self, void* path) {
    return QGraphicsScene_AddPath((QGraphicsScene*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPixmap)
///
/// ``` QGraphicsScene* self, QPixmap* pixmap ```
QGraphicsPixmapItem* q_graphicsscene_add_pixmap(void* self, void* pixmap) {
    return QGraphicsScene_AddPixmap((QGraphicsScene*)self, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
QGraphicsRectItem* q_graphicsscene_add_rect(void* self, void* rect) {
    return QGraphicsScene_AddRect((QGraphicsScene*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// ``` QGraphicsScene* self, const char* text ```
QGraphicsTextItem* q_graphicsscene_add_text(void* self, const char* text) {
    return QGraphicsScene_AddText((QGraphicsScene*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// ``` QGraphicsScene* self, const char* text ```
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text(void* self, const char* text) {
    return QGraphicsScene_AddSimpleText((QGraphicsScene*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// ``` QGraphicsScene* self, QWidget* widget ```
QGraphicsProxyWidget* q_graphicsscene_add_widget(void* self, void* widget) {
    return QGraphicsScene_AddWidget((QGraphicsScene*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse2(void* self, double x, double y, double w, double h) {
    return QGraphicsScene_AddEllipse2((QGraphicsScene*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, double x1, double y1, double x2, double y2 ```
QGraphicsLineItem* q_graphicsscene_add_line2(void* self, double x1, double y1, double x2, double y2) {
    return QGraphicsScene_AddLine2((QGraphicsScene*)self, x1, y1, x2, y2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
QGraphicsRectItem* q_graphicsscene_add_rect2(void* self, double x, double y, double w, double h) {
    return QGraphicsScene_AddRect2((QGraphicsScene*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#removeItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_remove_item(void* self, void* item) {
    QGraphicsScene_RemoveItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItem)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_focus_item(void* self) {
    return QGraphicsScene_FocusItem((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_set_focus_item(void* self, void* item) {
    QGraphicsScene_SetFocusItem((QGraphicsScene*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#hasFocus)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_has_focus(void* self) {
    return QGraphicsScene_HasFocus((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_set_focus(void* self) {
    QGraphicsScene_SetFocus((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearFocus)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear_focus(void* self) {
    QGraphicsScene_ClearFocus((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStickyFocus)
///
/// ``` QGraphicsScene* self, bool enabled ```
void q_graphicsscene_set_sticky_focus(void* self, bool enabled) {
    QGraphicsScene_SetStickyFocus((QGraphicsScene*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#stickyFocus)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_sticky_focus(void* self) {
    return QGraphicsScene_StickyFocus((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseGrabberItem)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_mouse_grabber_item(void* self) {
    return QGraphicsScene_MouseGrabberItem((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#backgroundBrush)
///
/// ``` QGraphicsScene* self ```
QBrush* q_graphicsscene_background_brush(void* self) {
    return QGraphicsScene_BackgroundBrush((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setBackgroundBrush)
///
/// ``` QGraphicsScene* self, QBrush* brush ```
void q_graphicsscene_set_background_brush(void* self, void* brush) {
    QGraphicsScene_SetBackgroundBrush((QGraphicsScene*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#foregroundBrush)
///
/// ``` QGraphicsScene* self ```
QBrush* q_graphicsscene_foreground_brush(void* self) {
    return QGraphicsScene_ForegroundBrush((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setForegroundBrush)
///
/// ``` QGraphicsScene* self, QBrush* brush ```
void q_graphicsscene_set_foreground_brush(void* self, void* brush) {
    QGraphicsScene_SetForegroundBrush((QGraphicsScene*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodQuery)
///
/// ``` QGraphicsScene* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsscene_input_method_query(void* self, int64_t query) {
    return QGraphicsScene_InputMethodQuery((QGraphicsScene*)self, query);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, QVariant* (*slot)(QGraphicsScene*, enum Qt__InputMethodQuery) ```
void q_graphicsscene_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsScene_OnInputMethodQuery((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsscene_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsScene_QBaseInputMethodQuery((QGraphicsScene*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#views)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QGraphicsView* */ q_graphicsscene_views(void* self) {
    libqt_list _arr = QGraphicsScene_Views((QGraphicsScene*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_update(void* self, double x, double y, double w, double h) {
    QGraphicsScene_Update((QGraphicsScene*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h ```
void q_graphicsscene_invalidate(void* self, double x, double y, double w, double h) {
    QGraphicsScene_Invalidate((QGraphicsScene*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#style)
///
/// ``` QGraphicsScene* self ```
QStyle* q_graphicsscene_style(void* self) {
    return QGraphicsScene_Style((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setStyle)
///
/// ``` QGraphicsScene* self, QStyle* style ```
void q_graphicsscene_set_style(void* self, void* style) {
    QGraphicsScene_SetStyle((QGraphicsScene*)self, (QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#font)
///
/// ``` QGraphicsScene* self ```
QFont* q_graphicsscene_font(void* self) {
    return QGraphicsScene_Font((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFont)
///
/// ``` QGraphicsScene* self, QFont* font ```
void q_graphicsscene_set_font(void* self, void* font) {
    QGraphicsScene_SetFont((QGraphicsScene*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#palette)
///
/// ``` QGraphicsScene* self ```
QPalette* q_graphicsscene_palette(void* self) {
    return QGraphicsScene_Palette((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setPalette)
///
/// ``` QGraphicsScene* self, QPalette* palette ```
void q_graphicsscene_set_palette(void* self, void* palette) {
    QGraphicsScene_SetPalette((QGraphicsScene*)self, (QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#isActive)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_active(void* self) {
    return QGraphicsScene_IsActive((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activePanel)
///
/// ``` QGraphicsScene* self ```
QGraphicsItem* q_graphicsscene_active_panel(void* self) {
    return QGraphicsScene_ActivePanel((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActivePanel)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item ```
void q_graphicsscene_set_active_panel(void* self, void* item) {
    QGraphicsScene_SetActivePanel((QGraphicsScene*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#activeWindow)
///
/// ``` QGraphicsScene* self ```
QGraphicsWidget* q_graphicsscene_active_window(void* self) {
    return QGraphicsScene_ActiveWindow((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setActiveWindow)
///
/// ``` QGraphicsScene* self, QGraphicsWidget* widget ```
void q_graphicsscene_set_active_window(void* self, void* widget) {
    QGraphicsScene_SetActiveWindow((QGraphicsScene*)self, (QGraphicsWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sendEvent)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, QEvent* event ```
bool q_graphicsscene_send_event(void* self, void* item, void* event) {
    return QGraphicsScene_SendEvent((QGraphicsScene*)self, (QGraphicsItem*)item, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#minimumRenderSize)
///
/// ``` QGraphicsScene* self ```
double q_graphicsscene_minimum_render_size(void* self) {
    return QGraphicsScene_MinimumRenderSize((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setMinimumRenderSize)
///
/// ``` QGraphicsScene* self, double minSize ```
void q_graphicsscene_set_minimum_render_size(void* self, double minSize) {
    QGraphicsScene_SetMinimumRenderSize((QGraphicsScene*)self, minSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOnTouch)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_focus_on_touch(void* self) {
    return QGraphicsScene_FocusOnTouch((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusOnTouch)
///
/// ``` QGraphicsScene* self, bool enabled ```
void q_graphicsscene_set_focus_on_touch(void* self, bool enabled) {
    QGraphicsScene_SetFocusOnTouch((QGraphicsScene*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_update2(void* self) {
    QGraphicsScene_Update2((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_invalidate2(void* self) {
    QGraphicsScene_Invalidate2((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#advance)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_advance(void* self) {
    QGraphicsScene_Advance((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clearSelection)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear_selection(void* self) {
    QGraphicsScene_ClearSelection((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#clear)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_clear(void* self) {
    QGraphicsScene_Clear((QGraphicsScene*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#event)
///
/// ``` QGraphicsScene* self, QEvent* event ```
bool q_graphicsscene_event(void* self, void* event) {
    return QGraphicsScene_Event((QGraphicsScene*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QEvent*) ```
void q_graphicsscene_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsScene_OnEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QEvent* event ```
bool q_graphicsscene_qbase_event(void* self, void* event) {
    return QGraphicsScene_QBaseEvent((QGraphicsScene*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#eventFilter)
///
/// ``` QGraphicsScene* self, QObject* watched, QEvent* event ```
bool q_graphicsscene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScene_EventFilter((QGraphicsScene*)self, (QObject*)watched, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QObject*, QEvent*) ```
void q_graphicsscene_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsScene_OnEventFilter((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QObject* watched, QEvent* event ```
bool q_graphicsscene_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScene_QBaseEventFilter((QGraphicsScene*)self, (QObject*)watched, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#contextMenuEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsscene_context_menu_event(void* self, void* event) {
    QGraphicsScene_ContextMenuEvent((QGraphicsScene*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsscene_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnContextMenuEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsscene_qbase_context_menu_event(void* self, void* event) {
    QGraphicsScene_QBaseContextMenuEvent((QGraphicsScene*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragEnterEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_enter_event(void* self, void* event) {
    QGraphicsScene_DragEnterEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnDragEnterEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsScene_QBaseDragEnterEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragMoveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_move_event(void* self, void* event) {
    QGraphicsScene_DragMoveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnDragMoveEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_move_event(void* self, void* event) {
    QGraphicsScene_QBaseDragMoveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dragLeaveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drag_leave_event(void* self, void* event) {
    QGraphicsScene_DragLeaveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnDragLeaveEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsScene_QBaseDragLeaveEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#dropEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_drop_event(void* self, void* event) {
    QGraphicsScene_DropEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsscene_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnDropEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsscene_qbase_drop_event(void* self, void* event) {
    QGraphicsScene_QBaseDropEvent((QGraphicsScene*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusInEvent)
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_focus_in_event(void* self, void* event) {
    QGraphicsScene_FocusInEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QFocusEvent*) ```
void q_graphicsscene_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnFocusInEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_qbase_focus_in_event(void* self, void* event) {
    QGraphicsScene_QBaseFocusInEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusOutEvent)
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_focus_out_event(void* self, void* event) {
    QGraphicsScene_FocusOutEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QFocusEvent*) ```
void q_graphicsscene_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnFocusOutEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QFocusEvent* event ```
void q_graphicsscene_qbase_focus_out_event(void* self, void* event) {
    QGraphicsScene_QBaseFocusOutEvent((QGraphicsScene*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#helpEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneHelpEvent* event ```
void q_graphicsscene_help_event(void* self, void* event) {
    QGraphicsScene_HelpEvent((QGraphicsScene*)self, (QGraphicsSceneHelpEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneHelpEvent*) ```
void q_graphicsscene_on_help_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnHelpEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneHelpEvent* event ```
void q_graphicsscene_qbase_help_event(void* self, void* event) {
    QGraphicsScene_QBaseHelpEvent((QGraphicsScene*)self, (QGraphicsSceneHelpEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyPressEvent)
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_key_press_event(void* self, void* event) {
    QGraphicsScene_KeyPressEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QKeyEvent*) ```
void q_graphicsscene_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnKeyPressEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_qbase_key_press_event(void* self, void* event) {
    QGraphicsScene_QBaseKeyPressEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#keyReleaseEvent)
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_key_release_event(void* self, void* event) {
    QGraphicsScene_KeyReleaseEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QKeyEvent*) ```
void q_graphicsscene_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnKeyReleaseEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QKeyEvent* event ```
void q_graphicsscene_qbase_key_release_event(void* self, void* event) {
    QGraphicsScene_QBaseKeyReleaseEvent((QGraphicsScene*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mousePressEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_press_event(void* self, void* event) {
    QGraphicsScene_MousePressEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnMousePressEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsScene_QBaseMousePressEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseMoveEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_move_event(void* self, void* event) {
    QGraphicsScene_MouseMoveEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnMouseMoveEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseMoveEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseReleaseEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_release_event(void* self, void* event) {
    QGraphicsScene_MouseReleaseEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnMouseReleaseEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseReleaseEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_mouse_double_click_event(void* self, void* event) {
    QGraphicsScene_MouseDoubleClickEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneMouseEvent*) ```
void q_graphicsscene_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnMouseDoubleClickEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsscene_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsScene_QBaseMouseDoubleClickEvent((QGraphicsScene*)self, (QGraphicsSceneMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#wheelEvent)
///
/// ``` QGraphicsScene* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsscene_wheel_event(void* self, void* event) {
    QGraphicsScene_WheelEvent((QGraphicsScene*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsSceneWheelEvent*) ```
void q_graphicsscene_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnWheelEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsscene_qbase_wheel_event(void* self, void* event) {
    QGraphicsScene_QBaseWheelEvent((QGraphicsScene*)self, (QGraphicsSceneWheelEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#inputMethodEvent)
///
/// ``` QGraphicsScene* self, QInputMethodEvent* event ```
void q_graphicsscene_input_method_event(void* self, void* event) {
    QGraphicsScene_InputMethodEvent((QGraphicsScene*)self, (QInputMethodEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QInputMethodEvent*) ```
void q_graphicsscene_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnInputMethodEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QInputMethodEvent* event ```
void q_graphicsscene_qbase_input_method_event(void* self, void* event) {
    QGraphicsScene_QBaseInputMethodEvent((QGraphicsScene*)self, (QInputMethodEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawBackground)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_draw_background(void* self, void* painter, void* rect) {
    QGraphicsScene_DrawBackground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QPainter*, QRectF*) ```
void q_graphicsscene_on_draw_background(void* self, void (*slot)(void*, void*, void*)) {
    QGraphicsScene_OnDrawBackground((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_qbase_draw_background(void* self, void* painter, void* rect) {
    QGraphicsScene_QBaseDrawBackground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#drawForeground)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsScene_DrawForeground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QPainter*, QRectF*) ```
void q_graphicsscene_on_draw_foreground(void* self, void (*slot)(void*, void*, void*)) {
    QGraphicsScene_OnDrawForeground((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* rect ```
void q_graphicsscene_qbase_draw_foreground(void* self, void* painter, void* rect) {
    QGraphicsScene_QBaseDrawForeground((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusNextPrevChild)
///
/// ``` QGraphicsScene* self, bool next ```
bool q_graphicsscene_focus_next_prev_child(void* self, bool next) {
    return QGraphicsScene_FocusNextPrevChild((QGraphicsScene*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, bool) ```
void q_graphicsscene_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsScene_OnFocusNextPrevChild((QGraphicsScene*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScene* self, bool next ```
bool q_graphicsscene_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsScene_QBaseFocusNextPrevChild((QGraphicsScene*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#changed)
///
/// ``` QGraphicsScene* self, QRectF* region[] ```
void q_graphicsscene_changed(void* self, void* region[]) {
    QRectF** region_arr = (QRectF**)region;
    size_t region_len = 0;
    while (region_arr[region_len] != NULL) {
        region_len++;
    }
    libqt_list region_list = {
        .len = region_len,
        .data = {(QRectF*)region},
    };
    QGraphicsScene_Changed((QGraphicsScene*)self, region_list);
}

/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QRectF*[]) ```
void q_graphicsscene_on_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_Connect_Changed((QGraphicsScene*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#sceneRectChanged)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_scene_rect_changed(void* self, void* rect) {
    QGraphicsScene_SceneRectChanged((QGraphicsScene*)self, (QRectF*)rect);
}

/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QRectF*) ```
void q_graphicsscene_on_scene_rect_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_Connect_SceneRectChanged((QGraphicsScene*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#selectionChanged)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_selection_changed(void* self) {
    QGraphicsScene_SelectionChanged((QGraphicsScene*)self);
}

/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*) ```
void q_graphicsscene_on_selection_changed(void* self, void (*slot)(void*)) {
    QGraphicsScene_Connect_SelectionChanged((QGraphicsScene*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#focusItemChanged)
///
/// ``` QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, enum Qt__FocusReason reason ```
void q_graphicsscene_focus_item_changed(void* self, void* newFocus, void* oldFocus, int64_t reason) {
    QGraphicsScene_FocusItemChanged((QGraphicsScene*)self, (QGraphicsItem*)newFocus, (QGraphicsItem*)oldFocus, reason);
}

/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QGraphicsItem*, QGraphicsItem*, enum Qt__FocusReason) ```
void q_graphicsscene_on_focus_item_changed(void* self, void (*slot)(void*, void*, void*, int64_t)) {
    QGraphicsScene_Connect_FocusItemChanged((QGraphicsScene*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsscene_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsScene_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsscene_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsScene_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target ```
void q_graphicsscene_render2(void* self, void* painter, void* target) {
    QGraphicsScene_Render2((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source ```
void q_graphicsscene_render3(void* self, void* painter, void* target, void* source) {
    QGraphicsScene_Render3((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target, (QRectF*)source);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#render)
///
/// ``` QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, enum Qt__AspectRatioMode aspectRatioMode ```
void q_graphicsscene_render4(void* self, void* painter, void* target, void* source, int64_t aspectRatioMode) {
    QGraphicsScene_Render4((QGraphicsScene*)self, (QPainter*)painter, (QRectF*)target, (QRectF*)source, aspectRatioMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items1(void* self, int64_t order) {
    libqt_list _arr = QGraphicsScene_Items1((QGraphicsScene*)self, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items22(void* self, void* pos, int64_t mode) {
    libqt_list _arr = QGraphicsScene_Items22((QGraphicsScene*)self, (QPointF*)pos, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items3(void* self, void* pos, int64_t mode, int64_t order) {
    libqt_list _arr = QGraphicsScene_Items3((QGraphicsScene*)self, (QPointF*)pos, mode, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPointF* pos, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items4(void* self, void* pos, int64_t mode, int64_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items4((QGraphicsScene*)self, (QPointF*)pos, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items23(void* self, void* rect, int64_t mode) {
    libqt_list _arr = QGraphicsScene_Items23((QGraphicsScene*)self, (QRectF*)rect, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items32(void* self, void* rect, int64_t mode, int64_t order) {
    libqt_list _arr = QGraphicsScene_Items32((QGraphicsScene*)self, (QRectF*)rect, mode, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QRectF* rect, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items42(void* self, void* rect, int64_t mode, int64_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items42((QGraphicsScene*)self, (QRectF*)rect, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items25(void* self, void* path, int64_t mode) {
    libqt_list _arr = QGraphicsScene_Items25((QGraphicsScene*)self, (QPainterPath*)path, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items34(void* self, void* path, int64_t mode, int64_t order) {
    libqt_list _arr = QGraphicsScene_Items34((QGraphicsScene*)self, (QPainterPath*)path, mode, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items44(void* self, void* path, int64_t mode, int64_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items44((QGraphicsScene*)self, (QPainterPath*)path, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#items)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, enum Qt__ItemSelectionMode mode, enum Qt__SortOrder order, QTransform* deviceTransform ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_items7(void* self, double x, double y, double w, double h, int64_t mode, int64_t order, void* deviceTransform) {
    libqt_list _arr = QGraphicsScene_Items7((QGraphicsScene*)self, x, y, w, h, mode, order, (QTransform*)deviceTransform);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#collidingItems)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsscene_colliding_items2(void* self, void* item, int64_t mode) {
    libqt_list _arr = QGraphicsScene_CollidingItems2((QGraphicsScene*)self, (QGraphicsItem*)item, mode);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation ```
void q_graphicsscene_set_selection_area2(void* self, void* path, int64_t selectionOperation) {
    QGraphicsScene_SetSelectionArea2((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation, enum Qt__ItemSelectionMode mode ```
void q_graphicsscene_set_selection_area3(void* self, void* path, int64_t selectionOperation, int64_t mode) {
    QGraphicsScene_SetSelectionArea3((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setSelectionArea)
///
/// ``` QGraphicsScene* self, QPainterPath* path, enum Qt__ItemSelectionOperation selectionOperation, enum Qt__ItemSelectionMode mode, QTransform* deviceTransform ```
void q_graphicsscene_set_selection_area4(void* self, void* path, int64_t selectionOperation, int64_t mode, void* deviceTransform) {
    QGraphicsScene_SetSelectionArea4((QGraphicsScene*)self, (QPainterPath*)path, selectionOperation, mode, (QTransform*)deviceTransform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse22(void* self, void* rect, void* pen) {
    return QGraphicsScene_AddEllipse22((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse3(void* self, void* rect, void* pen, void* brush) {
    return QGraphicsScene_AddEllipse3((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, QLineF* line, QPen* pen ```
QGraphicsLineItem* q_graphicsscene_add_line22(void* self, void* line, void* pen) {
    return QGraphicsScene_AddLine22((QGraphicsScene*)self, (QLineF*)line, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QPen* pen ```
QGraphicsPathItem* q_graphicsscene_add_path2(void* self, void* path, void* pen) {
    return QGraphicsScene_AddPath2((QGraphicsScene*)self, (QPainterPath*)path, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addPath)
///
/// ``` QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush ```
QGraphicsPathItem* q_graphicsscene_add_path3(void* self, void* path, void* pen, void* brush) {
    return QGraphicsScene_AddPath3((QGraphicsScene*)self, (QPainterPath*)path, (QPen*)pen, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen ```
QGraphicsRectItem* q_graphicsscene_add_rect22(void* self, void* rect, void* pen) {
    return QGraphicsScene_AddRect22((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush ```
QGraphicsRectItem* q_graphicsscene_add_rect3(void* self, void* rect, void* pen, void* brush) {
    return QGraphicsScene_AddRect3((QGraphicsScene*)self, (QRectF*)rect, (QPen*)pen, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addText)
///
/// ``` QGraphicsScene* self, const char* text, QFont* font ```
QGraphicsTextItem* q_graphicsscene_add_text2(void* self, const char* text, void* font) {
    return QGraphicsScene_AddText2((QGraphicsScene*)self, qstring(text), (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addSimpleText)
///
/// ``` QGraphicsScene* self, const char* text, QFont* font ```
QGraphicsSimpleTextItem* q_graphicsscene_add_simple_text2(void* self, const char* text, void* font) {
    return QGraphicsScene_AddSimpleText2((QGraphicsScene*)self, qstring(text), (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addWidget)
///
/// ``` QGraphicsScene* self, QWidget* widget, int wFlags ```
QGraphicsProxyWidget* q_graphicsscene_add_widget2(void* self, void* widget, int64_t wFlags) {
    return QGraphicsScene_AddWidget2((QGraphicsScene*)self, (QWidget*)widget, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse5(void* self, double x, double y, double w, double h, void* pen) {
    return QGraphicsScene_AddEllipse5((QGraphicsScene*)self, x, y, w, h, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addEllipse)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush ```
QGraphicsEllipseItem* q_graphicsscene_add_ellipse6(void* self, double x, double y, double w, double h, void* pen, void* brush) {
    return QGraphicsScene_AddEllipse6((QGraphicsScene*)self, x, y, w, h, (QPen*)pen, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addLine)
///
/// ``` QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen ```
QGraphicsLineItem* q_graphicsscene_add_line5(void* self, double x1, double y1, double x2, double y2, void* pen) {
    return QGraphicsScene_AddLine5((QGraphicsScene*)self, x1, y1, x2, y2, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen ```
QGraphicsRectItem* q_graphicsscene_add_rect5(void* self, double x, double y, double w, double h, void* pen) {
    return QGraphicsScene_AddRect5((QGraphicsScene*)self, x, y, w, h, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#addRect)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush ```
QGraphicsRectItem* q_graphicsscene_add_rect6(void* self, double x, double y, double w, double h, void* pen, void* brush) {
    return QGraphicsScene_AddRect6((QGraphicsScene*)self, x, y, w, h, (QPen*)pen, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocusItem)
///
/// ``` QGraphicsScene* self, QGraphicsItem* item, enum Qt__FocusReason focusReason ```
void q_graphicsscene_set_focus_item2(void* self, void* item, int64_t focusReason) {
    QGraphicsScene_SetFocusItem2((QGraphicsScene*)self, (QGraphicsItem*)item, focusReason);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#setFocus)
///
/// ``` QGraphicsScene* self, enum Qt__FocusReason focusReason ```
void q_graphicsscene_set_focus1(void* self, int64_t focusReason) {
    QGraphicsScene_SetFocus1((QGraphicsScene*)self, focusReason);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, double x, double y, double w, double h, int layers ```
void q_graphicsscene_invalidate5(void* self, double x, double y, double w, double h, int64_t layers) {
    QGraphicsScene_Invalidate5((QGraphicsScene*)self, x, y, w, h, layers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#update)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_update1(void* self, void* rect) {
    QGraphicsScene_Update1((QGraphicsScene*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, QRectF* rect ```
void q_graphicsscene_invalidate1(void* self, void* rect) {
    QGraphicsScene_Invalidate1((QGraphicsScene*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscene.html#invalidate)
///
/// ``` QGraphicsScene* self, QRectF* rect, int layers ```
void q_graphicsscene_invalidate22(void* self, void* rect, int64_t layers) {
    QGraphicsScene_Invalidate22((QGraphicsScene*)self, (QRectF*)rect, layers);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsScene* self ```
const char* q_graphicsscene_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsScene* self, const char* name ```
void q_graphicsscene_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsScene* self ```
bool q_graphicsscene_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsScene* self, bool b ```
bool q_graphicsscene_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsScene* self ```
QThread* q_graphicsscene_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsScene* self, QThread* thread ```
void q_graphicsscene_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScene* self, int interval ```
int32_t q_graphicsscene_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsScene* self, int id ```
void q_graphicsscene_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsScene* self ```
libqt_list /* of QObject* */ q_graphicsscene_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsScene* self, QObject* parent ```
void q_graphicsscene_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsScene* self, QObject* filterObj ```
void q_graphicsscene_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsScene* self, QObject* obj ```
void q_graphicsscene_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsscene_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScene* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsscene_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsscene_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsscene_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsScene* self, const char* name, QVariant* value ```
bool q_graphicsscene_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsScene* self, const char* name ```
QVariant* q_graphicsscene_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsScene* self ```
const char** q_graphicsscene_dynamic_property_names(void* self) {
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
/// ``` QGraphicsScene* self ```
QBindingStorage* q_graphicsscene_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScene* self ```
QBindingStorage* q_graphicsscene_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsScene* self, void (*slot)(QObject*) ```
void q_graphicsscene_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsScene* self, const char* classname ```
bool q_graphicsscene_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScene* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsscene_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscene_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScene* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscene_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScene* self, QObject* param1 ```
void q_graphicsscene_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsScene* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsscene_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QTimerEvent* event ```
void q_graphicsscene_timer_event(void* self, void* event) {
    QGraphicsScene_TimerEvent((QGraphicsScene*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QTimerEvent* event ```
void q_graphicsscene_qbase_timer_event(void* self, void* event) {
    QGraphicsScene_QBaseTimerEvent((QGraphicsScene*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QTimerEvent*) ```
void q_graphicsscene_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnTimerEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QChildEvent* event ```
void q_graphicsscene_child_event(void* self, void* event) {
    QGraphicsScene_ChildEvent((QGraphicsScene*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QChildEvent* event ```
void q_graphicsscene_qbase_child_event(void* self, void* event) {
    QGraphicsScene_QBaseChildEvent((QGraphicsScene*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QChildEvent*) ```
void q_graphicsscene_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnChildEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QEvent* event ```
void q_graphicsscene_custom_event(void* self, void* event) {
    QGraphicsScene_CustomEvent((QGraphicsScene*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QEvent* event ```
void q_graphicsscene_qbase_custom_event(void* self, void* event) {
    QGraphicsScene_QBaseCustomEvent((QGraphicsScene*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QEvent*) ```
void q_graphicsscene_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnCustomEvent((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_connect_notify(void* self, void* signal) {
    QGraphicsScene_ConnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_qbase_connect_notify(void* self, void* signal) {
    QGraphicsScene_QBaseConnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnConnectNotify((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_disconnect_notify(void* self, void* signal) {
    QGraphicsScene_DisconnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
void q_graphicsscene_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsScene_QBaseDisconnectNotify((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, void (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsScene_OnDisconnectNotify((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_sender(void* self) {
    return QGraphicsScene_Sender((QGraphicsScene*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self ```
QObject* q_graphicsscene_qbase_sender(void* self) {
    return QGraphicsScene_QBaseSender((QGraphicsScene*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, QObject* (*slot)() ```
void q_graphicsscene_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsScene_OnSender((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_sender_signal_index(void* self) {
    return QGraphicsScene_SenderSignalIndex((QGraphicsScene*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self ```
int32_t q_graphicsscene_qbase_sender_signal_index(void* self) {
    return QGraphicsScene_QBaseSenderSignalIndex((QGraphicsScene*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, int32_t (*slot)() ```
void q_graphicsscene_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsScene_OnSenderSignalIndex((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, const char* signal ```
int32_t q_graphicsscene_receivers(void* self, const char* signal) {
    return QGraphicsScene_Receivers((QGraphicsScene*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, const char* signal ```
int32_t q_graphicsscene_qbase_receivers(void* self, const char* signal) {
    return QGraphicsScene_QBaseReceivers((QGraphicsScene*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, int32_t (*slot)(QGraphicsScene*, const char*) ```
void q_graphicsscene_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsScene_OnReceivers((QGraphicsScene*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
bool q_graphicsscene_is_signal_connected(void* self, void* signal) {
    return QGraphicsScene_IsSignalConnected((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScene* self, QMetaMethod* signal ```
bool q_graphicsscene_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsScene_QBaseIsSignalConnected((QGraphicsScene*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScene* self, bool (*slot)(QGraphicsScene*, QMetaMethod*) ```
void q_graphicsscene_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsScene_OnIsSignalConnected((QGraphicsScene*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsScene* self ```
void q_graphicsscene_delete(void* self) {
    QGraphicsScene_Delete((QGraphicsScene*)(self));
}