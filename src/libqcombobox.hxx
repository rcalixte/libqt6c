#pragma once
#ifndef SRCC_LIBVIRTUALQCOMBOBOX_H
#define SRCC_LIBVIRTUALQCOMBOBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QComboBox so that we can call protected methods
class VirtualQComboBox : public QComboBox {

  public:
    // Virtual class public types (including callbacks)
    using QComboBox_Metacall_Callback = int (*)(QComboBox*, QMetaObject::Call, int, void**);
    using QComboBox_SetModel_Callback = void (*)(QComboBox*, QAbstractItemModel*);
    using QComboBox_SizeHint_Callback = QSize (*)();
    using QComboBox_MinimumSizeHint_Callback = QSize (*)();
    using QComboBox_ShowPopup_Callback = void (*)();
    using QComboBox_HidePopup_Callback = void (*)();
    using QComboBox_Event_Callback = bool (*)(QComboBox*, QEvent*);
    using QComboBox_InputMethodQuery_Callback = QVariant (*)(const QComboBox*, Qt::InputMethodQuery);
    using QComboBox_FocusInEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_FocusOutEvent_Callback = void (*)(QComboBox*, QFocusEvent*);
    using QComboBox_ChangeEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ResizeEvent_Callback = void (*)(QComboBox*, QResizeEvent*);
    using QComboBox_PaintEvent_Callback = void (*)(QComboBox*, QPaintEvent*);
    using QComboBox_ShowEvent_Callback = void (*)(QComboBox*, QShowEvent*);
    using QComboBox_HideEvent_Callback = void (*)(QComboBox*, QHideEvent*);
    using QComboBox_MousePressEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseReleaseEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_KeyPressEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_KeyReleaseEvent_Callback = void (*)(QComboBox*, QKeyEvent*);
    using QComboBox_WheelEvent_Callback = void (*)(QComboBox*, QWheelEvent*);
    using QComboBox_ContextMenuEvent_Callback = void (*)(QComboBox*, QContextMenuEvent*);
    using QComboBox_InputMethodEvent_Callback = void (*)(QComboBox*, QInputMethodEvent*);
    using QComboBox_InitStyleOption_Callback = void (*)(const QComboBox*, QStyleOptionComboBox*);
    using QComboBox_DevType_Callback = int (*)();
    using QComboBox_SetVisible_Callback = void (*)(QComboBox*, bool);
    using QComboBox_HeightForWidth_Callback = int (*)(const QComboBox*, int);
    using QComboBox_HasHeightForWidth_Callback = bool (*)();
    using QComboBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QComboBox_MouseDoubleClickEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_MouseMoveEvent_Callback = void (*)(QComboBox*, QMouseEvent*);
    using QComboBox_EnterEvent_Callback = void (*)(QComboBox*, QEnterEvent*);
    using QComboBox_LeaveEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_MoveEvent_Callback = void (*)(QComboBox*, QMoveEvent*);
    using QComboBox_CloseEvent_Callback = void (*)(QComboBox*, QCloseEvent*);
    using QComboBox_TabletEvent_Callback = void (*)(QComboBox*, QTabletEvent*);
    using QComboBox_ActionEvent_Callback = void (*)(QComboBox*, QActionEvent*);
    using QComboBox_DragEnterEvent_Callback = void (*)(QComboBox*, QDragEnterEvent*);
    using QComboBox_DragMoveEvent_Callback = void (*)(QComboBox*, QDragMoveEvent*);
    using QComboBox_DragLeaveEvent_Callback = void (*)(QComboBox*, QDragLeaveEvent*);
    using QComboBox_DropEvent_Callback = void (*)(QComboBox*, QDropEvent*);
    using QComboBox_NativeEvent_Callback = bool (*)(QComboBox*, const QByteArray&, void*, qintptr*);
    using QComboBox_Metric_Callback = int (*)(const QComboBox*, QPaintDevice::PaintDeviceMetric);
    using QComboBox_InitPainter_Callback = void (*)(const QComboBox*, QPainter*);
    using QComboBox_Redirected_Callback = QPaintDevice* (*)(const QComboBox*, QPoint*);
    using QComboBox_SharedPainter_Callback = QPainter* (*)();
    using QComboBox_FocusNextPrevChild_Callback = bool (*)(QComboBox*, bool);
    using QComboBox_EventFilter_Callback = bool (*)(QComboBox*, QObject*, QEvent*);
    using QComboBox_TimerEvent_Callback = void (*)(QComboBox*, QTimerEvent*);
    using QComboBox_ChildEvent_Callback = void (*)(QComboBox*, QChildEvent*);
    using QComboBox_CustomEvent_Callback = void (*)(QComboBox*, QEvent*);
    using QComboBox_ConnectNotify_Callback = void (*)(QComboBox*, const QMetaMethod&);
    using QComboBox_DisconnectNotify_Callback = void (*)(QComboBox*, const QMetaMethod&);
    using QComboBox_UpdateMicroFocus_Callback = void (*)();
    using QComboBox_Create_Callback = void (*)();
    using QComboBox_Destroy_Callback = void (*)();
    using QComboBox_FocusNextChild_Callback = bool (*)();
    using QComboBox_FocusPreviousChild_Callback = bool (*)();
    using QComboBox_Sender_Callback = QObject* (*)();
    using QComboBox_SenderSignalIndex_Callback = int (*)();
    using QComboBox_Receivers_Callback = int (*)(const QComboBox*, const char*);
    using QComboBox_IsSignalConnected_Callback = bool (*)(const QComboBox*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QComboBox_Metacall_Callback qcombobox_metacall_callback = nullptr;
    QComboBox_SetModel_Callback qcombobox_setmodel_callback = nullptr;
    QComboBox_SizeHint_Callback qcombobox_sizehint_callback = nullptr;
    QComboBox_MinimumSizeHint_Callback qcombobox_minimumsizehint_callback = nullptr;
    QComboBox_ShowPopup_Callback qcombobox_showpopup_callback = nullptr;
    QComboBox_HidePopup_Callback qcombobox_hidepopup_callback = nullptr;
    QComboBox_Event_Callback qcombobox_event_callback = nullptr;
    QComboBox_InputMethodQuery_Callback qcombobox_inputmethodquery_callback = nullptr;
    QComboBox_FocusInEvent_Callback qcombobox_focusinevent_callback = nullptr;
    QComboBox_FocusOutEvent_Callback qcombobox_focusoutevent_callback = nullptr;
    QComboBox_ChangeEvent_Callback qcombobox_changeevent_callback = nullptr;
    QComboBox_ResizeEvent_Callback qcombobox_resizeevent_callback = nullptr;
    QComboBox_PaintEvent_Callback qcombobox_paintevent_callback = nullptr;
    QComboBox_ShowEvent_Callback qcombobox_showevent_callback = nullptr;
    QComboBox_HideEvent_Callback qcombobox_hideevent_callback = nullptr;
    QComboBox_MousePressEvent_Callback qcombobox_mousepressevent_callback = nullptr;
    QComboBox_MouseReleaseEvent_Callback qcombobox_mousereleaseevent_callback = nullptr;
    QComboBox_KeyPressEvent_Callback qcombobox_keypressevent_callback = nullptr;
    QComboBox_KeyReleaseEvent_Callback qcombobox_keyreleaseevent_callback = nullptr;
    QComboBox_WheelEvent_Callback qcombobox_wheelevent_callback = nullptr;
    QComboBox_ContextMenuEvent_Callback qcombobox_contextmenuevent_callback = nullptr;
    QComboBox_InputMethodEvent_Callback qcombobox_inputmethodevent_callback = nullptr;
    QComboBox_InitStyleOption_Callback qcombobox_initstyleoption_callback = nullptr;
    QComboBox_DevType_Callback qcombobox_devtype_callback = nullptr;
    QComboBox_SetVisible_Callback qcombobox_setvisible_callback = nullptr;
    QComboBox_HeightForWidth_Callback qcombobox_heightforwidth_callback = nullptr;
    QComboBox_HasHeightForWidth_Callback qcombobox_hasheightforwidth_callback = nullptr;
    QComboBox_PaintEngine_Callback qcombobox_paintengine_callback = nullptr;
    QComboBox_MouseDoubleClickEvent_Callback qcombobox_mousedoubleclickevent_callback = nullptr;
    QComboBox_MouseMoveEvent_Callback qcombobox_mousemoveevent_callback = nullptr;
    QComboBox_EnterEvent_Callback qcombobox_enterevent_callback = nullptr;
    QComboBox_LeaveEvent_Callback qcombobox_leaveevent_callback = nullptr;
    QComboBox_MoveEvent_Callback qcombobox_moveevent_callback = nullptr;
    QComboBox_CloseEvent_Callback qcombobox_closeevent_callback = nullptr;
    QComboBox_TabletEvent_Callback qcombobox_tabletevent_callback = nullptr;
    QComboBox_ActionEvent_Callback qcombobox_actionevent_callback = nullptr;
    QComboBox_DragEnterEvent_Callback qcombobox_dragenterevent_callback = nullptr;
    QComboBox_DragMoveEvent_Callback qcombobox_dragmoveevent_callback = nullptr;
    QComboBox_DragLeaveEvent_Callback qcombobox_dragleaveevent_callback = nullptr;
    QComboBox_DropEvent_Callback qcombobox_dropevent_callback = nullptr;
    QComboBox_NativeEvent_Callback qcombobox_nativeevent_callback = nullptr;
    QComboBox_Metric_Callback qcombobox_metric_callback = nullptr;
    QComboBox_InitPainter_Callback qcombobox_initpainter_callback = nullptr;
    QComboBox_Redirected_Callback qcombobox_redirected_callback = nullptr;
    QComboBox_SharedPainter_Callback qcombobox_sharedpainter_callback = nullptr;
    QComboBox_FocusNextPrevChild_Callback qcombobox_focusnextprevchild_callback = nullptr;
    QComboBox_EventFilter_Callback qcombobox_eventfilter_callback = nullptr;
    QComboBox_TimerEvent_Callback qcombobox_timerevent_callback = nullptr;
    QComboBox_ChildEvent_Callback qcombobox_childevent_callback = nullptr;
    QComboBox_CustomEvent_Callback qcombobox_customevent_callback = nullptr;
    QComboBox_ConnectNotify_Callback qcombobox_connectnotify_callback = nullptr;
    QComboBox_DisconnectNotify_Callback qcombobox_disconnectnotify_callback = nullptr;
    QComboBox_UpdateMicroFocus_Callback qcombobox_updatemicrofocus_callback = nullptr;
    QComboBox_Create_Callback qcombobox_create_callback = nullptr;
    QComboBox_Destroy_Callback qcombobox_destroy_callback = nullptr;
    QComboBox_FocusNextChild_Callback qcombobox_focusnextchild_callback = nullptr;
    QComboBox_FocusPreviousChild_Callback qcombobox_focuspreviouschild_callback = nullptr;
    QComboBox_Sender_Callback qcombobox_sender_callback = nullptr;
    QComboBox_SenderSignalIndex_Callback qcombobox_sendersignalindex_callback = nullptr;
    QComboBox_Receivers_Callback qcombobox_receivers_callback = nullptr;
    QComboBox_IsSignalConnected_Callback qcombobox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcombobox_metacall_isbase = false;
    mutable bool qcombobox_setmodel_isbase = false;
    mutable bool qcombobox_sizehint_isbase = false;
    mutable bool qcombobox_minimumsizehint_isbase = false;
    mutable bool qcombobox_showpopup_isbase = false;
    mutable bool qcombobox_hidepopup_isbase = false;
    mutable bool qcombobox_event_isbase = false;
    mutable bool qcombobox_inputmethodquery_isbase = false;
    mutable bool qcombobox_focusinevent_isbase = false;
    mutable bool qcombobox_focusoutevent_isbase = false;
    mutable bool qcombobox_changeevent_isbase = false;
    mutable bool qcombobox_resizeevent_isbase = false;
    mutable bool qcombobox_paintevent_isbase = false;
    mutable bool qcombobox_showevent_isbase = false;
    mutable bool qcombobox_hideevent_isbase = false;
    mutable bool qcombobox_mousepressevent_isbase = false;
    mutable bool qcombobox_mousereleaseevent_isbase = false;
    mutable bool qcombobox_keypressevent_isbase = false;
    mutable bool qcombobox_keyreleaseevent_isbase = false;
    mutable bool qcombobox_wheelevent_isbase = false;
    mutable bool qcombobox_contextmenuevent_isbase = false;
    mutable bool qcombobox_inputmethodevent_isbase = false;
    mutable bool qcombobox_initstyleoption_isbase = false;
    mutable bool qcombobox_devtype_isbase = false;
    mutable bool qcombobox_setvisible_isbase = false;
    mutable bool qcombobox_heightforwidth_isbase = false;
    mutable bool qcombobox_hasheightforwidth_isbase = false;
    mutable bool qcombobox_paintengine_isbase = false;
    mutable bool qcombobox_mousedoubleclickevent_isbase = false;
    mutable bool qcombobox_mousemoveevent_isbase = false;
    mutable bool qcombobox_enterevent_isbase = false;
    mutable bool qcombobox_leaveevent_isbase = false;
    mutable bool qcombobox_moveevent_isbase = false;
    mutable bool qcombobox_closeevent_isbase = false;
    mutable bool qcombobox_tabletevent_isbase = false;
    mutable bool qcombobox_actionevent_isbase = false;
    mutable bool qcombobox_dragenterevent_isbase = false;
    mutable bool qcombobox_dragmoveevent_isbase = false;
    mutable bool qcombobox_dragleaveevent_isbase = false;
    mutable bool qcombobox_dropevent_isbase = false;
    mutable bool qcombobox_nativeevent_isbase = false;
    mutable bool qcombobox_metric_isbase = false;
    mutable bool qcombobox_initpainter_isbase = false;
    mutable bool qcombobox_redirected_isbase = false;
    mutable bool qcombobox_sharedpainter_isbase = false;
    mutable bool qcombobox_focusnextprevchild_isbase = false;
    mutable bool qcombobox_eventfilter_isbase = false;
    mutable bool qcombobox_timerevent_isbase = false;
    mutable bool qcombobox_childevent_isbase = false;
    mutable bool qcombobox_customevent_isbase = false;
    mutable bool qcombobox_connectnotify_isbase = false;
    mutable bool qcombobox_disconnectnotify_isbase = false;
    mutable bool qcombobox_updatemicrofocus_isbase = false;
    mutable bool qcombobox_create_isbase = false;
    mutable bool qcombobox_destroy_isbase = false;
    mutable bool qcombobox_focusnextchild_isbase = false;
    mutable bool qcombobox_focuspreviouschild_isbase = false;
    mutable bool qcombobox_sender_isbase = false;
    mutable bool qcombobox_sendersignalindex_isbase = false;
    mutable bool qcombobox_receivers_isbase = false;
    mutable bool qcombobox_issignalconnected_isbase = false;

  public:
    VirtualQComboBox(QWidget* parent) : QComboBox(parent){};
    VirtualQComboBox() : QComboBox(){};

    ~VirtualQComboBox() {
        qcombobox_metacall_callback = nullptr;
        qcombobox_setmodel_callback = nullptr;
        qcombobox_sizehint_callback = nullptr;
        qcombobox_minimumsizehint_callback = nullptr;
        qcombobox_showpopup_callback = nullptr;
        qcombobox_hidepopup_callback = nullptr;
        qcombobox_event_callback = nullptr;
        qcombobox_inputmethodquery_callback = nullptr;
        qcombobox_focusinevent_callback = nullptr;
        qcombobox_focusoutevent_callback = nullptr;
        qcombobox_changeevent_callback = nullptr;
        qcombobox_resizeevent_callback = nullptr;
        qcombobox_paintevent_callback = nullptr;
        qcombobox_showevent_callback = nullptr;
        qcombobox_hideevent_callback = nullptr;
        qcombobox_mousepressevent_callback = nullptr;
        qcombobox_mousereleaseevent_callback = nullptr;
        qcombobox_keypressevent_callback = nullptr;
        qcombobox_keyreleaseevent_callback = nullptr;
        qcombobox_wheelevent_callback = nullptr;
        qcombobox_contextmenuevent_callback = nullptr;
        qcombobox_inputmethodevent_callback = nullptr;
        qcombobox_initstyleoption_callback = nullptr;
        qcombobox_devtype_callback = nullptr;
        qcombobox_setvisible_callback = nullptr;
        qcombobox_heightforwidth_callback = nullptr;
        qcombobox_hasheightforwidth_callback = nullptr;
        qcombobox_paintengine_callback = nullptr;
        qcombobox_mousedoubleclickevent_callback = nullptr;
        qcombobox_mousemoveevent_callback = nullptr;
        qcombobox_enterevent_callback = nullptr;
        qcombobox_leaveevent_callback = nullptr;
        qcombobox_moveevent_callback = nullptr;
        qcombobox_closeevent_callback = nullptr;
        qcombobox_tabletevent_callback = nullptr;
        qcombobox_actionevent_callback = nullptr;
        qcombobox_dragenterevent_callback = nullptr;
        qcombobox_dragmoveevent_callback = nullptr;
        qcombobox_dragleaveevent_callback = nullptr;
        qcombobox_dropevent_callback = nullptr;
        qcombobox_nativeevent_callback = nullptr;
        qcombobox_metric_callback = nullptr;
        qcombobox_initpainter_callback = nullptr;
        qcombobox_redirected_callback = nullptr;
        qcombobox_sharedpainter_callback = nullptr;
        qcombobox_focusnextprevchild_callback = nullptr;
        qcombobox_eventfilter_callback = nullptr;
        qcombobox_timerevent_callback = nullptr;
        qcombobox_childevent_callback = nullptr;
        qcombobox_customevent_callback = nullptr;
        qcombobox_connectnotify_callback = nullptr;
        qcombobox_disconnectnotify_callback = nullptr;
        qcombobox_updatemicrofocus_callback = nullptr;
        qcombobox_create_callback = nullptr;
        qcombobox_destroy_callback = nullptr;
        qcombobox_focusnextchild_callback = nullptr;
        qcombobox_focuspreviouschild_callback = nullptr;
        qcombobox_sender_callback = nullptr;
        qcombobox_sendersignalindex_callback = nullptr;
        qcombobox_receivers_callback = nullptr;
        qcombobox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQComboBox_Metacall_Callback(QComboBox_Metacall_Callback cb) { qcombobox_metacall_callback = cb; }
    void setQComboBox_SetModel_Callback(QComboBox_SetModel_Callback cb) { qcombobox_setmodel_callback = cb; }
    void setQComboBox_SizeHint_Callback(QComboBox_SizeHint_Callback cb) { qcombobox_sizehint_callback = cb; }
    void setQComboBox_MinimumSizeHint_Callback(QComboBox_MinimumSizeHint_Callback cb) { qcombobox_minimumsizehint_callback = cb; }
    void setQComboBox_ShowPopup_Callback(QComboBox_ShowPopup_Callback cb) { qcombobox_showpopup_callback = cb; }
    void setQComboBox_HidePopup_Callback(QComboBox_HidePopup_Callback cb) { qcombobox_hidepopup_callback = cb; }
    void setQComboBox_Event_Callback(QComboBox_Event_Callback cb) { qcombobox_event_callback = cb; }
    void setQComboBox_InputMethodQuery_Callback(QComboBox_InputMethodQuery_Callback cb) { qcombobox_inputmethodquery_callback = cb; }
    void setQComboBox_FocusInEvent_Callback(QComboBox_FocusInEvent_Callback cb) { qcombobox_focusinevent_callback = cb; }
    void setQComboBox_FocusOutEvent_Callback(QComboBox_FocusOutEvent_Callback cb) { qcombobox_focusoutevent_callback = cb; }
    void setQComboBox_ChangeEvent_Callback(QComboBox_ChangeEvent_Callback cb) { qcombobox_changeevent_callback = cb; }
    void setQComboBox_ResizeEvent_Callback(QComboBox_ResizeEvent_Callback cb) { qcombobox_resizeevent_callback = cb; }
    void setQComboBox_PaintEvent_Callback(QComboBox_PaintEvent_Callback cb) { qcombobox_paintevent_callback = cb; }
    void setQComboBox_ShowEvent_Callback(QComboBox_ShowEvent_Callback cb) { qcombobox_showevent_callback = cb; }
    void setQComboBox_HideEvent_Callback(QComboBox_HideEvent_Callback cb) { qcombobox_hideevent_callback = cb; }
    void setQComboBox_MousePressEvent_Callback(QComboBox_MousePressEvent_Callback cb) { qcombobox_mousepressevent_callback = cb; }
    void setQComboBox_MouseReleaseEvent_Callback(QComboBox_MouseReleaseEvent_Callback cb) { qcombobox_mousereleaseevent_callback = cb; }
    void setQComboBox_KeyPressEvent_Callback(QComboBox_KeyPressEvent_Callback cb) { qcombobox_keypressevent_callback = cb; }
    void setQComboBox_KeyReleaseEvent_Callback(QComboBox_KeyReleaseEvent_Callback cb) { qcombobox_keyreleaseevent_callback = cb; }
    void setQComboBox_WheelEvent_Callback(QComboBox_WheelEvent_Callback cb) { qcombobox_wheelevent_callback = cb; }
    void setQComboBox_ContextMenuEvent_Callback(QComboBox_ContextMenuEvent_Callback cb) { qcombobox_contextmenuevent_callback = cb; }
    void setQComboBox_InputMethodEvent_Callback(QComboBox_InputMethodEvent_Callback cb) { qcombobox_inputmethodevent_callback = cb; }
    void setQComboBox_InitStyleOption_Callback(QComboBox_InitStyleOption_Callback cb) { qcombobox_initstyleoption_callback = cb; }
    void setQComboBox_DevType_Callback(QComboBox_DevType_Callback cb) { qcombobox_devtype_callback = cb; }
    void setQComboBox_SetVisible_Callback(QComboBox_SetVisible_Callback cb) { qcombobox_setvisible_callback = cb; }
    void setQComboBox_HeightForWidth_Callback(QComboBox_HeightForWidth_Callback cb) { qcombobox_heightforwidth_callback = cb; }
    void setQComboBox_HasHeightForWidth_Callback(QComboBox_HasHeightForWidth_Callback cb) { qcombobox_hasheightforwidth_callback = cb; }
    void setQComboBox_PaintEngine_Callback(QComboBox_PaintEngine_Callback cb) { qcombobox_paintengine_callback = cb; }
    void setQComboBox_MouseDoubleClickEvent_Callback(QComboBox_MouseDoubleClickEvent_Callback cb) { qcombobox_mousedoubleclickevent_callback = cb; }
    void setQComboBox_MouseMoveEvent_Callback(QComboBox_MouseMoveEvent_Callback cb) { qcombobox_mousemoveevent_callback = cb; }
    void setQComboBox_EnterEvent_Callback(QComboBox_EnterEvent_Callback cb) { qcombobox_enterevent_callback = cb; }
    void setQComboBox_LeaveEvent_Callback(QComboBox_LeaveEvent_Callback cb) { qcombobox_leaveevent_callback = cb; }
    void setQComboBox_MoveEvent_Callback(QComboBox_MoveEvent_Callback cb) { qcombobox_moveevent_callback = cb; }
    void setQComboBox_CloseEvent_Callback(QComboBox_CloseEvent_Callback cb) { qcombobox_closeevent_callback = cb; }
    void setQComboBox_TabletEvent_Callback(QComboBox_TabletEvent_Callback cb) { qcombobox_tabletevent_callback = cb; }
    void setQComboBox_ActionEvent_Callback(QComboBox_ActionEvent_Callback cb) { qcombobox_actionevent_callback = cb; }
    void setQComboBox_DragEnterEvent_Callback(QComboBox_DragEnterEvent_Callback cb) { qcombobox_dragenterevent_callback = cb; }
    void setQComboBox_DragMoveEvent_Callback(QComboBox_DragMoveEvent_Callback cb) { qcombobox_dragmoveevent_callback = cb; }
    void setQComboBox_DragLeaveEvent_Callback(QComboBox_DragLeaveEvent_Callback cb) { qcombobox_dragleaveevent_callback = cb; }
    void setQComboBox_DropEvent_Callback(QComboBox_DropEvent_Callback cb) { qcombobox_dropevent_callback = cb; }
    void setQComboBox_NativeEvent_Callback(QComboBox_NativeEvent_Callback cb) { qcombobox_nativeevent_callback = cb; }
    void setQComboBox_Metric_Callback(QComboBox_Metric_Callback cb) { qcombobox_metric_callback = cb; }
    void setQComboBox_InitPainter_Callback(QComboBox_InitPainter_Callback cb) { qcombobox_initpainter_callback = cb; }
    void setQComboBox_Redirected_Callback(QComboBox_Redirected_Callback cb) { qcombobox_redirected_callback = cb; }
    void setQComboBox_SharedPainter_Callback(QComboBox_SharedPainter_Callback cb) { qcombobox_sharedpainter_callback = cb; }
    void setQComboBox_FocusNextPrevChild_Callback(QComboBox_FocusNextPrevChild_Callback cb) { qcombobox_focusnextprevchild_callback = cb; }
    void setQComboBox_EventFilter_Callback(QComboBox_EventFilter_Callback cb) { qcombobox_eventfilter_callback = cb; }
    void setQComboBox_TimerEvent_Callback(QComboBox_TimerEvent_Callback cb) { qcombobox_timerevent_callback = cb; }
    void setQComboBox_ChildEvent_Callback(QComboBox_ChildEvent_Callback cb) { qcombobox_childevent_callback = cb; }
    void setQComboBox_CustomEvent_Callback(QComboBox_CustomEvent_Callback cb) { qcombobox_customevent_callback = cb; }
    void setQComboBox_ConnectNotify_Callback(QComboBox_ConnectNotify_Callback cb) { qcombobox_connectnotify_callback = cb; }
    void setQComboBox_DisconnectNotify_Callback(QComboBox_DisconnectNotify_Callback cb) { qcombobox_disconnectnotify_callback = cb; }
    void setQComboBox_UpdateMicroFocus_Callback(QComboBox_UpdateMicroFocus_Callback cb) { qcombobox_updatemicrofocus_callback = cb; }
    void setQComboBox_Create_Callback(QComboBox_Create_Callback cb) { qcombobox_create_callback = cb; }
    void setQComboBox_Destroy_Callback(QComboBox_Destroy_Callback cb) { qcombobox_destroy_callback = cb; }
    void setQComboBox_FocusNextChild_Callback(QComboBox_FocusNextChild_Callback cb) { qcombobox_focusnextchild_callback = cb; }
    void setQComboBox_FocusPreviousChild_Callback(QComboBox_FocusPreviousChild_Callback cb) { qcombobox_focuspreviouschild_callback = cb; }
    void setQComboBox_Sender_Callback(QComboBox_Sender_Callback cb) { qcombobox_sender_callback = cb; }
    void setQComboBox_SenderSignalIndex_Callback(QComboBox_SenderSignalIndex_Callback cb) { qcombobox_sendersignalindex_callback = cb; }
    void setQComboBox_Receivers_Callback(QComboBox_Receivers_Callback cb) { qcombobox_receivers_callback = cb; }
    void setQComboBox_IsSignalConnected_Callback(QComboBox_IsSignalConnected_Callback cb) { qcombobox_issignalconnected_callback = cb; }

    // Base flag setters
    void setQComboBox_Metacall_IsBase(bool value) const { qcombobox_metacall_isbase = value; }
    void setQComboBox_SetModel_IsBase(bool value) const { qcombobox_setmodel_isbase = value; }
    void setQComboBox_SizeHint_IsBase(bool value) const { qcombobox_sizehint_isbase = value; }
    void setQComboBox_MinimumSizeHint_IsBase(bool value) const { qcombobox_minimumsizehint_isbase = value; }
    void setQComboBox_ShowPopup_IsBase(bool value) const { qcombobox_showpopup_isbase = value; }
    void setQComboBox_HidePopup_IsBase(bool value) const { qcombobox_hidepopup_isbase = value; }
    void setQComboBox_Event_IsBase(bool value) const { qcombobox_event_isbase = value; }
    void setQComboBox_InputMethodQuery_IsBase(bool value) const { qcombobox_inputmethodquery_isbase = value; }
    void setQComboBox_FocusInEvent_IsBase(bool value) const { qcombobox_focusinevent_isbase = value; }
    void setQComboBox_FocusOutEvent_IsBase(bool value) const { qcombobox_focusoutevent_isbase = value; }
    void setQComboBox_ChangeEvent_IsBase(bool value) const { qcombobox_changeevent_isbase = value; }
    void setQComboBox_ResizeEvent_IsBase(bool value) const { qcombobox_resizeevent_isbase = value; }
    void setQComboBox_PaintEvent_IsBase(bool value) const { qcombobox_paintevent_isbase = value; }
    void setQComboBox_ShowEvent_IsBase(bool value) const { qcombobox_showevent_isbase = value; }
    void setQComboBox_HideEvent_IsBase(bool value) const { qcombobox_hideevent_isbase = value; }
    void setQComboBox_MousePressEvent_IsBase(bool value) const { qcombobox_mousepressevent_isbase = value; }
    void setQComboBox_MouseReleaseEvent_IsBase(bool value) const { qcombobox_mousereleaseevent_isbase = value; }
    void setQComboBox_KeyPressEvent_IsBase(bool value) const { qcombobox_keypressevent_isbase = value; }
    void setQComboBox_KeyReleaseEvent_IsBase(bool value) const { qcombobox_keyreleaseevent_isbase = value; }
    void setQComboBox_WheelEvent_IsBase(bool value) const { qcombobox_wheelevent_isbase = value; }
    void setQComboBox_ContextMenuEvent_IsBase(bool value) const { qcombobox_contextmenuevent_isbase = value; }
    void setQComboBox_InputMethodEvent_IsBase(bool value) const { qcombobox_inputmethodevent_isbase = value; }
    void setQComboBox_InitStyleOption_IsBase(bool value) const { qcombobox_initstyleoption_isbase = value; }
    void setQComboBox_DevType_IsBase(bool value) const { qcombobox_devtype_isbase = value; }
    void setQComboBox_SetVisible_IsBase(bool value) const { qcombobox_setvisible_isbase = value; }
    void setQComboBox_HeightForWidth_IsBase(bool value) const { qcombobox_heightforwidth_isbase = value; }
    void setQComboBox_HasHeightForWidth_IsBase(bool value) const { qcombobox_hasheightforwidth_isbase = value; }
    void setQComboBox_PaintEngine_IsBase(bool value) const { qcombobox_paintengine_isbase = value; }
    void setQComboBox_MouseDoubleClickEvent_IsBase(bool value) const { qcombobox_mousedoubleclickevent_isbase = value; }
    void setQComboBox_MouseMoveEvent_IsBase(bool value) const { qcombobox_mousemoveevent_isbase = value; }
    void setQComboBox_EnterEvent_IsBase(bool value) const { qcombobox_enterevent_isbase = value; }
    void setQComboBox_LeaveEvent_IsBase(bool value) const { qcombobox_leaveevent_isbase = value; }
    void setQComboBox_MoveEvent_IsBase(bool value) const { qcombobox_moveevent_isbase = value; }
    void setQComboBox_CloseEvent_IsBase(bool value) const { qcombobox_closeevent_isbase = value; }
    void setQComboBox_TabletEvent_IsBase(bool value) const { qcombobox_tabletevent_isbase = value; }
    void setQComboBox_ActionEvent_IsBase(bool value) const { qcombobox_actionevent_isbase = value; }
    void setQComboBox_DragEnterEvent_IsBase(bool value) const { qcombobox_dragenterevent_isbase = value; }
    void setQComboBox_DragMoveEvent_IsBase(bool value) const { qcombobox_dragmoveevent_isbase = value; }
    void setQComboBox_DragLeaveEvent_IsBase(bool value) const { qcombobox_dragleaveevent_isbase = value; }
    void setQComboBox_DropEvent_IsBase(bool value) const { qcombobox_dropevent_isbase = value; }
    void setQComboBox_NativeEvent_IsBase(bool value) const { qcombobox_nativeevent_isbase = value; }
    void setQComboBox_Metric_IsBase(bool value) const { qcombobox_metric_isbase = value; }
    void setQComboBox_InitPainter_IsBase(bool value) const { qcombobox_initpainter_isbase = value; }
    void setQComboBox_Redirected_IsBase(bool value) const { qcombobox_redirected_isbase = value; }
    void setQComboBox_SharedPainter_IsBase(bool value) const { qcombobox_sharedpainter_isbase = value; }
    void setQComboBox_FocusNextPrevChild_IsBase(bool value) const { qcombobox_focusnextprevchild_isbase = value; }
    void setQComboBox_EventFilter_IsBase(bool value) const { qcombobox_eventfilter_isbase = value; }
    void setQComboBox_TimerEvent_IsBase(bool value) const { qcombobox_timerevent_isbase = value; }
    void setQComboBox_ChildEvent_IsBase(bool value) const { qcombobox_childevent_isbase = value; }
    void setQComboBox_CustomEvent_IsBase(bool value) const { qcombobox_customevent_isbase = value; }
    void setQComboBox_ConnectNotify_IsBase(bool value) const { qcombobox_connectnotify_isbase = value; }
    void setQComboBox_DisconnectNotify_IsBase(bool value) const { qcombobox_disconnectnotify_isbase = value; }
    void setQComboBox_UpdateMicroFocus_IsBase(bool value) const { qcombobox_updatemicrofocus_isbase = value; }
    void setQComboBox_Create_IsBase(bool value) const { qcombobox_create_isbase = value; }
    void setQComboBox_Destroy_IsBase(bool value) const { qcombobox_destroy_isbase = value; }
    void setQComboBox_FocusNextChild_IsBase(bool value) const { qcombobox_focusnextchild_isbase = value; }
    void setQComboBox_FocusPreviousChild_IsBase(bool value) const { qcombobox_focuspreviouschild_isbase = value; }
    void setQComboBox_Sender_IsBase(bool value) const { qcombobox_sender_isbase = value; }
    void setQComboBox_SenderSignalIndex_IsBase(bool value) const { qcombobox_sendersignalindex_isbase = value; }
    void setQComboBox_Receivers_IsBase(bool value) const { qcombobox_receivers_isbase = value; }
    void setQComboBox_IsSignalConnected_IsBase(bool value) const { qcombobox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcombobox_metacall_isbase) {
            qcombobox_metacall_isbase = false;
            return QComboBox::qt_metacall(param1, param2, param3);
        } else if (qcombobox_metacall_callback != nullptr) {
            return qcombobox_metacall_callback(this, param1, param2, param3);
        } else {
            return QComboBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qcombobox_setmodel_isbase) {
            qcombobox_setmodel_isbase = false;
            QComboBox::setModel(model);
        } else if (qcombobox_setmodel_callback != nullptr) {
            qcombobox_setmodel_callback(this, model);
        } else {
            QComboBox::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcombobox_sizehint_isbase) {
            qcombobox_sizehint_isbase = false;
            return QComboBox::sizeHint();
        } else if (qcombobox_sizehint_callback != nullptr) {
            return qcombobox_sizehint_callback();
        } else {
            return QComboBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcombobox_minimumsizehint_isbase) {
            qcombobox_minimumsizehint_isbase = false;
            return QComboBox::minimumSizeHint();
        } else if (qcombobox_minimumsizehint_callback != nullptr) {
            return qcombobox_minimumsizehint_callback();
        } else {
            return QComboBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showPopup() override {
        if (qcombobox_showpopup_isbase) {
            qcombobox_showpopup_isbase = false;
            QComboBox::showPopup();
        } else if (qcombobox_showpopup_callback != nullptr) {
            qcombobox_showpopup_callback();
        } else {
            QComboBox::showPopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hidePopup() override {
        if (qcombobox_hidepopup_isbase) {
            qcombobox_hidepopup_isbase = false;
            QComboBox::hidePopup();
        } else if (qcombobox_hidepopup_callback != nullptr) {
            qcombobox_hidepopup_callback();
        } else {
            QComboBox::hidePopup();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcombobox_event_isbase) {
            qcombobox_event_isbase = false;
            return QComboBox::event(event);
        } else if (qcombobox_event_callback != nullptr) {
            return qcombobox_event_callback(this, event);
        } else {
            return QComboBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcombobox_inputmethodquery_isbase) {
            qcombobox_inputmethodquery_isbase = false;
            return QComboBox::inputMethodQuery(param1);
        } else if (qcombobox_inputmethodquery_callback != nullptr) {
            return qcombobox_inputmethodquery_callback(this, param1);
        } else {
            return QComboBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qcombobox_focusinevent_isbase) {
            qcombobox_focusinevent_isbase = false;
            QComboBox::focusInEvent(e);
        } else if (qcombobox_focusinevent_callback != nullptr) {
            qcombobox_focusinevent_callback(this, e);
        } else {
            QComboBox::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qcombobox_focusoutevent_isbase) {
            qcombobox_focusoutevent_isbase = false;
            QComboBox::focusOutEvent(e);
        } else if (qcombobox_focusoutevent_callback != nullptr) {
            qcombobox_focusoutevent_callback(this, e);
        } else {
            QComboBox::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcombobox_changeevent_isbase) {
            qcombobox_changeevent_isbase = false;
            QComboBox::changeEvent(e);
        } else if (qcombobox_changeevent_callback != nullptr) {
            qcombobox_changeevent_callback(this, e);
        } else {
            QComboBox::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qcombobox_resizeevent_isbase) {
            qcombobox_resizeevent_isbase = false;
            QComboBox::resizeEvent(e);
        } else if (qcombobox_resizeevent_callback != nullptr) {
            qcombobox_resizeevent_callback(this, e);
        } else {
            QComboBox::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qcombobox_paintevent_isbase) {
            qcombobox_paintevent_isbase = false;
            QComboBox::paintEvent(e);
        } else if (qcombobox_paintevent_callback != nullptr) {
            qcombobox_paintevent_callback(this, e);
        } else {
            QComboBox::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* e) override {
        if (qcombobox_showevent_isbase) {
            qcombobox_showevent_isbase = false;
            QComboBox::showEvent(e);
        } else if (qcombobox_showevent_callback != nullptr) {
            qcombobox_showevent_callback(this, e);
        } else {
            QComboBox::showEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* e) override {
        if (qcombobox_hideevent_isbase) {
            qcombobox_hideevent_isbase = false;
            QComboBox::hideEvent(e);
        } else if (qcombobox_hideevent_callback != nullptr) {
            qcombobox_hideevent_callback(this, e);
        } else {
            QComboBox::hideEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcombobox_mousepressevent_isbase) {
            qcombobox_mousepressevent_isbase = false;
            QComboBox::mousePressEvent(e);
        } else if (qcombobox_mousepressevent_callback != nullptr) {
            qcombobox_mousepressevent_callback(this, e);
        } else {
            QComboBox::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcombobox_mousereleaseevent_isbase) {
            qcombobox_mousereleaseevent_isbase = false;
            QComboBox::mouseReleaseEvent(e);
        } else if (qcombobox_mousereleaseevent_callback != nullptr) {
            qcombobox_mousereleaseevent_callback(this, e);
        } else {
            QComboBox::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qcombobox_keypressevent_isbase) {
            qcombobox_keypressevent_isbase = false;
            QComboBox::keyPressEvent(e);
        } else if (qcombobox_keypressevent_callback != nullptr) {
            qcombobox_keypressevent_callback(this, e);
        } else {
            QComboBox::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcombobox_keyreleaseevent_isbase) {
            qcombobox_keyreleaseevent_isbase = false;
            QComboBox::keyReleaseEvent(e);
        } else if (qcombobox_keyreleaseevent_callback != nullptr) {
            qcombobox_keyreleaseevent_callback(this, e);
        } else {
            QComboBox::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qcombobox_wheelevent_isbase) {
            qcombobox_wheelevent_isbase = false;
            QComboBox::wheelEvent(e);
        } else if (qcombobox_wheelevent_callback != nullptr) {
            qcombobox_wheelevent_callback(this, e);
        } else {
            QComboBox::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qcombobox_contextmenuevent_isbase) {
            qcombobox_contextmenuevent_isbase = false;
            QComboBox::contextMenuEvent(e);
        } else if (qcombobox_contextmenuevent_callback != nullptr) {
            qcombobox_contextmenuevent_callback(this, e);
        } else {
            QComboBox::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcombobox_inputmethodevent_isbase) {
            qcombobox_inputmethodevent_isbase = false;
            QComboBox::inputMethodEvent(param1);
        } else if (qcombobox_inputmethodevent_callback != nullptr) {
            qcombobox_inputmethodevent_callback(this, param1);
        } else {
            QComboBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionComboBox* option) const override {
        if (qcombobox_initstyleoption_isbase) {
            qcombobox_initstyleoption_isbase = false;
            QComboBox::initStyleOption(option);
        } else if (qcombobox_initstyleoption_callback != nullptr) {
            qcombobox_initstyleoption_callback(this, option);
        } else {
            QComboBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcombobox_devtype_isbase) {
            qcombobox_devtype_isbase = false;
            return QComboBox::devType();
        } else if (qcombobox_devtype_callback != nullptr) {
            return qcombobox_devtype_callback();
        } else {
            return QComboBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcombobox_setvisible_isbase) {
            qcombobox_setvisible_isbase = false;
            QComboBox::setVisible(visible);
        } else if (qcombobox_setvisible_callback != nullptr) {
            qcombobox_setvisible_callback(this, visible);
        } else {
            QComboBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcombobox_heightforwidth_isbase) {
            qcombobox_heightforwidth_isbase = false;
            return QComboBox::heightForWidth(param1);
        } else if (qcombobox_heightforwidth_callback != nullptr) {
            return qcombobox_heightforwidth_callback(this, param1);
        } else {
            return QComboBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcombobox_hasheightforwidth_isbase) {
            qcombobox_hasheightforwidth_isbase = false;
            return QComboBox::hasHeightForWidth();
        } else if (qcombobox_hasheightforwidth_callback != nullptr) {
            return qcombobox_hasheightforwidth_callback();
        } else {
            return QComboBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcombobox_paintengine_isbase) {
            qcombobox_paintengine_isbase = false;
            return QComboBox::paintEngine();
        } else if (qcombobox_paintengine_callback != nullptr) {
            return qcombobox_paintengine_callback();
        } else {
            return QComboBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcombobox_mousedoubleclickevent_isbase) {
            qcombobox_mousedoubleclickevent_isbase = false;
            QComboBox::mouseDoubleClickEvent(event);
        } else if (qcombobox_mousedoubleclickevent_callback != nullptr) {
            qcombobox_mousedoubleclickevent_callback(this, event);
        } else {
            QComboBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcombobox_mousemoveevent_isbase) {
            qcombobox_mousemoveevent_isbase = false;
            QComboBox::mouseMoveEvent(event);
        } else if (qcombobox_mousemoveevent_callback != nullptr) {
            qcombobox_mousemoveevent_callback(this, event);
        } else {
            QComboBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcombobox_enterevent_isbase) {
            qcombobox_enterevent_isbase = false;
            QComboBox::enterEvent(event);
        } else if (qcombobox_enterevent_callback != nullptr) {
            qcombobox_enterevent_callback(this, event);
        } else {
            QComboBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcombobox_leaveevent_isbase) {
            qcombobox_leaveevent_isbase = false;
            QComboBox::leaveEvent(event);
        } else if (qcombobox_leaveevent_callback != nullptr) {
            qcombobox_leaveevent_callback(this, event);
        } else {
            QComboBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcombobox_moveevent_isbase) {
            qcombobox_moveevent_isbase = false;
            QComboBox::moveEvent(event);
        } else if (qcombobox_moveevent_callback != nullptr) {
            qcombobox_moveevent_callback(this, event);
        } else {
            QComboBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcombobox_closeevent_isbase) {
            qcombobox_closeevent_isbase = false;
            QComboBox::closeEvent(event);
        } else if (qcombobox_closeevent_callback != nullptr) {
            qcombobox_closeevent_callback(this, event);
        } else {
            QComboBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcombobox_tabletevent_isbase) {
            qcombobox_tabletevent_isbase = false;
            QComboBox::tabletEvent(event);
        } else if (qcombobox_tabletevent_callback != nullptr) {
            qcombobox_tabletevent_callback(this, event);
        } else {
            QComboBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcombobox_actionevent_isbase) {
            qcombobox_actionevent_isbase = false;
            QComboBox::actionEvent(event);
        } else if (qcombobox_actionevent_callback != nullptr) {
            qcombobox_actionevent_callback(this, event);
        } else {
            QComboBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcombobox_dragenterevent_isbase) {
            qcombobox_dragenterevent_isbase = false;
            QComboBox::dragEnterEvent(event);
        } else if (qcombobox_dragenterevent_callback != nullptr) {
            qcombobox_dragenterevent_callback(this, event);
        } else {
            QComboBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcombobox_dragmoveevent_isbase) {
            qcombobox_dragmoveevent_isbase = false;
            QComboBox::dragMoveEvent(event);
        } else if (qcombobox_dragmoveevent_callback != nullptr) {
            qcombobox_dragmoveevent_callback(this, event);
        } else {
            QComboBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcombobox_dragleaveevent_isbase) {
            qcombobox_dragleaveevent_isbase = false;
            QComboBox::dragLeaveEvent(event);
        } else if (qcombobox_dragleaveevent_callback != nullptr) {
            qcombobox_dragleaveevent_callback(this, event);
        } else {
            QComboBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcombobox_dropevent_isbase) {
            qcombobox_dropevent_isbase = false;
            QComboBox::dropEvent(event);
        } else if (qcombobox_dropevent_callback != nullptr) {
            qcombobox_dropevent_callback(this, event);
        } else {
            QComboBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcombobox_nativeevent_isbase) {
            qcombobox_nativeevent_isbase = false;
            return QComboBox::nativeEvent(eventType, message, result);
        } else if (qcombobox_nativeevent_callback != nullptr) {
            return qcombobox_nativeevent_callback(this, eventType, message, result);
        } else {
            return QComboBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcombobox_metric_isbase) {
            qcombobox_metric_isbase = false;
            return QComboBox::metric(param1);
        } else if (qcombobox_metric_callback != nullptr) {
            return qcombobox_metric_callback(this, param1);
        } else {
            return QComboBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcombobox_initpainter_isbase) {
            qcombobox_initpainter_isbase = false;
            QComboBox::initPainter(painter);
        } else if (qcombobox_initpainter_callback != nullptr) {
            qcombobox_initpainter_callback(this, painter);
        } else {
            QComboBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcombobox_redirected_isbase) {
            qcombobox_redirected_isbase = false;
            return QComboBox::redirected(offset);
        } else if (qcombobox_redirected_callback != nullptr) {
            return qcombobox_redirected_callback(this, offset);
        } else {
            return QComboBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcombobox_sharedpainter_isbase) {
            qcombobox_sharedpainter_isbase = false;
            return QComboBox::sharedPainter();
        } else if (qcombobox_sharedpainter_callback != nullptr) {
            return qcombobox_sharedpainter_callback();
        } else {
            return QComboBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcombobox_focusnextprevchild_isbase) {
            qcombobox_focusnextprevchild_isbase = false;
            return QComboBox::focusNextPrevChild(next);
        } else if (qcombobox_focusnextprevchild_callback != nullptr) {
            return qcombobox_focusnextprevchild_callback(this, next);
        } else {
            return QComboBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcombobox_eventfilter_isbase) {
            qcombobox_eventfilter_isbase = false;
            return QComboBox::eventFilter(watched, event);
        } else if (qcombobox_eventfilter_callback != nullptr) {
            return qcombobox_eventfilter_callback(this, watched, event);
        } else {
            return QComboBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcombobox_timerevent_isbase) {
            qcombobox_timerevent_isbase = false;
            QComboBox::timerEvent(event);
        } else if (qcombobox_timerevent_callback != nullptr) {
            qcombobox_timerevent_callback(this, event);
        } else {
            QComboBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcombobox_childevent_isbase) {
            qcombobox_childevent_isbase = false;
            QComboBox::childEvent(event);
        } else if (qcombobox_childevent_callback != nullptr) {
            qcombobox_childevent_callback(this, event);
        } else {
            QComboBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcombobox_customevent_isbase) {
            qcombobox_customevent_isbase = false;
            QComboBox::customEvent(event);
        } else if (qcombobox_customevent_callback != nullptr) {
            qcombobox_customevent_callback(this, event);
        } else {
            QComboBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcombobox_connectnotify_isbase) {
            qcombobox_connectnotify_isbase = false;
            QComboBox::connectNotify(signal);
        } else if (qcombobox_connectnotify_callback != nullptr) {
            qcombobox_connectnotify_callback(this, signal);
        } else {
            QComboBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcombobox_disconnectnotify_isbase) {
            qcombobox_disconnectnotify_isbase = false;
            QComboBox::disconnectNotify(signal);
        } else if (qcombobox_disconnectnotify_callback != nullptr) {
            qcombobox_disconnectnotify_callback(this, signal);
        } else {
            QComboBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcombobox_updatemicrofocus_isbase) {
            qcombobox_updatemicrofocus_isbase = false;
            QComboBox::updateMicroFocus();
        } else if (qcombobox_updatemicrofocus_callback != nullptr) {
            qcombobox_updatemicrofocus_callback();
        } else {
            QComboBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcombobox_create_isbase) {
            qcombobox_create_isbase = false;
            QComboBox::create();
        } else if (qcombobox_create_callback != nullptr) {
            qcombobox_create_callback();
        } else {
            QComboBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcombobox_destroy_isbase) {
            qcombobox_destroy_isbase = false;
            QComboBox::destroy();
        } else if (qcombobox_destroy_callback != nullptr) {
            qcombobox_destroy_callback();
        } else {
            QComboBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcombobox_focusnextchild_isbase) {
            qcombobox_focusnextchild_isbase = false;
            return QComboBox::focusNextChild();
        } else if (qcombobox_focusnextchild_callback != nullptr) {
            return qcombobox_focusnextchild_callback();
        } else {
            return QComboBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcombobox_focuspreviouschild_isbase) {
            qcombobox_focuspreviouschild_isbase = false;
            return QComboBox::focusPreviousChild();
        } else if (qcombobox_focuspreviouschild_callback != nullptr) {
            return qcombobox_focuspreviouschild_callback();
        } else {
            return QComboBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcombobox_sender_isbase) {
            qcombobox_sender_isbase = false;
            return QComboBox::sender();
        } else if (qcombobox_sender_callback != nullptr) {
            return qcombobox_sender_callback();
        } else {
            return QComboBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcombobox_sendersignalindex_isbase) {
            qcombobox_sendersignalindex_isbase = false;
            return QComboBox::senderSignalIndex();
        } else if (qcombobox_sendersignalindex_callback != nullptr) {
            return qcombobox_sendersignalindex_callback();
        } else {
            return QComboBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcombobox_receivers_isbase) {
            qcombobox_receivers_isbase = false;
            return QComboBox::receivers(signal);
        } else if (qcombobox_receivers_callback != nullptr) {
            return qcombobox_receivers_callback(this, signal);
        } else {
            return QComboBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcombobox_issignalconnected_isbase) {
            qcombobox_issignalconnected_isbase = false;
            return QComboBox::isSignalConnected(signal);
        } else if (qcombobox_issignalconnected_callback != nullptr) {
            return qcombobox_issignalconnected_callback(this, signal);
        } else {
            return QComboBox::isSignalConnected(signal);
        }
    }
};

#endif
