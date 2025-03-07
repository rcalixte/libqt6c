#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcolor.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqregularexpression.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextedit.hpp"
#include "libqthread.hpp"
#include "libqurl.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtextbrowser.hpp"
#include "libqtextbrowser.h"

/// https://doc.qt.io/qt-6/qtextbrowser.html

/// q_textbrowser_new constructs a new QTextBrowser object.
///
/// ``` QWidget* parent ```
QTextBrowser* q_textbrowser_new(void* parent) {
    return QTextBrowser_new((QWidget*)parent);
}

/// q_textbrowser_new2 constructs a new QTextBrowser object.
///
///
QTextBrowser* q_textbrowser_new2() {
    return QTextBrowser_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextBrowser* self ```
QMetaObject* q_textbrowser_meta_object(void* self) {
    return QTextBrowser_MetaObject((QTextBrowser*)self);
}

/// ``` QTextBrowser* self, const char* param1 ```
void* q_textbrowser_metacast(void* self, const char* param1) {
    return QTextBrowser_Metacast((QTextBrowser*)self, param1);
}

/// ``` QTextBrowser* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textbrowser_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextBrowser_Metacall((QTextBrowser*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, int32_t (*slot)(QTextBrowser*, enum QMetaObject__Call, int, void*) ```
void q_textbrowser_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextBrowser_OnMetacall((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textbrowser_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextBrowser_QBaseMetacall((QTextBrowser*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textbrowser_tr(const char* s) {
    libqt_string _str = QTextBrowser_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#source)
///
/// ``` QTextBrowser* self ```
QUrl* q_textbrowser_source(void* self) {
    return QTextBrowser_Source((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#sourceType)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_source_type(void* self) {
    return QTextBrowser_SourceType((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#searchPaths)
///
/// ``` QTextBrowser* self ```
const char** q_textbrowser_search_paths(void* self) {
    libqt_list _arr = QTextBrowser_SearchPaths((QTextBrowser*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#setSearchPaths)
///
/// ``` QTextBrowser* self, const char* paths[] ```
void q_textbrowser_set_search_paths(void* self, const char* paths[]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = malloc(paths_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < paths_len; ++_i) {
        paths_qstr[_i] = qstring(paths[_i]);
    }
    libqt_list paths_list = qstrlist(paths_qstr, paths_len);
    QTextBrowser_SetSearchPaths((QTextBrowser*)self, paths_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
///
/// ``` QTextBrowser* self, int typeVal, QUrl* name ```
QVariant* q_textbrowser_load_resource(void* self, int typeVal, void* name) {
    return QTextBrowser_LoadResource((QTextBrowser*)self, typeVal, (QUrl*)name);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, QVariant* (*slot)(QTextBrowser*, int, QUrl*) ```
void q_textbrowser_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*)) {
    QTextBrowser_OnLoadResource((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, int typeVal, QUrl* name ```
QVariant* q_textbrowser_qbase_load_resource(void* self, int typeVal, void* name) {
    return QTextBrowser_QBaseLoadResource((QTextBrowser*)self, typeVal, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#isBackwardAvailable)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_backward_available(void* self) {
    return QTextBrowser_IsBackwardAvailable((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#isForwardAvailable)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_forward_available(void* self) {
    return QTextBrowser_IsForwardAvailable((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#clearHistory)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_clear_history(void* self) {
    QTextBrowser_ClearHistory((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#historyTitle)
///
/// ``` QTextBrowser* self, int param1 ```
const char* q_textbrowser_history_title(void* self, int param1) {
    libqt_string _str = QTextBrowser_HistoryTitle((QTextBrowser*)self, param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#historyUrl)
///
/// ``` QTextBrowser* self, int param1 ```
QUrl* q_textbrowser_history_url(void* self, int param1) {
    return QTextBrowser_HistoryUrl((QTextBrowser*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#backwardHistoryCount)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_backward_history_count(void* self) {
    return QTextBrowser_BackwardHistoryCount((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#forwardHistoryCount)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_forward_history_count(void* self) {
    return QTextBrowser_ForwardHistoryCount((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#openExternalLinks)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_open_external_links(void* self) {
    return QTextBrowser_OpenExternalLinks((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenExternalLinks)
///
/// ``` QTextBrowser* self, bool open ```
void q_textbrowser_set_open_external_links(void* self, bool open) {
    QTextBrowser_SetOpenExternalLinks((QTextBrowser*)self, open);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#openLinks)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_open_links(void* self) {
    return QTextBrowser_OpenLinks((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenLinks)
///
/// ``` QTextBrowser* self, bool open ```
void q_textbrowser_set_open_links(void* self, bool open) {
    QTextBrowser_SetOpenLinks((QTextBrowser*)self, open);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
///
/// ``` QTextBrowser* self, QUrl* name ```
void q_textbrowser_set_source(void* self, void* name) {
    QTextBrowser_SetSource((QTextBrowser*)self, (QUrl*)name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_backward(void* self) {
    QTextBrowser_Backward((QTextBrowser*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_backward(void* self, void (*slot)()) {
    QTextBrowser_OnBackward((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_backward(void* self) {
    QTextBrowser_QBaseBackward((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_forward(void* self) {
    QTextBrowser_Forward((QTextBrowser*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_forward(void* self, void (*slot)()) {
    QTextBrowser_OnForward((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_forward(void* self) {
    QTextBrowser_QBaseForward((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#home)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_home(void* self) {
    QTextBrowser_Home((QTextBrowser*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_home(void* self, void (*slot)()) {
    QTextBrowser_OnHome((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_home(void* self) {
    QTextBrowser_QBaseHome((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_reload(void* self) {
    QTextBrowser_Reload((QTextBrowser*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_reload(void* self, void (*slot)()) {
    QTextBrowser_OnReload((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_reload(void* self) {
    QTextBrowser_QBaseReload((QTextBrowser*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#backwardAvailable)
///
/// ``` QTextBrowser* self, bool param1 ```
void q_textbrowser_backward_available(void* self, bool param1) {
    QTextBrowser_BackwardAvailable((QTextBrowser*)self, param1);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, bool) ```
void q_textbrowser_on_backward_available(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_Connect_BackwardAvailable((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#forwardAvailable)
///
/// ``` QTextBrowser* self, bool param1 ```
void q_textbrowser_forward_available(void* self, bool param1) {
    QTextBrowser_ForwardAvailable((QTextBrowser*)self, param1);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, bool) ```
void q_textbrowser_on_forward_available(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_Connect_ForwardAvailable((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#historyChanged)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_history_changed(void* self) {
    QTextBrowser_HistoryChanged((QTextBrowser*)self);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*) ```
void q_textbrowser_on_history_changed(void* self, void (*slot)(void*)) {
    QTextBrowser_Connect_HistoryChanged((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#sourceChanged)
///
/// ``` QTextBrowser* self, QUrl* param1 ```
void q_textbrowser_source_changed(void* self, void* param1) {
    QTextBrowser_SourceChanged((QTextBrowser*)self, (QUrl*)param1);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QUrl*) ```
void q_textbrowser_on_source_changed(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_SourceChanged((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#highlighted)
///
/// ``` QTextBrowser* self, QUrl* param1 ```
void q_textbrowser_highlighted(void* self, void* param1) {
    QTextBrowser_Highlighted((QTextBrowser*)self, (QUrl*)param1);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QUrl*) ```
void q_textbrowser_on_highlighted(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_Highlighted((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#anchorClicked)
///
/// ``` QTextBrowser* self, QUrl* param1 ```
void q_textbrowser_anchor_clicked(void* self, void* param1) {
    QTextBrowser_AnchorClicked((QTextBrowser*)self, (QUrl*)param1);
}

/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QUrl*) ```
void q_textbrowser_on_anchor_clicked(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_Connect_AnchorClicked((QTextBrowser*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#event)
///
/// ``` QTextBrowser* self, QEvent* e ```
bool q_textbrowser_event(void* self, void* e) {
    return QTextBrowser_Event((QTextBrowser*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, QEvent*) ```
void q_textbrowser_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QEvent* e ```
bool q_textbrowser_qbase_event(void* self, void* e) {
    return QTextBrowser_QBaseEvent((QTextBrowser*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#keyPressEvent)
///
/// ``` QTextBrowser* self, QKeyEvent* ev ```
void q_textbrowser_key_press_event(void* self, void* ev) {
    QTextBrowser_KeyPressEvent((QTextBrowser*)self, (QKeyEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QKeyEvent*) ```
void q_textbrowser_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnKeyPressEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QKeyEvent* ev ```
void q_textbrowser_qbase_key_press_event(void* self, void* ev) {
    QTextBrowser_QBaseKeyPressEvent((QTextBrowser*)self, (QKeyEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_mouse_move_event(void* self, void* ev) {
    QTextBrowser_MouseMoveEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMouseEvent*) ```
void q_textbrowser_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_qbase_mouse_move_event(void* self, void* ev) {
    QTextBrowser_QBaseMouseMoveEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_mouse_press_event(void* self, void* ev) {
    QTextBrowser_MousePressEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMouseEvent*) ```
void q_textbrowser_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMousePressEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_qbase_mouse_press_event(void* self, void* ev) {
    QTextBrowser_QBaseMousePressEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_mouse_release_event(void* self, void* ev) {
    QTextBrowser_MouseReleaseEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMouseEvent*) ```
void q_textbrowser_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseReleaseEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QMouseEvent* ev ```
void q_textbrowser_qbase_mouse_release_event(void* self, void* ev) {
    QTextBrowser_QBaseMouseReleaseEvent((QTextBrowser*)self, (QMouseEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
///
/// ``` QTextBrowser* self, QFocusEvent* ev ```
void q_textbrowser_focus_out_event(void* self, void* ev) {
    QTextBrowser_FocusOutEvent((QTextBrowser*)self, (QFocusEvent*)ev);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QFocusEvent*) ```
void q_textbrowser_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnFocusOutEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QFocusEvent* ev ```
void q_textbrowser_qbase_focus_out_event(void* self, void* ev) {
    QTextBrowser_QBaseFocusOutEvent((QTextBrowser*)self, (QFocusEvent*)ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
///
/// ``` QTextBrowser* self, bool next ```
bool q_textbrowser_focus_next_prev_child(void* self, bool next) {
    return QTextBrowser_FocusNextPrevChild((QTextBrowser*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, bool) ```
void q_textbrowser_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTextBrowser_OnFocusNextPrevChild((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, bool next ```
bool q_textbrowser_qbase_focus_next_prev_child(void* self, bool next) {
    return QTextBrowser_QBaseFocusNextPrevChild((QTextBrowser*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
///
/// ``` QTextBrowser* self, QPaintEvent* e ```
void q_textbrowser_paint_event(void* self, void* e) {
    QTextBrowser_PaintEvent((QTextBrowser*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QPaintEvent*) ```
void q_textbrowser_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnPaintEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QPaintEvent* e ```
void q_textbrowser_qbase_paint_event(void* self, void* e) {
    QTextBrowser_QBasePaintEvent((QTextBrowser*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
///
/// ``` QTextBrowser* self, QUrl* name, enum QTextDocument__ResourceType typeVal ```
void q_textbrowser_do_set_source(void* self, void* name, int64_t typeVal) {
    QTextBrowser_DoSetSource((QTextBrowser*)self, (QUrl*)name, typeVal);
}

/// Allows for overriding the related default method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QUrl*, enum QTextDocument__ResourceType) ```
void q_textbrowser_on_do_set_source(void* self, void (*slot)(void*, void*, int64_t)) {
    QTextBrowser_OnDoSetSource((QTextBrowser*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextBrowser* self, QUrl* name, enum QTextDocument__ResourceType typeVal ```
void q_textbrowser_qbase_do_set_source(void* self, void* name, int64_t typeVal) {
    QTextBrowser_QBaseDoSetSource((QTextBrowser*)self, (QUrl*)name, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textbrowser_tr2(const char* s, const char* c) {
    libqt_string _str = QTextBrowser_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textbrowser_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextBrowser_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
///
/// ``` QTextBrowser* self, QUrl* name, enum QTextDocument__ResourceType typeVal ```
void q_textbrowser_set_source2(void* self, void* name, int64_t typeVal) {
    QTextBrowser_SetSource2((QTextBrowser*)self, (QUrl*)name, typeVal);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// ``` QTextBrowser* self, QTextDocument* document ```
void q_textbrowser_set_document(void* self, void* document) {
    QTextEdit_SetDocument((QTextEdit*)self, (QTextDocument*)document);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// ``` QTextBrowser* self ```
QTextDocument* q_textbrowser_document(void* self) {
    return QTextEdit_Document((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// ``` QTextBrowser* self, const char* placeholderText ```
void q_textbrowser_set_placeholder_text(void* self, const char* placeholderText) {
    QTextEdit_SetPlaceholderText((QTextEdit*)self, qstring(placeholderText));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_placeholder_text(void* self) {
    libqt_string _str = QTextEdit_PlaceholderText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// ``` QTextBrowser* self, QTextCursor* cursor ```
void q_textbrowser_set_text_cursor(void* self, void* cursor) {
    QTextEdit_SetTextCursor((QTextEdit*)self, (QTextCursor*)cursor);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// ``` QTextBrowser* self ```
QTextCursor* q_textbrowser_text_cursor(void* self) {
    return QTextEdit_TextCursor((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_read_only(void* self) {
    return QTextEdit_IsReadOnly((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// ``` QTextBrowser* self, bool ro ```
void q_textbrowser_set_read_only(void* self, bool ro) {
    QTextEdit_SetReadOnly((QTextEdit*)self, ro);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// ``` QTextBrowser* self, int flags ```
void q_textbrowser_set_text_interaction_flags(void* self, int64_t flags) {
    QTextEdit_SetTextInteractionFlags((QTextEdit*)self, flags);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_text_interaction_flags(void* self) {
    return QTextEdit_TextInteractionFlags((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// ``` QTextBrowser* self ```
double q_textbrowser_font_point_size(void* self) {
    return QTextEdit_FontPointSize((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_font_family(void* self) {
    libqt_string _str = QTextEdit_FontFamily((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_font_weight(void* self) {
    return QTextEdit_FontWeight((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_font_underline(void* self) {
    return QTextEdit_FontUnderline((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_font_italic(void* self) {
    return QTextEdit_FontItalic((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// ``` QTextBrowser* self ```
QColor* q_textbrowser_text_color(void* self) {
    return QTextEdit_TextColor((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// ``` QTextBrowser* self ```
QColor* q_textbrowser_text_background_color(void* self) {
    return QTextEdit_TextBackgroundColor((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// ``` QTextBrowser* self ```
QFont* q_textbrowser_current_font(void* self) {
    return QTextEdit_CurrentFont((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_alignment(void* self) {
    return QTextEdit_Alignment((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// ``` QTextBrowser* self, QTextCharFormat* modifier ```
void q_textbrowser_merge_current_char_format(void* self, void* modifier) {
    QTextEdit_MergeCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)modifier);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// ``` QTextBrowser* self, QTextCharFormat* format ```
void q_textbrowser_set_current_char_format(void* self, void* format) {
    QTextEdit_SetCurrentCharFormat((QTextEdit*)self, (QTextCharFormat*)format);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// ``` QTextBrowser* self ```
QTextCharFormat* q_textbrowser_current_char_format(void* self) {
    return QTextEdit_CurrentCharFormat((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_auto_formatting(void* self) {
    return QTextEdit_AutoFormatting((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// ``` QTextBrowser* self, int features ```
void q_textbrowser_set_auto_formatting(void* self, int64_t features) {
    QTextEdit_SetAutoFormatting((QTextEdit*)self, features);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_tab_changes_focus(void* self) {
    return QTextEdit_TabChangesFocus((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_set_tab_changes_focus(void* self, bool b) {
    QTextEdit_SetTabChangesFocus((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// ``` QTextBrowser* self, const char* title ```
void q_textbrowser_set_document_title(void* self, const char* title) {
    QTextEdit_SetDocumentTitle((QTextEdit*)self, qstring(title));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_document_title(void* self) {
    libqt_string _str = QTextEdit_DocumentTitle((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_undo_redo_enabled(void* self) {
    return QTextEdit_IsUndoRedoEnabled((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// ``` QTextBrowser* self, bool enable ```
void q_textbrowser_set_undo_redo_enabled(void* self, bool enable) {
    QTextEdit_SetUndoRedoEnabled((QTextEdit*)self, enable);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_line_wrap_mode(void* self) {
    return QTextEdit_LineWrapMode((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// ``` QTextBrowser* self, enum QTextEdit__LineWrapMode mode ```
void q_textbrowser_set_line_wrap_mode(void* self, int64_t mode) {
    QTextEdit_SetLineWrapMode((QTextEdit*)self, mode);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_line_wrap_column_or_width(void* self) {
    return QTextEdit_LineWrapColumnOrWidth((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// ``` QTextBrowser* self, int w ```
void q_textbrowser_set_line_wrap_column_or_width(void* self, int w) {
    QTextEdit_SetLineWrapColumnOrWidth((QTextEdit*)self, w);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_word_wrap_mode(void* self) {
    return QTextEdit_WordWrapMode((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// ``` QTextBrowser* self, enum QTextOption__WrapMode policy ```
void q_textbrowser_set_word_wrap_mode(void* self, int64_t policy) {
    QTextEdit_SetWordWrapMode((QTextEdit*)self, policy);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextBrowser* self, const char* exp ```
bool q_textbrowser_find(void* self, const char* exp) {
    return QTextEdit_Find((QTextEdit*)self, qstring(exp));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextBrowser* self, QRegularExpression* exp ```
bool q_textbrowser_find_with_exp(void* self, void* exp) {
    return QTextEdit_FindWithExp((QTextEdit*)self, (QRegularExpression*)exp);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_to_plain_text(void* self) {
    libqt_string _str = QTextEdit_ToPlainText((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_to_html(void* self) {
    libqt_string _str = QTextEdit_ToHtml((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_to_markdown(void* self) {
    libqt_string _str = QTextEdit_ToMarkdown((QTextEdit*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_ensure_cursor_visible(void* self) {
    QTextEdit_EnsureCursorVisible((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextBrowser* self ```
QMenu* q_textbrowser_create_standard_context_menu(void* self) {
    return QTextEdit_CreateStandardContextMenu((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextBrowser* self, QPoint* position ```
QMenu* q_textbrowser_create_standard_context_menu_with_position(void* self, void* position) {
    return QTextEdit_CreateStandardContextMenuWithPosition((QTextEdit*)self, (QPoint*)position);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// ``` QTextBrowser* self, QPoint* pos ```
QTextCursor* q_textbrowser_cursor_for_position(void* self, void* pos) {
    return QTextEdit_CursorForPosition((QTextEdit*)self, (QPoint*)pos);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextBrowser* self, QTextCursor* cursor ```
QRect* q_textbrowser_cursor_rect(void* self, void* cursor) {
    return QTextEdit_CursorRect((QTextEdit*)self, (QTextCursor*)cursor);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_cursor_rect2(void* self) {
    return QTextEdit_CursorRect2((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// ``` QTextBrowser* self, QPoint* pos ```
const char* q_textbrowser_anchor_at(void* self, void* pos) {
    libqt_string _str = QTextEdit_AnchorAt((QTextEdit*)self, (QPoint*)pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_overwrite_mode(void* self) {
    return QTextEdit_OverwriteMode((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// ``` QTextBrowser* self, bool overwrite ```
void q_textbrowser_set_overwrite_mode(void* self, bool overwrite) {
    QTextEdit_SetOverwriteMode((QTextEdit*)self, overwrite);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// ``` QTextBrowser* self ```
double q_textbrowser_tab_stop_distance(void* self) {
    return QTextEdit_TabStopDistance((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// ``` QTextBrowser* self, double distance ```
void q_textbrowser_set_tab_stop_distance(void* self, double distance) {
    QTextEdit_SetTabStopDistance((QTextEdit*)self, distance);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_cursor_width(void* self) {
    return QTextEdit_CursorWidth((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// ``` QTextBrowser* self, int width ```
void q_textbrowser_set_cursor_width(void* self, int width) {
    QTextEdit_SetCursorWidth((QTextEdit*)self, width);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_accept_rich_text(void* self) {
    return QTextEdit_AcceptRichText((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// ``` QTextBrowser* self, bool accept ```
void q_textbrowser_set_accept_rich_text(void* self, bool accept) {
    QTextEdit_SetAcceptRichText((QTextEdit*)self, accept);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// ``` QTextBrowser* self, QTextEdit__ExtraSelection* selections[] ```
void q_textbrowser_set_extra_selections(void* self, void* selections[]) {
    QTextEdit__ExtraSelection** selections_arr = (QTextEdit__ExtraSelection**)selections;
    size_t selections_len = 0;
    while (selections_arr[selections_len] != NULL) {
        selections_len++;
    }
    libqt_list selections_list = {
        .len = selections_len,
        .data = {(QTextEdit__ExtraSelection*)selections},
    };
    QTextEdit_SetExtraSelections((QTextEdit*)self, selections_list);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// ``` QTextBrowser* self ```
libqt_list /* of QTextEdit__ExtraSelection* */ q_textbrowser_extra_selections(void* self) {
    libqt_list _arr = QTextEdit_ExtraSelections((QTextEdit*)self);
    return _arr;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextBrowser* self, enum QTextCursor__MoveOperation operation ```
void q_textbrowser_move_cursor(void* self, int64_t operation) {
    QTextEdit_MoveCursor((QTextEdit*)self, operation);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_can_paste(void* self) {
    return QTextEdit_CanPaste((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// ``` QTextBrowser* self, QPagedPaintDevice* printer ```
void q_textbrowser_print(void* self, void* printer) {
    QTextEdit_Print((QTextEdit*)self, (QPagedPaintDevice*)printer);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// ``` QTextBrowser* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_textbrowser_input_method_query2(void* self, int64_t query, void* argument) {
    return QTextEdit_InputMethodQuery2((QTextEdit*)self, query, (QVariant*)argument);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// ``` QTextBrowser* self, double s ```
void q_textbrowser_set_font_point_size(void* self, double s) {
    QTextEdit_SetFontPointSize((QTextEdit*)self, s);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// ``` QTextBrowser* self, const char* fontFamily ```
void q_textbrowser_set_font_family(void* self, const char* fontFamily) {
    QTextEdit_SetFontFamily((QTextEdit*)self, qstring(fontFamily));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// ``` QTextBrowser* self, int w ```
void q_textbrowser_set_font_weight(void* self, int w) {
    QTextEdit_SetFontWeight((QTextEdit*)self, w);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_set_font_underline(void* self, bool b) {
    QTextEdit_SetFontUnderline((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_set_font_italic(void* self, bool b) {
    QTextEdit_SetFontItalic((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// ``` QTextBrowser* self, QColor* c ```
void q_textbrowser_set_text_color(void* self, void* c) {
    QTextEdit_SetTextColor((QTextEdit*)self, (QColor*)c);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// ``` QTextBrowser* self, QColor* c ```
void q_textbrowser_set_text_background_color(void* self, void* c) {
    QTextEdit_SetTextBackgroundColor((QTextEdit*)self, (QColor*)c);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// ``` QTextBrowser* self, QFont* f ```
void q_textbrowser_set_current_font(void* self, void* f) {
    QTextEdit_SetCurrentFont((QTextEdit*)self, (QFont*)f);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// ``` QTextBrowser* self, int a ```
void q_textbrowser_set_alignment(void* self, int64_t a) {
    QTextEdit_SetAlignment((QTextEdit*)self, a);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_set_plain_text(void* self, const char* text) {
    QTextEdit_SetPlainText((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_set_html(void* self, const char* text) {
    QTextEdit_SetHtml((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// ``` QTextBrowser* self, const char* markdown ```
void q_textbrowser_set_markdown(void* self, const char* markdown) {
    QTextEdit_SetMarkdown((QTextEdit*)self, qstring(markdown));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_set_text(void* self, const char* text) {
    QTextEdit_SetText((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_cut(void* self) {
    QTextEdit_Cut((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_copy(void* self) {
    QTextEdit_Copy((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_paste(void* self) {
    QTextEdit_Paste((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_undo(void* self) {
    QTextEdit_Undo((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_redo(void* self) {
    QTextEdit_Redo((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_clear(void* self) {
    QTextEdit_Clear((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_select_all(void* self) {
    QTextEdit_SelectAll((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_insert_plain_text(void* self, const char* text) {
    QTextEdit_InsertPlainText((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_insert_html(void* self, const char* text) {
    QTextEdit_InsertHtml((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// ``` QTextBrowser* self, const char* text ```
void q_textbrowser_append(void* self, const char* text) {
    QTextEdit_Append((QTextEdit*)self, qstring(text));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// ``` QTextBrowser* self, const char* name ```
void q_textbrowser_scroll_to_anchor(void* self, const char* name) {
    QTextEdit_ScrollToAnchor((QTextEdit*)self, qstring(name));
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_zoom_in(void* self) {
    QTextEdit_ZoomIn((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_zoom_out(void* self) {
    QTextEdit_ZoomOut((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_text_changed(void* self) {
    QTextEdit_TextChanged((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*) ```
void q_textbrowser_on_text_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_TextChanged((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_undo_available(void* self, bool b) {
    QTextEdit_UndoAvailable((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*, bool) ```
void q_textbrowser_on_undo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_UndoAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_redo_available(void* self, bool b) {
    QTextEdit_RedoAvailable((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*, bool) ```
void q_textbrowser_on_redo_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_RedoAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// ``` QTextBrowser* self, QTextCharFormat* format ```
void q_textbrowser_current_char_format_changed(void* self, void* format) {
    QTextEdit_CurrentCharFormatChanged((QTextEdit*)self, (QTextCharFormat*)format);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*, QTextCharFormat*) ```
void q_textbrowser_on_current_char_format_changed(void* self, void (*slot)(void*, void*)) {
    QTextEdit_Connect_CurrentCharFormatChanged((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// ``` QTextBrowser* self, bool b ```
void q_textbrowser_copy_available(void* self, bool b) {
    QTextEdit_CopyAvailable((QTextEdit*)self, b);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*, bool) ```
void q_textbrowser_on_copy_available(void* self, void (*slot)(void*, bool)) {
    QTextEdit_Connect_CopyAvailable((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_selection_changed(void* self) {
    QTextEdit_SelectionChanged((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*) ```
void q_textbrowser_on_selection_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_SelectionChanged((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_cursor_position_changed(void* self) {
    QTextEdit_CursorPositionChanged((QTextEdit*)self);
}

/// Inherited from QTextEdit
///
/// ``` QTextBrowser* self, void (*slot)(QTextEdit*) ```
void q_textbrowser_on_cursor_position_changed(void* self, void (*slot)(void*)) {
    QTextEdit_Connect_CursorPositionChanged((QTextEdit*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextBrowser* self, const char* exp, int options ```
bool q_textbrowser_find2(void* self, const char* exp, int64_t options) {
    return QTextEdit_Find2((QTextEdit*)self, qstring(exp), options);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextBrowser* self, QRegularExpression* exp, int options ```
bool q_textbrowser_find22(void* self, void* exp, int64_t options) {
    return QTextEdit_Find22((QTextEdit*)self, (QRegularExpression*)exp, options);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextBrowser* self, int features ```
const char* q_textbrowser_to_markdown1(void* self, int64_t features) {
    libqt_string _str = QTextEdit_ToMarkdown1((QTextEdit*)self, features);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextBrowser* self, enum QTextCursor__MoveOperation operation, enum QTextCursor__MoveMode mode ```
void q_textbrowser_move_cursor2(void* self, int64_t operation, int64_t mode) {
    QTextEdit_MoveCursor2((QTextEdit*)self, operation, mode);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextBrowser* self, int range ```
void q_textbrowser_zoom_in1(void* self, int range) {
    QTextEdit_ZoomIn1((QTextEdit*)self, range);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextBrowser* self, int range ```
void q_textbrowser_zoom_out1(void* self, int range) {
    QTextEdit_ZoomOut1((QTextEdit*)self, range);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTextBrowser* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_textbrowser_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTextBrowser* self ```
QScrollBar* q_textbrowser_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTextBrowser* self, QScrollBar* scrollbar ```
void q_textbrowser_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTextBrowser* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_textbrowser_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTextBrowser* self ```
QScrollBar* q_textbrowser_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTextBrowser* self, QScrollBar* scrollbar ```
void q_textbrowser_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTextBrowser* self, QWidget* widget ```
void q_textbrowser_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTextBrowser* self, QWidget* widget, int alignment ```
void q_textbrowser_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTextBrowser* self, int alignment ```
libqt_list /* of QWidget* */ q_textbrowser_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTextBrowser* self, QWidget* widget ```
void q_textbrowser_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTextBrowser* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_textbrowser_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTextBrowser* self, int frameStyle ```
void q_textbrowser_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTextBrowser* self, enum QFrame__Shape frameShape ```
void q_textbrowser_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTextBrowser* self, enum QFrame__Shadow frameShadow ```
void q_textbrowser_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTextBrowser* self, int lineWidth ```
void q_textbrowser_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTextBrowser* self, int midLineWidth ```
void q_textbrowser_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTextBrowser* self, QRect* frameRect ```
void q_textbrowser_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTextBrowser* self ```
uintptr_t q_textbrowser_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTextBrowser* self ```
uintptr_t q_textbrowser_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTextBrowser* self ```
uintptr_t q_textbrowser_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTextBrowser* self ```
QStyle* q_textbrowser_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTextBrowser* self, QStyle* style ```
void q_textbrowser_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTextBrowser* self, enum Qt__WindowModality windowModality ```
void q_textbrowser_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTextBrowser* self, QWidget* param1 ```
bool q_textbrowser_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTextBrowser* self, bool enabled ```
void q_textbrowser_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTextBrowser* self, bool disabled ```
void q_textbrowser_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTextBrowser* self, bool windowModified ```
void q_textbrowser_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTextBrowser* self ```
QPoint* q_textbrowser_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTextBrowser* self ```
QRegion* q_textbrowser_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextBrowser* self, QSize* minimumSize ```
void q_textbrowser_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextBrowser* self, int minw, int minh ```
void q_textbrowser_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextBrowser* self, QSize* maximumSize ```
void q_textbrowser_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextBrowser* self, int maxw, int maxh ```
void q_textbrowser_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTextBrowser* self, int minw ```
void q_textbrowser_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTextBrowser* self, int minh ```
void q_textbrowser_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTextBrowser* self, int maxw ```
void q_textbrowser_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTextBrowser* self, int maxh ```
void q_textbrowser_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextBrowser* self, QSize* sizeIncrement ```
void q_textbrowser_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextBrowser* self, int w, int h ```
void q_textbrowser_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextBrowser* self, QSize* baseSize ```
void q_textbrowser_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextBrowser* self, int basew, int baseh ```
void q_textbrowser_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextBrowser* self, QSize* fixedSize ```
void q_textbrowser_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextBrowser* self, int w, int h ```
void q_textbrowser_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTextBrowser* self, int w ```
void q_textbrowser_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTextBrowser* self, int h ```
void q_textbrowser_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextBrowser* self, QPointF* param1 ```
QPointF* q_textbrowser_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextBrowser* self, QPoint* param1 ```
QPoint* q_textbrowser_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextBrowser* self, QPointF* param1 ```
QPointF* q_textbrowser_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextBrowser* self, QPoint* param1 ```
QPoint* q_textbrowser_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextBrowser* self, QPointF* param1 ```
QPointF* q_textbrowser_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextBrowser* self, QPoint* param1 ```
QPoint* q_textbrowser_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextBrowser* self, QPointF* param1 ```
QPointF* q_textbrowser_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextBrowser* self, QPoint* param1 ```
QPoint* q_textbrowser_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextBrowser* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textbrowser_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextBrowser* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textbrowser_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextBrowser* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textbrowser_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextBrowser* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textbrowser_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTextBrowser* self ```
QPalette* q_textbrowser_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTextBrowser* self, QPalette* palette ```
void q_textbrowser_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTextBrowser* self, enum QPalette__ColorRole backgroundRole ```
void q_textbrowser_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTextBrowser* self, enum QPalette__ColorRole foregroundRole ```
void q_textbrowser_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTextBrowser* self ```
QFont* q_textbrowser_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTextBrowser* self, QFont* font ```
void q_textbrowser_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTextBrowser* self ```
QFontMetrics* q_textbrowser_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTextBrowser* self ```
QFontInfo* q_textbrowser_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTextBrowser* self ```
QCursor* q_textbrowser_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTextBrowser* self, QCursor* cursor ```
void q_textbrowser_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTextBrowser* self, bool enable ```
void q_textbrowser_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTextBrowser* self, bool enable ```
void q_textbrowser_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextBrowser* self, QBitmap* mask ```
void q_textbrowser_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextBrowser* self, QRegion* mask ```
void q_textbrowser_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTextBrowser* self ```
QRegion* q_textbrowser_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPaintDevice* target ```
void q_textbrowser_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPainter* painter ```
void q_textbrowser_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextBrowser* self ```
QPixmap* q_textbrowser_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTextBrowser* self ```
QGraphicsEffect* q_textbrowser_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTextBrowser* self, QGraphicsEffect* effect ```
void q_textbrowser_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextBrowser* self, enum Qt__GestureType typeVal ```
void q_textbrowser_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTextBrowser* self, enum Qt__GestureType typeVal ```
void q_textbrowser_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTextBrowser* self, const char* windowTitle ```
void q_textbrowser_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTextBrowser* self, const char* styleSheet ```
void q_textbrowser_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTextBrowser* self, QIcon* icon ```
void q_textbrowser_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTextBrowser* self ```
QIcon* q_textbrowser_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTextBrowser* self, const char* windowIconText ```
void q_textbrowser_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTextBrowser* self, const char* windowRole ```
void q_textbrowser_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTextBrowser* self, const char* filePath ```
void q_textbrowser_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTextBrowser* self, double level ```
void q_textbrowser_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTextBrowser* self ```
double q_textbrowser_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTextBrowser* self, const char* toolTip ```
void q_textbrowser_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTextBrowser* self, int msec ```
void q_textbrowser_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTextBrowser* self, const char* statusTip ```
void q_textbrowser_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTextBrowser* self, const char* whatsThis ```
void q_textbrowser_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTextBrowser* self, const char* name ```
void q_textbrowser_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTextBrowser* self, const char* description ```
void q_textbrowser_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTextBrowser* self, enum Qt__LayoutDirection direction ```
void q_textbrowser_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTextBrowser* self, QLocale* locale ```
void q_textbrowser_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTextBrowser* self ```
QLocale* q_textbrowser_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextBrowser* self, enum Qt__FocusReason reason ```
void q_textbrowser_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTextBrowser* self, enum Qt__FocusPolicy policy ```
void q_textbrowser_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_textbrowser_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTextBrowser* self, QWidget* focusProxy ```
void q_textbrowser_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTextBrowser* self, enum Qt__ContextMenuPolicy policy ```
void q_textbrowser_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextBrowser* self, QCursor* param1 ```
void q_textbrowser_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextBrowser* self, QKeySequence* key ```
int32_t q_textbrowser_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTextBrowser* self, int id ```
void q_textbrowser_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextBrowser* self, int id ```
void q_textbrowser_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextBrowser* self, int id ```
void q_textbrowser_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_textbrowser_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_textbrowser_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTextBrowser* self, bool enable ```
void q_textbrowser_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTextBrowser* self ```
QGraphicsProxyWidget* q_textbrowser_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextBrowser* self, int x, int y, int w, int h ```
void q_textbrowser_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextBrowser* self, QRect* param1 ```
void q_textbrowser_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextBrowser* self, QRegion* param1 ```
void q_textbrowser_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextBrowser* self, int x, int y, int w, int h ```
void q_textbrowser_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextBrowser* self, QRect* param1 ```
void q_textbrowser_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextBrowser* self, QRegion* param1 ```
void q_textbrowser_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTextBrowser* self, bool hidden ```
void q_textbrowser_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTextBrowser* self, QWidget* param1 ```
void q_textbrowser_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextBrowser* self, int x, int y ```
void q_textbrowser_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextBrowser* self, QPoint* param1 ```
void q_textbrowser_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextBrowser* self, int w, int h ```
void q_textbrowser_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextBrowser* self, QSize* param1 ```
void q_textbrowser_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextBrowser* self, int x, int y, int w, int h ```
void q_textbrowser_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextBrowser* self, QRect* geometry ```
void q_textbrowser_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTextBrowser* self ```
char* q_textbrowser_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTextBrowser* self, const char* geometry ```
bool q_textbrowser_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTextBrowser* self, QWidget* param1 ```
bool q_textbrowser_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTextBrowser* self, int state ```
void q_textbrowser_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTextBrowser* self, int state ```
void q_textbrowser_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTextBrowser* self ```
QSizePolicy* q_textbrowser_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextBrowser* self, QSizePolicy* sizePolicy ```
void q_textbrowser_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextBrowser* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_textbrowser_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTextBrowser* self ```
QRegion* q_textbrowser_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextBrowser* self, int left, int top, int right, int bottom ```
void q_textbrowser_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextBrowser* self, QMargins* margins ```
void q_textbrowser_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTextBrowser* self ```
QMargins* q_textbrowser_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTextBrowser* self ```
QRect* q_textbrowser_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTextBrowser* self ```
QLayout* q_textbrowser_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTextBrowser* self, QLayout* layout ```
void q_textbrowser_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextBrowser* self, QWidget* parent ```
void q_textbrowser_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextBrowser* self, QWidget* parent, int f ```
void q_textbrowser_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextBrowser* self, int dx, int dy ```
void q_textbrowser_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextBrowser* self, int dx, int dy, QRect* param3 ```
void q_textbrowser_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTextBrowser* self, bool on ```
void q_textbrowser_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextBrowser* self, QAction* action ```
void q_textbrowser_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTextBrowser* self, QAction* actions[] ```
void q_textbrowser_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTextBrowser* self, QAction* before, QAction* actions[] ```
void q_textbrowser_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTextBrowser* self, QAction* before, QAction* action ```
void q_textbrowser_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTextBrowser* self, QAction* action ```
void q_textbrowser_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTextBrowser* self ```
libqt_list /* of QAction* */ q_textbrowser_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextBrowser* self, const char* text ```
QAction* q_textbrowser_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextBrowser* self, QIcon* icon, const char* text ```
QAction* q_textbrowser_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextBrowser* self, const char* text, QKeySequence* shortcut ```
QAction* q_textbrowser_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextBrowser* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_textbrowser_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTextBrowser* self ```
QWidget* q_textbrowser_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTextBrowser* self, int typeVal ```
void q_textbrowser_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextBrowser* self, enum Qt__WindowType param1 ```
void q_textbrowser_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTextBrowser* self, int typeVal ```
void q_textbrowser_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextBrowser* self, int x, int y ```
QWidget* q_textbrowser_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextBrowser* self, QPoint* p ```
QWidget* q_textbrowser_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextBrowser* self, enum Qt__WidgetAttribute param1 ```
void q_textbrowser_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTextBrowser* self, enum Qt__WidgetAttribute param1 ```
bool q_textbrowser_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTextBrowser* self, QWidget* child ```
bool q_textbrowser_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTextBrowser* self, bool enabled ```
void q_textbrowser_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTextBrowser* self ```
QBackingStore* q_textbrowser_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTextBrowser* self ```
QWindow* q_textbrowser_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTextBrowser* self ```
QScreen* q_textbrowser_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTextBrowser* self, QScreen* screen ```
void q_textbrowser_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_textbrowser_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTextBrowser* self, const char* title ```
void q_textbrowser_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTextBrowser* self, void (*slot)(QWidget*, const char*) ```
void q_textbrowser_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTextBrowser* self, QIcon* icon ```
void q_textbrowser_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTextBrowser* self, void (*slot)(QWidget*, QIcon*) ```
void q_textbrowser_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTextBrowser* self, const char* iconText ```
void q_textbrowser_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTextBrowser* self, void (*slot)(QWidget*, const char*) ```
void q_textbrowser_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTextBrowser* self, QPoint* pos ```
void q_textbrowser_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTextBrowser* self, void (*slot)(QWidget*, QPoint*) ```
void q_textbrowser_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTextBrowser* self ```
int64_t q_textbrowser_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTextBrowser* self, int hints ```
void q_textbrowser_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPaintDevice* target, QPoint* targetOffset ```
void q_textbrowser_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textbrowser_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textbrowser_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPainter* painter, QPoint* targetOffset ```
void q_textbrowser_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textbrowser_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextBrowser* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textbrowser_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextBrowser* self, QRect* rectangle ```
QPixmap* q_textbrowser_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextBrowser* self, enum Qt__GestureType typeVal, int flags ```
void q_textbrowser_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextBrowser* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_textbrowser_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextBrowser* self, int id, bool enable ```
void q_textbrowser_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextBrowser* self, int id, bool enable ```
void q_textbrowser_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextBrowser* self, enum Qt__WindowType param1, bool on ```
void q_textbrowser_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextBrowser* self, enum Qt__WidgetAttribute param1, bool on ```
void q_textbrowser_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_textbrowser_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_textbrowser_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextBrowser* self ```
const char* q_textbrowser_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextBrowser* self, const char* name ```
void q_textbrowser_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextBrowser* self, bool b ```
bool q_textbrowser_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextBrowser* self ```
QThread* q_textbrowser_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextBrowser* self, QThread* thread ```
void q_textbrowser_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextBrowser* self, int interval ```
int32_t q_textbrowser_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextBrowser* self, int id ```
void q_textbrowser_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextBrowser* self ```
libqt_list /* of QObject* */ q_textbrowser_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextBrowser* self, QObject* filterObj ```
void q_textbrowser_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextBrowser* self, QObject* obj ```
void q_textbrowser_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textbrowser_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextBrowser* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textbrowser_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textbrowser_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textbrowser_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextBrowser* self, const char* name, QVariant* value ```
bool q_textbrowser_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextBrowser* self, const char* name ```
QVariant* q_textbrowser_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextBrowser* self ```
const char** q_textbrowser_dynamic_property_names(void* self) {
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
/// ``` QTextBrowser* self ```
QBindingStorage* q_textbrowser_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextBrowser* self ```
QBindingStorage* q_textbrowser_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTextBrowser* self, void (*slot)(QObject*) ```
void q_textbrowser_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextBrowser* self ```
QObject* q_textbrowser_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextBrowser* self, const char* classname ```
bool q_textbrowser_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextBrowser* self ```
void q_textbrowser_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextBrowser* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textbrowser_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textbrowser_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextBrowser* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textbrowser_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextBrowser* self, QObject* param1 ```
void q_textbrowser_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTextBrowser* self, void (*slot)(QObject*, QObject*) ```
void q_textbrowser_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTextBrowser* self ```
double q_textbrowser_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTextBrowser* self ```
double q_textbrowser_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_textbrowser_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, enum Qt__InputMethodQuery property ```
QVariant* q_textbrowser_input_method_query(void* self, int64_t property) {
    return QTextBrowser_InputMethodQuery((QTextBrowser*)self, property);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, enum Qt__InputMethodQuery property ```
QVariant* q_textbrowser_qbase_input_method_query(void* self, int64_t property) {
    return QTextBrowser_QBaseInputMethodQuery((QTextBrowser*)self, property);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QVariant* (*slot)(QTextBrowser*, enum Qt__InputMethodQuery) ```
void q_textbrowser_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTextBrowser_OnInputMethodQuery((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QTimerEvent* e ```
void q_textbrowser_timer_event(void* self, void* e) {
    QTextBrowser_TimerEvent((QTextBrowser*)self, (QTimerEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QTimerEvent* e ```
void q_textbrowser_qbase_timer_event(void* self, void* e) {
    QTextBrowser_QBaseTimerEvent((QTextBrowser*)self, (QTimerEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QTimerEvent*) ```
void q_textbrowser_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnTimerEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QKeyEvent* e ```
void q_textbrowser_key_release_event(void* self, void* e) {
    QTextBrowser_KeyReleaseEvent((QTextBrowser*)self, (QKeyEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QKeyEvent* e ```
void q_textbrowser_qbase_key_release_event(void* self, void* e) {
    QTextBrowser_QBaseKeyReleaseEvent((QTextBrowser*)self, (QKeyEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QKeyEvent*) ```
void q_textbrowser_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnKeyReleaseEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QResizeEvent* e ```
void q_textbrowser_resize_event(void* self, void* e) {
    QTextBrowser_ResizeEvent((QTextBrowser*)self, (QResizeEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QResizeEvent* e ```
void q_textbrowser_qbase_resize_event(void* self, void* e) {
    QTextBrowser_QBaseResizeEvent((QTextBrowser*)self, (QResizeEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QResizeEvent*) ```
void q_textbrowser_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnResizeEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMouseEvent* e ```
void q_textbrowser_mouse_double_click_event(void* self, void* e) {
    QTextBrowser_MouseDoubleClickEvent((QTextBrowser*)self, (QMouseEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMouseEvent* e ```
void q_textbrowser_qbase_mouse_double_click_event(void* self, void* e) {
    QTextBrowser_QBaseMouseDoubleClickEvent((QTextBrowser*)self, (QMouseEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMouseEvent*) ```
void q_textbrowser_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMouseDoubleClickEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QContextMenuEvent* e ```
void q_textbrowser_context_menu_event(void* self, void* e) {
    QTextBrowser_ContextMenuEvent((QTextBrowser*)self, (QContextMenuEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QContextMenuEvent* e ```
void q_textbrowser_qbase_context_menu_event(void* self, void* e) {
    QTextBrowser_QBaseContextMenuEvent((QTextBrowser*)self, (QContextMenuEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QContextMenuEvent*) ```
void q_textbrowser_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnContextMenuEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QDragEnterEvent* e ```
void q_textbrowser_drag_enter_event(void* self, void* e) {
    QTextBrowser_DragEnterEvent((QTextBrowser*)self, (QDragEnterEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QDragEnterEvent* e ```
void q_textbrowser_qbase_drag_enter_event(void* self, void* e) {
    QTextBrowser_QBaseDragEnterEvent((QTextBrowser*)self, (QDragEnterEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QDragEnterEvent*) ```
void q_textbrowser_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragEnterEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QDragLeaveEvent* e ```
void q_textbrowser_drag_leave_event(void* self, void* e) {
    QTextBrowser_DragLeaveEvent((QTextBrowser*)self, (QDragLeaveEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QDragLeaveEvent* e ```
void q_textbrowser_qbase_drag_leave_event(void* self, void* e) {
    QTextBrowser_QBaseDragLeaveEvent((QTextBrowser*)self, (QDragLeaveEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QDragLeaveEvent*) ```
void q_textbrowser_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragLeaveEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QDragMoveEvent* e ```
void q_textbrowser_drag_move_event(void* self, void* e) {
    QTextBrowser_DragMoveEvent((QTextBrowser*)self, (QDragMoveEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QDragMoveEvent* e ```
void q_textbrowser_qbase_drag_move_event(void* self, void* e) {
    QTextBrowser_QBaseDragMoveEvent((QTextBrowser*)self, (QDragMoveEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QDragMoveEvent*) ```
void q_textbrowser_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDragMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QDropEvent* e ```
void q_textbrowser_drop_event(void* self, void* e) {
    QTextBrowser_DropEvent((QTextBrowser*)self, (QDropEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QDropEvent* e ```
void q_textbrowser_qbase_drop_event(void* self, void* e) {
    QTextBrowser_QBaseDropEvent((QTextBrowser*)self, (QDropEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QDropEvent*) ```
void q_textbrowser_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDropEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QFocusEvent* e ```
void q_textbrowser_focus_in_event(void* self, void* e) {
    QTextBrowser_FocusInEvent((QTextBrowser*)self, (QFocusEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QFocusEvent* e ```
void q_textbrowser_qbase_focus_in_event(void* self, void* e) {
    QTextBrowser_QBaseFocusInEvent((QTextBrowser*)self, (QFocusEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QFocusEvent*) ```
void q_textbrowser_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnFocusInEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QShowEvent* param1 ```
void q_textbrowser_show_event(void* self, void* param1) {
    QTextBrowser_ShowEvent((QTextBrowser*)self, (QShowEvent*)param1);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QShowEvent* param1 ```
void q_textbrowser_qbase_show_event(void* self, void* param1) {
    QTextBrowser_QBaseShowEvent((QTextBrowser*)self, (QShowEvent*)param1);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QShowEvent*) ```
void q_textbrowser_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnShowEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* e ```
void q_textbrowser_change_event(void* self, void* e) {
    QTextBrowser_ChangeEvent((QTextBrowser*)self, (QEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* e ```
void q_textbrowser_qbase_change_event(void* self, void* e) {
    QTextBrowser_QBaseChangeEvent((QTextBrowser*)self, (QEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QEvent*) ```
void q_textbrowser_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnChangeEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QWheelEvent* e ```
void q_textbrowser_wheel_event(void* self, void* e) {
    QTextBrowser_WheelEvent((QTextBrowser*)self, (QWheelEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QWheelEvent* e ```
void q_textbrowser_qbase_wheel_event(void* self, void* e) {
    QTextBrowser_QBaseWheelEvent((QTextBrowser*)self, (QWheelEvent*)e);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QWheelEvent*) ```
void q_textbrowser_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnWheelEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QMimeData* q_textbrowser_create_mime_data_from_selection(void* self) {
    return QTextBrowser_CreateMimeDataFromSelection((QTextBrowser*)self);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QMimeData* q_textbrowser_qbase_create_mime_data_from_selection(void* self) {
    return QTextBrowser_QBaseCreateMimeDataFromSelection((QTextBrowser*)self);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QMimeData* (*slot)() ```
void q_textbrowser_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)()) {
    QTextBrowser_OnCreateMimeDataFromSelection((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMimeData* source ```
bool q_textbrowser_can_insert_from_mime_data(void* self, void* source) {
    return QTextBrowser_CanInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMimeData* source ```
bool q_textbrowser_qbase_can_insert_from_mime_data(void* self, void* source) {
    return QTextBrowser_QBaseCanInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, QMimeData*) ```
void q_textbrowser_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnCanInsertFromMimeData((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMimeData* source ```
void q_textbrowser_insert_from_mime_data(void* self, void* source) {
    QTextBrowser_InsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMimeData* source ```
void q_textbrowser_qbase_insert_from_mime_data(void* self, void* source) {
    QTextBrowser_QBaseInsertFromMimeData((QTextBrowser*)self, (QMimeData*)source);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMimeData*) ```
void q_textbrowser_on_insert_from_mime_data(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInsertFromMimeData((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QInputMethodEvent* param1 ```
void q_textbrowser_input_method_event(void* self, void* param1) {
    QTextBrowser_InputMethodEvent((QTextBrowser*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QInputMethodEvent* param1 ```
void q_textbrowser_qbase_input_method_event(void* self, void* param1) {
    QTextBrowser_QBaseInputMethodEvent((QTextBrowser*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QInputMethodEvent*) ```
void q_textbrowser_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInputMethodEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, int dx, int dy ```
void q_textbrowser_scroll_contents_by(void* self, int dx, int dy) {
    QTextBrowser_ScrollContentsBy((QTextBrowser*)self, dx, dy);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, int dx, int dy ```
void q_textbrowser_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTextBrowser_QBaseScrollContentsBy((QTextBrowser*)self, dx, dy);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, int, int) ```
void q_textbrowser_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTextBrowser_OnScrollContentsBy((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QTextCursor* cursor ```
void q_textbrowser_do_set_text_cursor(void* self, void* cursor) {
    QTextBrowser_DoSetTextCursor((QTextBrowser*)self, (QTextCursor*)cursor);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QTextCursor* cursor ```
void q_textbrowser_qbase_do_set_text_cursor(void* self, void* cursor) {
    QTextBrowser_QBaseDoSetTextCursor((QTextBrowser*)self, (QTextCursor*)cursor);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QTextCursor*) ```
void q_textbrowser_on_do_set_text_cursor(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDoSetTextCursor((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_minimum_size_hint(void* self) {
    return QTextBrowser_MinimumSizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_qbase_minimum_size_hint(void* self) {
    return QTextBrowser_QBaseMinimumSizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QSize* (*slot)() ```
void q_textbrowser_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnMinimumSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_size_hint(void* self) {
    return QTextBrowser_SizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_qbase_size_hint(void* self) {
    return QTextBrowser_QBaseSizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QSize* (*slot)() ```
void q_textbrowser_on_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QWidget* viewport ```
void q_textbrowser_setup_viewport(void* self, void* viewport) {
    QTextBrowser_SetupViewport((QTextBrowser*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QWidget* viewport ```
void q_textbrowser_qbase_setup_viewport(void* self, void* viewport) {
    QTextBrowser_QBaseSetupViewport((QTextBrowser*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QWidget*) ```
void q_textbrowser_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnSetupViewport((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QObject* param1, QEvent* param2 ```
bool q_textbrowser_event_filter(void* self, void* param1, void* param2) {
    return QTextBrowser_EventFilter((QTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QObject* param1, QEvent* param2 ```
bool q_textbrowser_qbase_event_filter(void* self, void* param1, void* param2) {
    return QTextBrowser_QBaseEventFilter((QTextBrowser*)self, (QObject*)param1, (QEvent*)param2);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, QObject*, QEvent*) ```
void q_textbrowser_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextBrowser_OnEventFilter((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* param1 ```
bool q_textbrowser_viewport_event(void* self, void* param1) {
    return QTextBrowser_ViewportEvent((QTextBrowser*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* param1 ```
bool q_textbrowser_qbase_viewport_event(void* self, void* param1) {
    return QTextBrowser_QBaseViewportEvent((QTextBrowser*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, QEvent*) ```
void q_textbrowser_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnViewportEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_viewport_size_hint(void* self) {
    return QTextBrowser_ViewportSizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QSize* q_textbrowser_qbase_viewport_size_hint(void* self) {
    return QTextBrowser_QBaseViewportSizeHint((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QSize* (*slot)() ```
void q_textbrowser_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTextBrowser_OnViewportSizeHint((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QStyleOptionFrame* option ```
void q_textbrowser_init_style_option(void* self, void* option) {
    QTextBrowser_InitStyleOption((QTextBrowser*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QStyleOptionFrame* option ```
void q_textbrowser_qbase_init_style_option(void* self, void* option) {
    QTextBrowser_QBaseInitStyleOption((QTextBrowser*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QStyleOptionFrame*) ```
void q_textbrowser_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInitStyleOption((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_dev_type(void* self) {
    return QTextBrowser_DevType((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_qbase_dev_type(void* self) {
    return QTextBrowser_QBaseDevType((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, int32_t (*slot)() ```
void q_textbrowser_on_dev_type(void* self, int32_t (*slot)()) {
    QTextBrowser_OnDevType((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, bool visible ```
void q_textbrowser_set_visible(void* self, bool visible) {
    QTextBrowser_SetVisible((QTextBrowser*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, bool visible ```
void q_textbrowser_qbase_set_visible(void* self, bool visible) {
    QTextBrowser_QBaseSetVisible((QTextBrowser*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, bool) ```
void q_textbrowser_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTextBrowser_OnSetVisible((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, int param1 ```
int32_t q_textbrowser_height_for_width(void* self, int param1) {
    return QTextBrowser_HeightForWidth((QTextBrowser*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, int param1 ```
int32_t q_textbrowser_qbase_height_for_width(void* self, int param1) {
    return QTextBrowser_QBaseHeightForWidth((QTextBrowser*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, int32_t (*slot)(QTextBrowser*, int) ```
void q_textbrowser_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTextBrowser_OnHeightForWidth((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_has_height_for_width(void* self) {
    return QTextBrowser_HasHeightForWidth((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_qbase_has_height_for_width(void* self) {
    return QTextBrowser_QBaseHasHeightForWidth((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)() ```
void q_textbrowser_on_has_height_for_width(void* self, bool (*slot)()) {
    QTextBrowser_OnHasHeightForWidth((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QPaintEngine* q_textbrowser_paint_engine(void* self) {
    return QTextBrowser_PaintEngine((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QPaintEngine* q_textbrowser_qbase_paint_engine(void* self) {
    return QTextBrowser_QBasePaintEngine((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QPaintEngine* (*slot)() ```
void q_textbrowser_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTextBrowser_OnPaintEngine((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QEnterEvent* event ```
void q_textbrowser_enter_event(void* self, void* event) {
    QTextBrowser_EnterEvent((QTextBrowser*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QEnterEvent* event ```
void q_textbrowser_qbase_enter_event(void* self, void* event) {
    QTextBrowser_QBaseEnterEvent((QTextBrowser*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QEnterEvent*) ```
void q_textbrowser_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnEnterEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* event ```
void q_textbrowser_leave_event(void* self, void* event) {
    QTextBrowser_LeaveEvent((QTextBrowser*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* event ```
void q_textbrowser_qbase_leave_event(void* self, void* event) {
    QTextBrowser_QBaseLeaveEvent((QTextBrowser*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QEvent*) ```
void q_textbrowser_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnLeaveEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMoveEvent* event ```
void q_textbrowser_move_event(void* self, void* event) {
    QTextBrowser_MoveEvent((QTextBrowser*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMoveEvent* event ```
void q_textbrowser_qbase_move_event(void* self, void* event) {
    QTextBrowser_QBaseMoveEvent((QTextBrowser*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMoveEvent*) ```
void q_textbrowser_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnMoveEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QCloseEvent* event ```
void q_textbrowser_close_event(void* self, void* event) {
    QTextBrowser_CloseEvent((QTextBrowser*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QCloseEvent* event ```
void q_textbrowser_qbase_close_event(void* self, void* event) {
    QTextBrowser_QBaseCloseEvent((QTextBrowser*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QCloseEvent*) ```
void q_textbrowser_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnCloseEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QTabletEvent* event ```
void q_textbrowser_tablet_event(void* self, void* event) {
    QTextBrowser_TabletEvent((QTextBrowser*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QTabletEvent* event ```
void q_textbrowser_qbase_tablet_event(void* self, void* event) {
    QTextBrowser_QBaseTabletEvent((QTextBrowser*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QTabletEvent*) ```
void q_textbrowser_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnTabletEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QActionEvent* event ```
void q_textbrowser_action_event(void* self, void* event) {
    QTextBrowser_ActionEvent((QTextBrowser*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QActionEvent* event ```
void q_textbrowser_qbase_action_event(void* self, void* event) {
    QTextBrowser_QBaseActionEvent((QTextBrowser*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QActionEvent*) ```
void q_textbrowser_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnActionEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QHideEvent* event ```
void q_textbrowser_hide_event(void* self, void* event) {
    QTextBrowser_HideEvent((QTextBrowser*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QHideEvent* event ```
void q_textbrowser_qbase_hide_event(void* self, void* event) {
    QTextBrowser_QBaseHideEvent((QTextBrowser*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QHideEvent*) ```
void q_textbrowser_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnHideEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, const char* eventType, void* message, intptr_t* result ```
bool q_textbrowser_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextBrowser_NativeEvent((QTextBrowser*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, const char* eventType, void* message, intptr_t* result ```
bool q_textbrowser_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTextBrowser_QBaseNativeEvent((QTextBrowser*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, const char*, void*, intptr_t*) ```
void q_textbrowser_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTextBrowser_OnNativeEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textbrowser_metric(void* self, int64_t param1) {
    return QTextBrowser_Metric((QTextBrowser*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textbrowser_qbase_metric(void* self, int64_t param1) {
    return QTextBrowser_QBaseMetric((QTextBrowser*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, int32_t (*slot)(QTextBrowser*, enum QPaintDevice__PaintDeviceMetric) ```
void q_textbrowser_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTextBrowser_OnMetric((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QPainter* painter ```
void q_textbrowser_init_painter(void* self, void* painter) {
    QTextBrowser_InitPainter((QTextBrowser*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QPainter* painter ```
void q_textbrowser_qbase_init_painter(void* self, void* painter) {
    QTextBrowser_QBaseInitPainter((QTextBrowser*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QPainter*) ```
void q_textbrowser_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnInitPainter((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QPoint* offset ```
QPaintDevice* q_textbrowser_redirected(void* self, void* offset) {
    return QTextBrowser_Redirected((QTextBrowser*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QPoint* offset ```
QPaintDevice* q_textbrowser_qbase_redirected(void* self, void* offset) {
    return QTextBrowser_QBaseRedirected((QTextBrowser*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QPaintDevice* (*slot)(QTextBrowser*, QPoint*) ```
void q_textbrowser_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTextBrowser_OnRedirected((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QPainter* q_textbrowser_shared_painter(void* self) {
    return QTextBrowser_SharedPainter((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QPainter* q_textbrowser_qbase_shared_painter(void* self) {
    return QTextBrowser_QBaseSharedPainter((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QPainter* (*slot)() ```
void q_textbrowser_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTextBrowser_OnSharedPainter((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QChildEvent* event ```
void q_textbrowser_child_event(void* self, void* event) {
    QTextBrowser_ChildEvent((QTextBrowser*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QChildEvent* event ```
void q_textbrowser_qbase_child_event(void* self, void* event) {
    QTextBrowser_QBaseChildEvent((QTextBrowser*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QChildEvent*) ```
void q_textbrowser_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnChildEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* event ```
void q_textbrowser_custom_event(void* self, void* event) {
    QTextBrowser_CustomEvent((QTextBrowser*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QEvent* event ```
void q_textbrowser_qbase_custom_event(void* self, void* event) {
    QTextBrowser_QBaseCustomEvent((QTextBrowser*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QEvent*) ```
void q_textbrowser_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnCustomEvent((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
void q_textbrowser_connect_notify(void* self, void* signal) {
    QTextBrowser_ConnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
void q_textbrowser_qbase_connect_notify(void* self, void* signal) {
    QTextBrowser_QBaseConnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMetaMethod*) ```
void q_textbrowser_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnConnectNotify((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
void q_textbrowser_disconnect_notify(void* self, void* signal) {
    QTextBrowser_DisconnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
void q_textbrowser_qbase_disconnect_notify(void* self, void* signal) {
    QTextBrowser_QBaseDisconnectNotify((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QMetaMethod*) ```
void q_textbrowser_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDisconnectNotify((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, float range ```
void q_textbrowser_zoom_in_f(void* self, float range) {
    QTextBrowser_ZoomInF((QTextBrowser*)self, range);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, float range ```
void q_textbrowser_qbase_zoom_in_f(void* self, float range) {
    QTextBrowser_QBaseZoomInF((QTextBrowser*)self, range);
}

/// Inherited from QTextEdit
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, float) ```
void q_textbrowser_on_zoom_in_f(void* self, void (*slot)(void*, float)) {
    QTextBrowser_OnZoomInF((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, int left, int top, int right, int bottom ```
void q_textbrowser_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextBrowser_SetViewportMargins((QTextBrowser*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, int left, int top, int right, int bottom ```
void q_textbrowser_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTextBrowser_QBaseSetViewportMargins((QTextBrowser*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, int, int, int, int) ```
void q_textbrowser_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTextBrowser_OnSetViewportMargins((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QMargins* q_textbrowser_viewport_margins(void* self) {
    return QTextBrowser_ViewportMargins((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QMargins* q_textbrowser_qbase_viewport_margins(void* self) {
    return QTextBrowser_QBaseViewportMargins((QTextBrowser*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QMargins* (*slot)() ```
void q_textbrowser_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTextBrowser_OnViewportMargins((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QPainter* param1 ```
void q_textbrowser_draw_frame(void* self, void* param1) {
    QTextBrowser_DrawFrame((QTextBrowser*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QPainter* param1 ```
void q_textbrowser_qbase_draw_frame(void* self, void* param1) {
    QTextBrowser_QBaseDrawFrame((QTextBrowser*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)(QTextBrowser*, QPainter*) ```
void q_textbrowser_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTextBrowser_OnDrawFrame((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_update_micro_focus(void* self) {
    QTextBrowser_UpdateMicroFocus((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_update_micro_focus(void* self) {
    QTextBrowser_QBaseUpdateMicroFocus((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_update_micro_focus(void* self, void (*slot)()) {
    QTextBrowser_OnUpdateMicroFocus((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_create(void* self) {
    QTextBrowser_Create((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_create(void* self) {
    QTextBrowser_QBaseCreate((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_create(void* self, void (*slot)()) {
    QTextBrowser_OnCreate((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_destroy(void* self) {
    QTextBrowser_Destroy((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
void q_textbrowser_qbase_destroy(void* self) {
    QTextBrowser_QBaseDestroy((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, void (*slot)() ```
void q_textbrowser_on_destroy(void* self, void (*slot)()) {
    QTextBrowser_OnDestroy((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_focus_next_child(void* self) {
    return QTextBrowser_FocusNextChild((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_qbase_focus_next_child(void* self) {
    return QTextBrowser_QBaseFocusNextChild((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)() ```
void q_textbrowser_on_focus_next_child(void* self, bool (*slot)()) {
    QTextBrowser_OnFocusNextChild((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_focus_previous_child(void* self) {
    return QTextBrowser_FocusPreviousChild((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
bool q_textbrowser_qbase_focus_previous_child(void* self) {
    return QTextBrowser_QBaseFocusPreviousChild((QTextBrowser*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)() ```
void q_textbrowser_on_focus_previous_child(void* self, bool (*slot)()) {
    QTextBrowser_OnFocusPreviousChild((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
QObject* q_textbrowser_sender(void* self) {
    return QTextBrowser_Sender((QTextBrowser*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
QObject* q_textbrowser_qbase_sender(void* self) {
    return QTextBrowser_QBaseSender((QTextBrowser*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, QObject* (*slot)() ```
void q_textbrowser_on_sender(void* self, QObject* (*slot)()) {
    QTextBrowser_OnSender((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_sender_signal_index(void* self) {
    return QTextBrowser_SenderSignalIndex((QTextBrowser*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self ```
int32_t q_textbrowser_qbase_sender_signal_index(void* self) {
    return QTextBrowser_QBaseSenderSignalIndex((QTextBrowser*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, int32_t (*slot)() ```
void q_textbrowser_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextBrowser_OnSenderSignalIndex((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, const char* signal ```
int32_t q_textbrowser_receivers(void* self, const char* signal) {
    return QTextBrowser_Receivers((QTextBrowser*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, const char* signal ```
int32_t q_textbrowser_qbase_receivers(void* self, const char* signal) {
    return QTextBrowser_QBaseReceivers((QTextBrowser*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, int32_t (*slot)(QTextBrowser*, const char*) ```
void q_textbrowser_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextBrowser_OnReceivers((QTextBrowser*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
bool q_textbrowser_is_signal_connected(void* self, void* signal) {
    return QTextBrowser_IsSignalConnected((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextBrowser* self, QMetaMethod* signal ```
bool q_textbrowser_qbase_is_signal_connected(void* self, void* signal) {
    return QTextBrowser_QBaseIsSignalConnected((QTextBrowser*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextBrowser* self, bool (*slot)(QTextBrowser*, QMetaMethod*) ```
void q_textbrowser_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextBrowser_OnIsSignalConnected((QTextBrowser*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTextBrowser* self ```
void q_textbrowser_delete(void* self) {
    QTextBrowser_Delete((QTextBrowser*)(self));
}