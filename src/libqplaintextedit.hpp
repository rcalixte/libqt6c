#pragma once
#ifndef SRCC_LIBQPLAINTEXTEDIT_HPP
#define SRCC_LIBQPLAINTEXTEDIT_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext)
typedef QAbstractTextDocumentLayout::PaintContext QAbstractTextDocumentLayout__PaintContext;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection)
typedef QTextEdit::ExtraSelection QTextEdit__ExtraSelection;
#endif
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QFrame QFrame;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPlainTextDocumentLayout QPlainTextDocumentLayout;
typedef struct QPlainTextEdit QPlainTextEdit;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QRegularExpression QRegularExpression;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit__ExtraSelection QTextEdit__ExtraSelection;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextObjectInterface QTextObjectInterface;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

#ifdef __cplusplus
typedef QPlainTextEdit::LineWrapMode LineWrapMode; // C++ enum
#else
typedef int LineWrapMode; // C ABI enum
#endif

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent);
QPlainTextEdit* QPlainTextEdit_new2();
QPlainTextEdit* QPlainTextEdit_new3(libqt_string text);
QPlainTextEdit* QPlainTextEdit_new4(libqt_string text, QWidget* parent);
QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self);
void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1);
int QPlainTextEdit_Metacall(QPlainTextEdit* self, int param1, int param2, void** param3);
void QPlainTextEdit_OnMetacall(QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseMetacall(QPlainTextEdit* self, int param1, int param2, void** param3);
libqt_string QPlainTextEdit_Tr(const char* s);
void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document);
QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self);
void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, libqt_string placeholderText);
libqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self);
void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self);
bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self);
void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro);
void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags);
int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self);
void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier);
void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self);
bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self);
void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b);
void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, libqt_string title);
libqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self);
bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self);
void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable);
void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum);
int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self);
int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode);
int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy);
void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible);
bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self);
void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled);
bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self);
bool QPlainTextEdit_Find(QPlainTextEdit* self, libqt_string exp);
bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegularExpression* exp);
libqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self);
void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self);
QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name);
void QPlainTextEdit_OnLoadResource(QPlainTextEdit* self, intptr_t slot);
QVariant* QPlainTextEdit_QBaseLoadResource(QPlainTextEdit* self, int typeVal, QUrl* name);
QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self);
QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position);
QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, QPoint* pos);
QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, QTextCursor* cursor);
QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self);
libqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, QPoint* pos);
bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite);
double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self);
void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance);
int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self);
void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width);
void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections);
libqt_list /* of QTextEdit__ExtraSelection* */ QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self);
void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation);
bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self);
void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer);
int QPlainTextEdit_BlockCount(const QPlainTextEdit* self);
QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property);
void QPlainTextEdit_OnInputMethodQuery(const QPlainTextEdit* self, intptr_t slot);
QVariant* QPlainTextEdit_QBaseInputMethodQuery(const QPlainTextEdit* self, int property);
QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument);
void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, libqt_string text);
void QPlainTextEdit_Cut(QPlainTextEdit* self);
void QPlainTextEdit_Copy(QPlainTextEdit* self);
void QPlainTextEdit_Paste(QPlainTextEdit* self);
void QPlainTextEdit_Undo(QPlainTextEdit* self);
void QPlainTextEdit_Redo(QPlainTextEdit* self);
void QPlainTextEdit_Clear(QPlainTextEdit* self);
void QPlainTextEdit_SelectAll(QPlainTextEdit* self);
void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, libqt_string text);
void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, libqt_string text);
void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, libqt_string html);
void QPlainTextEdit_CenterCursor(QPlainTextEdit* self);
void QPlainTextEdit_ZoomIn(QPlainTextEdit* self);
void QPlainTextEdit_ZoomOut(QPlainTextEdit* self);
void QPlainTextEdit_TextChanged(QPlainTextEdit* self);
void QPlainTextEdit_Connect_TextChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_Connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_Connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_Connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self);
void QPlainTextEdit_Connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self);
void QPlainTextEdit_Connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy);
void QPlainTextEdit_Connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount);
void QPlainTextEdit_Connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1);
void QPlainTextEdit_Connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_Event(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_OnEvent(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseEvent(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_TimerEvent(QPlainTextEdit* self, QTimerEvent* e);
void QPlainTextEdit_OnTimerEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseTimerEvent(QPlainTextEdit* self, QTimerEvent* e);
void QPlainTextEdit_KeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_OnKeyPressEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseKeyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_KeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_OnKeyReleaseEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseKeyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_ResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
void QPlainTextEdit_OnResizeEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseResizeEvent(QPlainTextEdit* self, QResizeEvent* e);
void QPlainTextEdit_PaintEvent(QPlainTextEdit* self, QPaintEvent* e);
void QPlainTextEdit_OnPaintEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBasePaintEvent(QPlainTextEdit* self, QPaintEvent* e);
void QPlainTextEdit_MousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_OnMousePressEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseMousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_MouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_OnMouseMoveEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseMouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_MouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_OnMouseReleaseEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseMouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_MouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_OnMouseDoubleClickEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseMouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
bool QPlainTextEdit_FocusNextPrevChild(QPlainTextEdit* self, bool next);
void QPlainTextEdit_OnFocusNextPrevChild(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseFocusNextPrevChild(QPlainTextEdit* self, bool next);
void QPlainTextEdit_ContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
void QPlainTextEdit_OnContextMenuEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseContextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
void QPlainTextEdit_DragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
void QPlainTextEdit_OnDragEnterEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
void QPlainTextEdit_DragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
void QPlainTextEdit_OnDragLeaveEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
void QPlainTextEdit_DragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
void QPlainTextEdit_OnDragMoveEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
void QPlainTextEdit_DropEvent(QPlainTextEdit* self, QDropEvent* e);
void QPlainTextEdit_OnDropEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDropEvent(QPlainTextEdit* self, QDropEvent* e);
void QPlainTextEdit_FocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_OnFocusInEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseFocusInEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_FocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_OnFocusOutEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseFocusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_ShowEvent(QPlainTextEdit* self, QShowEvent* param1);
void QPlainTextEdit_OnShowEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseShowEvent(QPlainTextEdit* self, QShowEvent* param1);
void QPlainTextEdit_ChangeEvent(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_OnChangeEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseChangeEvent(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_WheelEvent(QPlainTextEdit* self, QWheelEvent* e);
void QPlainTextEdit_OnWheelEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseWheelEvent(QPlainTextEdit* self, QWheelEvent* e);
QMimeData* QPlainTextEdit_CreateMimeDataFromSelection(const QPlainTextEdit* self);
void QPlainTextEdit_OnCreateMimeDataFromSelection(const QPlainTextEdit* self, intptr_t slot);
QMimeData* QPlainTextEdit_QBaseCreateMimeDataFromSelection(const QPlainTextEdit* self);
bool QPlainTextEdit_CanInsertFromMimeData(const QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_OnCanInsertFromMimeData(const QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseCanInsertFromMimeData(const QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_InsertFromMimeData(QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_OnInsertFromMimeData(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseInsertFromMimeData(QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_InputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
void QPlainTextEdit_OnInputMethodEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseInputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
void QPlainTextEdit_ScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
void QPlainTextEdit_OnScrollContentsBy(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseScrollContentsBy(QPlainTextEdit* self, int dx, int dy);
void QPlainTextEdit_DoSetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
void QPlainTextEdit_OnDoSetTextCursor(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDoSetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
libqt_string QPlainTextEdit_Tr2(const char* s, const char* c);
libqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n);
bool QPlainTextEdit_Find2(QPlainTextEdit* self, libqt_string exp, int options);
bool QPlainTextEdit_Find22(QPlainTextEdit* self, QRegularExpression* exp, int options);
void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode);
void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int range);
void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int range);
QSize* QPlainTextEdit_MinimumSizeHint(const QPlainTextEdit* self);
void QPlainTextEdit_OnMinimumSizeHint(const QPlainTextEdit* self, intptr_t slot);
QSize* QPlainTextEdit_QBaseMinimumSizeHint(const QPlainTextEdit* self);
QSize* QPlainTextEdit_SizeHint(const QPlainTextEdit* self);
void QPlainTextEdit_OnSizeHint(const QPlainTextEdit* self, intptr_t slot);
QSize* QPlainTextEdit_QBaseSizeHint(const QPlainTextEdit* self);
void QPlainTextEdit_SetupViewport(QPlainTextEdit* self, QWidget* viewport);
void QPlainTextEdit_OnSetupViewport(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseSetupViewport(QPlainTextEdit* self, QWidget* viewport);
bool QPlainTextEdit_EventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2);
void QPlainTextEdit_OnEventFilter(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseEventFilter(QPlainTextEdit* self, QObject* param1, QEvent* param2);
bool QPlainTextEdit_ViewportEvent(QPlainTextEdit* self, QEvent* param1);
void QPlainTextEdit_OnViewportEvent(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseViewportEvent(QPlainTextEdit* self, QEvent* param1);
int QPlainTextEdit_DevType(const QPlainTextEdit* self);
void QPlainTextEdit_OnDevType(const QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseDevType(const QPlainTextEdit* self);
void QPlainTextEdit_SetVisible(QPlainTextEdit* self, bool visible);
void QPlainTextEdit_OnSetVisible(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseSetVisible(QPlainTextEdit* self, bool visible);
int QPlainTextEdit_HeightForWidth(const QPlainTextEdit* self, int param1);
void QPlainTextEdit_OnHeightForWidth(const QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseHeightForWidth(const QPlainTextEdit* self, int param1);
bool QPlainTextEdit_HasHeightForWidth(const QPlainTextEdit* self);
void QPlainTextEdit_OnHasHeightForWidth(const QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseHasHeightForWidth(const QPlainTextEdit* self);
QPaintEngine* QPlainTextEdit_PaintEngine(const QPlainTextEdit* self);
void QPlainTextEdit_OnPaintEngine(const QPlainTextEdit* self, intptr_t slot);
QPaintEngine* QPlainTextEdit_QBasePaintEngine(const QPlainTextEdit* self);
void QPlainTextEdit_EnterEvent(QPlainTextEdit* self, QEnterEvent* event);
void QPlainTextEdit_OnEnterEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseEnterEvent(QPlainTextEdit* self, QEnterEvent* event);
void QPlainTextEdit_LeaveEvent(QPlainTextEdit* self, QEvent* event);
void QPlainTextEdit_OnLeaveEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseLeaveEvent(QPlainTextEdit* self, QEvent* event);
void QPlainTextEdit_MoveEvent(QPlainTextEdit* self, QMoveEvent* event);
void QPlainTextEdit_OnMoveEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseMoveEvent(QPlainTextEdit* self, QMoveEvent* event);
void QPlainTextEdit_CloseEvent(QPlainTextEdit* self, QCloseEvent* event);
void QPlainTextEdit_OnCloseEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseCloseEvent(QPlainTextEdit* self, QCloseEvent* event);
void QPlainTextEdit_TabletEvent(QPlainTextEdit* self, QTabletEvent* event);
void QPlainTextEdit_OnTabletEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseTabletEvent(QPlainTextEdit* self, QTabletEvent* event);
void QPlainTextEdit_ActionEvent(QPlainTextEdit* self, QActionEvent* event);
void QPlainTextEdit_OnActionEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseActionEvent(QPlainTextEdit* self, QActionEvent* event);
void QPlainTextEdit_HideEvent(QPlainTextEdit* self, QHideEvent* event);
void QPlainTextEdit_OnHideEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseHideEvent(QPlainTextEdit* self, QHideEvent* event);
bool QPlainTextEdit_NativeEvent(QPlainTextEdit* self, libqt_string eventType, void* message, intptr_t* result);
void QPlainTextEdit_OnNativeEvent(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseNativeEvent(QPlainTextEdit* self, libqt_string eventType, void* message, intptr_t* result);
void QPlainTextEdit_ChildEvent(QPlainTextEdit* self, QChildEvent* event);
void QPlainTextEdit_OnChildEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseChildEvent(QPlainTextEdit* self, QChildEvent* event);
void QPlainTextEdit_CustomEvent(QPlainTextEdit* self, QEvent* event);
void QPlainTextEdit_OnCustomEvent(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseCustomEvent(QPlainTextEdit* self, QEvent* event);
void QPlainTextEdit_ConnectNotify(QPlainTextEdit* self, QMetaMethod* signal);
void QPlainTextEdit_OnConnectNotify(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseConnectNotify(QPlainTextEdit* self, QMetaMethod* signal);
void QPlainTextEdit_DisconnectNotify(QPlainTextEdit* self, QMetaMethod* signal);
void QPlainTextEdit_OnDisconnectNotify(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDisconnectNotify(QPlainTextEdit* self, QMetaMethod* signal);
QSize* QPlainTextEdit_ViewportSizeHint(const QPlainTextEdit* self);
void QPlainTextEdit_OnViewportSizeHint(const QPlainTextEdit* self, intptr_t slot);
QSize* QPlainTextEdit_QBaseViewportSizeHint(const QPlainTextEdit* self);
void QPlainTextEdit_InitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option);
void QPlainTextEdit_OnInitStyleOption(const QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseInitStyleOption(const QPlainTextEdit* self, QStyleOptionFrame* option);
int QPlainTextEdit_Metric(const QPlainTextEdit* self, int param1);
void QPlainTextEdit_OnMetric(const QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseMetric(const QPlainTextEdit* self, int param1);
void QPlainTextEdit_InitPainter(const QPlainTextEdit* self, QPainter* painter);
void QPlainTextEdit_OnInitPainter(const QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseInitPainter(const QPlainTextEdit* self, QPainter* painter);
QPaintDevice* QPlainTextEdit_Redirected(const QPlainTextEdit* self, QPoint* offset);
void QPlainTextEdit_OnRedirected(const QPlainTextEdit* self, intptr_t slot);
QPaintDevice* QPlainTextEdit_QBaseRedirected(const QPlainTextEdit* self, QPoint* offset);
QPainter* QPlainTextEdit_SharedPainter(const QPlainTextEdit* self);
void QPlainTextEdit_OnSharedPainter(const QPlainTextEdit* self, intptr_t slot);
QPainter* QPlainTextEdit_QBaseSharedPainter(const QPlainTextEdit* self);
QTextBlock* QPlainTextEdit_FirstVisibleBlock(const QPlainTextEdit* self);
void QPlainTextEdit_OnFirstVisibleBlock(const QPlainTextEdit* self, intptr_t slot);
QTextBlock* QPlainTextEdit_QBaseFirstVisibleBlock(const QPlainTextEdit* self);
QPointF* QPlainTextEdit_ContentOffset(const QPlainTextEdit* self);
void QPlainTextEdit_OnContentOffset(const QPlainTextEdit* self, intptr_t slot);
QPointF* QPlainTextEdit_QBaseContentOffset(const QPlainTextEdit* self);
QRectF* QPlainTextEdit_BlockBoundingRect(const QPlainTextEdit* self, QTextBlock* block);
void QPlainTextEdit_OnBlockBoundingRect(const QPlainTextEdit* self, intptr_t slot);
QRectF* QPlainTextEdit_QBaseBlockBoundingRect(const QPlainTextEdit* self, QTextBlock* block);
QRectF* QPlainTextEdit_BlockBoundingGeometry(const QPlainTextEdit* self, QTextBlock* block);
void QPlainTextEdit_OnBlockBoundingGeometry(const QPlainTextEdit* self, intptr_t slot);
QRectF* QPlainTextEdit_QBaseBlockBoundingGeometry(const QPlainTextEdit* self, QTextBlock* block);
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_GetPaintContext(const QPlainTextEdit* self);
void QPlainTextEdit_OnGetPaintContext(const QPlainTextEdit* self, intptr_t slot);
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_QBaseGetPaintContext(const QPlainTextEdit* self);
void QPlainTextEdit_ZoomInF(QPlainTextEdit* self, float range);
void QPlainTextEdit_OnZoomInF(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseZoomInF(QPlainTextEdit* self, float range);
void QPlainTextEdit_SetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom);
void QPlainTextEdit_OnSetViewportMargins(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseSetViewportMargins(QPlainTextEdit* self, int left, int top, int right, int bottom);
QMargins* QPlainTextEdit_ViewportMargins(const QPlainTextEdit* self);
void QPlainTextEdit_OnViewportMargins(const QPlainTextEdit* self, intptr_t slot);
QMargins* QPlainTextEdit_QBaseViewportMargins(const QPlainTextEdit* self);
void QPlainTextEdit_DrawFrame(QPlainTextEdit* self, QPainter* param1);
void QPlainTextEdit_OnDrawFrame(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDrawFrame(QPlainTextEdit* self, QPainter* param1);
void QPlainTextEdit_UpdateMicroFocus(QPlainTextEdit* self);
void QPlainTextEdit_OnUpdateMicroFocus(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseUpdateMicroFocus(QPlainTextEdit* self);
void QPlainTextEdit_Create(QPlainTextEdit* self);
void QPlainTextEdit_OnCreate(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseCreate(QPlainTextEdit* self);
void QPlainTextEdit_Destroy(QPlainTextEdit* self);
void QPlainTextEdit_OnDestroy(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_QBaseDestroy(QPlainTextEdit* self);
bool QPlainTextEdit_FocusNextChild(QPlainTextEdit* self);
void QPlainTextEdit_OnFocusNextChild(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseFocusNextChild(QPlainTextEdit* self);
bool QPlainTextEdit_FocusPreviousChild(QPlainTextEdit* self);
void QPlainTextEdit_OnFocusPreviousChild(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseFocusPreviousChild(QPlainTextEdit* self);
QObject* QPlainTextEdit_Sender(const QPlainTextEdit* self);
void QPlainTextEdit_OnSender(const QPlainTextEdit* self, intptr_t slot);
QObject* QPlainTextEdit_QBaseSender(const QPlainTextEdit* self);
int QPlainTextEdit_SenderSignalIndex(const QPlainTextEdit* self);
void QPlainTextEdit_OnSenderSignalIndex(const QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseSenderSignalIndex(const QPlainTextEdit* self);
int QPlainTextEdit_Receivers(const QPlainTextEdit* self, const char* signal);
void QPlainTextEdit_OnReceivers(const QPlainTextEdit* self, intptr_t slot);
int QPlainTextEdit_QBaseReceivers(const QPlainTextEdit* self, const char* signal);
bool QPlainTextEdit_IsSignalConnected(const QPlainTextEdit* self, QMetaMethod* signal);
void QPlainTextEdit_OnIsSignalConnected(const QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_QBaseIsSignalConnected(const QPlainTextEdit* self, QMetaMethod* signal);
void QPlainTextEdit_Delete(QPlainTextEdit* self);

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document);
QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self);
void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1);
int QPlainTextDocumentLayout_Metacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3);
void QPlainTextDocumentLayout_OnMetacall(QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBaseMetacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3);
libqt_string QPlainTextDocumentLayout_Tr(const char* s);
void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
void QPlainTextDocumentLayout_OnDraw(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseDraw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2);
void QPlainTextDocumentLayout_OnHitTest(const QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBaseHitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2);
int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_OnPageCount(const QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBasePageCount(const QPlainTextDocumentLayout* self);
QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_OnDocumentSize(const QPlainTextDocumentLayout* self, intptr_t slot);
QSizeF* QPlainTextDocumentLayout_QBaseDocumentSize(const QPlainTextDocumentLayout* self);
QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1);
void QPlainTextDocumentLayout_OnFrameBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot);
QRectF* QPlainTextDocumentLayout_QBaseFrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1);
QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_OnBlockBoundingRect(const QPlainTextDocumentLayout* self, intptr_t slot);
QRectF* QPlainTextDocumentLayout_QBaseBlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width);
int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_DocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
void QPlainTextDocumentLayout_OnDocumentChanged(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseDocumentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
libqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c);
libqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n);
void QPlainTextDocumentLayout_ResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_OnResizeInlineObject(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseResizeInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_PositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_OnPositionInlineObject(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBasePositionInlineObject(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_DrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_OnDrawInlineObject(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseDrawInlineObject(QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
bool QPlainTextDocumentLayout_Event(QPlainTextDocumentLayout* self, QEvent* event);
void QPlainTextDocumentLayout_OnEvent(QPlainTextDocumentLayout* self, intptr_t slot);
bool QPlainTextDocumentLayout_QBaseEvent(QPlainTextDocumentLayout* self, QEvent* event);
bool QPlainTextDocumentLayout_EventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event);
void QPlainTextDocumentLayout_OnEventFilter(QPlainTextDocumentLayout* self, intptr_t slot);
bool QPlainTextDocumentLayout_QBaseEventFilter(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event);
void QPlainTextDocumentLayout_TimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event);
void QPlainTextDocumentLayout_OnTimerEvent(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseTimerEvent(QPlainTextDocumentLayout* self, QTimerEvent* event);
void QPlainTextDocumentLayout_ChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event);
void QPlainTextDocumentLayout_OnChildEvent(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseChildEvent(QPlainTextDocumentLayout* self, QChildEvent* event);
void QPlainTextDocumentLayout_CustomEvent(QPlainTextDocumentLayout* self, QEvent* event);
void QPlainTextDocumentLayout_OnCustomEvent(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseCustomEvent(QPlainTextDocumentLayout* self, QEvent* event);
void QPlainTextDocumentLayout_ConnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_OnConnectNotify(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseConnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_DisconnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_OnDisconnectNotify(QPlainTextDocumentLayout* self, intptr_t slot);
void QPlainTextDocumentLayout_QBaseDisconnectNotify(QPlainTextDocumentLayout* self, QMetaMethod* signal);
int QPlainTextDocumentLayout_FormatIndex(QPlainTextDocumentLayout* self, int pos);
void QPlainTextDocumentLayout_OnFormatIndex(QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBaseFormatIndex(QPlainTextDocumentLayout* self, int pos);
QTextCharFormat* QPlainTextDocumentLayout_Format(QPlainTextDocumentLayout* self, int pos);
void QPlainTextDocumentLayout_OnFormat(QPlainTextDocumentLayout* self, intptr_t slot);
QTextCharFormat* QPlainTextDocumentLayout_QBaseFormat(QPlainTextDocumentLayout* self, int pos);
QObject* QPlainTextDocumentLayout_Sender(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_OnSender(const QPlainTextDocumentLayout* self, intptr_t slot);
QObject* QPlainTextDocumentLayout_QBaseSender(const QPlainTextDocumentLayout* self);
int QPlainTextDocumentLayout_SenderSignalIndex(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_OnSenderSignalIndex(const QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBaseSenderSignalIndex(const QPlainTextDocumentLayout* self);
int QPlainTextDocumentLayout_Receivers(const QPlainTextDocumentLayout* self, const char* signal);
void QPlainTextDocumentLayout_OnReceivers(const QPlainTextDocumentLayout* self, intptr_t slot);
int QPlainTextDocumentLayout_QBaseReceivers(const QPlainTextDocumentLayout* self, const char* signal);
bool QPlainTextDocumentLayout_IsSignalConnected(const QPlainTextDocumentLayout* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_OnIsSignalConnected(const QPlainTextDocumentLayout* self, intptr_t slot);
bool QPlainTextDocumentLayout_QBaseIsSignalConnected(const QPlainTextDocumentLayout* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
