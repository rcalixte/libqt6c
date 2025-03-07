#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsitem.hpp"
#include "libqgraphicslayout.hpp"
#include "libqgraphicslayoutitem.hpp"
#include "libqgraphicsscene.hpp"
#include "libqgraphicstransform.hpp"
#include "libqkeysequence.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpainterpath.hpp"
#include "libqpalette.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicswidget.hpp"
#include "libqgraphicswidget.h"

/// https://doc.qt.io/qt-6/qgraphicswidget.html

/// q_graphicswidget_new constructs a new QGraphicsWidget object.
///
///
QGraphicsWidget* q_graphicswidget_new() {
    return QGraphicsWidget_new();
}

/// q_graphicswidget_new2 constructs a new QGraphicsWidget object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsWidget* q_graphicswidget_new2(void* parent) {
    return QGraphicsWidget_new2((QGraphicsItem*)parent);
}

/// q_graphicswidget_new3 constructs a new QGraphicsWidget object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QGraphicsWidget* q_graphicswidget_new3(void* parent, int64_t wFlags) {
    return QGraphicsWidget_new3((QGraphicsItem*)parent, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsWidget* self ```
QMetaObject* q_graphicswidget_meta_object(void* self) {
    return QGraphicsWidget_MetaObject((QGraphicsWidget*)self);
}

/// ``` QGraphicsWidget* self, const char* param1 ```
void* q_graphicswidget_metacast(void* self, const char* param1) {
    return QGraphicsWidget_Metacast((QGraphicsWidget*)self, param1);
}

/// ``` QGraphicsWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicswidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsWidget_Metacall((QGraphicsWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)(QGraphicsWidget*, enum QMetaObject__Call, int, void*) ```
void q_graphicswidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsWidget_OnMetacall((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicswidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsWidget_QBaseMetacall((QGraphicsWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicswidget_tr(const char* s) {
    libqt_string _str = QGraphicsWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QGraphicsWidget* self ```
QGraphicsLayout* q_graphicswidget_layout(void* self) {
    return QGraphicsWidget_Layout((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QGraphicsWidget* self, QGraphicsLayout* layout ```
void q_graphicswidget_set_layout(void* self, void* layout) {
    QGraphicsWidget_SetLayout((QGraphicsWidget*)self, (QGraphicsLayout*)layout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_adjust_size(void* self) {
    QGraphicsWidget_AdjustSize((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_layout_direction(void* self) {
    return QGraphicsWidget_LayoutDirection((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QGraphicsWidget* self, enum Qt__LayoutDirection direction ```
void q_graphicswidget_set_layout_direction(void* self, int64_t direction) {
    QGraphicsWidget_SetLayoutDirection((QGraphicsWidget*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_layout_direction(void* self) {
    QGraphicsWidget_UnsetLayoutDirection((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QGraphicsWidget* self ```
QStyle* q_graphicswidget_style(void* self) {
    return QGraphicsWidget_Style((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QGraphicsWidget* self, QStyle* style ```
void q_graphicswidget_set_style(void* self, void* style) {
    QGraphicsWidget_SetStyle((QGraphicsWidget*)self, (QStyle*)style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QGraphicsWidget* self ```
QFont* q_graphicswidget_font(void* self) {
    return QGraphicsWidget_Font((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QGraphicsWidget* self, QFont* font ```
void q_graphicswidget_set_font(void* self, void* font) {
    QGraphicsWidget_SetFont((QGraphicsWidget*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QGraphicsWidget* self ```
QPalette* q_graphicswidget_palette(void* self) {
    return QGraphicsWidget_Palette((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QGraphicsWidget* self, QPalette* palette ```
void q_graphicswidget_set_palette(void* self, void* palette) {
    QGraphicsWidget_SetPalette((QGraphicsWidget*)self, (QPalette*)palette);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_auto_fill_background(void* self) {
    return QGraphicsWidget_AutoFillBackground((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_auto_fill_background(void* self, bool enabled) {
    QGraphicsWidget_SetAutoFillBackground((QGraphicsWidget*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_resize(void* self, void* size) {
    QGraphicsWidget_Resize((QGraphicsWidget*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_resize2(void* self, double w, double h) {
    QGraphicsWidget_Resize2((QGraphicsWidget*)self, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_size(void* self) {
    return QGraphicsWidget_Size((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_set_geometry(void* self, void* rect) {
    QGraphicsWidget_SetGeometry((QGraphicsWidget*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QRectF*) ```
void q_graphicswidget_on_set_geometry(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnSetGeometry((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_qbase_set_geometry(void* self, void* rect) {
    QGraphicsWidget_QBaseSetGeometry((QGraphicsWidget*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
void q_graphicswidget_set_geometry2(void* self, double x, double y, double w, double h) {
    QGraphicsWidget_SetGeometry2((QGraphicsWidget*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_rect(void* self) {
    return QGraphicsWidget_Rect((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsWidget* self, double left, double top, double right, double bottom ```
void q_graphicswidget_set_contents_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsWidget* self, QMarginsF* margins ```
void q_graphicswidget_set_contents_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetContentsMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, double*, double*, double*, double*) ```
void q_graphicswidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*)) {
    QGraphicsWidget_OnGetContentsMargins((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_QBaseGetContentsMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, double left, double top, double right, double bottom ```
void q_graphicswidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom) {
    QGraphicsWidget_SetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, QMarginsF* margins ```
void q_graphicswidget_set_window_frame_margins_with_margins(void* self, void* margins) {
    QGraphicsWidget_SetWindowFrameMarginsWithMargins((QGraphicsWidget*)self, (QMarginsF*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QGraphicsWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicswidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom) {
    QGraphicsWidget_GetWindowFrameMargins((QGraphicsWidget*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_window_frame_margins(void* self) {
    QGraphicsWidget_UnsetWindowFrameMargins((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_window_frame_geometry(void* self) {
    return QGraphicsWidget_WindowFrameGeometry((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_window_frame_rect(void* self) {
    return QGraphicsWidget_WindowFrameRect((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_window_flags(void* self) {
    return QGraphicsWidget_WindowFlags((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_window_type(void* self) {
    return QGraphicsWidget_WindowType((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QGraphicsWidget* self, int wFlags ```
void q_graphicswidget_set_window_flags(void* self, int64_t wFlags) {
    QGraphicsWidget_SetWindowFlags((QGraphicsWidget*)self, wFlags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_active_window(void* self) {
    return QGraphicsWidget_IsActiveWindow((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QGraphicsWidget* self, const char* title ```
void q_graphicswidget_set_window_title(void* self, const char* title) {
    QGraphicsWidget_SetWindowTitle((QGraphicsWidget*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_window_title(void* self) {
    libqt_string _str = QGraphicsWidget_WindowTitle((QGraphicsWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_focus_policy(void* self) {
    return QGraphicsWidget_FocusPolicy((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QGraphicsWidget* self, enum Qt__FocusPolicy policy ```
void q_graphicswidget_set_focus_policy(void* self, int64_t policy) {
    QGraphicsWidget_SetFocusPolicy((QGraphicsWidget*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_graphicswidget_set_tab_order(void* first, void* second) {
    QGraphicsWidget_SetTabOrder((QGraphicsWidget*)first, (QGraphicsWidget*)second);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_focus_widget(void* self) {
    return QGraphicsWidget_FocusWidget((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsWidget* self, QKeySequence* sequence ```
int32_t q_graphicswidget_grab_shortcut(void* self, void* sequence) {
    return QGraphicsWidget_GrabShortcut((QGraphicsWidget*)self, (QKeySequence*)sequence);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_release_shortcut(void* self, int id) {
    QGraphicsWidget_ReleaseShortcut((QGraphicsWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_set_shortcut_enabled(void* self, int id) {
    QGraphicsWidget_SetShortcutEnabled((QGraphicsWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_set_shortcut_auto_repeat(void* self, int id) {
    QGraphicsWidget_SetShortcutAutoRepeat((QGraphicsWidget*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QGraphicsWidget* self, QAction* action ```
void q_graphicswidget_add_action(void* self, void* action) {
    QGraphicsWidget_AddAction((QGraphicsWidget*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QGraphicsWidget* self, QAction* actions[] ```
void q_graphicswidget_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_AddActions((QGraphicsWidget*)self, actions_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QGraphicsWidget* self, QAction* before, QAction* actions[] ```
void q_graphicswidget_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QGraphicsWidget_InsertActions((QGraphicsWidget*)self, (QAction*)before, actions_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QGraphicsWidget* self, QAction* before, QAction* action ```
void q_graphicswidget_insert_action(void* self, void* before, void* action) {
    QGraphicsWidget_InsertAction((QGraphicsWidget*)self, (QAction*)before, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QGraphicsWidget* self, QAction* action ```
void q_graphicswidget_remove_action(void* self, void* action) {
    QGraphicsWidget_RemoveAction((QGraphicsWidget*)self, (QAction*)action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QAction* */ q_graphicswidget_actions(void* self) {
    libqt_list _arr = QGraphicsWidget_Actions((QGraphicsWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute ```
void q_graphicswidget_set_attribute(void* self, int64_t attribute) {
    QGraphicsWidget_SetAttribute((QGraphicsWidget*)self, attribute);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute ```
bool q_graphicswidget_test_attribute(void* self, int64_t attribute) {
    return QGraphicsWidget_TestAttribute((QGraphicsWidget*)self, attribute);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#type)
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_type(void* self) {
    return QGraphicsWidget_Type((QGraphicsWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)() ```
void q_graphicswidget_on_type(void* self, int32_t (*slot)()) {
    QGraphicsWidget_OnType((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_qbase_type(void* self) {
    return QGraphicsWidget_QBaseType((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paint)
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_Paint((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicswidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsWidget_OnPaint((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_QBasePaint((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_PaintWindowFrame((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicswidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsWidget_OnPaintWindowFrame((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicswidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget) {
    QGraphicsWidget_QBasePaintWindowFrame((QGraphicsWidget*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_bounding_rect(void* self) {
    return QGraphicsWidget_BoundingRect((QGraphicsWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QRectF* (*slot)() ```
void q_graphicswidget_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsWidget_OnBoundingRect((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_qbase_bounding_rect(void* self) {
    return QGraphicsWidget_QBaseBoundingRect((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_shape(void* self) {
    return QGraphicsWidget_Shape((QGraphicsWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QPainterPath* (*slot)() ```
void q_graphicswidget_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsWidget_OnShape((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_qbase_shape(void* self) {
    return QGraphicsWidget_QBaseShape((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_geometry_changed(void* self) {
    QGraphicsWidget_GeometryChanged((QGraphicsWidget*)self);
}

/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicswidget_on_geometry_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_GeometryChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_layout_changed(void* self) {
    QGraphicsWidget_LayoutChanged((QGraphicsWidget*)self);
}

/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicswidget_on_layout_changed(void* self, void (*slot)(void*)) {
    QGraphicsWidget_Connect_LayoutChanged((QGraphicsWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_close(void* self) {
    return QGraphicsWidget_Close((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// ``` QGraphicsWidget* self, QStyleOption* option ```
void q_graphicswidget_init_style_option(void* self, void* option) {
    QGraphicsWidget_InitStyleOption((QGraphicsWidget*)self, (QStyleOption*)option);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QStyleOption*) ```
void q_graphicswidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnInitStyleOption((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QStyleOption* option ```
void q_graphicswidget_qbase_init_style_option(void* self, void* option) {
    QGraphicsWidget_QBaseInitStyleOption((QGraphicsWidget*)self, (QStyleOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsWidget_SizeHint((QGraphicsWidget*)self, which, (QSizeF*)constraint);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QSizeF* (*slot)(QGraphicsWidget*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicswidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnSizeHint((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_qbase_size_hint(void* self, int64_t which, void* constraint) {
    return QGraphicsWidget_QBaseSizeHint((QGraphicsWidget*)self, which, (QSizeF*)constraint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update_geometry(void* self) {
    QGraphicsWidget_UpdateGeometry((QGraphicsWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_update_geometry(void* self, void (*slot)()) {
    QGraphicsWidget_OnUpdateGeometry((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_update_geometry(void* self) {
    QGraphicsWidget_QBaseUpdateGeometry((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#itemChange)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicswidget_item_change(void* self, int64_t change, void* value) {
    return QGraphicsWidget_ItemChange((QGraphicsWidget*)self, change, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicswidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnItemChange((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicswidget_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsWidget_QBaseItemChange((QGraphicsWidget*)self, change, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// ``` QGraphicsWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicswidget_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsWidget_PropertyChange((QGraphicsWidget*)self, qstring(propertyName), (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, const char*, QVariant*) ```
void q_graphicswidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*)) {
    QGraphicsWidget_OnPropertyChange((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicswidget_qbase_property_change(void* self, const char* propertyName, void* value) {
    return QGraphicsWidget_QBasePropertyChange((QGraphicsWidget*)self, qstring(propertyName), (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_scene_event(void* self, void* event) {
    return QGraphicsWidget_SceneEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnSceneEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_qbase_scene_event(void* self, void* event) {
    return QGraphicsWidget_QBaseSceneEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// ``` QGraphicsWidget* self, QEvent* e ```
bool q_graphicswidget_window_frame_event(void* self, void* e) {
    return QGraphicsWidget_WindowFrameEvent((QGraphicsWidget*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_window_frame_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnWindowFrameEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* e ```
bool q_graphicswidget_qbase_window_frame_event(void* self, void* e) {
    return QGraphicsWidget_QBaseWindowFrameEvent((QGraphicsWidget*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
int64_t q_graphicswidget_window_frame_section_at(void* self, void* pos) {
    return QGraphicsWidget_WindowFrameSectionAt((QGraphicsWidget*)self, (QPointF*)pos);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, int64_t (*slot)(QGraphicsWidget*, QPointF*) ```
void q_graphicswidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*)) {
    QGraphicsWidget_OnWindowFrameSectionAt((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
int64_t q_graphicswidget_qbase_window_frame_section_at(void* self, void* pos) {
    return QGraphicsWidget_QBaseWindowFrameSectionAt((QGraphicsWidget*)self, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#event)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_event(void* self, void* event) {
    return QGraphicsWidget_Event((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
bool q_graphicswidget_qbase_event(void* self, void* event) {
    return QGraphicsWidget_QBaseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_change_event(void* self, void* event) {
    QGraphicsWidget_ChangeEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnChangeEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_change_event(void* self, void* event) {
    QGraphicsWidget_QBaseChangeEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// ``` QGraphicsWidget* self, QCloseEvent* event ```
void q_graphicswidget_close_event(void* self, void* event) {
    QGraphicsWidget_CloseEvent((QGraphicsWidget*)self, (QCloseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QCloseEvent*) ```
void q_graphicswidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnCloseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QCloseEvent* event ```
void q_graphicswidget_qbase_close_event(void* self, void* event) {
    QGraphicsWidget_QBaseCloseEvent((QGraphicsWidget*)self, (QCloseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusInEvent)
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_focus_in_event(void* self, void* event) {
    QGraphicsWidget_FocusInEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QFocusEvent*) ```
void q_graphicswidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnFocusInEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_qbase_focus_in_event(void* self, void* event) {
    QGraphicsWidget_QBaseFocusInEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusNextPrevChild)
///
/// ``` QGraphicsWidget* self, bool next ```
bool q_graphicswidget_focus_next_prev_child(void* self, bool next) {
    return QGraphicsWidget_FocusNextPrevChild((QGraphicsWidget*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, bool) ```
void q_graphicswidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QGraphicsWidget_OnFocusNextPrevChild((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, bool next ```
bool q_graphicswidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QGraphicsWidget_QBaseFocusNextPrevChild((QGraphicsWidget*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusOutEvent)
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_focus_out_event(void* self, void* event) {
    QGraphicsWidget_FocusOutEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QFocusEvent*) ```
void q_graphicswidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnFocusOutEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QFocusEvent* event ```
void q_graphicswidget_qbase_focus_out_event(void* self, void* event) {
    QGraphicsWidget_QBaseFocusOutEvent((QGraphicsWidget*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hideEvent)
///
/// ``` QGraphicsWidget* self, QHideEvent* event ```
void q_graphicswidget_hide_event(void* self, void* event) {
    QGraphicsWidget_HideEvent((QGraphicsWidget*)self, (QHideEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QHideEvent*) ```
void q_graphicswidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHideEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QHideEvent* event ```
void q_graphicswidget_qbase_hide_event(void* self, void* event) {
    QGraphicsWidget_QBaseHideEvent((QGraphicsWidget*)self, (QHideEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicswidget_move_event(void* self, void* event) {
    QGraphicsWidget_MoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMoveEvent*) ```
void q_graphicswidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicswidget_qbase_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_polish_event(void* self) {
    QGraphicsWidget_PolishEvent((QGraphicsWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_polish_event(void* self, void (*slot)()) {
    QGraphicsWidget_OnPolishEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_polish_event(void* self) {
    QGraphicsWidget_QBasePolishEvent((QGraphicsWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resizeEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicswidget_resize_event(void* self, void* event) {
    QGraphicsWidget_ResizeEvent((QGraphicsWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneResizeEvent*) ```
void q_graphicswidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnResizeEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicswidget_qbase_resize_event(void* self, void* event) {
    QGraphicsWidget_QBaseResizeEvent((QGraphicsWidget*)self, (QGraphicsSceneResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#showEvent)
///
/// ``` QGraphicsWidget* self, QShowEvent* event ```
void q_graphicswidget_show_event(void* self, void* event) {
    QGraphicsWidget_ShowEvent((QGraphicsWidget*)self, (QShowEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QShowEvent*) ```
void q_graphicswidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnShowEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QShowEvent* event ```
void q_graphicswidget_qbase_show_event(void* self, void* event) {
    QGraphicsWidget_QBaseShowEvent((QGraphicsWidget*)self, (QShowEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverMoveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_move_event(void* self, void* event) {
    QGraphicsWidget_HoverMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#hoverLeaveEvent)
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_leave_event(void* self, void* event) {
    QGraphicsWidget_HoverLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverLeaveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabMouseEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_grab_mouse_event(void* self, void* event) {
    QGraphicsWidget_GrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnGrabMouseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_grab_mouse_event(void* self, void* event) {
    QGraphicsWidget_QBaseGrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabMouseEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_ungrab_mouse_event(void* self, void* event) {
    QGraphicsWidget_UngrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnUngrabMouseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_ungrab_mouse_event(void* self, void* event) {
    QGraphicsWidget_QBaseUngrabMouseEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_grab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_GrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnGrabKeyboardEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_grab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_QBaseGrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_UngrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnUngrabKeyboardEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_ungrab_keyboard_event(void* self, void* event) {
    QGraphicsWidget_QBaseUngrabKeyboardEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicswidget_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicswidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsWidget* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_graphicswidget_grab_shortcut2(void* self, void* sequence, int64_t context) {
    return QGraphicsWidget_GrabShortcut2((QGraphicsWidget*)self, (QKeySequence*)sequence, context);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsWidget* self, int id, bool enabled ```
void q_graphicswidget_set_shortcut_enabled2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutEnabled2((QGraphicsWidget*)self, id, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsWidget* self, int id, bool enabled ```
void q_graphicswidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled) {
    QGraphicsWidget_SetShortcutAutoRepeat2((QGraphicsWidget*)self, id, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsWidget* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_graphicswidget_set_attribute2(void* self, int64_t attribute, bool on) {
    QGraphicsWidget_SetAttribute2((QGraphicsWidget*)self, attribute, on);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal ```
void q_graphicswidget_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal ```
void q_graphicswidget_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicswidget_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicswidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsWidget* self, const char* name ```
void q_graphicswidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsWidget* self, bool b ```
bool q_graphicswidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsWidget* self ```
QThread* q_graphicswidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsWidget* self, QThread* thread ```
void q_graphicswidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsWidget* self, int interval ```
int32_t q_graphicswidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsWidget* self, int id ```
void q_graphicswidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QObject* */ q_graphicswidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsWidget* self, QObject* parent ```
void q_graphicswidget_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsWidget* self, QObject* filterObj ```
void q_graphicswidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsWidget* self, QObject* obj ```
void q_graphicswidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicswidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicswidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicswidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicswidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsWidget* self, const char* name, QVariant* value ```
bool q_graphicswidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsWidget* self, const char* name ```
QVariant* q_graphicswidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsWidget* self ```
const char** q_graphicswidget_dynamic_property_names(void* self) {
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
/// ``` QGraphicsWidget* self ```
QBindingStorage* q_graphicswidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsWidget* self ```
QBindingStorage* q_graphicswidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QObject*) ```
void q_graphicswidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsWidget* self, const char* classname ```
bool q_graphicswidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicswidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicswidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicswidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsWidget* self, QObject* param1 ```
void q_graphicswidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsWidget* self, void (*slot)(QObject*, QObject*) ```
void q_graphicswidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsWidget* self ```
QGraphicsScene* q_graphicswidget_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsWidget* self ```
QGraphicsObject* q_graphicswidget_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsWidget* self ```
QGraphicsWidget* q_graphicswidget_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* parent ```
void q_graphicswidget_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsWidget* self ```
QGraphicsObject* q_graphicswidget_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsWidget* self ```
QGraphicsObject* q_graphicswidget_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItemGroup* q_graphicswidget_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsWidget* self, QGraphicsItemGroup* group ```
void q_graphicswidget_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicswidget_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsWidget* self, int flags ```
void q_graphicswidget_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicswidget_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicswidget_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsWidget* self ```
const char* q_graphicswidget_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsWidget* self, const char* toolTip ```
void q_graphicswidget_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsWidget* self ```
QCursor* q_graphicswidget_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsWidget* self, QCursor* cursor ```
void q_graphicswidget_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* parent ```
bool q_graphicswidget_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsWidget* self, bool visible ```
void q_graphicswidget_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsWidget* self, bool selected ```
void q_graphicswidget_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsWidget* self, bool on ```
void q_graphicswidget_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsWidget* self, double opacity ```
void q_graphicswidget_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsWidget* self ```
QGraphicsEffect* q_graphicswidget_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsWidget* self, QGraphicsEffect* effect ```
void q_graphicswidget_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsWidget* self, int buttons ```
void q_graphicswidget_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsWidget* self, bool enabled ```
void q_graphicswidget_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsWidget* self, bool active ```
void q_graphicswidget_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsWidget* self, double x ```
void q_graphicswidget_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsWidget* self, double y ```
void q_graphicswidget_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsWidget* self, QPointF* pos ```
void q_graphicswidget_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsWidget* self, double x, double y ```
void q_graphicswidget_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsWidget* self, double dx, double dy ```
void q_graphicswidget_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
void q_graphicswidget_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsWidget* self ```
QTransform* q_graphicswidget_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsWidget* self ```
QTransform* q_graphicswidget_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsWidget* self, QTransform* viewportTransform ```
QTransform* q_graphicswidget_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other ```
QTransform* q_graphicswidget_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsWidget* self, QTransform* matrix ```
void q_graphicswidget_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsWidget* self, double angle ```
void q_graphicswidget_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsWidget* self, double scale ```
void q_graphicswidget_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicswidget_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsWidget* self, QGraphicsTransform* transformations[] ```
void q_graphicswidget_set_transformations(void* self, void* transformations[]) {
    QGraphicsTransform** transformations_arr = (QGraphicsTransform**)transformations;
    size_t transformations_len = 0;
    while (transformations_arr[transformations_len] != NULL) {
        transformations_len++;
    }
    libqt_list transformations_list = {
        .len = transformations_len,
        .data = {(QGraphicsTransform*)transformations},
    };
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations_list);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsWidget* self ```
QPointF* q_graphicswidget_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsWidget* self, QPointF* origin ```
void q_graphicswidget_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsWidget* self, double ax, double ay ```
void q_graphicswidget_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsWidget* self, double z ```
void q_graphicswidget_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* sibling ```
void q_graphicswidget_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
bool q_graphicswidget_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsWidget* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicswidget_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsWidget* self, double granularity ```
void q_graphicswidget_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self, double x, double y, double width, double height ```
void q_graphicswidget_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsWidget* self, double dx, double dy ```
void q_graphicswidget_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicswidget_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicswidget_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, QPointF* point ```
QPointF* q_graphicswidget_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
QRectF* q_graphicswidget_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, QPainterPath* path ```
QPainterPath* q_graphicswidget_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicswidget_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicswidget_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsWidget* self, double x, double y ```
QPointF* q_graphicswidget_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicswidget_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* child ```
bool q_graphicswidget_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicswidget_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsWidget* self, int key ```
QVariant* q_graphicswidget_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsWidget* self, int key, QVariant* value ```
void q_graphicswidget_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsWidget* self ```
int64_t q_graphicswidget_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsWidget* self, int hints ```
void q_graphicswidget_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* filterItem ```
void q_graphicswidget_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* filterItem ```
void q_graphicswidget_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicswidget_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicswidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsWidget* self, enum Qt__FocusReason focusReason ```
void q_graphicswidget_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect, int xmargin ```
void q_graphicswidget_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicswidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h, int xmargin ```
void q_graphicswidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsWidget* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicswidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicswidget_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsWidget* self, QTransform* matrix, bool combine ```
void q_graphicswidget_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsWidget* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicswidget_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
bool q_graphicswidget_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsWidget* self, QRectF* rect ```
void q_graphicswidget_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsWidget* self, double dx, double dy, QRectF* rect ```
void q_graphicswidget_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, QSizePolicy* policy ```
void q_graphicswidget_set_size_policy(void* self, void* policy) {
    QGraphicsLayoutItem_SetSizePolicy((QGraphicsLayoutItem*)self, (QSizePolicy*)policy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicswidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy) {
    QGraphicsLayoutItem_SetSizePolicy2((QGraphicsLayoutItem*)self, hPolicy, vPolicy);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsWidget* self ```
QSizePolicy* q_graphicswidget_size_policy(void* self) {
    return QGraphicsLayoutItem_SizePolicy((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_minimum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMinimumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_minimum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMinimumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_minimum_size(void* self) {
    return QGraphicsLayoutItem_MinimumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_minimum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMinimumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_minimum_width(void* self) {
    return QGraphicsLayoutItem_MinimumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_minimum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMinimumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_minimum_height(void* self) {
    return QGraphicsLayoutItem_MinimumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_preferred_size(void* self, void* size) {
    QGraphicsLayoutItem_SetPreferredSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_preferred_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetPreferredSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_preferred_size(void* self) {
    return QGraphicsLayoutItem_PreferredSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_preferred_width(void* self, double width) {
    QGraphicsLayoutItem_SetPreferredWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_preferred_width(void* self) {
    return QGraphicsLayoutItem_PreferredWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_preferred_height(void* self, double height) {
    QGraphicsLayoutItem_SetPreferredHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_preferred_height(void* self) {
    return QGraphicsLayoutItem_PreferredHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsWidget* self, QSizeF* size ```
void q_graphicswidget_set_maximum_size(void* self, void* size) {
    QGraphicsLayoutItem_SetMaximumSize((QGraphicsLayoutItem*)self, (QSizeF*)size);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsWidget* self, double w, double h ```
void q_graphicswidget_set_maximum_size2(void* self, double w, double h) {
    QGraphicsLayoutItem_SetMaximumSize2((QGraphicsLayoutItem*)self, w, h);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsWidget* self ```
QSizeF* q_graphicswidget_maximum_size(void* self) {
    return QGraphicsLayoutItem_MaximumSize((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsWidget* self, double width ```
void q_graphicswidget_set_maximum_width(void* self, double width) {
    QGraphicsLayoutItem_SetMaximumWidth((QGraphicsLayoutItem*)self, width);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_maximum_width(void* self) {
    return QGraphicsLayoutItem_MaximumWidth((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsWidget* self, double height ```
void q_graphicswidget_set_maximum_height(void* self, double height) {
    QGraphicsLayoutItem_SetMaximumHeight((QGraphicsLayoutItem*)self, height);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsWidget* self ```
double q_graphicswidget_maximum_height(void* self) {
    return QGraphicsLayoutItem_MaximumHeight((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_geometry(void* self) {
    return QGraphicsLayoutItem_Geometry((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsWidget* self ```
QRectF* q_graphicswidget_contents_rect(void* self) {
    return QGraphicsLayoutItem_ContentsRect((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which ```
QSizeF* q_graphicswidget_effective_size_hint(void* self, int64_t which) {
    return QGraphicsLayoutItem_EffectiveSizeHint((QGraphicsLayoutItem*)self, which);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsLayoutItem* q_graphicswidget_parent_layout_item(void* self) {
    return QGraphicsLayoutItem_ParentLayoutItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsWidget* self, QGraphicsLayoutItem* parent ```
void q_graphicswidget_set_parent_layout_item(void* self, void* parent) {
    QGraphicsLayoutItem_SetParentLayoutItem((QGraphicsLayoutItem*)self, (QGraphicsLayoutItem*)parent);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_layout(void* self) {
    return QGraphicsLayoutItem_IsLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsWidget* self ```
QGraphicsItem* q_graphicswidget_graphics_item(void* self) {
    return QGraphicsLayoutItem_GraphicsItem((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_owned_by_layout(void* self) {
    return QGraphicsLayoutItem_OwnedByLayout((QGraphicsLayoutItem*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicswidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType) {
    QGraphicsLayoutItem_SetSizePolicy3((QGraphicsLayoutItem*)self, hPolicy, vPolicy, controlType);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicswidget_effective_size_hint2(void* self, int64_t which, void* constraint) {
    return QGraphicsLayoutItem_EffectiveSizeHint2((QGraphicsLayoutItem*)self, which, (QSizeF*)constraint);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* watched, QEvent* event ```
bool q_graphicswidget_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_EventFilter((QGraphicsWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* watched, QEvent* event ```
bool q_graphicswidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_QBaseEventFilter((QGraphicsWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QObject*, QEvent*) ```
void q_graphicswidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsWidget_OnEventFilter((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QTimerEvent* event ```
void q_graphicswidget_timer_event(void* self, void* event) {
    QGraphicsWidget_TimerEvent((QGraphicsWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QTimerEvent* event ```
void q_graphicswidget_qbase_timer_event(void* self, void* event) {
    QGraphicsWidget_QBaseTimerEvent((QGraphicsWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QTimerEvent*) ```
void q_graphicswidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnTimerEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QChildEvent* event ```
void q_graphicswidget_child_event(void* self, void* event) {
    QGraphicsWidget_ChildEvent((QGraphicsWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QChildEvent* event ```
void q_graphicswidget_qbase_child_event(void* self, void* event) {
    QGraphicsWidget_QBaseChildEvent((QGraphicsWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QChildEvent*) ```
void q_graphicswidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnChildEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_custom_event(void* self, void* event) {
    QGraphicsWidget_CustomEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QEvent* event ```
void q_graphicswidget_qbase_custom_event(void* self, void* event) {
    QGraphicsWidget_QBaseCustomEvent((QGraphicsWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QEvent*) ```
void q_graphicswidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnCustomEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_connect_notify(void* self, void* signal) {
    QGraphicsWidget_ConnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_qbase_connect_notify(void* self, void* signal) {
    QGraphicsWidget_QBaseConnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnConnectNotify((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_disconnect_notify(void* self, void* signal) {
    QGraphicsWidget_DisconnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
void q_graphicswidget_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsWidget_QBaseDisconnectNotify((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDisconnectNotify((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, int phase ```
void q_graphicswidget_advance(void* self, int phase) {
    QGraphicsWidget_Advance((QGraphicsWidget*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int phase ```
void q_graphicswidget_qbase_advance(void* self, int phase) {
    QGraphicsWidget_QBaseAdvance((QGraphicsWidget*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, int) ```
void q_graphicswidget_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsWidget_OnAdvance((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QPointF* point ```
bool q_graphicswidget_contains(void* self, void* point) {
    return QGraphicsWidget_Contains((QGraphicsWidget*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPointF* point ```
bool q_graphicswidget_qbase_contains(void* self, void* point) {
    return QGraphicsWidget_QBaseContains((QGraphicsWidget*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QPointF*) ```
void q_graphicswidget_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnContains((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsWidget_CollidesWithItem((QGraphicsWidget*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsWidget_QBaseCollidesWithItem((QGraphicsWidget*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicswidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsWidget_OnCollidesWithItem((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsWidget_CollidesWithPath((QGraphicsWidget*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicswidget_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsWidget_QBaseCollidesWithPath((QGraphicsWidget*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicswidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsWidget_OnCollidesWithPath((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
bool q_graphicswidget_is_obscured_by(void* self, void* item) {
    return QGraphicsWidget_IsObscuredBy((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
bool q_graphicswidget_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsWidget_QBaseIsObscuredBy((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*) ```
void q_graphicswidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnIsObscuredBy((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_opaque_area(void* self) {
    return QGraphicsWidget_OpaqueArea((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QPainterPath* q_graphicswidget_qbase_opaque_area(void* self) {
    return QGraphicsWidget_QBaseOpaqueArea((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QPainterPath* (*slot)() ```
void q_graphicswidget_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsWidget_OnOpaqueArea((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicswidget_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_SceneEventFilter((QGraphicsWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicswidget_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsWidget_QBaseSceneEventFilter((QGraphicsWidget*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QGraphicsItem*, QEvent*) ```
void q_graphicswidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsWidget_OnSceneEventFilter((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicswidget_context_menu_event(void* self, void* event) {
    QGraphicsWidget_ContextMenuEvent((QGraphicsWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicswidget_qbase_context_menu_event(void* self, void* event) {
    QGraphicsWidget_QBaseContextMenuEvent((QGraphicsWidget*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicswidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnContextMenuEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_enter_event(void* self, void* event) {
    QGraphicsWidget_DragEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragEnterEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_leave_event(void* self, void* event) {
    QGraphicsWidget_DragLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragLeaveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragLeaveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drag_move_event(void* self, void* event) {
    QGraphicsWidget_DragMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drag_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseDragMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDragMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_drop_event(void* self, void* event) {
    QGraphicsWidget_DropEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicswidget_qbase_drop_event(void* self, void* event) {
    QGraphicsWidget_QBaseDropEvent((QGraphicsWidget*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicswidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnDropEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_hover_enter_event(void* self, void* event) {
    QGraphicsWidget_HoverEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicswidget_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsWidget_QBaseHoverEnterEvent((QGraphicsWidget*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicswidget_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnHoverEnterEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_key_press_event(void* self, void* event) {
    QGraphicsWidget_KeyPressEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_qbase_key_press_event(void* self, void* event) {
    QGraphicsWidget_QBaseKeyPressEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QKeyEvent*) ```
void q_graphicswidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnKeyPressEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_key_release_event(void* self, void* event) {
    QGraphicsWidget_KeyReleaseEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QKeyEvent* event ```
void q_graphicswidget_qbase_key_release_event(void* self, void* event) {
    QGraphicsWidget_QBaseKeyReleaseEvent((QGraphicsWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QKeyEvent*) ```
void q_graphicswidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnKeyReleaseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_press_event(void* self, void* event) {
    QGraphicsWidget_MousePressEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsWidget_QBaseMousePressEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMousePressEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_move_event(void* self, void* event) {
    QGraphicsWidget_MouseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseMoveEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseMoveEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_release_event(void* self, void* event) {
    QGraphicsWidget_MouseReleaseEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseReleaseEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseReleaseEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_mouse_double_click_event(void* self, void* event) {
    QGraphicsWidget_MouseDoubleClickEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicswidget_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsWidget_QBaseMouseDoubleClickEvent((QGraphicsWidget*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicswidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnMouseDoubleClickEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicswidget_wheel_event(void* self, void* event) {
    QGraphicsWidget_WheelEvent((QGraphicsWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicswidget_qbase_wheel_event(void* self, void* event) {
    QGraphicsWidget_QBaseWheelEvent((QGraphicsWidget*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsSceneWheelEvent*) ```
void q_graphicswidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnWheelEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QInputMethodEvent* event ```
void q_graphicswidget_input_method_event(void* self, void* event) {
    QGraphicsWidget_InputMethodEvent((QGraphicsWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QInputMethodEvent* event ```
void q_graphicswidget_qbase_input_method_event(void* self, void* event) {
    QGraphicsWidget_QBaseInputMethodEvent((QGraphicsWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QInputMethodEvent*) ```
void q_graphicswidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnInputMethodEvent((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicswidget_input_method_query(void* self, int64_t query) {
    return QGraphicsWidget_InputMethodQuery((QGraphicsWidget*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicswidget_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsWidget_QBaseInputMethodQuery((QGraphicsWidget*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, enum Qt__InputMethodQuery) ```
void q_graphicswidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsWidget_OnInputMethodQuery((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicswidget_supports_extension(void* self, int64_t extension) {
    return QGraphicsWidget_SupportsExtension((QGraphicsWidget*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicswidget_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsWidget_QBaseSupportsExtension((QGraphicsWidget*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, enum QGraphicsItem__Extension) ```
void q_graphicswidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsWidget_OnSupportsExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicswidget_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsWidget_SetExtension((QGraphicsWidget*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicswidget_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsWidget_QBaseSetExtension((QGraphicsWidget*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicswidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsWidget_OnSetExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* variant ```
QVariant* q_graphicswidget_extension(void* self, void* variant) {
    return QGraphicsWidget_Extension((QGraphicsWidget*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* variant ```
QVariant* q_graphicswidget_qbase_extension(void* self, void* variant) {
    return QGraphicsWidget_QBaseExtension((QGraphicsWidget*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QVariant* (*slot)(QGraphicsWidget*, QVariant*) ```
void q_graphicswidget_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsWidget_OnExtension((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_is_empty(void* self) {
    return QGraphicsWidget_IsEmpty((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
bool q_graphicswidget_qbase_is_empty(void* self) {
    return QGraphicsWidget_QBaseIsEmpty((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)() ```
void q_graphicswidget_on_is_empty(void* self, bool (*slot)()) {
    QGraphicsWidget_OnIsEmpty((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_update_micro_focus(void* self) {
    QGraphicsWidget_UpdateMicroFocus((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_update_micro_focus(void* self) {
    QGraphicsWidget_QBaseUpdateMicroFocus((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsWidget_OnUpdateMicroFocus((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_sender(void* self) {
    return QGraphicsWidget_Sender((QGraphicsWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
QObject* q_graphicswidget_qbase_sender(void* self) {
    return QGraphicsWidget_QBaseSender((QGraphicsWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QObject* (*slot)() ```
void q_graphicswidget_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsWidget_OnSender((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_sender_signal_index(void* self) {
    return QGraphicsWidget_SenderSignalIndex((QGraphicsWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
int32_t q_graphicswidget_qbase_sender_signal_index(void* self) {
    return QGraphicsWidget_QBaseSenderSignalIndex((QGraphicsWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)() ```
void q_graphicswidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsWidget_OnSenderSignalIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, const char* signal ```
int32_t q_graphicswidget_receivers(void* self, const char* signal) {
    return QGraphicsWidget_Receivers((QGraphicsWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, const char* signal ```
int32_t q_graphicswidget_qbase_receivers(void* self, const char* signal) {
    return QGraphicsWidget_QBaseReceivers((QGraphicsWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, int32_t (*slot)(QGraphicsWidget*, const char*) ```
void q_graphicswidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsWidget_OnReceivers((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
bool q_graphicswidget_is_signal_connected(void* self, void* signal) {
    return QGraphicsWidget_IsSignalConnected((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QMetaMethod* signal ```
bool q_graphicswidget_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsWidget_QBaseIsSignalConnected((QGraphicsWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool (*slot)(QGraphicsWidget*, QMetaMethod*) ```
void q_graphicswidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsWidget_OnIsSignalConnected((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_add_to_index(void* self) {
    QGraphicsWidget_AddToIndex((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_add_to_index(void* self) {
    QGraphicsWidget_QBaseAddToIndex((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsWidget_OnAddToIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_remove_from_index(void* self) {
    QGraphicsWidget_RemoveFromIndex((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_remove_from_index(void* self) {
    QGraphicsWidget_QBaseRemoveFromIndex((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsWidget_OnRemoveFromIndex((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_prepare_geometry_change(void* self) {
    QGraphicsWidget_PrepareGeometryChange((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_qbase_prepare_geometry_change(void* self) {
    QGraphicsWidget_QBasePrepareGeometryChange((QGraphicsWidget*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)() ```
void q_graphicswidget_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsWidget_OnPrepareGeometryChange((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_set_graphics_item(void* self, void* item) {
    QGraphicsWidget_SetGraphicsItem((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, QGraphicsItem* item ```
void q_graphicswidget_qbase_set_graphics_item(void* self, void* item) {
    QGraphicsWidget_QBaseSetGraphicsItem((QGraphicsWidget*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, QGraphicsItem*) ```
void q_graphicswidget_on_set_graphics_item(void* self, void (*slot)(void*, void*)) {
    QGraphicsWidget_OnSetGraphicsItem((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsWidget* self, bool ownedByLayout ```
void q_graphicswidget_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsWidget_SetOwnedByLayout((QGraphicsWidget*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsWidget* self, bool ownedByLayout ```
void q_graphicswidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout) {
    QGraphicsWidget_QBaseSetOwnedByLayout((QGraphicsWidget*)self, ownedByLayout);
}

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsWidget* self, void (*slot)(QGraphicsWidget*, bool) ```
void q_graphicswidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool)) {
    QGraphicsWidget_OnSetOwnedByLayout((QGraphicsWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsWidget* self ```
void q_graphicswidget_delete(void* self) {
    QGraphicsWidget_Delete((QGraphicsWidget*)(self));
}