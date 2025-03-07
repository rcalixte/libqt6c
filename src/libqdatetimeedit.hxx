#pragma once
#ifndef SRCC_LIBVIRTUALQDATETIMEEDIT_H
#define SRCC_LIBVIRTUALQDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDateTimeEdit so that we can call protected methods
class VirtualQDateTimeEdit : public QDateTimeEdit {

  public:
    // Virtual class public types (including callbacks)
    using QDateTimeEdit_Metacall_Callback = int (*)(QDateTimeEdit*, QMetaObject::Call, int, void**);
    using QDateTimeEdit_SizeHint_Callback = QSize (*)();
    using QDateTimeEdit_Clear_Callback = void (*)();
    using QDateTimeEdit_StepBy_Callback = void (*)(QDateTimeEdit*, int);
    using QDateTimeEdit_Event_Callback = bool (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_KeyPressEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_WheelEvent_Callback = void (*)(QDateTimeEdit*, QWheelEvent*);
    using QDateTimeEdit_FocusInEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_FocusNextPrevChild_Callback = bool (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_Validate_Callback = QValidator::State (*)(const QDateTimeEdit*, QString&, int&);
    using QDateTimeEdit_Fixup_Callback = void (*)(const QDateTimeEdit*, QString&);
    using QDateTimeEdit_DateTimeFromText_Callback = QDateTime (*)(const QDateTimeEdit*, const QString&);
    using QDateTimeEdit_TextFromDateTime_Callback = QString (*)(const QDateTimeEdit*, const QDateTime&);
    using QDateTimeEdit_StepEnabled_Callback = QAbstractSpinBox::StepEnabled (*)();
    using QDateTimeEdit_MousePressEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_PaintEvent_Callback = void (*)(QDateTimeEdit*, QPaintEvent*);
    using QDateTimeEdit_InitStyleOption_Callback = void (*)(const QDateTimeEdit*, QStyleOptionSpinBox*);
    using QDateTimeEdit_MinimumSizeHint_Callback = QSize (*)();
    using QDateTimeEdit_InputMethodQuery_Callback = QVariant (*)(const QDateTimeEdit*, Qt::InputMethodQuery);
    using QDateTimeEdit_ResizeEvent_Callback = void (*)(QDateTimeEdit*, QResizeEvent*);
    using QDateTimeEdit_KeyReleaseEvent_Callback = void (*)(QDateTimeEdit*, QKeyEvent*);
    using QDateTimeEdit_FocusOutEvent_Callback = void (*)(QDateTimeEdit*, QFocusEvent*);
    using QDateTimeEdit_ContextMenuEvent_Callback = void (*)(QDateTimeEdit*, QContextMenuEvent*);
    using QDateTimeEdit_ChangeEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_CloseEvent_Callback = void (*)(QDateTimeEdit*, QCloseEvent*);
    using QDateTimeEdit_HideEvent_Callback = void (*)(QDateTimeEdit*, QHideEvent*);
    using QDateTimeEdit_MouseReleaseEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_MouseMoveEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_TimerEvent_Callback = void (*)(QDateTimeEdit*, QTimerEvent*);
    using QDateTimeEdit_ShowEvent_Callback = void (*)(QDateTimeEdit*, QShowEvent*);
    using QDateTimeEdit_DevType_Callback = int (*)();
    using QDateTimeEdit_SetVisible_Callback = void (*)(QDateTimeEdit*, bool);
    using QDateTimeEdit_HeightForWidth_Callback = int (*)(const QDateTimeEdit*, int);
    using QDateTimeEdit_HasHeightForWidth_Callback = bool (*)();
    using QDateTimeEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QDateTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QDateTimeEdit*, QMouseEvent*);
    using QDateTimeEdit_EnterEvent_Callback = void (*)(QDateTimeEdit*, QEnterEvent*);
    using QDateTimeEdit_LeaveEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_MoveEvent_Callback = void (*)(QDateTimeEdit*, QMoveEvent*);
    using QDateTimeEdit_TabletEvent_Callback = void (*)(QDateTimeEdit*, QTabletEvent*);
    using QDateTimeEdit_ActionEvent_Callback = void (*)(QDateTimeEdit*, QActionEvent*);
    using QDateTimeEdit_DragEnterEvent_Callback = void (*)(QDateTimeEdit*, QDragEnterEvent*);
    using QDateTimeEdit_DragMoveEvent_Callback = void (*)(QDateTimeEdit*, QDragMoveEvent*);
    using QDateTimeEdit_DragLeaveEvent_Callback = void (*)(QDateTimeEdit*, QDragLeaveEvent*);
    using QDateTimeEdit_DropEvent_Callback = void (*)(QDateTimeEdit*, QDropEvent*);
    using QDateTimeEdit_NativeEvent_Callback = bool (*)(QDateTimeEdit*, const QByteArray&, void*, qintptr*);
    using QDateTimeEdit_Metric_Callback = int (*)(const QDateTimeEdit*, QPaintDevice::PaintDeviceMetric);
    using QDateTimeEdit_InitPainter_Callback = void (*)(const QDateTimeEdit*, QPainter*);
    using QDateTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QDateTimeEdit*, QPoint*);
    using QDateTimeEdit_SharedPainter_Callback = QPainter* (*)();
    using QDateTimeEdit_InputMethodEvent_Callback = void (*)(QDateTimeEdit*, QInputMethodEvent*);
    using QDateTimeEdit_EventFilter_Callback = bool (*)(QDateTimeEdit*, QObject*, QEvent*);
    using QDateTimeEdit_ChildEvent_Callback = void (*)(QDateTimeEdit*, QChildEvent*);
    using QDateTimeEdit_CustomEvent_Callback = void (*)(QDateTimeEdit*, QEvent*);
    using QDateTimeEdit_ConnectNotify_Callback = void (*)(QDateTimeEdit*, const QMetaMethod&);
    using QDateTimeEdit_DisconnectNotify_Callback = void (*)(QDateTimeEdit*, const QMetaMethod&);
    using QDateTimeEdit_LineEdit_Callback = QLineEdit* (*)();
    using QDateTimeEdit_SetLineEdit_Callback = void (*)(QDateTimeEdit*, QLineEdit*);
    using QDateTimeEdit_UpdateMicroFocus_Callback = void (*)();
    using QDateTimeEdit_Create_Callback = void (*)();
    using QDateTimeEdit_Destroy_Callback = void (*)();
    using QDateTimeEdit_FocusNextChild_Callback = bool (*)();
    using QDateTimeEdit_FocusPreviousChild_Callback = bool (*)();
    using QDateTimeEdit_Sender_Callback = QObject* (*)();
    using QDateTimeEdit_SenderSignalIndex_Callback = int (*)();
    using QDateTimeEdit_Receivers_Callback = int (*)(const QDateTimeEdit*, const char*);
    using QDateTimeEdit_IsSignalConnected_Callback = bool (*)(const QDateTimeEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDateTimeEdit_Metacall_Callback qdatetimeedit_metacall_callback = nullptr;
    QDateTimeEdit_SizeHint_Callback qdatetimeedit_sizehint_callback = nullptr;
    QDateTimeEdit_Clear_Callback qdatetimeedit_clear_callback = nullptr;
    QDateTimeEdit_StepBy_Callback qdatetimeedit_stepby_callback = nullptr;
    QDateTimeEdit_Event_Callback qdatetimeedit_event_callback = nullptr;
    QDateTimeEdit_KeyPressEvent_Callback qdatetimeedit_keypressevent_callback = nullptr;
    QDateTimeEdit_WheelEvent_Callback qdatetimeedit_wheelevent_callback = nullptr;
    QDateTimeEdit_FocusInEvent_Callback qdatetimeedit_focusinevent_callback = nullptr;
    QDateTimeEdit_FocusNextPrevChild_Callback qdatetimeedit_focusnextprevchild_callback = nullptr;
    QDateTimeEdit_Validate_Callback qdatetimeedit_validate_callback = nullptr;
    QDateTimeEdit_Fixup_Callback qdatetimeedit_fixup_callback = nullptr;
    QDateTimeEdit_DateTimeFromText_Callback qdatetimeedit_datetimefromtext_callback = nullptr;
    QDateTimeEdit_TextFromDateTime_Callback qdatetimeedit_textfromdatetime_callback = nullptr;
    QDateTimeEdit_StepEnabled_Callback qdatetimeedit_stepenabled_callback = nullptr;
    QDateTimeEdit_MousePressEvent_Callback qdatetimeedit_mousepressevent_callback = nullptr;
    QDateTimeEdit_PaintEvent_Callback qdatetimeedit_paintevent_callback = nullptr;
    QDateTimeEdit_InitStyleOption_Callback qdatetimeedit_initstyleoption_callback = nullptr;
    QDateTimeEdit_MinimumSizeHint_Callback qdatetimeedit_minimumsizehint_callback = nullptr;
    QDateTimeEdit_InputMethodQuery_Callback qdatetimeedit_inputmethodquery_callback = nullptr;
    QDateTimeEdit_ResizeEvent_Callback qdatetimeedit_resizeevent_callback = nullptr;
    QDateTimeEdit_KeyReleaseEvent_Callback qdatetimeedit_keyreleaseevent_callback = nullptr;
    QDateTimeEdit_FocusOutEvent_Callback qdatetimeedit_focusoutevent_callback = nullptr;
    QDateTimeEdit_ContextMenuEvent_Callback qdatetimeedit_contextmenuevent_callback = nullptr;
    QDateTimeEdit_ChangeEvent_Callback qdatetimeedit_changeevent_callback = nullptr;
    QDateTimeEdit_CloseEvent_Callback qdatetimeedit_closeevent_callback = nullptr;
    QDateTimeEdit_HideEvent_Callback qdatetimeedit_hideevent_callback = nullptr;
    QDateTimeEdit_MouseReleaseEvent_Callback qdatetimeedit_mousereleaseevent_callback = nullptr;
    QDateTimeEdit_MouseMoveEvent_Callback qdatetimeedit_mousemoveevent_callback = nullptr;
    QDateTimeEdit_TimerEvent_Callback qdatetimeedit_timerevent_callback = nullptr;
    QDateTimeEdit_ShowEvent_Callback qdatetimeedit_showevent_callback = nullptr;
    QDateTimeEdit_DevType_Callback qdatetimeedit_devtype_callback = nullptr;
    QDateTimeEdit_SetVisible_Callback qdatetimeedit_setvisible_callback = nullptr;
    QDateTimeEdit_HeightForWidth_Callback qdatetimeedit_heightforwidth_callback = nullptr;
    QDateTimeEdit_HasHeightForWidth_Callback qdatetimeedit_hasheightforwidth_callback = nullptr;
    QDateTimeEdit_PaintEngine_Callback qdatetimeedit_paintengine_callback = nullptr;
    QDateTimeEdit_MouseDoubleClickEvent_Callback qdatetimeedit_mousedoubleclickevent_callback = nullptr;
    QDateTimeEdit_EnterEvent_Callback qdatetimeedit_enterevent_callback = nullptr;
    QDateTimeEdit_LeaveEvent_Callback qdatetimeedit_leaveevent_callback = nullptr;
    QDateTimeEdit_MoveEvent_Callback qdatetimeedit_moveevent_callback = nullptr;
    QDateTimeEdit_TabletEvent_Callback qdatetimeedit_tabletevent_callback = nullptr;
    QDateTimeEdit_ActionEvent_Callback qdatetimeedit_actionevent_callback = nullptr;
    QDateTimeEdit_DragEnterEvent_Callback qdatetimeedit_dragenterevent_callback = nullptr;
    QDateTimeEdit_DragMoveEvent_Callback qdatetimeedit_dragmoveevent_callback = nullptr;
    QDateTimeEdit_DragLeaveEvent_Callback qdatetimeedit_dragleaveevent_callback = nullptr;
    QDateTimeEdit_DropEvent_Callback qdatetimeedit_dropevent_callback = nullptr;
    QDateTimeEdit_NativeEvent_Callback qdatetimeedit_nativeevent_callback = nullptr;
    QDateTimeEdit_Metric_Callback qdatetimeedit_metric_callback = nullptr;
    QDateTimeEdit_InitPainter_Callback qdatetimeedit_initpainter_callback = nullptr;
    QDateTimeEdit_Redirected_Callback qdatetimeedit_redirected_callback = nullptr;
    QDateTimeEdit_SharedPainter_Callback qdatetimeedit_sharedpainter_callback = nullptr;
    QDateTimeEdit_InputMethodEvent_Callback qdatetimeedit_inputmethodevent_callback = nullptr;
    QDateTimeEdit_EventFilter_Callback qdatetimeedit_eventfilter_callback = nullptr;
    QDateTimeEdit_ChildEvent_Callback qdatetimeedit_childevent_callback = nullptr;
    QDateTimeEdit_CustomEvent_Callback qdatetimeedit_customevent_callback = nullptr;
    QDateTimeEdit_ConnectNotify_Callback qdatetimeedit_connectnotify_callback = nullptr;
    QDateTimeEdit_DisconnectNotify_Callback qdatetimeedit_disconnectnotify_callback = nullptr;
    QDateTimeEdit_LineEdit_Callback qdatetimeedit_lineedit_callback = nullptr;
    QDateTimeEdit_SetLineEdit_Callback qdatetimeedit_setlineedit_callback = nullptr;
    QDateTimeEdit_UpdateMicroFocus_Callback qdatetimeedit_updatemicrofocus_callback = nullptr;
    QDateTimeEdit_Create_Callback qdatetimeedit_create_callback = nullptr;
    QDateTimeEdit_Destroy_Callback qdatetimeedit_destroy_callback = nullptr;
    QDateTimeEdit_FocusNextChild_Callback qdatetimeedit_focusnextchild_callback = nullptr;
    QDateTimeEdit_FocusPreviousChild_Callback qdatetimeedit_focuspreviouschild_callback = nullptr;
    QDateTimeEdit_Sender_Callback qdatetimeedit_sender_callback = nullptr;
    QDateTimeEdit_SenderSignalIndex_Callback qdatetimeedit_sendersignalindex_callback = nullptr;
    QDateTimeEdit_Receivers_Callback qdatetimeedit_receivers_callback = nullptr;
    QDateTimeEdit_IsSignalConnected_Callback qdatetimeedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdatetimeedit_metacall_isbase = false;
    mutable bool qdatetimeedit_sizehint_isbase = false;
    mutable bool qdatetimeedit_clear_isbase = false;
    mutable bool qdatetimeedit_stepby_isbase = false;
    mutable bool qdatetimeedit_event_isbase = false;
    mutable bool qdatetimeedit_keypressevent_isbase = false;
    mutable bool qdatetimeedit_wheelevent_isbase = false;
    mutable bool qdatetimeedit_focusinevent_isbase = false;
    mutable bool qdatetimeedit_focusnextprevchild_isbase = false;
    mutable bool qdatetimeedit_validate_isbase = false;
    mutable bool qdatetimeedit_fixup_isbase = false;
    mutable bool qdatetimeedit_datetimefromtext_isbase = false;
    mutable bool qdatetimeedit_textfromdatetime_isbase = false;
    mutable bool qdatetimeedit_stepenabled_isbase = false;
    mutable bool qdatetimeedit_mousepressevent_isbase = false;
    mutable bool qdatetimeedit_paintevent_isbase = false;
    mutable bool qdatetimeedit_initstyleoption_isbase = false;
    mutable bool qdatetimeedit_minimumsizehint_isbase = false;
    mutable bool qdatetimeedit_inputmethodquery_isbase = false;
    mutable bool qdatetimeedit_resizeevent_isbase = false;
    mutable bool qdatetimeedit_keyreleaseevent_isbase = false;
    mutable bool qdatetimeedit_focusoutevent_isbase = false;
    mutable bool qdatetimeedit_contextmenuevent_isbase = false;
    mutable bool qdatetimeedit_changeevent_isbase = false;
    mutable bool qdatetimeedit_closeevent_isbase = false;
    mutable bool qdatetimeedit_hideevent_isbase = false;
    mutable bool qdatetimeedit_mousereleaseevent_isbase = false;
    mutable bool qdatetimeedit_mousemoveevent_isbase = false;
    mutable bool qdatetimeedit_timerevent_isbase = false;
    mutable bool qdatetimeedit_showevent_isbase = false;
    mutable bool qdatetimeedit_devtype_isbase = false;
    mutable bool qdatetimeedit_setvisible_isbase = false;
    mutable bool qdatetimeedit_heightforwidth_isbase = false;
    mutable bool qdatetimeedit_hasheightforwidth_isbase = false;
    mutable bool qdatetimeedit_paintengine_isbase = false;
    mutable bool qdatetimeedit_mousedoubleclickevent_isbase = false;
    mutable bool qdatetimeedit_enterevent_isbase = false;
    mutable bool qdatetimeedit_leaveevent_isbase = false;
    mutable bool qdatetimeedit_moveevent_isbase = false;
    mutable bool qdatetimeedit_tabletevent_isbase = false;
    mutable bool qdatetimeedit_actionevent_isbase = false;
    mutable bool qdatetimeedit_dragenterevent_isbase = false;
    mutable bool qdatetimeedit_dragmoveevent_isbase = false;
    mutable bool qdatetimeedit_dragleaveevent_isbase = false;
    mutable bool qdatetimeedit_dropevent_isbase = false;
    mutable bool qdatetimeedit_nativeevent_isbase = false;
    mutable bool qdatetimeedit_metric_isbase = false;
    mutable bool qdatetimeedit_initpainter_isbase = false;
    mutable bool qdatetimeedit_redirected_isbase = false;
    mutable bool qdatetimeedit_sharedpainter_isbase = false;
    mutable bool qdatetimeedit_inputmethodevent_isbase = false;
    mutable bool qdatetimeedit_eventfilter_isbase = false;
    mutable bool qdatetimeedit_childevent_isbase = false;
    mutable bool qdatetimeedit_customevent_isbase = false;
    mutable bool qdatetimeedit_connectnotify_isbase = false;
    mutable bool qdatetimeedit_disconnectnotify_isbase = false;
    mutable bool qdatetimeedit_lineedit_isbase = false;
    mutable bool qdatetimeedit_setlineedit_isbase = false;
    mutable bool qdatetimeedit_updatemicrofocus_isbase = false;
    mutable bool qdatetimeedit_create_isbase = false;
    mutable bool qdatetimeedit_destroy_isbase = false;
    mutable bool qdatetimeedit_focusnextchild_isbase = false;
    mutable bool qdatetimeedit_focuspreviouschild_isbase = false;
    mutable bool qdatetimeedit_sender_isbase = false;
    mutable bool qdatetimeedit_sendersignalindex_isbase = false;
    mutable bool qdatetimeedit_receivers_isbase = false;
    mutable bool qdatetimeedit_issignalconnected_isbase = false;

  public:
    VirtualQDateTimeEdit(QWidget* parent) : QDateTimeEdit(parent){};
    VirtualQDateTimeEdit() : QDateTimeEdit(){};
    VirtualQDateTimeEdit(const QDateTime& dt) : QDateTimeEdit(dt){};
    VirtualQDateTimeEdit(QDate d) : QDateTimeEdit(d){};
    VirtualQDateTimeEdit(QTime t) : QDateTimeEdit(t){};
    VirtualQDateTimeEdit(const QDateTime& dt, QWidget* parent) : QDateTimeEdit(dt, parent){};
    VirtualQDateTimeEdit(QDate d, QWidget* parent) : QDateTimeEdit(d, parent){};
    VirtualQDateTimeEdit(QTime t, QWidget* parent) : QDateTimeEdit(t, parent){};

    ~VirtualQDateTimeEdit() {
        qdatetimeedit_metacall_callback = nullptr;
        qdatetimeedit_sizehint_callback = nullptr;
        qdatetimeedit_clear_callback = nullptr;
        qdatetimeedit_stepby_callback = nullptr;
        qdatetimeedit_event_callback = nullptr;
        qdatetimeedit_keypressevent_callback = nullptr;
        qdatetimeedit_wheelevent_callback = nullptr;
        qdatetimeedit_focusinevent_callback = nullptr;
        qdatetimeedit_focusnextprevchild_callback = nullptr;
        qdatetimeedit_validate_callback = nullptr;
        qdatetimeedit_fixup_callback = nullptr;
        qdatetimeedit_datetimefromtext_callback = nullptr;
        qdatetimeedit_textfromdatetime_callback = nullptr;
        qdatetimeedit_stepenabled_callback = nullptr;
        qdatetimeedit_mousepressevent_callback = nullptr;
        qdatetimeedit_paintevent_callback = nullptr;
        qdatetimeedit_initstyleoption_callback = nullptr;
        qdatetimeedit_minimumsizehint_callback = nullptr;
        qdatetimeedit_inputmethodquery_callback = nullptr;
        qdatetimeedit_resizeevent_callback = nullptr;
        qdatetimeedit_keyreleaseevent_callback = nullptr;
        qdatetimeedit_focusoutevent_callback = nullptr;
        qdatetimeedit_contextmenuevent_callback = nullptr;
        qdatetimeedit_changeevent_callback = nullptr;
        qdatetimeedit_closeevent_callback = nullptr;
        qdatetimeedit_hideevent_callback = nullptr;
        qdatetimeedit_mousereleaseevent_callback = nullptr;
        qdatetimeedit_mousemoveevent_callback = nullptr;
        qdatetimeedit_timerevent_callback = nullptr;
        qdatetimeedit_showevent_callback = nullptr;
        qdatetimeedit_devtype_callback = nullptr;
        qdatetimeedit_setvisible_callback = nullptr;
        qdatetimeedit_heightforwidth_callback = nullptr;
        qdatetimeedit_hasheightforwidth_callback = nullptr;
        qdatetimeedit_paintengine_callback = nullptr;
        qdatetimeedit_mousedoubleclickevent_callback = nullptr;
        qdatetimeedit_enterevent_callback = nullptr;
        qdatetimeedit_leaveevent_callback = nullptr;
        qdatetimeedit_moveevent_callback = nullptr;
        qdatetimeedit_tabletevent_callback = nullptr;
        qdatetimeedit_actionevent_callback = nullptr;
        qdatetimeedit_dragenterevent_callback = nullptr;
        qdatetimeedit_dragmoveevent_callback = nullptr;
        qdatetimeedit_dragleaveevent_callback = nullptr;
        qdatetimeedit_dropevent_callback = nullptr;
        qdatetimeedit_nativeevent_callback = nullptr;
        qdatetimeedit_metric_callback = nullptr;
        qdatetimeedit_initpainter_callback = nullptr;
        qdatetimeedit_redirected_callback = nullptr;
        qdatetimeedit_sharedpainter_callback = nullptr;
        qdatetimeedit_inputmethodevent_callback = nullptr;
        qdatetimeedit_eventfilter_callback = nullptr;
        qdatetimeedit_childevent_callback = nullptr;
        qdatetimeedit_customevent_callback = nullptr;
        qdatetimeedit_connectnotify_callback = nullptr;
        qdatetimeedit_disconnectnotify_callback = nullptr;
        qdatetimeedit_lineedit_callback = nullptr;
        qdatetimeedit_setlineedit_callback = nullptr;
        qdatetimeedit_updatemicrofocus_callback = nullptr;
        qdatetimeedit_create_callback = nullptr;
        qdatetimeedit_destroy_callback = nullptr;
        qdatetimeedit_focusnextchild_callback = nullptr;
        qdatetimeedit_focuspreviouschild_callback = nullptr;
        qdatetimeedit_sender_callback = nullptr;
        qdatetimeedit_sendersignalindex_callback = nullptr;
        qdatetimeedit_receivers_callback = nullptr;
        qdatetimeedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDateTimeEdit_Metacall_Callback(QDateTimeEdit_Metacall_Callback cb) { qdatetimeedit_metacall_callback = cb; }
    void setQDateTimeEdit_SizeHint_Callback(QDateTimeEdit_SizeHint_Callback cb) { qdatetimeedit_sizehint_callback = cb; }
    void setQDateTimeEdit_Clear_Callback(QDateTimeEdit_Clear_Callback cb) { qdatetimeedit_clear_callback = cb; }
    void setQDateTimeEdit_StepBy_Callback(QDateTimeEdit_StepBy_Callback cb) { qdatetimeedit_stepby_callback = cb; }
    void setQDateTimeEdit_Event_Callback(QDateTimeEdit_Event_Callback cb) { qdatetimeedit_event_callback = cb; }
    void setQDateTimeEdit_KeyPressEvent_Callback(QDateTimeEdit_KeyPressEvent_Callback cb) { qdatetimeedit_keypressevent_callback = cb; }
    void setQDateTimeEdit_WheelEvent_Callback(QDateTimeEdit_WheelEvent_Callback cb) { qdatetimeedit_wheelevent_callback = cb; }
    void setQDateTimeEdit_FocusInEvent_Callback(QDateTimeEdit_FocusInEvent_Callback cb) { qdatetimeedit_focusinevent_callback = cb; }
    void setQDateTimeEdit_FocusNextPrevChild_Callback(QDateTimeEdit_FocusNextPrevChild_Callback cb) { qdatetimeedit_focusnextprevchild_callback = cb; }
    void setQDateTimeEdit_Validate_Callback(QDateTimeEdit_Validate_Callback cb) { qdatetimeedit_validate_callback = cb; }
    void setQDateTimeEdit_Fixup_Callback(QDateTimeEdit_Fixup_Callback cb) { qdatetimeedit_fixup_callback = cb; }
    void setQDateTimeEdit_DateTimeFromText_Callback(QDateTimeEdit_DateTimeFromText_Callback cb) { qdatetimeedit_datetimefromtext_callback = cb; }
    void setQDateTimeEdit_TextFromDateTime_Callback(QDateTimeEdit_TextFromDateTime_Callback cb) { qdatetimeedit_textfromdatetime_callback = cb; }
    void setQDateTimeEdit_StepEnabled_Callback(QDateTimeEdit_StepEnabled_Callback cb) { qdatetimeedit_stepenabled_callback = cb; }
    void setQDateTimeEdit_MousePressEvent_Callback(QDateTimeEdit_MousePressEvent_Callback cb) { qdatetimeedit_mousepressevent_callback = cb; }
    void setQDateTimeEdit_PaintEvent_Callback(QDateTimeEdit_PaintEvent_Callback cb) { qdatetimeedit_paintevent_callback = cb; }
    void setQDateTimeEdit_InitStyleOption_Callback(QDateTimeEdit_InitStyleOption_Callback cb) { qdatetimeedit_initstyleoption_callback = cb; }
    void setQDateTimeEdit_MinimumSizeHint_Callback(QDateTimeEdit_MinimumSizeHint_Callback cb) { qdatetimeedit_minimumsizehint_callback = cb; }
    void setQDateTimeEdit_InputMethodQuery_Callback(QDateTimeEdit_InputMethodQuery_Callback cb) { qdatetimeedit_inputmethodquery_callback = cb; }
    void setQDateTimeEdit_ResizeEvent_Callback(QDateTimeEdit_ResizeEvent_Callback cb) { qdatetimeedit_resizeevent_callback = cb; }
    void setQDateTimeEdit_KeyReleaseEvent_Callback(QDateTimeEdit_KeyReleaseEvent_Callback cb) { qdatetimeedit_keyreleaseevent_callback = cb; }
    void setQDateTimeEdit_FocusOutEvent_Callback(QDateTimeEdit_FocusOutEvent_Callback cb) { qdatetimeedit_focusoutevent_callback = cb; }
    void setQDateTimeEdit_ContextMenuEvent_Callback(QDateTimeEdit_ContextMenuEvent_Callback cb) { qdatetimeedit_contextmenuevent_callback = cb; }
    void setQDateTimeEdit_ChangeEvent_Callback(QDateTimeEdit_ChangeEvent_Callback cb) { qdatetimeedit_changeevent_callback = cb; }
    void setQDateTimeEdit_CloseEvent_Callback(QDateTimeEdit_CloseEvent_Callback cb) { qdatetimeedit_closeevent_callback = cb; }
    void setQDateTimeEdit_HideEvent_Callback(QDateTimeEdit_HideEvent_Callback cb) { qdatetimeedit_hideevent_callback = cb; }
    void setQDateTimeEdit_MouseReleaseEvent_Callback(QDateTimeEdit_MouseReleaseEvent_Callback cb) { qdatetimeedit_mousereleaseevent_callback = cb; }
    void setQDateTimeEdit_MouseMoveEvent_Callback(QDateTimeEdit_MouseMoveEvent_Callback cb) { qdatetimeedit_mousemoveevent_callback = cb; }
    void setQDateTimeEdit_TimerEvent_Callback(QDateTimeEdit_TimerEvent_Callback cb) { qdatetimeedit_timerevent_callback = cb; }
    void setQDateTimeEdit_ShowEvent_Callback(QDateTimeEdit_ShowEvent_Callback cb) { qdatetimeedit_showevent_callback = cb; }
    void setQDateTimeEdit_DevType_Callback(QDateTimeEdit_DevType_Callback cb) { qdatetimeedit_devtype_callback = cb; }
    void setQDateTimeEdit_SetVisible_Callback(QDateTimeEdit_SetVisible_Callback cb) { qdatetimeedit_setvisible_callback = cb; }
    void setQDateTimeEdit_HeightForWidth_Callback(QDateTimeEdit_HeightForWidth_Callback cb) { qdatetimeedit_heightforwidth_callback = cb; }
    void setQDateTimeEdit_HasHeightForWidth_Callback(QDateTimeEdit_HasHeightForWidth_Callback cb) { qdatetimeedit_hasheightforwidth_callback = cb; }
    void setQDateTimeEdit_PaintEngine_Callback(QDateTimeEdit_PaintEngine_Callback cb) { qdatetimeedit_paintengine_callback = cb; }
    void setQDateTimeEdit_MouseDoubleClickEvent_Callback(QDateTimeEdit_MouseDoubleClickEvent_Callback cb) { qdatetimeedit_mousedoubleclickevent_callback = cb; }
    void setQDateTimeEdit_EnterEvent_Callback(QDateTimeEdit_EnterEvent_Callback cb) { qdatetimeedit_enterevent_callback = cb; }
    void setQDateTimeEdit_LeaveEvent_Callback(QDateTimeEdit_LeaveEvent_Callback cb) { qdatetimeedit_leaveevent_callback = cb; }
    void setQDateTimeEdit_MoveEvent_Callback(QDateTimeEdit_MoveEvent_Callback cb) { qdatetimeedit_moveevent_callback = cb; }
    void setQDateTimeEdit_TabletEvent_Callback(QDateTimeEdit_TabletEvent_Callback cb) { qdatetimeedit_tabletevent_callback = cb; }
    void setQDateTimeEdit_ActionEvent_Callback(QDateTimeEdit_ActionEvent_Callback cb) { qdatetimeedit_actionevent_callback = cb; }
    void setQDateTimeEdit_DragEnterEvent_Callback(QDateTimeEdit_DragEnterEvent_Callback cb) { qdatetimeedit_dragenterevent_callback = cb; }
    void setQDateTimeEdit_DragMoveEvent_Callback(QDateTimeEdit_DragMoveEvent_Callback cb) { qdatetimeedit_dragmoveevent_callback = cb; }
    void setQDateTimeEdit_DragLeaveEvent_Callback(QDateTimeEdit_DragLeaveEvent_Callback cb) { qdatetimeedit_dragleaveevent_callback = cb; }
    void setQDateTimeEdit_DropEvent_Callback(QDateTimeEdit_DropEvent_Callback cb) { qdatetimeedit_dropevent_callback = cb; }
    void setQDateTimeEdit_NativeEvent_Callback(QDateTimeEdit_NativeEvent_Callback cb) { qdatetimeedit_nativeevent_callback = cb; }
    void setQDateTimeEdit_Metric_Callback(QDateTimeEdit_Metric_Callback cb) { qdatetimeedit_metric_callback = cb; }
    void setQDateTimeEdit_InitPainter_Callback(QDateTimeEdit_InitPainter_Callback cb) { qdatetimeedit_initpainter_callback = cb; }
    void setQDateTimeEdit_Redirected_Callback(QDateTimeEdit_Redirected_Callback cb) { qdatetimeedit_redirected_callback = cb; }
    void setQDateTimeEdit_SharedPainter_Callback(QDateTimeEdit_SharedPainter_Callback cb) { qdatetimeedit_sharedpainter_callback = cb; }
    void setQDateTimeEdit_InputMethodEvent_Callback(QDateTimeEdit_InputMethodEvent_Callback cb) { qdatetimeedit_inputmethodevent_callback = cb; }
    void setQDateTimeEdit_EventFilter_Callback(QDateTimeEdit_EventFilter_Callback cb) { qdatetimeedit_eventfilter_callback = cb; }
    void setQDateTimeEdit_ChildEvent_Callback(QDateTimeEdit_ChildEvent_Callback cb) { qdatetimeedit_childevent_callback = cb; }
    void setQDateTimeEdit_CustomEvent_Callback(QDateTimeEdit_CustomEvent_Callback cb) { qdatetimeedit_customevent_callback = cb; }
    void setQDateTimeEdit_ConnectNotify_Callback(QDateTimeEdit_ConnectNotify_Callback cb) { qdatetimeedit_connectnotify_callback = cb; }
    void setQDateTimeEdit_DisconnectNotify_Callback(QDateTimeEdit_DisconnectNotify_Callback cb) { qdatetimeedit_disconnectnotify_callback = cb; }
    void setQDateTimeEdit_LineEdit_Callback(QDateTimeEdit_LineEdit_Callback cb) { qdatetimeedit_lineedit_callback = cb; }
    void setQDateTimeEdit_SetLineEdit_Callback(QDateTimeEdit_SetLineEdit_Callback cb) { qdatetimeedit_setlineedit_callback = cb; }
    void setQDateTimeEdit_UpdateMicroFocus_Callback(QDateTimeEdit_UpdateMicroFocus_Callback cb) { qdatetimeedit_updatemicrofocus_callback = cb; }
    void setQDateTimeEdit_Create_Callback(QDateTimeEdit_Create_Callback cb) { qdatetimeedit_create_callback = cb; }
    void setQDateTimeEdit_Destroy_Callback(QDateTimeEdit_Destroy_Callback cb) { qdatetimeedit_destroy_callback = cb; }
    void setQDateTimeEdit_FocusNextChild_Callback(QDateTimeEdit_FocusNextChild_Callback cb) { qdatetimeedit_focusnextchild_callback = cb; }
    void setQDateTimeEdit_FocusPreviousChild_Callback(QDateTimeEdit_FocusPreviousChild_Callback cb) { qdatetimeedit_focuspreviouschild_callback = cb; }
    void setQDateTimeEdit_Sender_Callback(QDateTimeEdit_Sender_Callback cb) { qdatetimeedit_sender_callback = cb; }
    void setQDateTimeEdit_SenderSignalIndex_Callback(QDateTimeEdit_SenderSignalIndex_Callback cb) { qdatetimeedit_sendersignalindex_callback = cb; }
    void setQDateTimeEdit_Receivers_Callback(QDateTimeEdit_Receivers_Callback cb) { qdatetimeedit_receivers_callback = cb; }
    void setQDateTimeEdit_IsSignalConnected_Callback(QDateTimeEdit_IsSignalConnected_Callback cb) { qdatetimeedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDateTimeEdit_Metacall_IsBase(bool value) const { qdatetimeedit_metacall_isbase = value; }
    void setQDateTimeEdit_SizeHint_IsBase(bool value) const { qdatetimeedit_sizehint_isbase = value; }
    void setQDateTimeEdit_Clear_IsBase(bool value) const { qdatetimeedit_clear_isbase = value; }
    void setQDateTimeEdit_StepBy_IsBase(bool value) const { qdatetimeedit_stepby_isbase = value; }
    void setQDateTimeEdit_Event_IsBase(bool value) const { qdatetimeedit_event_isbase = value; }
    void setQDateTimeEdit_KeyPressEvent_IsBase(bool value) const { qdatetimeedit_keypressevent_isbase = value; }
    void setQDateTimeEdit_WheelEvent_IsBase(bool value) const { qdatetimeedit_wheelevent_isbase = value; }
    void setQDateTimeEdit_FocusInEvent_IsBase(bool value) const { qdatetimeedit_focusinevent_isbase = value; }
    void setQDateTimeEdit_FocusNextPrevChild_IsBase(bool value) const { qdatetimeedit_focusnextprevchild_isbase = value; }
    void setQDateTimeEdit_Validate_IsBase(bool value) const { qdatetimeedit_validate_isbase = value; }
    void setQDateTimeEdit_Fixup_IsBase(bool value) const { qdatetimeedit_fixup_isbase = value; }
    void setQDateTimeEdit_DateTimeFromText_IsBase(bool value) const { qdatetimeedit_datetimefromtext_isbase = value; }
    void setQDateTimeEdit_TextFromDateTime_IsBase(bool value) const { qdatetimeedit_textfromdatetime_isbase = value; }
    void setQDateTimeEdit_StepEnabled_IsBase(bool value) const { qdatetimeedit_stepenabled_isbase = value; }
    void setQDateTimeEdit_MousePressEvent_IsBase(bool value) const { qdatetimeedit_mousepressevent_isbase = value; }
    void setQDateTimeEdit_PaintEvent_IsBase(bool value) const { qdatetimeedit_paintevent_isbase = value; }
    void setQDateTimeEdit_InitStyleOption_IsBase(bool value) const { qdatetimeedit_initstyleoption_isbase = value; }
    void setQDateTimeEdit_MinimumSizeHint_IsBase(bool value) const { qdatetimeedit_minimumsizehint_isbase = value; }
    void setQDateTimeEdit_InputMethodQuery_IsBase(bool value) const { qdatetimeedit_inputmethodquery_isbase = value; }
    void setQDateTimeEdit_ResizeEvent_IsBase(bool value) const { qdatetimeedit_resizeevent_isbase = value; }
    void setQDateTimeEdit_KeyReleaseEvent_IsBase(bool value) const { qdatetimeedit_keyreleaseevent_isbase = value; }
    void setQDateTimeEdit_FocusOutEvent_IsBase(bool value) const { qdatetimeedit_focusoutevent_isbase = value; }
    void setQDateTimeEdit_ContextMenuEvent_IsBase(bool value) const { qdatetimeedit_contextmenuevent_isbase = value; }
    void setQDateTimeEdit_ChangeEvent_IsBase(bool value) const { qdatetimeedit_changeevent_isbase = value; }
    void setQDateTimeEdit_CloseEvent_IsBase(bool value) const { qdatetimeedit_closeevent_isbase = value; }
    void setQDateTimeEdit_HideEvent_IsBase(bool value) const { qdatetimeedit_hideevent_isbase = value; }
    void setQDateTimeEdit_MouseReleaseEvent_IsBase(bool value) const { qdatetimeedit_mousereleaseevent_isbase = value; }
    void setQDateTimeEdit_MouseMoveEvent_IsBase(bool value) const { qdatetimeedit_mousemoveevent_isbase = value; }
    void setQDateTimeEdit_TimerEvent_IsBase(bool value) const { qdatetimeedit_timerevent_isbase = value; }
    void setQDateTimeEdit_ShowEvent_IsBase(bool value) const { qdatetimeedit_showevent_isbase = value; }
    void setQDateTimeEdit_DevType_IsBase(bool value) const { qdatetimeedit_devtype_isbase = value; }
    void setQDateTimeEdit_SetVisible_IsBase(bool value) const { qdatetimeedit_setvisible_isbase = value; }
    void setQDateTimeEdit_HeightForWidth_IsBase(bool value) const { qdatetimeedit_heightforwidth_isbase = value; }
    void setQDateTimeEdit_HasHeightForWidth_IsBase(bool value) const { qdatetimeedit_hasheightforwidth_isbase = value; }
    void setQDateTimeEdit_PaintEngine_IsBase(bool value) const { qdatetimeedit_paintengine_isbase = value; }
    void setQDateTimeEdit_MouseDoubleClickEvent_IsBase(bool value) const { qdatetimeedit_mousedoubleclickevent_isbase = value; }
    void setQDateTimeEdit_EnterEvent_IsBase(bool value) const { qdatetimeedit_enterevent_isbase = value; }
    void setQDateTimeEdit_LeaveEvent_IsBase(bool value) const { qdatetimeedit_leaveevent_isbase = value; }
    void setQDateTimeEdit_MoveEvent_IsBase(bool value) const { qdatetimeedit_moveevent_isbase = value; }
    void setQDateTimeEdit_TabletEvent_IsBase(bool value) const { qdatetimeedit_tabletevent_isbase = value; }
    void setQDateTimeEdit_ActionEvent_IsBase(bool value) const { qdatetimeedit_actionevent_isbase = value; }
    void setQDateTimeEdit_DragEnterEvent_IsBase(bool value) const { qdatetimeedit_dragenterevent_isbase = value; }
    void setQDateTimeEdit_DragMoveEvent_IsBase(bool value) const { qdatetimeedit_dragmoveevent_isbase = value; }
    void setQDateTimeEdit_DragLeaveEvent_IsBase(bool value) const { qdatetimeedit_dragleaveevent_isbase = value; }
    void setQDateTimeEdit_DropEvent_IsBase(bool value) const { qdatetimeedit_dropevent_isbase = value; }
    void setQDateTimeEdit_NativeEvent_IsBase(bool value) const { qdatetimeedit_nativeevent_isbase = value; }
    void setQDateTimeEdit_Metric_IsBase(bool value) const { qdatetimeedit_metric_isbase = value; }
    void setQDateTimeEdit_InitPainter_IsBase(bool value) const { qdatetimeedit_initpainter_isbase = value; }
    void setQDateTimeEdit_Redirected_IsBase(bool value) const { qdatetimeedit_redirected_isbase = value; }
    void setQDateTimeEdit_SharedPainter_IsBase(bool value) const { qdatetimeedit_sharedpainter_isbase = value; }
    void setQDateTimeEdit_InputMethodEvent_IsBase(bool value) const { qdatetimeedit_inputmethodevent_isbase = value; }
    void setQDateTimeEdit_EventFilter_IsBase(bool value) const { qdatetimeedit_eventfilter_isbase = value; }
    void setQDateTimeEdit_ChildEvent_IsBase(bool value) const { qdatetimeedit_childevent_isbase = value; }
    void setQDateTimeEdit_CustomEvent_IsBase(bool value) const { qdatetimeedit_customevent_isbase = value; }
    void setQDateTimeEdit_ConnectNotify_IsBase(bool value) const { qdatetimeedit_connectnotify_isbase = value; }
    void setQDateTimeEdit_DisconnectNotify_IsBase(bool value) const { qdatetimeedit_disconnectnotify_isbase = value; }
    void setQDateTimeEdit_LineEdit_IsBase(bool value) const { qdatetimeedit_lineedit_isbase = value; }
    void setQDateTimeEdit_SetLineEdit_IsBase(bool value) const { qdatetimeedit_setlineedit_isbase = value; }
    void setQDateTimeEdit_UpdateMicroFocus_IsBase(bool value) const { qdatetimeedit_updatemicrofocus_isbase = value; }
    void setQDateTimeEdit_Create_IsBase(bool value) const { qdatetimeedit_create_isbase = value; }
    void setQDateTimeEdit_Destroy_IsBase(bool value) const { qdatetimeedit_destroy_isbase = value; }
    void setQDateTimeEdit_FocusNextChild_IsBase(bool value) const { qdatetimeedit_focusnextchild_isbase = value; }
    void setQDateTimeEdit_FocusPreviousChild_IsBase(bool value) const { qdatetimeedit_focuspreviouschild_isbase = value; }
    void setQDateTimeEdit_Sender_IsBase(bool value) const { qdatetimeedit_sender_isbase = value; }
    void setQDateTimeEdit_SenderSignalIndex_IsBase(bool value) const { qdatetimeedit_sendersignalindex_isbase = value; }
    void setQDateTimeEdit_Receivers_IsBase(bool value) const { qdatetimeedit_receivers_isbase = value; }
    void setQDateTimeEdit_IsSignalConnected_IsBase(bool value) const { qdatetimeedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdatetimeedit_metacall_isbase) {
            qdatetimeedit_metacall_isbase = false;
            return QDateTimeEdit::qt_metacall(param1, param2, param3);
        } else if (qdatetimeedit_metacall_callback != nullptr) {
            return qdatetimeedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QDateTimeEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdatetimeedit_sizehint_isbase) {
            qdatetimeedit_sizehint_isbase = false;
            return QDateTimeEdit::sizeHint();
        } else if (qdatetimeedit_sizehint_callback != nullptr) {
            return qdatetimeedit_sizehint_callback();
        } else {
            return QDateTimeEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdatetimeedit_clear_isbase) {
            qdatetimeedit_clear_isbase = false;
            QDateTimeEdit::clear();
        } else if (qdatetimeedit_clear_callback != nullptr) {
            qdatetimeedit_clear_callback();
        } else {
            QDateTimeEdit::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdatetimeedit_stepby_isbase) {
            qdatetimeedit_stepby_isbase = false;
            QDateTimeEdit::stepBy(steps);
        } else if (qdatetimeedit_stepby_callback != nullptr) {
            qdatetimeedit_stepby_callback(this, steps);
        } else {
            QDateTimeEdit::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdatetimeedit_event_isbase) {
            qdatetimeedit_event_isbase = false;
            return QDateTimeEdit::event(event);
        } else if (qdatetimeedit_event_callback != nullptr) {
            return qdatetimeedit_event_callback(this, event);
        } else {
            return QDateTimeEdit::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keypressevent_isbase) {
            qdatetimeedit_keypressevent_isbase = false;
            QDateTimeEdit::keyPressEvent(event);
        } else if (qdatetimeedit_keypressevent_callback != nullptr) {
            qdatetimeedit_keypressevent_callback(this, event);
        } else {
            QDateTimeEdit::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdatetimeedit_wheelevent_isbase) {
            qdatetimeedit_wheelevent_isbase = false;
            QDateTimeEdit::wheelEvent(event);
        } else if (qdatetimeedit_wheelevent_callback != nullptr) {
            qdatetimeedit_wheelevent_callback(this, event);
        } else {
            QDateTimeEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusinevent_isbase) {
            qdatetimeedit_focusinevent_isbase = false;
            QDateTimeEdit::focusInEvent(event);
        } else if (qdatetimeedit_focusinevent_callback != nullptr) {
            qdatetimeedit_focusinevent_callback(this, event);
        } else {
            QDateTimeEdit::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdatetimeedit_focusnextprevchild_isbase) {
            qdatetimeedit_focusnextprevchild_isbase = false;
            return QDateTimeEdit::focusNextPrevChild(next);
        } else if (qdatetimeedit_focusnextprevchild_callback != nullptr) {
            return qdatetimeedit_focusnextprevchild_callback(this, next);
        } else {
            return QDateTimeEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdatetimeedit_validate_isbase) {
            qdatetimeedit_validate_isbase = false;
            return QDateTimeEdit::validate(input, pos);
        } else if (qdatetimeedit_validate_callback != nullptr) {
            return qdatetimeedit_validate_callback(this, input, pos);
        } else {
            return QDateTimeEdit::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdatetimeedit_fixup_isbase) {
            qdatetimeedit_fixup_isbase = false;
            QDateTimeEdit::fixup(input);
        } else if (qdatetimeedit_fixup_callback != nullptr) {
            qdatetimeedit_fixup_callback(this, input);
        } else {
            QDateTimeEdit::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdatetimeedit_datetimefromtext_isbase) {
            qdatetimeedit_datetimefromtext_isbase = false;
            return QDateTimeEdit::dateTimeFromText(text);
        } else if (qdatetimeedit_datetimefromtext_callback != nullptr) {
            return qdatetimeedit_datetimefromtext_callback(this, text);
        } else {
            return QDateTimeEdit::dateTimeFromText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdatetimeedit_textfromdatetime_isbase) {
            qdatetimeedit_textfromdatetime_isbase = false;
            return QDateTimeEdit::textFromDateTime(dt);
        } else if (qdatetimeedit_textfromdatetime_callback != nullptr) {
            return qdatetimeedit_textfromdatetime_callback(this, dt);
        } else {
            return QDateTimeEdit::textFromDateTime(dt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdatetimeedit_stepenabled_isbase) {
            qdatetimeedit_stepenabled_isbase = false;
            return QDateTimeEdit::stepEnabled();
        } else if (qdatetimeedit_stepenabled_callback != nullptr) {
            return qdatetimeedit_stepenabled_callback();
        } else {
            return QDateTimeEdit::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousepressevent_isbase) {
            qdatetimeedit_mousepressevent_isbase = false;
            QDateTimeEdit::mousePressEvent(event);
        } else if (qdatetimeedit_mousepressevent_callback != nullptr) {
            qdatetimeedit_mousepressevent_callback(this, event);
        } else {
            QDateTimeEdit::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdatetimeedit_paintevent_isbase) {
            qdatetimeedit_paintevent_isbase = false;
            QDateTimeEdit::paintEvent(event);
        } else if (qdatetimeedit_paintevent_callback != nullptr) {
            qdatetimeedit_paintevent_callback(this, event);
        } else {
            QDateTimeEdit::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdatetimeedit_initstyleoption_isbase) {
            qdatetimeedit_initstyleoption_isbase = false;
            QDateTimeEdit::initStyleOption(option);
        } else if (qdatetimeedit_initstyleoption_callback != nullptr) {
            qdatetimeedit_initstyleoption_callback(this, option);
        } else {
            QDateTimeEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdatetimeedit_minimumsizehint_isbase) {
            qdatetimeedit_minimumsizehint_isbase = false;
            return QDateTimeEdit::minimumSizeHint();
        } else if (qdatetimeedit_minimumsizehint_callback != nullptr) {
            return qdatetimeedit_minimumsizehint_callback();
        } else {
            return QDateTimeEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdatetimeedit_inputmethodquery_isbase) {
            qdatetimeedit_inputmethodquery_isbase = false;
            return QDateTimeEdit::inputMethodQuery(param1);
        } else if (qdatetimeedit_inputmethodquery_callback != nullptr) {
            return qdatetimeedit_inputmethodquery_callback(this, param1);
        } else {
            return QDateTimeEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdatetimeedit_resizeevent_isbase) {
            qdatetimeedit_resizeevent_isbase = false;
            QDateTimeEdit::resizeEvent(event);
        } else if (qdatetimeedit_resizeevent_callback != nullptr) {
            qdatetimeedit_resizeevent_callback(this, event);
        } else {
            QDateTimeEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdatetimeedit_keyreleaseevent_isbase) {
            qdatetimeedit_keyreleaseevent_isbase = false;
            QDateTimeEdit::keyReleaseEvent(event);
        } else if (qdatetimeedit_keyreleaseevent_callback != nullptr) {
            qdatetimeedit_keyreleaseevent_callback(this, event);
        } else {
            QDateTimeEdit::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdatetimeedit_focusoutevent_isbase) {
            qdatetimeedit_focusoutevent_isbase = false;
            QDateTimeEdit::focusOutEvent(event);
        } else if (qdatetimeedit_focusoutevent_callback != nullptr) {
            qdatetimeedit_focusoutevent_callback(this, event);
        } else {
            QDateTimeEdit::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdatetimeedit_contextmenuevent_isbase) {
            qdatetimeedit_contextmenuevent_isbase = false;
            QDateTimeEdit::contextMenuEvent(event);
        } else if (qdatetimeedit_contextmenuevent_callback != nullptr) {
            qdatetimeedit_contextmenuevent_callback(this, event);
        } else {
            QDateTimeEdit::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdatetimeedit_changeevent_isbase) {
            qdatetimeedit_changeevent_isbase = false;
            QDateTimeEdit::changeEvent(event);
        } else if (qdatetimeedit_changeevent_callback != nullptr) {
            qdatetimeedit_changeevent_callback(this, event);
        } else {
            QDateTimeEdit::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdatetimeedit_closeevent_isbase) {
            qdatetimeedit_closeevent_isbase = false;
            QDateTimeEdit::closeEvent(event);
        } else if (qdatetimeedit_closeevent_callback != nullptr) {
            qdatetimeedit_closeevent_callback(this, event);
        } else {
            QDateTimeEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdatetimeedit_hideevent_isbase) {
            qdatetimeedit_hideevent_isbase = false;
            QDateTimeEdit::hideEvent(event);
        } else if (qdatetimeedit_hideevent_callback != nullptr) {
            qdatetimeedit_hideevent_callback(this, event);
        } else {
            QDateTimeEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousereleaseevent_isbase) {
            qdatetimeedit_mousereleaseevent_isbase = false;
            QDateTimeEdit::mouseReleaseEvent(event);
        } else if (qdatetimeedit_mousereleaseevent_callback != nullptr) {
            qdatetimeedit_mousereleaseevent_callback(this, event);
        } else {
            QDateTimeEdit::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousemoveevent_isbase) {
            qdatetimeedit_mousemoveevent_isbase = false;
            QDateTimeEdit::mouseMoveEvent(event);
        } else if (qdatetimeedit_mousemoveevent_callback != nullptr) {
            qdatetimeedit_mousemoveevent_callback(this, event);
        } else {
            QDateTimeEdit::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdatetimeedit_timerevent_isbase) {
            qdatetimeedit_timerevent_isbase = false;
            QDateTimeEdit::timerEvent(event);
        } else if (qdatetimeedit_timerevent_callback != nullptr) {
            qdatetimeedit_timerevent_callback(this, event);
        } else {
            QDateTimeEdit::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdatetimeedit_showevent_isbase) {
            qdatetimeedit_showevent_isbase = false;
            QDateTimeEdit::showEvent(event);
        } else if (qdatetimeedit_showevent_callback != nullptr) {
            qdatetimeedit_showevent_callback(this, event);
        } else {
            QDateTimeEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdatetimeedit_devtype_isbase) {
            qdatetimeedit_devtype_isbase = false;
            return QDateTimeEdit::devType();
        } else if (qdatetimeedit_devtype_callback != nullptr) {
            return qdatetimeedit_devtype_callback();
        } else {
            return QDateTimeEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdatetimeedit_setvisible_isbase) {
            qdatetimeedit_setvisible_isbase = false;
            QDateTimeEdit::setVisible(visible);
        } else if (qdatetimeedit_setvisible_callback != nullptr) {
            qdatetimeedit_setvisible_callback(this, visible);
        } else {
            QDateTimeEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdatetimeedit_heightforwidth_isbase) {
            qdatetimeedit_heightforwidth_isbase = false;
            return QDateTimeEdit::heightForWidth(param1);
        } else if (qdatetimeedit_heightforwidth_callback != nullptr) {
            return qdatetimeedit_heightforwidth_callback(this, param1);
        } else {
            return QDateTimeEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdatetimeedit_hasheightforwidth_isbase) {
            qdatetimeedit_hasheightforwidth_isbase = false;
            return QDateTimeEdit::hasHeightForWidth();
        } else if (qdatetimeedit_hasheightforwidth_callback != nullptr) {
            return qdatetimeedit_hasheightforwidth_callback();
        } else {
            return QDateTimeEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdatetimeedit_paintengine_isbase) {
            qdatetimeedit_paintengine_isbase = false;
            return QDateTimeEdit::paintEngine();
        } else if (qdatetimeedit_paintengine_callback != nullptr) {
            return qdatetimeedit_paintengine_callback();
        } else {
            return QDateTimeEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdatetimeedit_mousedoubleclickevent_isbase) {
            qdatetimeedit_mousedoubleclickevent_isbase = false;
            QDateTimeEdit::mouseDoubleClickEvent(event);
        } else if (qdatetimeedit_mousedoubleclickevent_callback != nullptr) {
            qdatetimeedit_mousedoubleclickevent_callback(this, event);
        } else {
            QDateTimeEdit::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdatetimeedit_enterevent_isbase) {
            qdatetimeedit_enterevent_isbase = false;
            QDateTimeEdit::enterEvent(event);
        } else if (qdatetimeedit_enterevent_callback != nullptr) {
            qdatetimeedit_enterevent_callback(this, event);
        } else {
            QDateTimeEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdatetimeedit_leaveevent_isbase) {
            qdatetimeedit_leaveevent_isbase = false;
            QDateTimeEdit::leaveEvent(event);
        } else if (qdatetimeedit_leaveevent_callback != nullptr) {
            qdatetimeedit_leaveevent_callback(this, event);
        } else {
            QDateTimeEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdatetimeedit_moveevent_isbase) {
            qdatetimeedit_moveevent_isbase = false;
            QDateTimeEdit::moveEvent(event);
        } else if (qdatetimeedit_moveevent_callback != nullptr) {
            qdatetimeedit_moveevent_callback(this, event);
        } else {
            QDateTimeEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdatetimeedit_tabletevent_isbase) {
            qdatetimeedit_tabletevent_isbase = false;
            QDateTimeEdit::tabletEvent(event);
        } else if (qdatetimeedit_tabletevent_callback != nullptr) {
            qdatetimeedit_tabletevent_callback(this, event);
        } else {
            QDateTimeEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdatetimeedit_actionevent_isbase) {
            qdatetimeedit_actionevent_isbase = false;
            QDateTimeEdit::actionEvent(event);
        } else if (qdatetimeedit_actionevent_callback != nullptr) {
            qdatetimeedit_actionevent_callback(this, event);
        } else {
            QDateTimeEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdatetimeedit_dragenterevent_isbase) {
            qdatetimeedit_dragenterevent_isbase = false;
            QDateTimeEdit::dragEnterEvent(event);
        } else if (qdatetimeedit_dragenterevent_callback != nullptr) {
            qdatetimeedit_dragenterevent_callback(this, event);
        } else {
            QDateTimeEdit::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdatetimeedit_dragmoveevent_isbase) {
            qdatetimeedit_dragmoveevent_isbase = false;
            QDateTimeEdit::dragMoveEvent(event);
        } else if (qdatetimeedit_dragmoveevent_callback != nullptr) {
            qdatetimeedit_dragmoveevent_callback(this, event);
        } else {
            QDateTimeEdit::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdatetimeedit_dragleaveevent_isbase) {
            qdatetimeedit_dragleaveevent_isbase = false;
            QDateTimeEdit::dragLeaveEvent(event);
        } else if (qdatetimeedit_dragleaveevent_callback != nullptr) {
            qdatetimeedit_dragleaveevent_callback(this, event);
        } else {
            QDateTimeEdit::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdatetimeedit_dropevent_isbase) {
            qdatetimeedit_dropevent_isbase = false;
            QDateTimeEdit::dropEvent(event);
        } else if (qdatetimeedit_dropevent_callback != nullptr) {
            qdatetimeedit_dropevent_callback(this, event);
        } else {
            QDateTimeEdit::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdatetimeedit_nativeevent_isbase) {
            qdatetimeedit_nativeevent_isbase = false;
            return QDateTimeEdit::nativeEvent(eventType, message, result);
        } else if (qdatetimeedit_nativeevent_callback != nullptr) {
            return qdatetimeedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDateTimeEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdatetimeedit_metric_isbase) {
            qdatetimeedit_metric_isbase = false;
            return QDateTimeEdit::metric(param1);
        } else if (qdatetimeedit_metric_callback != nullptr) {
            return qdatetimeedit_metric_callback(this, param1);
        } else {
            return QDateTimeEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdatetimeedit_initpainter_isbase) {
            qdatetimeedit_initpainter_isbase = false;
            QDateTimeEdit::initPainter(painter);
        } else if (qdatetimeedit_initpainter_callback != nullptr) {
            qdatetimeedit_initpainter_callback(this, painter);
        } else {
            QDateTimeEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdatetimeedit_redirected_isbase) {
            qdatetimeedit_redirected_isbase = false;
            return QDateTimeEdit::redirected(offset);
        } else if (qdatetimeedit_redirected_callback != nullptr) {
            return qdatetimeedit_redirected_callback(this, offset);
        } else {
            return QDateTimeEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdatetimeedit_sharedpainter_isbase) {
            qdatetimeedit_sharedpainter_isbase = false;
            return QDateTimeEdit::sharedPainter();
        } else if (qdatetimeedit_sharedpainter_callback != nullptr) {
            return qdatetimeedit_sharedpainter_callback();
        } else {
            return QDateTimeEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdatetimeedit_inputmethodevent_isbase) {
            qdatetimeedit_inputmethodevent_isbase = false;
            QDateTimeEdit::inputMethodEvent(param1);
        } else if (qdatetimeedit_inputmethodevent_callback != nullptr) {
            qdatetimeedit_inputmethodevent_callback(this, param1);
        } else {
            QDateTimeEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdatetimeedit_eventfilter_isbase) {
            qdatetimeedit_eventfilter_isbase = false;
            return QDateTimeEdit::eventFilter(watched, event);
        } else if (qdatetimeedit_eventfilter_callback != nullptr) {
            return qdatetimeedit_eventfilter_callback(this, watched, event);
        } else {
            return QDateTimeEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdatetimeedit_childevent_isbase) {
            qdatetimeedit_childevent_isbase = false;
            QDateTimeEdit::childEvent(event);
        } else if (qdatetimeedit_childevent_callback != nullptr) {
            qdatetimeedit_childevent_callback(this, event);
        } else {
            QDateTimeEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdatetimeedit_customevent_isbase) {
            qdatetimeedit_customevent_isbase = false;
            QDateTimeEdit::customEvent(event);
        } else if (qdatetimeedit_customevent_callback != nullptr) {
            qdatetimeedit_customevent_callback(this, event);
        } else {
            QDateTimeEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_connectnotify_isbase) {
            qdatetimeedit_connectnotify_isbase = false;
            QDateTimeEdit::connectNotify(signal);
        } else if (qdatetimeedit_connectnotify_callback != nullptr) {
            qdatetimeedit_connectnotify_callback(this, signal);
        } else {
            QDateTimeEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdatetimeedit_disconnectnotify_isbase) {
            qdatetimeedit_disconnectnotify_isbase = false;
            QDateTimeEdit::disconnectNotify(signal);
        } else if (qdatetimeedit_disconnectnotify_callback != nullptr) {
            qdatetimeedit_disconnectnotify_callback(this, signal);
        } else {
            QDateTimeEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qdatetimeedit_lineedit_isbase) {
            qdatetimeedit_lineedit_isbase = false;
            return QDateTimeEdit::lineEdit();
        } else if (qdatetimeedit_lineedit_callback != nullptr) {
            return qdatetimeedit_lineedit_callback();
        } else {
            return QDateTimeEdit::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qdatetimeedit_setlineedit_isbase) {
            qdatetimeedit_setlineedit_isbase = false;
            QDateTimeEdit::setLineEdit(edit);
        } else if (qdatetimeedit_setlineedit_callback != nullptr) {
            qdatetimeedit_setlineedit_callback(this, edit);
        } else {
            QDateTimeEdit::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdatetimeedit_updatemicrofocus_isbase) {
            qdatetimeedit_updatemicrofocus_isbase = false;
            QDateTimeEdit::updateMicroFocus();
        } else if (qdatetimeedit_updatemicrofocus_callback != nullptr) {
            qdatetimeedit_updatemicrofocus_callback();
        } else {
            QDateTimeEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdatetimeedit_create_isbase) {
            qdatetimeedit_create_isbase = false;
            QDateTimeEdit::create();
        } else if (qdatetimeedit_create_callback != nullptr) {
            qdatetimeedit_create_callback();
        } else {
            QDateTimeEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdatetimeedit_destroy_isbase) {
            qdatetimeedit_destroy_isbase = false;
            QDateTimeEdit::destroy();
        } else if (qdatetimeedit_destroy_callback != nullptr) {
            qdatetimeedit_destroy_callback();
        } else {
            QDateTimeEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdatetimeedit_focusnextchild_isbase) {
            qdatetimeedit_focusnextchild_isbase = false;
            return QDateTimeEdit::focusNextChild();
        } else if (qdatetimeedit_focusnextchild_callback != nullptr) {
            return qdatetimeedit_focusnextchild_callback();
        } else {
            return QDateTimeEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdatetimeedit_focuspreviouschild_isbase) {
            qdatetimeedit_focuspreviouschild_isbase = false;
            return QDateTimeEdit::focusPreviousChild();
        } else if (qdatetimeedit_focuspreviouschild_callback != nullptr) {
            return qdatetimeedit_focuspreviouschild_callback();
        } else {
            return QDateTimeEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdatetimeedit_sender_isbase) {
            qdatetimeedit_sender_isbase = false;
            return QDateTimeEdit::sender();
        } else if (qdatetimeedit_sender_callback != nullptr) {
            return qdatetimeedit_sender_callback();
        } else {
            return QDateTimeEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdatetimeedit_sendersignalindex_isbase) {
            qdatetimeedit_sendersignalindex_isbase = false;
            return QDateTimeEdit::senderSignalIndex();
        } else if (qdatetimeedit_sendersignalindex_callback != nullptr) {
            return qdatetimeedit_sendersignalindex_callback();
        } else {
            return QDateTimeEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdatetimeedit_receivers_isbase) {
            qdatetimeedit_receivers_isbase = false;
            return QDateTimeEdit::receivers(signal);
        } else if (qdatetimeedit_receivers_callback != nullptr) {
            return qdatetimeedit_receivers_callback(this, signal);
        } else {
            return QDateTimeEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdatetimeedit_issignalconnected_isbase) {
            qdatetimeedit_issignalconnected_isbase = false;
            return QDateTimeEdit::isSignalConnected(signal);
        } else if (qdatetimeedit_issignalconnected_callback != nullptr) {
            return qdatetimeedit_issignalconnected_callback(this, signal);
        } else {
            return QDateTimeEdit::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QTimeEdit so that we can call protected methods
class VirtualQTimeEdit : public QTimeEdit {

  public:
    // Virtual class public types (including callbacks)
    using QTimeEdit_Metacall_Callback = int (*)(QTimeEdit*, QMetaObject::Call, int, void**);
    using QTimeEdit_SizeHint_Callback = QSize (*)();
    using QTimeEdit_Clear_Callback = void (*)();
    using QTimeEdit_StepBy_Callback = void (*)(QTimeEdit*, int);
    using QTimeEdit_Event_Callback = bool (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_KeyPressEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_WheelEvent_Callback = void (*)(QTimeEdit*, QWheelEvent*);
    using QTimeEdit_FocusInEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_FocusNextPrevChild_Callback = bool (*)(QTimeEdit*, bool);
    using QTimeEdit_Validate_Callback = QValidator::State (*)(const QTimeEdit*, QString&, int&);
    using QTimeEdit_Fixup_Callback = void (*)(const QTimeEdit*, QString&);
    using QTimeEdit_DateTimeFromText_Callback = QDateTime (*)(const QTimeEdit*, const QString&);
    using QTimeEdit_TextFromDateTime_Callback = QString (*)(const QTimeEdit*, const QDateTime&);
    using QTimeEdit_StepEnabled_Callback = QAbstractSpinBox::StepEnabled (*)();
    using QTimeEdit_MousePressEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_PaintEvent_Callback = void (*)(QTimeEdit*, QPaintEvent*);
    using QTimeEdit_InitStyleOption_Callback = void (*)(const QTimeEdit*, QStyleOptionSpinBox*);
    using QTimeEdit_MinimumSizeHint_Callback = QSize (*)();
    using QTimeEdit_InputMethodQuery_Callback = QVariant (*)(const QTimeEdit*, Qt::InputMethodQuery);
    using QTimeEdit_ResizeEvent_Callback = void (*)(QTimeEdit*, QResizeEvent*);
    using QTimeEdit_KeyReleaseEvent_Callback = void (*)(QTimeEdit*, QKeyEvent*);
    using QTimeEdit_FocusOutEvent_Callback = void (*)(QTimeEdit*, QFocusEvent*);
    using QTimeEdit_ContextMenuEvent_Callback = void (*)(QTimeEdit*, QContextMenuEvent*);
    using QTimeEdit_ChangeEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_CloseEvent_Callback = void (*)(QTimeEdit*, QCloseEvent*);
    using QTimeEdit_HideEvent_Callback = void (*)(QTimeEdit*, QHideEvent*);
    using QTimeEdit_MouseReleaseEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_MouseMoveEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_TimerEvent_Callback = void (*)(QTimeEdit*, QTimerEvent*);
    using QTimeEdit_ShowEvent_Callback = void (*)(QTimeEdit*, QShowEvent*);
    using QTimeEdit_DevType_Callback = int (*)();
    using QTimeEdit_SetVisible_Callback = void (*)(QTimeEdit*, bool);
    using QTimeEdit_HeightForWidth_Callback = int (*)(const QTimeEdit*, int);
    using QTimeEdit_HasHeightForWidth_Callback = bool (*)();
    using QTimeEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QTimeEdit_MouseDoubleClickEvent_Callback = void (*)(QTimeEdit*, QMouseEvent*);
    using QTimeEdit_EnterEvent_Callback = void (*)(QTimeEdit*, QEnterEvent*);
    using QTimeEdit_LeaveEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_MoveEvent_Callback = void (*)(QTimeEdit*, QMoveEvent*);
    using QTimeEdit_TabletEvent_Callback = void (*)(QTimeEdit*, QTabletEvent*);
    using QTimeEdit_ActionEvent_Callback = void (*)(QTimeEdit*, QActionEvent*);
    using QTimeEdit_DragEnterEvent_Callback = void (*)(QTimeEdit*, QDragEnterEvent*);
    using QTimeEdit_DragMoveEvent_Callback = void (*)(QTimeEdit*, QDragMoveEvent*);
    using QTimeEdit_DragLeaveEvent_Callback = void (*)(QTimeEdit*, QDragLeaveEvent*);
    using QTimeEdit_DropEvent_Callback = void (*)(QTimeEdit*, QDropEvent*);
    using QTimeEdit_NativeEvent_Callback = bool (*)(QTimeEdit*, const QByteArray&, void*, qintptr*);
    using QTimeEdit_Metric_Callback = int (*)(const QTimeEdit*, QPaintDevice::PaintDeviceMetric);
    using QTimeEdit_InitPainter_Callback = void (*)(const QTimeEdit*, QPainter*);
    using QTimeEdit_Redirected_Callback = QPaintDevice* (*)(const QTimeEdit*, QPoint*);
    using QTimeEdit_SharedPainter_Callback = QPainter* (*)();
    using QTimeEdit_InputMethodEvent_Callback = void (*)(QTimeEdit*, QInputMethodEvent*);
    using QTimeEdit_EventFilter_Callback = bool (*)(QTimeEdit*, QObject*, QEvent*);
    using QTimeEdit_ChildEvent_Callback = void (*)(QTimeEdit*, QChildEvent*);
    using QTimeEdit_CustomEvent_Callback = void (*)(QTimeEdit*, QEvent*);
    using QTimeEdit_ConnectNotify_Callback = void (*)(QTimeEdit*, const QMetaMethod&);
    using QTimeEdit_DisconnectNotify_Callback = void (*)(QTimeEdit*, const QMetaMethod&);
    using QTimeEdit_LineEdit_Callback = QLineEdit* (*)();
    using QTimeEdit_SetLineEdit_Callback = void (*)(QTimeEdit*, QLineEdit*);
    using QTimeEdit_UpdateMicroFocus_Callback = void (*)();
    using QTimeEdit_Create_Callback = void (*)();
    using QTimeEdit_Destroy_Callback = void (*)();
    using QTimeEdit_FocusNextChild_Callback = bool (*)();
    using QTimeEdit_FocusPreviousChild_Callback = bool (*)();
    using QTimeEdit_Sender_Callback = QObject* (*)();
    using QTimeEdit_SenderSignalIndex_Callback = int (*)();
    using QTimeEdit_Receivers_Callback = int (*)(const QTimeEdit*, const char*);
    using QTimeEdit_IsSignalConnected_Callback = bool (*)(const QTimeEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTimeEdit_Metacall_Callback qtimeedit_metacall_callback = nullptr;
    QTimeEdit_SizeHint_Callback qtimeedit_sizehint_callback = nullptr;
    QTimeEdit_Clear_Callback qtimeedit_clear_callback = nullptr;
    QTimeEdit_StepBy_Callback qtimeedit_stepby_callback = nullptr;
    QTimeEdit_Event_Callback qtimeedit_event_callback = nullptr;
    QTimeEdit_KeyPressEvent_Callback qtimeedit_keypressevent_callback = nullptr;
    QTimeEdit_WheelEvent_Callback qtimeedit_wheelevent_callback = nullptr;
    QTimeEdit_FocusInEvent_Callback qtimeedit_focusinevent_callback = nullptr;
    QTimeEdit_FocusNextPrevChild_Callback qtimeedit_focusnextprevchild_callback = nullptr;
    QTimeEdit_Validate_Callback qtimeedit_validate_callback = nullptr;
    QTimeEdit_Fixup_Callback qtimeedit_fixup_callback = nullptr;
    QTimeEdit_DateTimeFromText_Callback qtimeedit_datetimefromtext_callback = nullptr;
    QTimeEdit_TextFromDateTime_Callback qtimeedit_textfromdatetime_callback = nullptr;
    QTimeEdit_StepEnabled_Callback qtimeedit_stepenabled_callback = nullptr;
    QTimeEdit_MousePressEvent_Callback qtimeedit_mousepressevent_callback = nullptr;
    QTimeEdit_PaintEvent_Callback qtimeedit_paintevent_callback = nullptr;
    QTimeEdit_InitStyleOption_Callback qtimeedit_initstyleoption_callback = nullptr;
    QTimeEdit_MinimumSizeHint_Callback qtimeedit_minimumsizehint_callback = nullptr;
    QTimeEdit_InputMethodQuery_Callback qtimeedit_inputmethodquery_callback = nullptr;
    QTimeEdit_ResizeEvent_Callback qtimeedit_resizeevent_callback = nullptr;
    QTimeEdit_KeyReleaseEvent_Callback qtimeedit_keyreleaseevent_callback = nullptr;
    QTimeEdit_FocusOutEvent_Callback qtimeedit_focusoutevent_callback = nullptr;
    QTimeEdit_ContextMenuEvent_Callback qtimeedit_contextmenuevent_callback = nullptr;
    QTimeEdit_ChangeEvent_Callback qtimeedit_changeevent_callback = nullptr;
    QTimeEdit_CloseEvent_Callback qtimeedit_closeevent_callback = nullptr;
    QTimeEdit_HideEvent_Callback qtimeedit_hideevent_callback = nullptr;
    QTimeEdit_MouseReleaseEvent_Callback qtimeedit_mousereleaseevent_callback = nullptr;
    QTimeEdit_MouseMoveEvent_Callback qtimeedit_mousemoveevent_callback = nullptr;
    QTimeEdit_TimerEvent_Callback qtimeedit_timerevent_callback = nullptr;
    QTimeEdit_ShowEvent_Callback qtimeedit_showevent_callback = nullptr;
    QTimeEdit_DevType_Callback qtimeedit_devtype_callback = nullptr;
    QTimeEdit_SetVisible_Callback qtimeedit_setvisible_callback = nullptr;
    QTimeEdit_HeightForWidth_Callback qtimeedit_heightforwidth_callback = nullptr;
    QTimeEdit_HasHeightForWidth_Callback qtimeedit_hasheightforwidth_callback = nullptr;
    QTimeEdit_PaintEngine_Callback qtimeedit_paintengine_callback = nullptr;
    QTimeEdit_MouseDoubleClickEvent_Callback qtimeedit_mousedoubleclickevent_callback = nullptr;
    QTimeEdit_EnterEvent_Callback qtimeedit_enterevent_callback = nullptr;
    QTimeEdit_LeaveEvent_Callback qtimeedit_leaveevent_callback = nullptr;
    QTimeEdit_MoveEvent_Callback qtimeedit_moveevent_callback = nullptr;
    QTimeEdit_TabletEvent_Callback qtimeedit_tabletevent_callback = nullptr;
    QTimeEdit_ActionEvent_Callback qtimeedit_actionevent_callback = nullptr;
    QTimeEdit_DragEnterEvent_Callback qtimeedit_dragenterevent_callback = nullptr;
    QTimeEdit_DragMoveEvent_Callback qtimeedit_dragmoveevent_callback = nullptr;
    QTimeEdit_DragLeaveEvent_Callback qtimeedit_dragleaveevent_callback = nullptr;
    QTimeEdit_DropEvent_Callback qtimeedit_dropevent_callback = nullptr;
    QTimeEdit_NativeEvent_Callback qtimeedit_nativeevent_callback = nullptr;
    QTimeEdit_Metric_Callback qtimeedit_metric_callback = nullptr;
    QTimeEdit_InitPainter_Callback qtimeedit_initpainter_callback = nullptr;
    QTimeEdit_Redirected_Callback qtimeedit_redirected_callback = nullptr;
    QTimeEdit_SharedPainter_Callback qtimeedit_sharedpainter_callback = nullptr;
    QTimeEdit_InputMethodEvent_Callback qtimeedit_inputmethodevent_callback = nullptr;
    QTimeEdit_EventFilter_Callback qtimeedit_eventfilter_callback = nullptr;
    QTimeEdit_ChildEvent_Callback qtimeedit_childevent_callback = nullptr;
    QTimeEdit_CustomEvent_Callback qtimeedit_customevent_callback = nullptr;
    QTimeEdit_ConnectNotify_Callback qtimeedit_connectnotify_callback = nullptr;
    QTimeEdit_DisconnectNotify_Callback qtimeedit_disconnectnotify_callback = nullptr;
    QTimeEdit_LineEdit_Callback qtimeedit_lineedit_callback = nullptr;
    QTimeEdit_SetLineEdit_Callback qtimeedit_setlineedit_callback = nullptr;
    QTimeEdit_UpdateMicroFocus_Callback qtimeedit_updatemicrofocus_callback = nullptr;
    QTimeEdit_Create_Callback qtimeedit_create_callback = nullptr;
    QTimeEdit_Destroy_Callback qtimeedit_destroy_callback = nullptr;
    QTimeEdit_FocusNextChild_Callback qtimeedit_focusnextchild_callback = nullptr;
    QTimeEdit_FocusPreviousChild_Callback qtimeedit_focuspreviouschild_callback = nullptr;
    QTimeEdit_Sender_Callback qtimeedit_sender_callback = nullptr;
    QTimeEdit_SenderSignalIndex_Callback qtimeedit_sendersignalindex_callback = nullptr;
    QTimeEdit_Receivers_Callback qtimeedit_receivers_callback = nullptr;
    QTimeEdit_IsSignalConnected_Callback qtimeedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtimeedit_metacall_isbase = false;
    mutable bool qtimeedit_sizehint_isbase = false;
    mutable bool qtimeedit_clear_isbase = false;
    mutable bool qtimeedit_stepby_isbase = false;
    mutable bool qtimeedit_event_isbase = false;
    mutable bool qtimeedit_keypressevent_isbase = false;
    mutable bool qtimeedit_wheelevent_isbase = false;
    mutable bool qtimeedit_focusinevent_isbase = false;
    mutable bool qtimeedit_focusnextprevchild_isbase = false;
    mutable bool qtimeedit_validate_isbase = false;
    mutable bool qtimeedit_fixup_isbase = false;
    mutable bool qtimeedit_datetimefromtext_isbase = false;
    mutable bool qtimeedit_textfromdatetime_isbase = false;
    mutable bool qtimeedit_stepenabled_isbase = false;
    mutable bool qtimeedit_mousepressevent_isbase = false;
    mutable bool qtimeedit_paintevent_isbase = false;
    mutable bool qtimeedit_initstyleoption_isbase = false;
    mutable bool qtimeedit_minimumsizehint_isbase = false;
    mutable bool qtimeedit_inputmethodquery_isbase = false;
    mutable bool qtimeedit_resizeevent_isbase = false;
    mutable bool qtimeedit_keyreleaseevent_isbase = false;
    mutable bool qtimeedit_focusoutevent_isbase = false;
    mutable bool qtimeedit_contextmenuevent_isbase = false;
    mutable bool qtimeedit_changeevent_isbase = false;
    mutable bool qtimeedit_closeevent_isbase = false;
    mutable bool qtimeedit_hideevent_isbase = false;
    mutable bool qtimeedit_mousereleaseevent_isbase = false;
    mutable bool qtimeedit_mousemoveevent_isbase = false;
    mutable bool qtimeedit_timerevent_isbase = false;
    mutable bool qtimeedit_showevent_isbase = false;
    mutable bool qtimeedit_devtype_isbase = false;
    mutable bool qtimeedit_setvisible_isbase = false;
    mutable bool qtimeedit_heightforwidth_isbase = false;
    mutable bool qtimeedit_hasheightforwidth_isbase = false;
    mutable bool qtimeedit_paintengine_isbase = false;
    mutable bool qtimeedit_mousedoubleclickevent_isbase = false;
    mutable bool qtimeedit_enterevent_isbase = false;
    mutable bool qtimeedit_leaveevent_isbase = false;
    mutable bool qtimeedit_moveevent_isbase = false;
    mutable bool qtimeedit_tabletevent_isbase = false;
    mutable bool qtimeedit_actionevent_isbase = false;
    mutable bool qtimeedit_dragenterevent_isbase = false;
    mutable bool qtimeedit_dragmoveevent_isbase = false;
    mutable bool qtimeedit_dragleaveevent_isbase = false;
    mutable bool qtimeedit_dropevent_isbase = false;
    mutable bool qtimeedit_nativeevent_isbase = false;
    mutable bool qtimeedit_metric_isbase = false;
    mutable bool qtimeedit_initpainter_isbase = false;
    mutable bool qtimeedit_redirected_isbase = false;
    mutable bool qtimeedit_sharedpainter_isbase = false;
    mutable bool qtimeedit_inputmethodevent_isbase = false;
    mutable bool qtimeedit_eventfilter_isbase = false;
    mutable bool qtimeedit_childevent_isbase = false;
    mutable bool qtimeedit_customevent_isbase = false;
    mutable bool qtimeedit_connectnotify_isbase = false;
    mutable bool qtimeedit_disconnectnotify_isbase = false;
    mutable bool qtimeedit_lineedit_isbase = false;
    mutable bool qtimeedit_setlineedit_isbase = false;
    mutable bool qtimeedit_updatemicrofocus_isbase = false;
    mutable bool qtimeedit_create_isbase = false;
    mutable bool qtimeedit_destroy_isbase = false;
    mutable bool qtimeedit_focusnextchild_isbase = false;
    mutable bool qtimeedit_focuspreviouschild_isbase = false;
    mutable bool qtimeedit_sender_isbase = false;
    mutable bool qtimeedit_sendersignalindex_isbase = false;
    mutable bool qtimeedit_receivers_isbase = false;
    mutable bool qtimeedit_issignalconnected_isbase = false;

  public:
    VirtualQTimeEdit(QWidget* parent) : QTimeEdit(parent){};
    VirtualQTimeEdit() : QTimeEdit(){};
    VirtualQTimeEdit(QTime time) : QTimeEdit(time){};
    VirtualQTimeEdit(QTime time, QWidget* parent) : QTimeEdit(time, parent){};

    ~VirtualQTimeEdit() {
        qtimeedit_metacall_callback = nullptr;
        qtimeedit_sizehint_callback = nullptr;
        qtimeedit_clear_callback = nullptr;
        qtimeedit_stepby_callback = nullptr;
        qtimeedit_event_callback = nullptr;
        qtimeedit_keypressevent_callback = nullptr;
        qtimeedit_wheelevent_callback = nullptr;
        qtimeedit_focusinevent_callback = nullptr;
        qtimeedit_focusnextprevchild_callback = nullptr;
        qtimeedit_validate_callback = nullptr;
        qtimeedit_fixup_callback = nullptr;
        qtimeedit_datetimefromtext_callback = nullptr;
        qtimeedit_textfromdatetime_callback = nullptr;
        qtimeedit_stepenabled_callback = nullptr;
        qtimeedit_mousepressevent_callback = nullptr;
        qtimeedit_paintevent_callback = nullptr;
        qtimeedit_initstyleoption_callback = nullptr;
        qtimeedit_minimumsizehint_callback = nullptr;
        qtimeedit_inputmethodquery_callback = nullptr;
        qtimeedit_resizeevent_callback = nullptr;
        qtimeedit_keyreleaseevent_callback = nullptr;
        qtimeedit_focusoutevent_callback = nullptr;
        qtimeedit_contextmenuevent_callback = nullptr;
        qtimeedit_changeevent_callback = nullptr;
        qtimeedit_closeevent_callback = nullptr;
        qtimeedit_hideevent_callback = nullptr;
        qtimeedit_mousereleaseevent_callback = nullptr;
        qtimeedit_mousemoveevent_callback = nullptr;
        qtimeedit_timerevent_callback = nullptr;
        qtimeedit_showevent_callback = nullptr;
        qtimeedit_devtype_callback = nullptr;
        qtimeedit_setvisible_callback = nullptr;
        qtimeedit_heightforwidth_callback = nullptr;
        qtimeedit_hasheightforwidth_callback = nullptr;
        qtimeedit_paintengine_callback = nullptr;
        qtimeedit_mousedoubleclickevent_callback = nullptr;
        qtimeedit_enterevent_callback = nullptr;
        qtimeedit_leaveevent_callback = nullptr;
        qtimeedit_moveevent_callback = nullptr;
        qtimeedit_tabletevent_callback = nullptr;
        qtimeedit_actionevent_callback = nullptr;
        qtimeedit_dragenterevent_callback = nullptr;
        qtimeedit_dragmoveevent_callback = nullptr;
        qtimeedit_dragleaveevent_callback = nullptr;
        qtimeedit_dropevent_callback = nullptr;
        qtimeedit_nativeevent_callback = nullptr;
        qtimeedit_metric_callback = nullptr;
        qtimeedit_initpainter_callback = nullptr;
        qtimeedit_redirected_callback = nullptr;
        qtimeedit_sharedpainter_callback = nullptr;
        qtimeedit_inputmethodevent_callback = nullptr;
        qtimeedit_eventfilter_callback = nullptr;
        qtimeedit_childevent_callback = nullptr;
        qtimeedit_customevent_callback = nullptr;
        qtimeedit_connectnotify_callback = nullptr;
        qtimeedit_disconnectnotify_callback = nullptr;
        qtimeedit_lineedit_callback = nullptr;
        qtimeedit_setlineedit_callback = nullptr;
        qtimeedit_updatemicrofocus_callback = nullptr;
        qtimeedit_create_callback = nullptr;
        qtimeedit_destroy_callback = nullptr;
        qtimeedit_focusnextchild_callback = nullptr;
        qtimeedit_focuspreviouschild_callback = nullptr;
        qtimeedit_sender_callback = nullptr;
        qtimeedit_sendersignalindex_callback = nullptr;
        qtimeedit_receivers_callback = nullptr;
        qtimeedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTimeEdit_Metacall_Callback(QTimeEdit_Metacall_Callback cb) { qtimeedit_metacall_callback = cb; }
    void setQTimeEdit_SizeHint_Callback(QTimeEdit_SizeHint_Callback cb) { qtimeedit_sizehint_callback = cb; }
    void setQTimeEdit_Clear_Callback(QTimeEdit_Clear_Callback cb) { qtimeedit_clear_callback = cb; }
    void setQTimeEdit_StepBy_Callback(QTimeEdit_StepBy_Callback cb) { qtimeedit_stepby_callback = cb; }
    void setQTimeEdit_Event_Callback(QTimeEdit_Event_Callback cb) { qtimeedit_event_callback = cb; }
    void setQTimeEdit_KeyPressEvent_Callback(QTimeEdit_KeyPressEvent_Callback cb) { qtimeedit_keypressevent_callback = cb; }
    void setQTimeEdit_WheelEvent_Callback(QTimeEdit_WheelEvent_Callback cb) { qtimeedit_wheelevent_callback = cb; }
    void setQTimeEdit_FocusInEvent_Callback(QTimeEdit_FocusInEvent_Callback cb) { qtimeedit_focusinevent_callback = cb; }
    void setQTimeEdit_FocusNextPrevChild_Callback(QTimeEdit_FocusNextPrevChild_Callback cb) { qtimeedit_focusnextprevchild_callback = cb; }
    void setQTimeEdit_Validate_Callback(QTimeEdit_Validate_Callback cb) { qtimeedit_validate_callback = cb; }
    void setQTimeEdit_Fixup_Callback(QTimeEdit_Fixup_Callback cb) { qtimeedit_fixup_callback = cb; }
    void setQTimeEdit_DateTimeFromText_Callback(QTimeEdit_DateTimeFromText_Callback cb) { qtimeedit_datetimefromtext_callback = cb; }
    void setQTimeEdit_TextFromDateTime_Callback(QTimeEdit_TextFromDateTime_Callback cb) { qtimeedit_textfromdatetime_callback = cb; }
    void setQTimeEdit_StepEnabled_Callback(QTimeEdit_StepEnabled_Callback cb) { qtimeedit_stepenabled_callback = cb; }
    void setQTimeEdit_MousePressEvent_Callback(QTimeEdit_MousePressEvent_Callback cb) { qtimeedit_mousepressevent_callback = cb; }
    void setQTimeEdit_PaintEvent_Callback(QTimeEdit_PaintEvent_Callback cb) { qtimeedit_paintevent_callback = cb; }
    void setQTimeEdit_InitStyleOption_Callback(QTimeEdit_InitStyleOption_Callback cb) { qtimeedit_initstyleoption_callback = cb; }
    void setQTimeEdit_MinimumSizeHint_Callback(QTimeEdit_MinimumSizeHint_Callback cb) { qtimeedit_minimumsizehint_callback = cb; }
    void setQTimeEdit_InputMethodQuery_Callback(QTimeEdit_InputMethodQuery_Callback cb) { qtimeedit_inputmethodquery_callback = cb; }
    void setQTimeEdit_ResizeEvent_Callback(QTimeEdit_ResizeEvent_Callback cb) { qtimeedit_resizeevent_callback = cb; }
    void setQTimeEdit_KeyReleaseEvent_Callback(QTimeEdit_KeyReleaseEvent_Callback cb) { qtimeedit_keyreleaseevent_callback = cb; }
    void setQTimeEdit_FocusOutEvent_Callback(QTimeEdit_FocusOutEvent_Callback cb) { qtimeedit_focusoutevent_callback = cb; }
    void setQTimeEdit_ContextMenuEvent_Callback(QTimeEdit_ContextMenuEvent_Callback cb) { qtimeedit_contextmenuevent_callback = cb; }
    void setQTimeEdit_ChangeEvent_Callback(QTimeEdit_ChangeEvent_Callback cb) { qtimeedit_changeevent_callback = cb; }
    void setQTimeEdit_CloseEvent_Callback(QTimeEdit_CloseEvent_Callback cb) { qtimeedit_closeevent_callback = cb; }
    void setQTimeEdit_HideEvent_Callback(QTimeEdit_HideEvent_Callback cb) { qtimeedit_hideevent_callback = cb; }
    void setQTimeEdit_MouseReleaseEvent_Callback(QTimeEdit_MouseReleaseEvent_Callback cb) { qtimeedit_mousereleaseevent_callback = cb; }
    void setQTimeEdit_MouseMoveEvent_Callback(QTimeEdit_MouseMoveEvent_Callback cb) { qtimeedit_mousemoveevent_callback = cb; }
    void setQTimeEdit_TimerEvent_Callback(QTimeEdit_TimerEvent_Callback cb) { qtimeedit_timerevent_callback = cb; }
    void setQTimeEdit_ShowEvent_Callback(QTimeEdit_ShowEvent_Callback cb) { qtimeedit_showevent_callback = cb; }
    void setQTimeEdit_DevType_Callback(QTimeEdit_DevType_Callback cb) { qtimeedit_devtype_callback = cb; }
    void setQTimeEdit_SetVisible_Callback(QTimeEdit_SetVisible_Callback cb) { qtimeedit_setvisible_callback = cb; }
    void setQTimeEdit_HeightForWidth_Callback(QTimeEdit_HeightForWidth_Callback cb) { qtimeedit_heightforwidth_callback = cb; }
    void setQTimeEdit_HasHeightForWidth_Callback(QTimeEdit_HasHeightForWidth_Callback cb) { qtimeedit_hasheightforwidth_callback = cb; }
    void setQTimeEdit_PaintEngine_Callback(QTimeEdit_PaintEngine_Callback cb) { qtimeedit_paintengine_callback = cb; }
    void setQTimeEdit_MouseDoubleClickEvent_Callback(QTimeEdit_MouseDoubleClickEvent_Callback cb) { qtimeedit_mousedoubleclickevent_callback = cb; }
    void setQTimeEdit_EnterEvent_Callback(QTimeEdit_EnterEvent_Callback cb) { qtimeedit_enterevent_callback = cb; }
    void setQTimeEdit_LeaveEvent_Callback(QTimeEdit_LeaveEvent_Callback cb) { qtimeedit_leaveevent_callback = cb; }
    void setQTimeEdit_MoveEvent_Callback(QTimeEdit_MoveEvent_Callback cb) { qtimeedit_moveevent_callback = cb; }
    void setQTimeEdit_TabletEvent_Callback(QTimeEdit_TabletEvent_Callback cb) { qtimeedit_tabletevent_callback = cb; }
    void setQTimeEdit_ActionEvent_Callback(QTimeEdit_ActionEvent_Callback cb) { qtimeedit_actionevent_callback = cb; }
    void setQTimeEdit_DragEnterEvent_Callback(QTimeEdit_DragEnterEvent_Callback cb) { qtimeedit_dragenterevent_callback = cb; }
    void setQTimeEdit_DragMoveEvent_Callback(QTimeEdit_DragMoveEvent_Callback cb) { qtimeedit_dragmoveevent_callback = cb; }
    void setQTimeEdit_DragLeaveEvent_Callback(QTimeEdit_DragLeaveEvent_Callback cb) { qtimeedit_dragleaveevent_callback = cb; }
    void setQTimeEdit_DropEvent_Callback(QTimeEdit_DropEvent_Callback cb) { qtimeedit_dropevent_callback = cb; }
    void setQTimeEdit_NativeEvent_Callback(QTimeEdit_NativeEvent_Callback cb) { qtimeedit_nativeevent_callback = cb; }
    void setQTimeEdit_Metric_Callback(QTimeEdit_Metric_Callback cb) { qtimeedit_metric_callback = cb; }
    void setQTimeEdit_InitPainter_Callback(QTimeEdit_InitPainter_Callback cb) { qtimeedit_initpainter_callback = cb; }
    void setQTimeEdit_Redirected_Callback(QTimeEdit_Redirected_Callback cb) { qtimeedit_redirected_callback = cb; }
    void setQTimeEdit_SharedPainter_Callback(QTimeEdit_SharedPainter_Callback cb) { qtimeedit_sharedpainter_callback = cb; }
    void setQTimeEdit_InputMethodEvent_Callback(QTimeEdit_InputMethodEvent_Callback cb) { qtimeedit_inputmethodevent_callback = cb; }
    void setQTimeEdit_EventFilter_Callback(QTimeEdit_EventFilter_Callback cb) { qtimeedit_eventfilter_callback = cb; }
    void setQTimeEdit_ChildEvent_Callback(QTimeEdit_ChildEvent_Callback cb) { qtimeedit_childevent_callback = cb; }
    void setQTimeEdit_CustomEvent_Callback(QTimeEdit_CustomEvent_Callback cb) { qtimeedit_customevent_callback = cb; }
    void setQTimeEdit_ConnectNotify_Callback(QTimeEdit_ConnectNotify_Callback cb) { qtimeedit_connectnotify_callback = cb; }
    void setQTimeEdit_DisconnectNotify_Callback(QTimeEdit_DisconnectNotify_Callback cb) { qtimeedit_disconnectnotify_callback = cb; }
    void setQTimeEdit_LineEdit_Callback(QTimeEdit_LineEdit_Callback cb) { qtimeedit_lineedit_callback = cb; }
    void setQTimeEdit_SetLineEdit_Callback(QTimeEdit_SetLineEdit_Callback cb) { qtimeedit_setlineedit_callback = cb; }
    void setQTimeEdit_UpdateMicroFocus_Callback(QTimeEdit_UpdateMicroFocus_Callback cb) { qtimeedit_updatemicrofocus_callback = cb; }
    void setQTimeEdit_Create_Callback(QTimeEdit_Create_Callback cb) { qtimeedit_create_callback = cb; }
    void setQTimeEdit_Destroy_Callback(QTimeEdit_Destroy_Callback cb) { qtimeedit_destroy_callback = cb; }
    void setQTimeEdit_FocusNextChild_Callback(QTimeEdit_FocusNextChild_Callback cb) { qtimeedit_focusnextchild_callback = cb; }
    void setQTimeEdit_FocusPreviousChild_Callback(QTimeEdit_FocusPreviousChild_Callback cb) { qtimeedit_focuspreviouschild_callback = cb; }
    void setQTimeEdit_Sender_Callback(QTimeEdit_Sender_Callback cb) { qtimeedit_sender_callback = cb; }
    void setQTimeEdit_SenderSignalIndex_Callback(QTimeEdit_SenderSignalIndex_Callback cb) { qtimeedit_sendersignalindex_callback = cb; }
    void setQTimeEdit_Receivers_Callback(QTimeEdit_Receivers_Callback cb) { qtimeedit_receivers_callback = cb; }
    void setQTimeEdit_IsSignalConnected_Callback(QTimeEdit_IsSignalConnected_Callback cb) { qtimeedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTimeEdit_Metacall_IsBase(bool value) const { qtimeedit_metacall_isbase = value; }
    void setQTimeEdit_SizeHint_IsBase(bool value) const { qtimeedit_sizehint_isbase = value; }
    void setQTimeEdit_Clear_IsBase(bool value) const { qtimeedit_clear_isbase = value; }
    void setQTimeEdit_StepBy_IsBase(bool value) const { qtimeedit_stepby_isbase = value; }
    void setQTimeEdit_Event_IsBase(bool value) const { qtimeedit_event_isbase = value; }
    void setQTimeEdit_KeyPressEvent_IsBase(bool value) const { qtimeedit_keypressevent_isbase = value; }
    void setQTimeEdit_WheelEvent_IsBase(bool value) const { qtimeedit_wheelevent_isbase = value; }
    void setQTimeEdit_FocusInEvent_IsBase(bool value) const { qtimeedit_focusinevent_isbase = value; }
    void setQTimeEdit_FocusNextPrevChild_IsBase(bool value) const { qtimeedit_focusnextprevchild_isbase = value; }
    void setQTimeEdit_Validate_IsBase(bool value) const { qtimeedit_validate_isbase = value; }
    void setQTimeEdit_Fixup_IsBase(bool value) const { qtimeedit_fixup_isbase = value; }
    void setQTimeEdit_DateTimeFromText_IsBase(bool value) const { qtimeedit_datetimefromtext_isbase = value; }
    void setQTimeEdit_TextFromDateTime_IsBase(bool value) const { qtimeedit_textfromdatetime_isbase = value; }
    void setQTimeEdit_StepEnabled_IsBase(bool value) const { qtimeedit_stepenabled_isbase = value; }
    void setQTimeEdit_MousePressEvent_IsBase(bool value) const { qtimeedit_mousepressevent_isbase = value; }
    void setQTimeEdit_PaintEvent_IsBase(bool value) const { qtimeedit_paintevent_isbase = value; }
    void setQTimeEdit_InitStyleOption_IsBase(bool value) const { qtimeedit_initstyleoption_isbase = value; }
    void setQTimeEdit_MinimumSizeHint_IsBase(bool value) const { qtimeedit_minimumsizehint_isbase = value; }
    void setQTimeEdit_InputMethodQuery_IsBase(bool value) const { qtimeedit_inputmethodquery_isbase = value; }
    void setQTimeEdit_ResizeEvent_IsBase(bool value) const { qtimeedit_resizeevent_isbase = value; }
    void setQTimeEdit_KeyReleaseEvent_IsBase(bool value) const { qtimeedit_keyreleaseevent_isbase = value; }
    void setQTimeEdit_FocusOutEvent_IsBase(bool value) const { qtimeedit_focusoutevent_isbase = value; }
    void setQTimeEdit_ContextMenuEvent_IsBase(bool value) const { qtimeedit_contextmenuevent_isbase = value; }
    void setQTimeEdit_ChangeEvent_IsBase(bool value) const { qtimeedit_changeevent_isbase = value; }
    void setQTimeEdit_CloseEvent_IsBase(bool value) const { qtimeedit_closeevent_isbase = value; }
    void setQTimeEdit_HideEvent_IsBase(bool value) const { qtimeedit_hideevent_isbase = value; }
    void setQTimeEdit_MouseReleaseEvent_IsBase(bool value) const { qtimeedit_mousereleaseevent_isbase = value; }
    void setQTimeEdit_MouseMoveEvent_IsBase(bool value) const { qtimeedit_mousemoveevent_isbase = value; }
    void setQTimeEdit_TimerEvent_IsBase(bool value) const { qtimeedit_timerevent_isbase = value; }
    void setQTimeEdit_ShowEvent_IsBase(bool value) const { qtimeedit_showevent_isbase = value; }
    void setQTimeEdit_DevType_IsBase(bool value) const { qtimeedit_devtype_isbase = value; }
    void setQTimeEdit_SetVisible_IsBase(bool value) const { qtimeedit_setvisible_isbase = value; }
    void setQTimeEdit_HeightForWidth_IsBase(bool value) const { qtimeedit_heightforwidth_isbase = value; }
    void setQTimeEdit_HasHeightForWidth_IsBase(bool value) const { qtimeedit_hasheightforwidth_isbase = value; }
    void setQTimeEdit_PaintEngine_IsBase(bool value) const { qtimeedit_paintengine_isbase = value; }
    void setQTimeEdit_MouseDoubleClickEvent_IsBase(bool value) const { qtimeedit_mousedoubleclickevent_isbase = value; }
    void setQTimeEdit_EnterEvent_IsBase(bool value) const { qtimeedit_enterevent_isbase = value; }
    void setQTimeEdit_LeaveEvent_IsBase(bool value) const { qtimeedit_leaveevent_isbase = value; }
    void setQTimeEdit_MoveEvent_IsBase(bool value) const { qtimeedit_moveevent_isbase = value; }
    void setQTimeEdit_TabletEvent_IsBase(bool value) const { qtimeedit_tabletevent_isbase = value; }
    void setQTimeEdit_ActionEvent_IsBase(bool value) const { qtimeedit_actionevent_isbase = value; }
    void setQTimeEdit_DragEnterEvent_IsBase(bool value) const { qtimeedit_dragenterevent_isbase = value; }
    void setQTimeEdit_DragMoveEvent_IsBase(bool value) const { qtimeedit_dragmoveevent_isbase = value; }
    void setQTimeEdit_DragLeaveEvent_IsBase(bool value) const { qtimeedit_dragleaveevent_isbase = value; }
    void setQTimeEdit_DropEvent_IsBase(bool value) const { qtimeedit_dropevent_isbase = value; }
    void setQTimeEdit_NativeEvent_IsBase(bool value) const { qtimeedit_nativeevent_isbase = value; }
    void setQTimeEdit_Metric_IsBase(bool value) const { qtimeedit_metric_isbase = value; }
    void setQTimeEdit_InitPainter_IsBase(bool value) const { qtimeedit_initpainter_isbase = value; }
    void setQTimeEdit_Redirected_IsBase(bool value) const { qtimeedit_redirected_isbase = value; }
    void setQTimeEdit_SharedPainter_IsBase(bool value) const { qtimeedit_sharedpainter_isbase = value; }
    void setQTimeEdit_InputMethodEvent_IsBase(bool value) const { qtimeedit_inputmethodevent_isbase = value; }
    void setQTimeEdit_EventFilter_IsBase(bool value) const { qtimeedit_eventfilter_isbase = value; }
    void setQTimeEdit_ChildEvent_IsBase(bool value) const { qtimeedit_childevent_isbase = value; }
    void setQTimeEdit_CustomEvent_IsBase(bool value) const { qtimeedit_customevent_isbase = value; }
    void setQTimeEdit_ConnectNotify_IsBase(bool value) const { qtimeedit_connectnotify_isbase = value; }
    void setQTimeEdit_DisconnectNotify_IsBase(bool value) const { qtimeedit_disconnectnotify_isbase = value; }
    void setQTimeEdit_LineEdit_IsBase(bool value) const { qtimeedit_lineedit_isbase = value; }
    void setQTimeEdit_SetLineEdit_IsBase(bool value) const { qtimeedit_setlineedit_isbase = value; }
    void setQTimeEdit_UpdateMicroFocus_IsBase(bool value) const { qtimeedit_updatemicrofocus_isbase = value; }
    void setQTimeEdit_Create_IsBase(bool value) const { qtimeedit_create_isbase = value; }
    void setQTimeEdit_Destroy_IsBase(bool value) const { qtimeedit_destroy_isbase = value; }
    void setQTimeEdit_FocusNextChild_IsBase(bool value) const { qtimeedit_focusnextchild_isbase = value; }
    void setQTimeEdit_FocusPreviousChild_IsBase(bool value) const { qtimeedit_focuspreviouschild_isbase = value; }
    void setQTimeEdit_Sender_IsBase(bool value) const { qtimeedit_sender_isbase = value; }
    void setQTimeEdit_SenderSignalIndex_IsBase(bool value) const { qtimeedit_sendersignalindex_isbase = value; }
    void setQTimeEdit_Receivers_IsBase(bool value) const { qtimeedit_receivers_isbase = value; }
    void setQTimeEdit_IsSignalConnected_IsBase(bool value) const { qtimeedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtimeedit_metacall_isbase) {
            qtimeedit_metacall_isbase = false;
            return QTimeEdit::qt_metacall(param1, param2, param3);
        } else if (qtimeedit_metacall_callback != nullptr) {
            return qtimeedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QTimeEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtimeedit_sizehint_isbase) {
            qtimeedit_sizehint_isbase = false;
            return QTimeEdit::sizeHint();
        } else if (qtimeedit_sizehint_callback != nullptr) {
            return qtimeedit_sizehint_callback();
        } else {
            return QTimeEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qtimeedit_clear_isbase) {
            qtimeedit_clear_isbase = false;
            QTimeEdit::clear();
        } else if (qtimeedit_clear_callback != nullptr) {
            qtimeedit_clear_callback();
        } else {
            QTimeEdit::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qtimeedit_stepby_isbase) {
            qtimeedit_stepby_isbase = false;
            QTimeEdit::stepBy(steps);
        } else if (qtimeedit_stepby_callback != nullptr) {
            qtimeedit_stepby_callback(this, steps);
        } else {
            QTimeEdit::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtimeedit_event_isbase) {
            qtimeedit_event_isbase = false;
            return QTimeEdit::event(event);
        } else if (qtimeedit_event_callback != nullptr) {
            return qtimeedit_event_callback(this, event);
        } else {
            return QTimeEdit::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtimeedit_keypressevent_isbase) {
            qtimeedit_keypressevent_isbase = false;
            QTimeEdit::keyPressEvent(event);
        } else if (qtimeedit_keypressevent_callback != nullptr) {
            qtimeedit_keypressevent_callback(this, event);
        } else {
            QTimeEdit::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtimeedit_wheelevent_isbase) {
            qtimeedit_wheelevent_isbase = false;
            QTimeEdit::wheelEvent(event);
        } else if (qtimeedit_wheelevent_callback != nullptr) {
            qtimeedit_wheelevent_callback(this, event);
        } else {
            QTimeEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtimeedit_focusinevent_isbase) {
            qtimeedit_focusinevent_isbase = false;
            QTimeEdit::focusInEvent(event);
        } else if (qtimeedit_focusinevent_callback != nullptr) {
            qtimeedit_focusinevent_callback(this, event);
        } else {
            QTimeEdit::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtimeedit_focusnextprevchild_isbase) {
            qtimeedit_focusnextprevchild_isbase = false;
            return QTimeEdit::focusNextPrevChild(next);
        } else if (qtimeedit_focusnextprevchild_callback != nullptr) {
            return qtimeedit_focusnextprevchild_callback(this, next);
        } else {
            return QTimeEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qtimeedit_validate_isbase) {
            qtimeedit_validate_isbase = false;
            return QTimeEdit::validate(input, pos);
        } else if (qtimeedit_validate_callback != nullptr) {
            return qtimeedit_validate_callback(this, input, pos);
        } else {
            return QTimeEdit::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qtimeedit_fixup_isbase) {
            qtimeedit_fixup_isbase = false;
            QTimeEdit::fixup(input);
        } else if (qtimeedit_fixup_callback != nullptr) {
            qtimeedit_fixup_callback(this, input);
        } else {
            QTimeEdit::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qtimeedit_datetimefromtext_isbase) {
            qtimeedit_datetimefromtext_isbase = false;
            return QTimeEdit::dateTimeFromText(text);
        } else if (qtimeedit_datetimefromtext_callback != nullptr) {
            return qtimeedit_datetimefromtext_callback(this, text);
        } else {
            return QTimeEdit::dateTimeFromText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qtimeedit_textfromdatetime_isbase) {
            qtimeedit_textfromdatetime_isbase = false;
            return QTimeEdit::textFromDateTime(dt);
        } else if (qtimeedit_textfromdatetime_callback != nullptr) {
            return qtimeedit_textfromdatetime_callback(this, dt);
        } else {
            return QTimeEdit::textFromDateTime(dt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qtimeedit_stepenabled_isbase) {
            qtimeedit_stepenabled_isbase = false;
            return QTimeEdit::stepEnabled();
        } else if (qtimeedit_stepenabled_callback != nullptr) {
            return qtimeedit_stepenabled_callback();
        } else {
            return QTimeEdit::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtimeedit_mousepressevent_isbase) {
            qtimeedit_mousepressevent_isbase = false;
            QTimeEdit::mousePressEvent(event);
        } else if (qtimeedit_mousepressevent_callback != nullptr) {
            qtimeedit_mousepressevent_callback(this, event);
        } else {
            QTimeEdit::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtimeedit_paintevent_isbase) {
            qtimeedit_paintevent_isbase = false;
            QTimeEdit::paintEvent(event);
        } else if (qtimeedit_paintevent_callback != nullptr) {
            qtimeedit_paintevent_callback(this, event);
        } else {
            QTimeEdit::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qtimeedit_initstyleoption_isbase) {
            qtimeedit_initstyleoption_isbase = false;
            QTimeEdit::initStyleOption(option);
        } else if (qtimeedit_initstyleoption_callback != nullptr) {
            qtimeedit_initstyleoption_callback(this, option);
        } else {
            QTimeEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtimeedit_minimumsizehint_isbase) {
            qtimeedit_minimumsizehint_isbase = false;
            return QTimeEdit::minimumSizeHint();
        } else if (qtimeedit_minimumsizehint_callback != nullptr) {
            return qtimeedit_minimumsizehint_callback();
        } else {
            return QTimeEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtimeedit_inputmethodquery_isbase) {
            qtimeedit_inputmethodquery_isbase = false;
            return QTimeEdit::inputMethodQuery(param1);
        } else if (qtimeedit_inputmethodquery_callback != nullptr) {
            return qtimeedit_inputmethodquery_callback(this, param1);
        } else {
            return QTimeEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtimeedit_resizeevent_isbase) {
            qtimeedit_resizeevent_isbase = false;
            QTimeEdit::resizeEvent(event);
        } else if (qtimeedit_resizeevent_callback != nullptr) {
            qtimeedit_resizeevent_callback(this, event);
        } else {
            QTimeEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtimeedit_keyreleaseevent_isbase) {
            qtimeedit_keyreleaseevent_isbase = false;
            QTimeEdit::keyReleaseEvent(event);
        } else if (qtimeedit_keyreleaseevent_callback != nullptr) {
            qtimeedit_keyreleaseevent_callback(this, event);
        } else {
            QTimeEdit::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtimeedit_focusoutevent_isbase) {
            qtimeedit_focusoutevent_isbase = false;
            QTimeEdit::focusOutEvent(event);
        } else if (qtimeedit_focusoutevent_callback != nullptr) {
            qtimeedit_focusoutevent_callback(this, event);
        } else {
            QTimeEdit::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtimeedit_contextmenuevent_isbase) {
            qtimeedit_contextmenuevent_isbase = false;
            QTimeEdit::contextMenuEvent(event);
        } else if (qtimeedit_contextmenuevent_callback != nullptr) {
            qtimeedit_contextmenuevent_callback(this, event);
        } else {
            QTimeEdit::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtimeedit_changeevent_isbase) {
            qtimeedit_changeevent_isbase = false;
            QTimeEdit::changeEvent(event);
        } else if (qtimeedit_changeevent_callback != nullptr) {
            qtimeedit_changeevent_callback(this, event);
        } else {
            QTimeEdit::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtimeedit_closeevent_isbase) {
            qtimeedit_closeevent_isbase = false;
            QTimeEdit::closeEvent(event);
        } else if (qtimeedit_closeevent_callback != nullptr) {
            qtimeedit_closeevent_callback(this, event);
        } else {
            QTimeEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtimeedit_hideevent_isbase) {
            qtimeedit_hideevent_isbase = false;
            QTimeEdit::hideEvent(event);
        } else if (qtimeedit_hideevent_callback != nullptr) {
            qtimeedit_hideevent_callback(this, event);
        } else {
            QTimeEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtimeedit_mousereleaseevent_isbase) {
            qtimeedit_mousereleaseevent_isbase = false;
            QTimeEdit::mouseReleaseEvent(event);
        } else if (qtimeedit_mousereleaseevent_callback != nullptr) {
            qtimeedit_mousereleaseevent_callback(this, event);
        } else {
            QTimeEdit::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtimeedit_mousemoveevent_isbase) {
            qtimeedit_mousemoveevent_isbase = false;
            QTimeEdit::mouseMoveEvent(event);
        } else if (qtimeedit_mousemoveevent_callback != nullptr) {
            qtimeedit_mousemoveevent_callback(this, event);
        } else {
            QTimeEdit::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtimeedit_timerevent_isbase) {
            qtimeedit_timerevent_isbase = false;
            QTimeEdit::timerEvent(event);
        } else if (qtimeedit_timerevent_callback != nullptr) {
            qtimeedit_timerevent_callback(this, event);
        } else {
            QTimeEdit::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtimeedit_showevent_isbase) {
            qtimeedit_showevent_isbase = false;
            QTimeEdit::showEvent(event);
        } else if (qtimeedit_showevent_callback != nullptr) {
            qtimeedit_showevent_callback(this, event);
        } else {
            QTimeEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtimeedit_devtype_isbase) {
            qtimeedit_devtype_isbase = false;
            return QTimeEdit::devType();
        } else if (qtimeedit_devtype_callback != nullptr) {
            return qtimeedit_devtype_callback();
        } else {
            return QTimeEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtimeedit_setvisible_isbase) {
            qtimeedit_setvisible_isbase = false;
            QTimeEdit::setVisible(visible);
        } else if (qtimeedit_setvisible_callback != nullptr) {
            qtimeedit_setvisible_callback(this, visible);
        } else {
            QTimeEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtimeedit_heightforwidth_isbase) {
            qtimeedit_heightforwidth_isbase = false;
            return QTimeEdit::heightForWidth(param1);
        } else if (qtimeedit_heightforwidth_callback != nullptr) {
            return qtimeedit_heightforwidth_callback(this, param1);
        } else {
            return QTimeEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtimeedit_hasheightforwidth_isbase) {
            qtimeedit_hasheightforwidth_isbase = false;
            return QTimeEdit::hasHeightForWidth();
        } else if (qtimeedit_hasheightforwidth_callback != nullptr) {
            return qtimeedit_hasheightforwidth_callback();
        } else {
            return QTimeEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtimeedit_paintengine_isbase) {
            qtimeedit_paintengine_isbase = false;
            return QTimeEdit::paintEngine();
        } else if (qtimeedit_paintengine_callback != nullptr) {
            return qtimeedit_paintengine_callback();
        } else {
            return QTimeEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtimeedit_mousedoubleclickevent_isbase) {
            qtimeedit_mousedoubleclickevent_isbase = false;
            QTimeEdit::mouseDoubleClickEvent(event);
        } else if (qtimeedit_mousedoubleclickevent_callback != nullptr) {
            qtimeedit_mousedoubleclickevent_callback(this, event);
        } else {
            QTimeEdit::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtimeedit_enterevent_isbase) {
            qtimeedit_enterevent_isbase = false;
            QTimeEdit::enterEvent(event);
        } else if (qtimeedit_enterevent_callback != nullptr) {
            qtimeedit_enterevent_callback(this, event);
        } else {
            QTimeEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtimeedit_leaveevent_isbase) {
            qtimeedit_leaveevent_isbase = false;
            QTimeEdit::leaveEvent(event);
        } else if (qtimeedit_leaveevent_callback != nullptr) {
            qtimeedit_leaveevent_callback(this, event);
        } else {
            QTimeEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtimeedit_moveevent_isbase) {
            qtimeedit_moveevent_isbase = false;
            QTimeEdit::moveEvent(event);
        } else if (qtimeedit_moveevent_callback != nullptr) {
            qtimeedit_moveevent_callback(this, event);
        } else {
            QTimeEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtimeedit_tabletevent_isbase) {
            qtimeedit_tabletevent_isbase = false;
            QTimeEdit::tabletEvent(event);
        } else if (qtimeedit_tabletevent_callback != nullptr) {
            qtimeedit_tabletevent_callback(this, event);
        } else {
            QTimeEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtimeedit_actionevent_isbase) {
            qtimeedit_actionevent_isbase = false;
            QTimeEdit::actionEvent(event);
        } else if (qtimeedit_actionevent_callback != nullptr) {
            qtimeedit_actionevent_callback(this, event);
        } else {
            QTimeEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtimeedit_dragenterevent_isbase) {
            qtimeedit_dragenterevent_isbase = false;
            QTimeEdit::dragEnterEvent(event);
        } else if (qtimeedit_dragenterevent_callback != nullptr) {
            qtimeedit_dragenterevent_callback(this, event);
        } else {
            QTimeEdit::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtimeedit_dragmoveevent_isbase) {
            qtimeedit_dragmoveevent_isbase = false;
            QTimeEdit::dragMoveEvent(event);
        } else if (qtimeedit_dragmoveevent_callback != nullptr) {
            qtimeedit_dragmoveevent_callback(this, event);
        } else {
            QTimeEdit::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtimeedit_dragleaveevent_isbase) {
            qtimeedit_dragleaveevent_isbase = false;
            QTimeEdit::dragLeaveEvent(event);
        } else if (qtimeedit_dragleaveevent_callback != nullptr) {
            qtimeedit_dragleaveevent_callback(this, event);
        } else {
            QTimeEdit::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtimeedit_dropevent_isbase) {
            qtimeedit_dropevent_isbase = false;
            QTimeEdit::dropEvent(event);
        } else if (qtimeedit_dropevent_callback != nullptr) {
            qtimeedit_dropevent_callback(this, event);
        } else {
            QTimeEdit::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtimeedit_nativeevent_isbase) {
            qtimeedit_nativeevent_isbase = false;
            return QTimeEdit::nativeEvent(eventType, message, result);
        } else if (qtimeedit_nativeevent_callback != nullptr) {
            return qtimeedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTimeEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtimeedit_metric_isbase) {
            qtimeedit_metric_isbase = false;
            return QTimeEdit::metric(param1);
        } else if (qtimeedit_metric_callback != nullptr) {
            return qtimeedit_metric_callback(this, param1);
        } else {
            return QTimeEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtimeedit_initpainter_isbase) {
            qtimeedit_initpainter_isbase = false;
            QTimeEdit::initPainter(painter);
        } else if (qtimeedit_initpainter_callback != nullptr) {
            qtimeedit_initpainter_callback(this, painter);
        } else {
            QTimeEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtimeedit_redirected_isbase) {
            qtimeedit_redirected_isbase = false;
            return QTimeEdit::redirected(offset);
        } else if (qtimeedit_redirected_callback != nullptr) {
            return qtimeedit_redirected_callback(this, offset);
        } else {
            return QTimeEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtimeedit_sharedpainter_isbase) {
            qtimeedit_sharedpainter_isbase = false;
            return QTimeEdit::sharedPainter();
        } else if (qtimeedit_sharedpainter_callback != nullptr) {
            return qtimeedit_sharedpainter_callback();
        } else {
            return QTimeEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtimeedit_inputmethodevent_isbase) {
            qtimeedit_inputmethodevent_isbase = false;
            QTimeEdit::inputMethodEvent(param1);
        } else if (qtimeedit_inputmethodevent_callback != nullptr) {
            qtimeedit_inputmethodevent_callback(this, param1);
        } else {
            QTimeEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtimeedit_eventfilter_isbase) {
            qtimeedit_eventfilter_isbase = false;
            return QTimeEdit::eventFilter(watched, event);
        } else if (qtimeedit_eventfilter_callback != nullptr) {
            return qtimeedit_eventfilter_callback(this, watched, event);
        } else {
            return QTimeEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtimeedit_childevent_isbase) {
            qtimeedit_childevent_isbase = false;
            QTimeEdit::childEvent(event);
        } else if (qtimeedit_childevent_callback != nullptr) {
            qtimeedit_childevent_callback(this, event);
        } else {
            QTimeEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtimeedit_customevent_isbase) {
            qtimeedit_customevent_isbase = false;
            QTimeEdit::customEvent(event);
        } else if (qtimeedit_customevent_callback != nullptr) {
            qtimeedit_customevent_callback(this, event);
        } else {
            QTimeEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_connectnotify_isbase) {
            qtimeedit_connectnotify_isbase = false;
            QTimeEdit::connectNotify(signal);
        } else if (qtimeedit_connectnotify_callback != nullptr) {
            qtimeedit_connectnotify_callback(this, signal);
        } else {
            QTimeEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtimeedit_disconnectnotify_isbase) {
            qtimeedit_disconnectnotify_isbase = false;
            QTimeEdit::disconnectNotify(signal);
        } else if (qtimeedit_disconnectnotify_callback != nullptr) {
            qtimeedit_disconnectnotify_callback(this, signal);
        } else {
            QTimeEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qtimeedit_lineedit_isbase) {
            qtimeedit_lineedit_isbase = false;
            return QTimeEdit::lineEdit();
        } else if (qtimeedit_lineedit_callback != nullptr) {
            return qtimeedit_lineedit_callback();
        } else {
            return QTimeEdit::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qtimeedit_setlineedit_isbase) {
            qtimeedit_setlineedit_isbase = false;
            QTimeEdit::setLineEdit(edit);
        } else if (qtimeedit_setlineedit_callback != nullptr) {
            qtimeedit_setlineedit_callback(this, edit);
        } else {
            QTimeEdit::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtimeedit_updatemicrofocus_isbase) {
            qtimeedit_updatemicrofocus_isbase = false;
            QTimeEdit::updateMicroFocus();
        } else if (qtimeedit_updatemicrofocus_callback != nullptr) {
            qtimeedit_updatemicrofocus_callback();
        } else {
            QTimeEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtimeedit_create_isbase) {
            qtimeedit_create_isbase = false;
            QTimeEdit::create();
        } else if (qtimeedit_create_callback != nullptr) {
            qtimeedit_create_callback();
        } else {
            QTimeEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtimeedit_destroy_isbase) {
            qtimeedit_destroy_isbase = false;
            QTimeEdit::destroy();
        } else if (qtimeedit_destroy_callback != nullptr) {
            qtimeedit_destroy_callback();
        } else {
            QTimeEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtimeedit_focusnextchild_isbase) {
            qtimeedit_focusnextchild_isbase = false;
            return QTimeEdit::focusNextChild();
        } else if (qtimeedit_focusnextchild_callback != nullptr) {
            return qtimeedit_focusnextchild_callback();
        } else {
            return QTimeEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtimeedit_focuspreviouschild_isbase) {
            qtimeedit_focuspreviouschild_isbase = false;
            return QTimeEdit::focusPreviousChild();
        } else if (qtimeedit_focuspreviouschild_callback != nullptr) {
            return qtimeedit_focuspreviouschild_callback();
        } else {
            return QTimeEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtimeedit_sender_isbase) {
            qtimeedit_sender_isbase = false;
            return QTimeEdit::sender();
        } else if (qtimeedit_sender_callback != nullptr) {
            return qtimeedit_sender_callback();
        } else {
            return QTimeEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtimeedit_sendersignalindex_isbase) {
            qtimeedit_sendersignalindex_isbase = false;
            return QTimeEdit::senderSignalIndex();
        } else if (qtimeedit_sendersignalindex_callback != nullptr) {
            return qtimeedit_sendersignalindex_callback();
        } else {
            return QTimeEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtimeedit_receivers_isbase) {
            qtimeedit_receivers_isbase = false;
            return QTimeEdit::receivers(signal);
        } else if (qtimeedit_receivers_callback != nullptr) {
            return qtimeedit_receivers_callback(this, signal);
        } else {
            return QTimeEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtimeedit_issignalconnected_isbase) {
            qtimeedit_issignalconnected_isbase = false;
            return QTimeEdit::isSignalConnected(signal);
        } else if (qtimeedit_issignalconnected_callback != nullptr) {
            return qtimeedit_issignalconnected_callback(this, signal);
        } else {
            return QTimeEdit::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QDateEdit so that we can call protected methods
class VirtualQDateEdit : public QDateEdit {

  public:
    // Virtual class public types (including callbacks)
    using QDateEdit_Metacall_Callback = int (*)(QDateEdit*, QMetaObject::Call, int, void**);
    using QDateEdit_SizeHint_Callback = QSize (*)();
    using QDateEdit_Clear_Callback = void (*)();
    using QDateEdit_StepBy_Callback = void (*)(QDateEdit*, int);
    using QDateEdit_Event_Callback = bool (*)(QDateEdit*, QEvent*);
    using QDateEdit_KeyPressEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_WheelEvent_Callback = void (*)(QDateEdit*, QWheelEvent*);
    using QDateEdit_FocusInEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_FocusNextPrevChild_Callback = bool (*)(QDateEdit*, bool);
    using QDateEdit_Validate_Callback = QValidator::State (*)(const QDateEdit*, QString&, int&);
    using QDateEdit_Fixup_Callback = void (*)(const QDateEdit*, QString&);
    using QDateEdit_DateTimeFromText_Callback = QDateTime (*)(const QDateEdit*, const QString&);
    using QDateEdit_TextFromDateTime_Callback = QString (*)(const QDateEdit*, const QDateTime&);
    using QDateEdit_StepEnabled_Callback = QAbstractSpinBox::StepEnabled (*)();
    using QDateEdit_MousePressEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_PaintEvent_Callback = void (*)(QDateEdit*, QPaintEvent*);
    using QDateEdit_InitStyleOption_Callback = void (*)(const QDateEdit*, QStyleOptionSpinBox*);
    using QDateEdit_MinimumSizeHint_Callback = QSize (*)();
    using QDateEdit_InputMethodQuery_Callback = QVariant (*)(const QDateEdit*, Qt::InputMethodQuery);
    using QDateEdit_ResizeEvent_Callback = void (*)(QDateEdit*, QResizeEvent*);
    using QDateEdit_KeyReleaseEvent_Callback = void (*)(QDateEdit*, QKeyEvent*);
    using QDateEdit_FocusOutEvent_Callback = void (*)(QDateEdit*, QFocusEvent*);
    using QDateEdit_ContextMenuEvent_Callback = void (*)(QDateEdit*, QContextMenuEvent*);
    using QDateEdit_ChangeEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_CloseEvent_Callback = void (*)(QDateEdit*, QCloseEvent*);
    using QDateEdit_HideEvent_Callback = void (*)(QDateEdit*, QHideEvent*);
    using QDateEdit_MouseReleaseEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_MouseMoveEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_TimerEvent_Callback = void (*)(QDateEdit*, QTimerEvent*);
    using QDateEdit_ShowEvent_Callback = void (*)(QDateEdit*, QShowEvent*);
    using QDateEdit_DevType_Callback = int (*)();
    using QDateEdit_SetVisible_Callback = void (*)(QDateEdit*, bool);
    using QDateEdit_HeightForWidth_Callback = int (*)(const QDateEdit*, int);
    using QDateEdit_HasHeightForWidth_Callback = bool (*)();
    using QDateEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QDateEdit_MouseDoubleClickEvent_Callback = void (*)(QDateEdit*, QMouseEvent*);
    using QDateEdit_EnterEvent_Callback = void (*)(QDateEdit*, QEnterEvent*);
    using QDateEdit_LeaveEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_MoveEvent_Callback = void (*)(QDateEdit*, QMoveEvent*);
    using QDateEdit_TabletEvent_Callback = void (*)(QDateEdit*, QTabletEvent*);
    using QDateEdit_ActionEvent_Callback = void (*)(QDateEdit*, QActionEvent*);
    using QDateEdit_DragEnterEvent_Callback = void (*)(QDateEdit*, QDragEnterEvent*);
    using QDateEdit_DragMoveEvent_Callback = void (*)(QDateEdit*, QDragMoveEvent*);
    using QDateEdit_DragLeaveEvent_Callback = void (*)(QDateEdit*, QDragLeaveEvent*);
    using QDateEdit_DropEvent_Callback = void (*)(QDateEdit*, QDropEvent*);
    using QDateEdit_NativeEvent_Callback = bool (*)(QDateEdit*, const QByteArray&, void*, qintptr*);
    using QDateEdit_Metric_Callback = int (*)(const QDateEdit*, QPaintDevice::PaintDeviceMetric);
    using QDateEdit_InitPainter_Callback = void (*)(const QDateEdit*, QPainter*);
    using QDateEdit_Redirected_Callback = QPaintDevice* (*)(const QDateEdit*, QPoint*);
    using QDateEdit_SharedPainter_Callback = QPainter* (*)();
    using QDateEdit_InputMethodEvent_Callback = void (*)(QDateEdit*, QInputMethodEvent*);
    using QDateEdit_EventFilter_Callback = bool (*)(QDateEdit*, QObject*, QEvent*);
    using QDateEdit_ChildEvent_Callback = void (*)(QDateEdit*, QChildEvent*);
    using QDateEdit_CustomEvent_Callback = void (*)(QDateEdit*, QEvent*);
    using QDateEdit_ConnectNotify_Callback = void (*)(QDateEdit*, const QMetaMethod&);
    using QDateEdit_DisconnectNotify_Callback = void (*)(QDateEdit*, const QMetaMethod&);
    using QDateEdit_LineEdit_Callback = QLineEdit* (*)();
    using QDateEdit_SetLineEdit_Callback = void (*)(QDateEdit*, QLineEdit*);
    using QDateEdit_UpdateMicroFocus_Callback = void (*)();
    using QDateEdit_Create_Callback = void (*)();
    using QDateEdit_Destroy_Callback = void (*)();
    using QDateEdit_FocusNextChild_Callback = bool (*)();
    using QDateEdit_FocusPreviousChild_Callback = bool (*)();
    using QDateEdit_Sender_Callback = QObject* (*)();
    using QDateEdit_SenderSignalIndex_Callback = int (*)();
    using QDateEdit_Receivers_Callback = int (*)(const QDateEdit*, const char*);
    using QDateEdit_IsSignalConnected_Callback = bool (*)(const QDateEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDateEdit_Metacall_Callback qdateedit_metacall_callback = nullptr;
    QDateEdit_SizeHint_Callback qdateedit_sizehint_callback = nullptr;
    QDateEdit_Clear_Callback qdateedit_clear_callback = nullptr;
    QDateEdit_StepBy_Callback qdateedit_stepby_callback = nullptr;
    QDateEdit_Event_Callback qdateedit_event_callback = nullptr;
    QDateEdit_KeyPressEvent_Callback qdateedit_keypressevent_callback = nullptr;
    QDateEdit_WheelEvent_Callback qdateedit_wheelevent_callback = nullptr;
    QDateEdit_FocusInEvent_Callback qdateedit_focusinevent_callback = nullptr;
    QDateEdit_FocusNextPrevChild_Callback qdateedit_focusnextprevchild_callback = nullptr;
    QDateEdit_Validate_Callback qdateedit_validate_callback = nullptr;
    QDateEdit_Fixup_Callback qdateedit_fixup_callback = nullptr;
    QDateEdit_DateTimeFromText_Callback qdateedit_datetimefromtext_callback = nullptr;
    QDateEdit_TextFromDateTime_Callback qdateedit_textfromdatetime_callback = nullptr;
    QDateEdit_StepEnabled_Callback qdateedit_stepenabled_callback = nullptr;
    QDateEdit_MousePressEvent_Callback qdateedit_mousepressevent_callback = nullptr;
    QDateEdit_PaintEvent_Callback qdateedit_paintevent_callback = nullptr;
    QDateEdit_InitStyleOption_Callback qdateedit_initstyleoption_callback = nullptr;
    QDateEdit_MinimumSizeHint_Callback qdateedit_minimumsizehint_callback = nullptr;
    QDateEdit_InputMethodQuery_Callback qdateedit_inputmethodquery_callback = nullptr;
    QDateEdit_ResizeEvent_Callback qdateedit_resizeevent_callback = nullptr;
    QDateEdit_KeyReleaseEvent_Callback qdateedit_keyreleaseevent_callback = nullptr;
    QDateEdit_FocusOutEvent_Callback qdateedit_focusoutevent_callback = nullptr;
    QDateEdit_ContextMenuEvent_Callback qdateedit_contextmenuevent_callback = nullptr;
    QDateEdit_ChangeEvent_Callback qdateedit_changeevent_callback = nullptr;
    QDateEdit_CloseEvent_Callback qdateedit_closeevent_callback = nullptr;
    QDateEdit_HideEvent_Callback qdateedit_hideevent_callback = nullptr;
    QDateEdit_MouseReleaseEvent_Callback qdateedit_mousereleaseevent_callback = nullptr;
    QDateEdit_MouseMoveEvent_Callback qdateedit_mousemoveevent_callback = nullptr;
    QDateEdit_TimerEvent_Callback qdateedit_timerevent_callback = nullptr;
    QDateEdit_ShowEvent_Callback qdateedit_showevent_callback = nullptr;
    QDateEdit_DevType_Callback qdateedit_devtype_callback = nullptr;
    QDateEdit_SetVisible_Callback qdateedit_setvisible_callback = nullptr;
    QDateEdit_HeightForWidth_Callback qdateedit_heightforwidth_callback = nullptr;
    QDateEdit_HasHeightForWidth_Callback qdateedit_hasheightforwidth_callback = nullptr;
    QDateEdit_PaintEngine_Callback qdateedit_paintengine_callback = nullptr;
    QDateEdit_MouseDoubleClickEvent_Callback qdateedit_mousedoubleclickevent_callback = nullptr;
    QDateEdit_EnterEvent_Callback qdateedit_enterevent_callback = nullptr;
    QDateEdit_LeaveEvent_Callback qdateedit_leaveevent_callback = nullptr;
    QDateEdit_MoveEvent_Callback qdateedit_moveevent_callback = nullptr;
    QDateEdit_TabletEvent_Callback qdateedit_tabletevent_callback = nullptr;
    QDateEdit_ActionEvent_Callback qdateedit_actionevent_callback = nullptr;
    QDateEdit_DragEnterEvent_Callback qdateedit_dragenterevent_callback = nullptr;
    QDateEdit_DragMoveEvent_Callback qdateedit_dragmoveevent_callback = nullptr;
    QDateEdit_DragLeaveEvent_Callback qdateedit_dragleaveevent_callback = nullptr;
    QDateEdit_DropEvent_Callback qdateedit_dropevent_callback = nullptr;
    QDateEdit_NativeEvent_Callback qdateedit_nativeevent_callback = nullptr;
    QDateEdit_Metric_Callback qdateedit_metric_callback = nullptr;
    QDateEdit_InitPainter_Callback qdateedit_initpainter_callback = nullptr;
    QDateEdit_Redirected_Callback qdateedit_redirected_callback = nullptr;
    QDateEdit_SharedPainter_Callback qdateedit_sharedpainter_callback = nullptr;
    QDateEdit_InputMethodEvent_Callback qdateedit_inputmethodevent_callback = nullptr;
    QDateEdit_EventFilter_Callback qdateedit_eventfilter_callback = nullptr;
    QDateEdit_ChildEvent_Callback qdateedit_childevent_callback = nullptr;
    QDateEdit_CustomEvent_Callback qdateedit_customevent_callback = nullptr;
    QDateEdit_ConnectNotify_Callback qdateedit_connectnotify_callback = nullptr;
    QDateEdit_DisconnectNotify_Callback qdateedit_disconnectnotify_callback = nullptr;
    QDateEdit_LineEdit_Callback qdateedit_lineedit_callback = nullptr;
    QDateEdit_SetLineEdit_Callback qdateedit_setlineedit_callback = nullptr;
    QDateEdit_UpdateMicroFocus_Callback qdateedit_updatemicrofocus_callback = nullptr;
    QDateEdit_Create_Callback qdateedit_create_callback = nullptr;
    QDateEdit_Destroy_Callback qdateedit_destroy_callback = nullptr;
    QDateEdit_FocusNextChild_Callback qdateedit_focusnextchild_callback = nullptr;
    QDateEdit_FocusPreviousChild_Callback qdateedit_focuspreviouschild_callback = nullptr;
    QDateEdit_Sender_Callback qdateedit_sender_callback = nullptr;
    QDateEdit_SenderSignalIndex_Callback qdateedit_sendersignalindex_callback = nullptr;
    QDateEdit_Receivers_Callback qdateedit_receivers_callback = nullptr;
    QDateEdit_IsSignalConnected_Callback qdateedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdateedit_metacall_isbase = false;
    mutable bool qdateedit_sizehint_isbase = false;
    mutable bool qdateedit_clear_isbase = false;
    mutable bool qdateedit_stepby_isbase = false;
    mutable bool qdateedit_event_isbase = false;
    mutable bool qdateedit_keypressevent_isbase = false;
    mutable bool qdateedit_wheelevent_isbase = false;
    mutable bool qdateedit_focusinevent_isbase = false;
    mutable bool qdateedit_focusnextprevchild_isbase = false;
    mutable bool qdateedit_validate_isbase = false;
    mutable bool qdateedit_fixup_isbase = false;
    mutable bool qdateedit_datetimefromtext_isbase = false;
    mutable bool qdateedit_textfromdatetime_isbase = false;
    mutable bool qdateedit_stepenabled_isbase = false;
    mutable bool qdateedit_mousepressevent_isbase = false;
    mutable bool qdateedit_paintevent_isbase = false;
    mutable bool qdateedit_initstyleoption_isbase = false;
    mutable bool qdateedit_minimumsizehint_isbase = false;
    mutable bool qdateedit_inputmethodquery_isbase = false;
    mutable bool qdateedit_resizeevent_isbase = false;
    mutable bool qdateedit_keyreleaseevent_isbase = false;
    mutable bool qdateedit_focusoutevent_isbase = false;
    mutable bool qdateedit_contextmenuevent_isbase = false;
    mutable bool qdateedit_changeevent_isbase = false;
    mutable bool qdateedit_closeevent_isbase = false;
    mutable bool qdateedit_hideevent_isbase = false;
    mutable bool qdateedit_mousereleaseevent_isbase = false;
    mutable bool qdateedit_mousemoveevent_isbase = false;
    mutable bool qdateedit_timerevent_isbase = false;
    mutable bool qdateedit_showevent_isbase = false;
    mutable bool qdateedit_devtype_isbase = false;
    mutable bool qdateedit_setvisible_isbase = false;
    mutable bool qdateedit_heightforwidth_isbase = false;
    mutable bool qdateedit_hasheightforwidth_isbase = false;
    mutable bool qdateedit_paintengine_isbase = false;
    mutable bool qdateedit_mousedoubleclickevent_isbase = false;
    mutable bool qdateedit_enterevent_isbase = false;
    mutable bool qdateedit_leaveevent_isbase = false;
    mutable bool qdateedit_moveevent_isbase = false;
    mutable bool qdateedit_tabletevent_isbase = false;
    mutable bool qdateedit_actionevent_isbase = false;
    mutable bool qdateedit_dragenterevent_isbase = false;
    mutable bool qdateedit_dragmoveevent_isbase = false;
    mutable bool qdateedit_dragleaveevent_isbase = false;
    mutable bool qdateedit_dropevent_isbase = false;
    mutable bool qdateedit_nativeevent_isbase = false;
    mutable bool qdateedit_metric_isbase = false;
    mutable bool qdateedit_initpainter_isbase = false;
    mutable bool qdateedit_redirected_isbase = false;
    mutable bool qdateedit_sharedpainter_isbase = false;
    mutable bool qdateedit_inputmethodevent_isbase = false;
    mutable bool qdateedit_eventfilter_isbase = false;
    mutable bool qdateedit_childevent_isbase = false;
    mutable bool qdateedit_customevent_isbase = false;
    mutable bool qdateedit_connectnotify_isbase = false;
    mutable bool qdateedit_disconnectnotify_isbase = false;
    mutable bool qdateedit_lineedit_isbase = false;
    mutable bool qdateedit_setlineedit_isbase = false;
    mutable bool qdateedit_updatemicrofocus_isbase = false;
    mutable bool qdateedit_create_isbase = false;
    mutable bool qdateedit_destroy_isbase = false;
    mutable bool qdateedit_focusnextchild_isbase = false;
    mutable bool qdateedit_focuspreviouschild_isbase = false;
    mutable bool qdateedit_sender_isbase = false;
    mutable bool qdateedit_sendersignalindex_isbase = false;
    mutable bool qdateedit_receivers_isbase = false;
    mutable bool qdateedit_issignalconnected_isbase = false;

  public:
    VirtualQDateEdit(QWidget* parent) : QDateEdit(parent){};
    VirtualQDateEdit() : QDateEdit(){};
    VirtualQDateEdit(QDate date) : QDateEdit(date){};
    VirtualQDateEdit(QDate date, QWidget* parent) : QDateEdit(date, parent){};

    ~VirtualQDateEdit() {
        qdateedit_metacall_callback = nullptr;
        qdateedit_sizehint_callback = nullptr;
        qdateedit_clear_callback = nullptr;
        qdateedit_stepby_callback = nullptr;
        qdateedit_event_callback = nullptr;
        qdateedit_keypressevent_callback = nullptr;
        qdateedit_wheelevent_callback = nullptr;
        qdateedit_focusinevent_callback = nullptr;
        qdateedit_focusnextprevchild_callback = nullptr;
        qdateedit_validate_callback = nullptr;
        qdateedit_fixup_callback = nullptr;
        qdateedit_datetimefromtext_callback = nullptr;
        qdateedit_textfromdatetime_callback = nullptr;
        qdateedit_stepenabled_callback = nullptr;
        qdateedit_mousepressevent_callback = nullptr;
        qdateedit_paintevent_callback = nullptr;
        qdateedit_initstyleoption_callback = nullptr;
        qdateedit_minimumsizehint_callback = nullptr;
        qdateedit_inputmethodquery_callback = nullptr;
        qdateedit_resizeevent_callback = nullptr;
        qdateedit_keyreleaseevent_callback = nullptr;
        qdateedit_focusoutevent_callback = nullptr;
        qdateedit_contextmenuevent_callback = nullptr;
        qdateedit_changeevent_callback = nullptr;
        qdateedit_closeevent_callback = nullptr;
        qdateedit_hideevent_callback = nullptr;
        qdateedit_mousereleaseevent_callback = nullptr;
        qdateedit_mousemoveevent_callback = nullptr;
        qdateedit_timerevent_callback = nullptr;
        qdateedit_showevent_callback = nullptr;
        qdateedit_devtype_callback = nullptr;
        qdateedit_setvisible_callback = nullptr;
        qdateedit_heightforwidth_callback = nullptr;
        qdateedit_hasheightforwidth_callback = nullptr;
        qdateedit_paintengine_callback = nullptr;
        qdateedit_mousedoubleclickevent_callback = nullptr;
        qdateedit_enterevent_callback = nullptr;
        qdateedit_leaveevent_callback = nullptr;
        qdateedit_moveevent_callback = nullptr;
        qdateedit_tabletevent_callback = nullptr;
        qdateedit_actionevent_callback = nullptr;
        qdateedit_dragenterevent_callback = nullptr;
        qdateedit_dragmoveevent_callback = nullptr;
        qdateedit_dragleaveevent_callback = nullptr;
        qdateedit_dropevent_callback = nullptr;
        qdateedit_nativeevent_callback = nullptr;
        qdateedit_metric_callback = nullptr;
        qdateedit_initpainter_callback = nullptr;
        qdateedit_redirected_callback = nullptr;
        qdateedit_sharedpainter_callback = nullptr;
        qdateedit_inputmethodevent_callback = nullptr;
        qdateedit_eventfilter_callback = nullptr;
        qdateedit_childevent_callback = nullptr;
        qdateedit_customevent_callback = nullptr;
        qdateedit_connectnotify_callback = nullptr;
        qdateedit_disconnectnotify_callback = nullptr;
        qdateedit_lineedit_callback = nullptr;
        qdateedit_setlineedit_callback = nullptr;
        qdateedit_updatemicrofocus_callback = nullptr;
        qdateedit_create_callback = nullptr;
        qdateedit_destroy_callback = nullptr;
        qdateedit_focusnextchild_callback = nullptr;
        qdateedit_focuspreviouschild_callback = nullptr;
        qdateedit_sender_callback = nullptr;
        qdateedit_sendersignalindex_callback = nullptr;
        qdateedit_receivers_callback = nullptr;
        qdateedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDateEdit_Metacall_Callback(QDateEdit_Metacall_Callback cb) { qdateedit_metacall_callback = cb; }
    void setQDateEdit_SizeHint_Callback(QDateEdit_SizeHint_Callback cb) { qdateedit_sizehint_callback = cb; }
    void setQDateEdit_Clear_Callback(QDateEdit_Clear_Callback cb) { qdateedit_clear_callback = cb; }
    void setQDateEdit_StepBy_Callback(QDateEdit_StepBy_Callback cb) { qdateedit_stepby_callback = cb; }
    void setQDateEdit_Event_Callback(QDateEdit_Event_Callback cb) { qdateedit_event_callback = cb; }
    void setQDateEdit_KeyPressEvent_Callback(QDateEdit_KeyPressEvent_Callback cb) { qdateedit_keypressevent_callback = cb; }
    void setQDateEdit_WheelEvent_Callback(QDateEdit_WheelEvent_Callback cb) { qdateedit_wheelevent_callback = cb; }
    void setQDateEdit_FocusInEvent_Callback(QDateEdit_FocusInEvent_Callback cb) { qdateedit_focusinevent_callback = cb; }
    void setQDateEdit_FocusNextPrevChild_Callback(QDateEdit_FocusNextPrevChild_Callback cb) { qdateedit_focusnextprevchild_callback = cb; }
    void setQDateEdit_Validate_Callback(QDateEdit_Validate_Callback cb) { qdateedit_validate_callback = cb; }
    void setQDateEdit_Fixup_Callback(QDateEdit_Fixup_Callback cb) { qdateedit_fixup_callback = cb; }
    void setQDateEdit_DateTimeFromText_Callback(QDateEdit_DateTimeFromText_Callback cb) { qdateedit_datetimefromtext_callback = cb; }
    void setQDateEdit_TextFromDateTime_Callback(QDateEdit_TextFromDateTime_Callback cb) { qdateedit_textfromdatetime_callback = cb; }
    void setQDateEdit_StepEnabled_Callback(QDateEdit_StepEnabled_Callback cb) { qdateedit_stepenabled_callback = cb; }
    void setQDateEdit_MousePressEvent_Callback(QDateEdit_MousePressEvent_Callback cb) { qdateedit_mousepressevent_callback = cb; }
    void setQDateEdit_PaintEvent_Callback(QDateEdit_PaintEvent_Callback cb) { qdateedit_paintevent_callback = cb; }
    void setQDateEdit_InitStyleOption_Callback(QDateEdit_InitStyleOption_Callback cb) { qdateedit_initstyleoption_callback = cb; }
    void setQDateEdit_MinimumSizeHint_Callback(QDateEdit_MinimumSizeHint_Callback cb) { qdateedit_minimumsizehint_callback = cb; }
    void setQDateEdit_InputMethodQuery_Callback(QDateEdit_InputMethodQuery_Callback cb) { qdateedit_inputmethodquery_callback = cb; }
    void setQDateEdit_ResizeEvent_Callback(QDateEdit_ResizeEvent_Callback cb) { qdateedit_resizeevent_callback = cb; }
    void setQDateEdit_KeyReleaseEvent_Callback(QDateEdit_KeyReleaseEvent_Callback cb) { qdateedit_keyreleaseevent_callback = cb; }
    void setQDateEdit_FocusOutEvent_Callback(QDateEdit_FocusOutEvent_Callback cb) { qdateedit_focusoutevent_callback = cb; }
    void setQDateEdit_ContextMenuEvent_Callback(QDateEdit_ContextMenuEvent_Callback cb) { qdateedit_contextmenuevent_callback = cb; }
    void setQDateEdit_ChangeEvent_Callback(QDateEdit_ChangeEvent_Callback cb) { qdateedit_changeevent_callback = cb; }
    void setQDateEdit_CloseEvent_Callback(QDateEdit_CloseEvent_Callback cb) { qdateedit_closeevent_callback = cb; }
    void setQDateEdit_HideEvent_Callback(QDateEdit_HideEvent_Callback cb) { qdateedit_hideevent_callback = cb; }
    void setQDateEdit_MouseReleaseEvent_Callback(QDateEdit_MouseReleaseEvent_Callback cb) { qdateedit_mousereleaseevent_callback = cb; }
    void setQDateEdit_MouseMoveEvent_Callback(QDateEdit_MouseMoveEvent_Callback cb) { qdateedit_mousemoveevent_callback = cb; }
    void setQDateEdit_TimerEvent_Callback(QDateEdit_TimerEvent_Callback cb) { qdateedit_timerevent_callback = cb; }
    void setQDateEdit_ShowEvent_Callback(QDateEdit_ShowEvent_Callback cb) { qdateedit_showevent_callback = cb; }
    void setQDateEdit_DevType_Callback(QDateEdit_DevType_Callback cb) { qdateedit_devtype_callback = cb; }
    void setQDateEdit_SetVisible_Callback(QDateEdit_SetVisible_Callback cb) { qdateedit_setvisible_callback = cb; }
    void setQDateEdit_HeightForWidth_Callback(QDateEdit_HeightForWidth_Callback cb) { qdateedit_heightforwidth_callback = cb; }
    void setQDateEdit_HasHeightForWidth_Callback(QDateEdit_HasHeightForWidth_Callback cb) { qdateedit_hasheightforwidth_callback = cb; }
    void setQDateEdit_PaintEngine_Callback(QDateEdit_PaintEngine_Callback cb) { qdateedit_paintengine_callback = cb; }
    void setQDateEdit_MouseDoubleClickEvent_Callback(QDateEdit_MouseDoubleClickEvent_Callback cb) { qdateedit_mousedoubleclickevent_callback = cb; }
    void setQDateEdit_EnterEvent_Callback(QDateEdit_EnterEvent_Callback cb) { qdateedit_enterevent_callback = cb; }
    void setQDateEdit_LeaveEvent_Callback(QDateEdit_LeaveEvent_Callback cb) { qdateedit_leaveevent_callback = cb; }
    void setQDateEdit_MoveEvent_Callback(QDateEdit_MoveEvent_Callback cb) { qdateedit_moveevent_callback = cb; }
    void setQDateEdit_TabletEvent_Callback(QDateEdit_TabletEvent_Callback cb) { qdateedit_tabletevent_callback = cb; }
    void setQDateEdit_ActionEvent_Callback(QDateEdit_ActionEvent_Callback cb) { qdateedit_actionevent_callback = cb; }
    void setQDateEdit_DragEnterEvent_Callback(QDateEdit_DragEnterEvent_Callback cb) { qdateedit_dragenterevent_callback = cb; }
    void setQDateEdit_DragMoveEvent_Callback(QDateEdit_DragMoveEvent_Callback cb) { qdateedit_dragmoveevent_callback = cb; }
    void setQDateEdit_DragLeaveEvent_Callback(QDateEdit_DragLeaveEvent_Callback cb) { qdateedit_dragleaveevent_callback = cb; }
    void setQDateEdit_DropEvent_Callback(QDateEdit_DropEvent_Callback cb) { qdateedit_dropevent_callback = cb; }
    void setQDateEdit_NativeEvent_Callback(QDateEdit_NativeEvent_Callback cb) { qdateedit_nativeevent_callback = cb; }
    void setQDateEdit_Metric_Callback(QDateEdit_Metric_Callback cb) { qdateedit_metric_callback = cb; }
    void setQDateEdit_InitPainter_Callback(QDateEdit_InitPainter_Callback cb) { qdateedit_initpainter_callback = cb; }
    void setQDateEdit_Redirected_Callback(QDateEdit_Redirected_Callback cb) { qdateedit_redirected_callback = cb; }
    void setQDateEdit_SharedPainter_Callback(QDateEdit_SharedPainter_Callback cb) { qdateedit_sharedpainter_callback = cb; }
    void setQDateEdit_InputMethodEvent_Callback(QDateEdit_InputMethodEvent_Callback cb) { qdateedit_inputmethodevent_callback = cb; }
    void setQDateEdit_EventFilter_Callback(QDateEdit_EventFilter_Callback cb) { qdateedit_eventfilter_callback = cb; }
    void setQDateEdit_ChildEvent_Callback(QDateEdit_ChildEvent_Callback cb) { qdateedit_childevent_callback = cb; }
    void setQDateEdit_CustomEvent_Callback(QDateEdit_CustomEvent_Callback cb) { qdateedit_customevent_callback = cb; }
    void setQDateEdit_ConnectNotify_Callback(QDateEdit_ConnectNotify_Callback cb) { qdateedit_connectnotify_callback = cb; }
    void setQDateEdit_DisconnectNotify_Callback(QDateEdit_DisconnectNotify_Callback cb) { qdateedit_disconnectnotify_callback = cb; }
    void setQDateEdit_LineEdit_Callback(QDateEdit_LineEdit_Callback cb) { qdateedit_lineedit_callback = cb; }
    void setQDateEdit_SetLineEdit_Callback(QDateEdit_SetLineEdit_Callback cb) { qdateedit_setlineedit_callback = cb; }
    void setQDateEdit_UpdateMicroFocus_Callback(QDateEdit_UpdateMicroFocus_Callback cb) { qdateedit_updatemicrofocus_callback = cb; }
    void setQDateEdit_Create_Callback(QDateEdit_Create_Callback cb) { qdateedit_create_callback = cb; }
    void setQDateEdit_Destroy_Callback(QDateEdit_Destroy_Callback cb) { qdateedit_destroy_callback = cb; }
    void setQDateEdit_FocusNextChild_Callback(QDateEdit_FocusNextChild_Callback cb) { qdateedit_focusnextchild_callback = cb; }
    void setQDateEdit_FocusPreviousChild_Callback(QDateEdit_FocusPreviousChild_Callback cb) { qdateedit_focuspreviouschild_callback = cb; }
    void setQDateEdit_Sender_Callback(QDateEdit_Sender_Callback cb) { qdateedit_sender_callback = cb; }
    void setQDateEdit_SenderSignalIndex_Callback(QDateEdit_SenderSignalIndex_Callback cb) { qdateedit_sendersignalindex_callback = cb; }
    void setQDateEdit_Receivers_Callback(QDateEdit_Receivers_Callback cb) { qdateedit_receivers_callback = cb; }
    void setQDateEdit_IsSignalConnected_Callback(QDateEdit_IsSignalConnected_Callback cb) { qdateedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDateEdit_Metacall_IsBase(bool value) const { qdateedit_metacall_isbase = value; }
    void setQDateEdit_SizeHint_IsBase(bool value) const { qdateedit_sizehint_isbase = value; }
    void setQDateEdit_Clear_IsBase(bool value) const { qdateedit_clear_isbase = value; }
    void setQDateEdit_StepBy_IsBase(bool value) const { qdateedit_stepby_isbase = value; }
    void setQDateEdit_Event_IsBase(bool value) const { qdateedit_event_isbase = value; }
    void setQDateEdit_KeyPressEvent_IsBase(bool value) const { qdateedit_keypressevent_isbase = value; }
    void setQDateEdit_WheelEvent_IsBase(bool value) const { qdateedit_wheelevent_isbase = value; }
    void setQDateEdit_FocusInEvent_IsBase(bool value) const { qdateedit_focusinevent_isbase = value; }
    void setQDateEdit_FocusNextPrevChild_IsBase(bool value) const { qdateedit_focusnextprevchild_isbase = value; }
    void setQDateEdit_Validate_IsBase(bool value) const { qdateedit_validate_isbase = value; }
    void setQDateEdit_Fixup_IsBase(bool value) const { qdateedit_fixup_isbase = value; }
    void setQDateEdit_DateTimeFromText_IsBase(bool value) const { qdateedit_datetimefromtext_isbase = value; }
    void setQDateEdit_TextFromDateTime_IsBase(bool value) const { qdateedit_textfromdatetime_isbase = value; }
    void setQDateEdit_StepEnabled_IsBase(bool value) const { qdateedit_stepenabled_isbase = value; }
    void setQDateEdit_MousePressEvent_IsBase(bool value) const { qdateedit_mousepressevent_isbase = value; }
    void setQDateEdit_PaintEvent_IsBase(bool value) const { qdateedit_paintevent_isbase = value; }
    void setQDateEdit_InitStyleOption_IsBase(bool value) const { qdateedit_initstyleoption_isbase = value; }
    void setQDateEdit_MinimumSizeHint_IsBase(bool value) const { qdateedit_minimumsizehint_isbase = value; }
    void setQDateEdit_InputMethodQuery_IsBase(bool value) const { qdateedit_inputmethodquery_isbase = value; }
    void setQDateEdit_ResizeEvent_IsBase(bool value) const { qdateedit_resizeevent_isbase = value; }
    void setQDateEdit_KeyReleaseEvent_IsBase(bool value) const { qdateedit_keyreleaseevent_isbase = value; }
    void setQDateEdit_FocusOutEvent_IsBase(bool value) const { qdateedit_focusoutevent_isbase = value; }
    void setQDateEdit_ContextMenuEvent_IsBase(bool value) const { qdateedit_contextmenuevent_isbase = value; }
    void setQDateEdit_ChangeEvent_IsBase(bool value) const { qdateedit_changeevent_isbase = value; }
    void setQDateEdit_CloseEvent_IsBase(bool value) const { qdateedit_closeevent_isbase = value; }
    void setQDateEdit_HideEvent_IsBase(bool value) const { qdateedit_hideevent_isbase = value; }
    void setQDateEdit_MouseReleaseEvent_IsBase(bool value) const { qdateedit_mousereleaseevent_isbase = value; }
    void setQDateEdit_MouseMoveEvent_IsBase(bool value) const { qdateedit_mousemoveevent_isbase = value; }
    void setQDateEdit_TimerEvent_IsBase(bool value) const { qdateedit_timerevent_isbase = value; }
    void setQDateEdit_ShowEvent_IsBase(bool value) const { qdateedit_showevent_isbase = value; }
    void setQDateEdit_DevType_IsBase(bool value) const { qdateedit_devtype_isbase = value; }
    void setQDateEdit_SetVisible_IsBase(bool value) const { qdateedit_setvisible_isbase = value; }
    void setQDateEdit_HeightForWidth_IsBase(bool value) const { qdateedit_heightforwidth_isbase = value; }
    void setQDateEdit_HasHeightForWidth_IsBase(bool value) const { qdateedit_hasheightforwidth_isbase = value; }
    void setQDateEdit_PaintEngine_IsBase(bool value) const { qdateedit_paintengine_isbase = value; }
    void setQDateEdit_MouseDoubleClickEvent_IsBase(bool value) const { qdateedit_mousedoubleclickevent_isbase = value; }
    void setQDateEdit_EnterEvent_IsBase(bool value) const { qdateedit_enterevent_isbase = value; }
    void setQDateEdit_LeaveEvent_IsBase(bool value) const { qdateedit_leaveevent_isbase = value; }
    void setQDateEdit_MoveEvent_IsBase(bool value) const { qdateedit_moveevent_isbase = value; }
    void setQDateEdit_TabletEvent_IsBase(bool value) const { qdateedit_tabletevent_isbase = value; }
    void setQDateEdit_ActionEvent_IsBase(bool value) const { qdateedit_actionevent_isbase = value; }
    void setQDateEdit_DragEnterEvent_IsBase(bool value) const { qdateedit_dragenterevent_isbase = value; }
    void setQDateEdit_DragMoveEvent_IsBase(bool value) const { qdateedit_dragmoveevent_isbase = value; }
    void setQDateEdit_DragLeaveEvent_IsBase(bool value) const { qdateedit_dragleaveevent_isbase = value; }
    void setQDateEdit_DropEvent_IsBase(bool value) const { qdateedit_dropevent_isbase = value; }
    void setQDateEdit_NativeEvent_IsBase(bool value) const { qdateedit_nativeevent_isbase = value; }
    void setQDateEdit_Metric_IsBase(bool value) const { qdateedit_metric_isbase = value; }
    void setQDateEdit_InitPainter_IsBase(bool value) const { qdateedit_initpainter_isbase = value; }
    void setQDateEdit_Redirected_IsBase(bool value) const { qdateedit_redirected_isbase = value; }
    void setQDateEdit_SharedPainter_IsBase(bool value) const { qdateedit_sharedpainter_isbase = value; }
    void setQDateEdit_InputMethodEvent_IsBase(bool value) const { qdateedit_inputmethodevent_isbase = value; }
    void setQDateEdit_EventFilter_IsBase(bool value) const { qdateedit_eventfilter_isbase = value; }
    void setQDateEdit_ChildEvent_IsBase(bool value) const { qdateedit_childevent_isbase = value; }
    void setQDateEdit_CustomEvent_IsBase(bool value) const { qdateedit_customevent_isbase = value; }
    void setQDateEdit_ConnectNotify_IsBase(bool value) const { qdateedit_connectnotify_isbase = value; }
    void setQDateEdit_DisconnectNotify_IsBase(bool value) const { qdateedit_disconnectnotify_isbase = value; }
    void setQDateEdit_LineEdit_IsBase(bool value) const { qdateedit_lineedit_isbase = value; }
    void setQDateEdit_SetLineEdit_IsBase(bool value) const { qdateedit_setlineedit_isbase = value; }
    void setQDateEdit_UpdateMicroFocus_IsBase(bool value) const { qdateedit_updatemicrofocus_isbase = value; }
    void setQDateEdit_Create_IsBase(bool value) const { qdateedit_create_isbase = value; }
    void setQDateEdit_Destroy_IsBase(bool value) const { qdateedit_destroy_isbase = value; }
    void setQDateEdit_FocusNextChild_IsBase(bool value) const { qdateedit_focusnextchild_isbase = value; }
    void setQDateEdit_FocusPreviousChild_IsBase(bool value) const { qdateedit_focuspreviouschild_isbase = value; }
    void setQDateEdit_Sender_IsBase(bool value) const { qdateedit_sender_isbase = value; }
    void setQDateEdit_SenderSignalIndex_IsBase(bool value) const { qdateedit_sendersignalindex_isbase = value; }
    void setQDateEdit_Receivers_IsBase(bool value) const { qdateedit_receivers_isbase = value; }
    void setQDateEdit_IsSignalConnected_IsBase(bool value) const { qdateedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdateedit_metacall_isbase) {
            qdateedit_metacall_isbase = false;
            return QDateEdit::qt_metacall(param1, param2, param3);
        } else if (qdateedit_metacall_callback != nullptr) {
            return qdateedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QDateEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdateedit_sizehint_isbase) {
            qdateedit_sizehint_isbase = false;
            return QDateEdit::sizeHint();
        } else if (qdateedit_sizehint_callback != nullptr) {
            return qdateedit_sizehint_callback();
        } else {
            return QDateEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qdateedit_clear_isbase) {
            qdateedit_clear_isbase = false;
            QDateEdit::clear();
        } else if (qdateedit_clear_callback != nullptr) {
            qdateedit_clear_callback();
        } else {
            QDateEdit::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void stepBy(int steps) override {
        if (qdateedit_stepby_isbase) {
            qdateedit_stepby_isbase = false;
            QDateEdit::stepBy(steps);
        } else if (qdateedit_stepby_callback != nullptr) {
            qdateedit_stepby_callback(this, steps);
        } else {
            QDateEdit::stepBy(steps);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdateedit_event_isbase) {
            qdateedit_event_isbase = false;
            return QDateEdit::event(event);
        } else if (qdateedit_event_callback != nullptr) {
            return qdateedit_event_callback(this, event);
        } else {
            return QDateEdit::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdateedit_keypressevent_isbase) {
            qdateedit_keypressevent_isbase = false;
            QDateEdit::keyPressEvent(event);
        } else if (qdateedit_keypressevent_callback != nullptr) {
            qdateedit_keypressevent_callback(this, event);
        } else {
            QDateEdit::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdateedit_wheelevent_isbase) {
            qdateedit_wheelevent_isbase = false;
            QDateEdit::wheelEvent(event);
        } else if (qdateedit_wheelevent_callback != nullptr) {
            qdateedit_wheelevent_callback(this, event);
        } else {
            QDateEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdateedit_focusinevent_isbase) {
            qdateedit_focusinevent_isbase = false;
            QDateEdit::focusInEvent(event);
        } else if (qdateedit_focusinevent_callback != nullptr) {
            qdateedit_focusinevent_callback(this, event);
        } else {
            QDateEdit::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdateedit_focusnextprevchild_isbase) {
            qdateedit_focusnextprevchild_isbase = false;
            return QDateEdit::focusNextPrevChild(next);
        } else if (qdateedit_focusnextprevchild_callback != nullptr) {
            return qdateedit_focusnextprevchild_callback(this, next);
        } else {
            return QDateEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QValidator::State validate(QString& input, int& pos) const override {
        if (qdateedit_validate_isbase) {
            qdateedit_validate_isbase = false;
            return QDateEdit::validate(input, pos);
        } else if (qdateedit_validate_callback != nullptr) {
            return qdateedit_validate_callback(this, input, pos);
        } else {
            return QDateEdit::validate(input, pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fixup(QString& input) const override {
        if (qdateedit_fixup_isbase) {
            qdateedit_fixup_isbase = false;
            QDateEdit::fixup(input);
        } else if (qdateedit_fixup_callback != nullptr) {
            qdateedit_fixup_callback(this, input);
        } else {
            QDateEdit::fixup(input);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QDateTime dateTimeFromText(const QString& text) const override {
        if (qdateedit_datetimefromtext_isbase) {
            qdateedit_datetimefromtext_isbase = false;
            return QDateEdit::dateTimeFromText(text);
        } else if (qdateedit_datetimefromtext_callback != nullptr) {
            return qdateedit_datetimefromtext_callback(this, text);
        } else {
            return QDateEdit::dateTimeFromText(text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString textFromDateTime(const QDateTime& dt) const override {
        if (qdateedit_textfromdatetime_isbase) {
            qdateedit_textfromdatetime_isbase = false;
            return QDateEdit::textFromDateTime(dt);
        } else if (qdateedit_textfromdatetime_callback != nullptr) {
            return qdateedit_textfromdatetime_callback(this, dt);
        } else {
            return QDateEdit::textFromDateTime(dt);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
        if (qdateedit_stepenabled_isbase) {
            qdateedit_stepenabled_isbase = false;
            return QDateEdit::stepEnabled();
        } else if (qdateedit_stepenabled_callback != nullptr) {
            return qdateedit_stepenabled_callback();
        } else {
            return QDateEdit::stepEnabled();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdateedit_mousepressevent_isbase) {
            qdateedit_mousepressevent_isbase = false;
            QDateEdit::mousePressEvent(event);
        } else if (qdateedit_mousepressevent_callback != nullptr) {
            qdateedit_mousepressevent_callback(this, event);
        } else {
            QDateEdit::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdateedit_paintevent_isbase) {
            qdateedit_paintevent_isbase = false;
            QDateEdit::paintEvent(event);
        } else if (qdateedit_paintevent_callback != nullptr) {
            qdateedit_paintevent_callback(this, event);
        } else {
            QDateEdit::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSpinBox* option) const override {
        if (qdateedit_initstyleoption_isbase) {
            qdateedit_initstyleoption_isbase = false;
            QDateEdit::initStyleOption(option);
        } else if (qdateedit_initstyleoption_callback != nullptr) {
            qdateedit_initstyleoption_callback(this, option);
        } else {
            QDateEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdateedit_minimumsizehint_isbase) {
            qdateedit_minimumsizehint_isbase = false;
            return QDateEdit::minimumSizeHint();
        } else if (qdateedit_minimumsizehint_callback != nullptr) {
            return qdateedit_minimumsizehint_callback();
        } else {
            return QDateEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdateedit_inputmethodquery_isbase) {
            qdateedit_inputmethodquery_isbase = false;
            return QDateEdit::inputMethodQuery(param1);
        } else if (qdateedit_inputmethodquery_callback != nullptr) {
            return qdateedit_inputmethodquery_callback(this, param1);
        } else {
            return QDateEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdateedit_resizeevent_isbase) {
            qdateedit_resizeevent_isbase = false;
            QDateEdit::resizeEvent(event);
        } else if (qdateedit_resizeevent_callback != nullptr) {
            qdateedit_resizeevent_callback(this, event);
        } else {
            QDateEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdateedit_keyreleaseevent_isbase) {
            qdateedit_keyreleaseevent_isbase = false;
            QDateEdit::keyReleaseEvent(event);
        } else if (qdateedit_keyreleaseevent_callback != nullptr) {
            qdateedit_keyreleaseevent_callback(this, event);
        } else {
            QDateEdit::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdateedit_focusoutevent_isbase) {
            qdateedit_focusoutevent_isbase = false;
            QDateEdit::focusOutEvent(event);
        } else if (qdateedit_focusoutevent_callback != nullptr) {
            qdateedit_focusoutevent_callback(this, event);
        } else {
            QDateEdit::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdateedit_contextmenuevent_isbase) {
            qdateedit_contextmenuevent_isbase = false;
            QDateEdit::contextMenuEvent(event);
        } else if (qdateedit_contextmenuevent_callback != nullptr) {
            qdateedit_contextmenuevent_callback(this, event);
        } else {
            QDateEdit::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdateedit_changeevent_isbase) {
            qdateedit_changeevent_isbase = false;
            QDateEdit::changeEvent(event);
        } else if (qdateedit_changeevent_callback != nullptr) {
            qdateedit_changeevent_callback(this, event);
        } else {
            QDateEdit::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdateedit_closeevent_isbase) {
            qdateedit_closeevent_isbase = false;
            QDateEdit::closeEvent(event);
        } else if (qdateedit_closeevent_callback != nullptr) {
            qdateedit_closeevent_callback(this, event);
        } else {
            QDateEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdateedit_hideevent_isbase) {
            qdateedit_hideevent_isbase = false;
            QDateEdit::hideEvent(event);
        } else if (qdateedit_hideevent_callback != nullptr) {
            qdateedit_hideevent_callback(this, event);
        } else {
            QDateEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdateedit_mousereleaseevent_isbase) {
            qdateedit_mousereleaseevent_isbase = false;
            QDateEdit::mouseReleaseEvent(event);
        } else if (qdateedit_mousereleaseevent_callback != nullptr) {
            qdateedit_mousereleaseevent_callback(this, event);
        } else {
            QDateEdit::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdateedit_mousemoveevent_isbase) {
            qdateedit_mousemoveevent_isbase = false;
            QDateEdit::mouseMoveEvent(event);
        } else if (qdateedit_mousemoveevent_callback != nullptr) {
            qdateedit_mousemoveevent_callback(this, event);
        } else {
            QDateEdit::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdateedit_timerevent_isbase) {
            qdateedit_timerevent_isbase = false;
            QDateEdit::timerEvent(event);
        } else if (qdateedit_timerevent_callback != nullptr) {
            qdateedit_timerevent_callback(this, event);
        } else {
            QDateEdit::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdateedit_showevent_isbase) {
            qdateedit_showevent_isbase = false;
            QDateEdit::showEvent(event);
        } else if (qdateedit_showevent_callback != nullptr) {
            qdateedit_showevent_callback(this, event);
        } else {
            QDateEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdateedit_devtype_isbase) {
            qdateedit_devtype_isbase = false;
            return QDateEdit::devType();
        } else if (qdateedit_devtype_callback != nullptr) {
            return qdateedit_devtype_callback();
        } else {
            return QDateEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdateedit_setvisible_isbase) {
            qdateedit_setvisible_isbase = false;
            QDateEdit::setVisible(visible);
        } else if (qdateedit_setvisible_callback != nullptr) {
            qdateedit_setvisible_callback(this, visible);
        } else {
            QDateEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdateedit_heightforwidth_isbase) {
            qdateedit_heightforwidth_isbase = false;
            return QDateEdit::heightForWidth(param1);
        } else if (qdateedit_heightforwidth_callback != nullptr) {
            return qdateedit_heightforwidth_callback(this, param1);
        } else {
            return QDateEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdateedit_hasheightforwidth_isbase) {
            qdateedit_hasheightforwidth_isbase = false;
            return QDateEdit::hasHeightForWidth();
        } else if (qdateedit_hasheightforwidth_callback != nullptr) {
            return qdateedit_hasheightforwidth_callback();
        } else {
            return QDateEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdateedit_paintengine_isbase) {
            qdateedit_paintengine_isbase = false;
            return QDateEdit::paintEngine();
        } else if (qdateedit_paintengine_callback != nullptr) {
            return qdateedit_paintengine_callback();
        } else {
            return QDateEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdateedit_mousedoubleclickevent_isbase) {
            qdateedit_mousedoubleclickevent_isbase = false;
            QDateEdit::mouseDoubleClickEvent(event);
        } else if (qdateedit_mousedoubleclickevent_callback != nullptr) {
            qdateedit_mousedoubleclickevent_callback(this, event);
        } else {
            QDateEdit::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdateedit_enterevent_isbase) {
            qdateedit_enterevent_isbase = false;
            QDateEdit::enterEvent(event);
        } else if (qdateedit_enterevent_callback != nullptr) {
            qdateedit_enterevent_callback(this, event);
        } else {
            QDateEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdateedit_leaveevent_isbase) {
            qdateedit_leaveevent_isbase = false;
            QDateEdit::leaveEvent(event);
        } else if (qdateedit_leaveevent_callback != nullptr) {
            qdateedit_leaveevent_callback(this, event);
        } else {
            QDateEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdateedit_moveevent_isbase) {
            qdateedit_moveevent_isbase = false;
            QDateEdit::moveEvent(event);
        } else if (qdateedit_moveevent_callback != nullptr) {
            qdateedit_moveevent_callback(this, event);
        } else {
            QDateEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdateedit_tabletevent_isbase) {
            qdateedit_tabletevent_isbase = false;
            QDateEdit::tabletEvent(event);
        } else if (qdateedit_tabletevent_callback != nullptr) {
            qdateedit_tabletevent_callback(this, event);
        } else {
            QDateEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdateedit_actionevent_isbase) {
            qdateedit_actionevent_isbase = false;
            QDateEdit::actionEvent(event);
        } else if (qdateedit_actionevent_callback != nullptr) {
            qdateedit_actionevent_callback(this, event);
        } else {
            QDateEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdateedit_dragenterevent_isbase) {
            qdateedit_dragenterevent_isbase = false;
            QDateEdit::dragEnterEvent(event);
        } else if (qdateedit_dragenterevent_callback != nullptr) {
            qdateedit_dragenterevent_callback(this, event);
        } else {
            QDateEdit::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdateedit_dragmoveevent_isbase) {
            qdateedit_dragmoveevent_isbase = false;
            QDateEdit::dragMoveEvent(event);
        } else if (qdateedit_dragmoveevent_callback != nullptr) {
            qdateedit_dragmoveevent_callback(this, event);
        } else {
            QDateEdit::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdateedit_dragleaveevent_isbase) {
            qdateedit_dragleaveevent_isbase = false;
            QDateEdit::dragLeaveEvent(event);
        } else if (qdateedit_dragleaveevent_callback != nullptr) {
            qdateedit_dragleaveevent_callback(this, event);
        } else {
            QDateEdit::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdateedit_dropevent_isbase) {
            qdateedit_dropevent_isbase = false;
            QDateEdit::dropEvent(event);
        } else if (qdateedit_dropevent_callback != nullptr) {
            qdateedit_dropevent_callback(this, event);
        } else {
            QDateEdit::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdateedit_nativeevent_isbase) {
            qdateedit_nativeevent_isbase = false;
            return QDateEdit::nativeEvent(eventType, message, result);
        } else if (qdateedit_nativeevent_callback != nullptr) {
            return qdateedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDateEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdateedit_metric_isbase) {
            qdateedit_metric_isbase = false;
            return QDateEdit::metric(param1);
        } else if (qdateedit_metric_callback != nullptr) {
            return qdateedit_metric_callback(this, param1);
        } else {
            return QDateEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdateedit_initpainter_isbase) {
            qdateedit_initpainter_isbase = false;
            QDateEdit::initPainter(painter);
        } else if (qdateedit_initpainter_callback != nullptr) {
            qdateedit_initpainter_callback(this, painter);
        } else {
            QDateEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdateedit_redirected_isbase) {
            qdateedit_redirected_isbase = false;
            return QDateEdit::redirected(offset);
        } else if (qdateedit_redirected_callback != nullptr) {
            return qdateedit_redirected_callback(this, offset);
        } else {
            return QDateEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdateedit_sharedpainter_isbase) {
            qdateedit_sharedpainter_isbase = false;
            return QDateEdit::sharedPainter();
        } else if (qdateedit_sharedpainter_callback != nullptr) {
            return qdateedit_sharedpainter_callback();
        } else {
            return QDateEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdateedit_inputmethodevent_isbase) {
            qdateedit_inputmethodevent_isbase = false;
            QDateEdit::inputMethodEvent(param1);
        } else if (qdateedit_inputmethodevent_callback != nullptr) {
            qdateedit_inputmethodevent_callback(this, param1);
        } else {
            QDateEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdateedit_eventfilter_isbase) {
            qdateedit_eventfilter_isbase = false;
            return QDateEdit::eventFilter(watched, event);
        } else if (qdateedit_eventfilter_callback != nullptr) {
            return qdateedit_eventfilter_callback(this, watched, event);
        } else {
            return QDateEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdateedit_childevent_isbase) {
            qdateedit_childevent_isbase = false;
            QDateEdit::childEvent(event);
        } else if (qdateedit_childevent_callback != nullptr) {
            qdateedit_childevent_callback(this, event);
        } else {
            QDateEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdateedit_customevent_isbase) {
            qdateedit_customevent_isbase = false;
            QDateEdit::customEvent(event);
        } else if (qdateedit_customevent_callback != nullptr) {
            qdateedit_customevent_callback(this, event);
        } else {
            QDateEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdateedit_connectnotify_isbase) {
            qdateedit_connectnotify_isbase = false;
            QDateEdit::connectNotify(signal);
        } else if (qdateedit_connectnotify_callback != nullptr) {
            qdateedit_connectnotify_callback(this, signal);
        } else {
            QDateEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdateedit_disconnectnotify_isbase) {
            qdateedit_disconnectnotify_isbase = false;
            QDateEdit::disconnectNotify(signal);
        } else if (qdateedit_disconnectnotify_callback != nullptr) {
            qdateedit_disconnectnotify_callback(this, signal);
        } else {
            QDateEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QLineEdit* lineEdit() const {
        if (qdateedit_lineedit_isbase) {
            qdateedit_lineedit_isbase = false;
            return QDateEdit::lineEdit();
        } else if (qdateedit_lineedit_callback != nullptr) {
            return qdateedit_lineedit_callback();
        } else {
            return QDateEdit::lineEdit();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setLineEdit(QLineEdit* edit) {
        if (qdateedit_setlineedit_isbase) {
            qdateedit_setlineedit_isbase = false;
            QDateEdit::setLineEdit(edit);
        } else if (qdateedit_setlineedit_callback != nullptr) {
            qdateedit_setlineedit_callback(this, edit);
        } else {
            QDateEdit::setLineEdit(edit);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdateedit_updatemicrofocus_isbase) {
            qdateedit_updatemicrofocus_isbase = false;
            QDateEdit::updateMicroFocus();
        } else if (qdateedit_updatemicrofocus_callback != nullptr) {
            qdateedit_updatemicrofocus_callback();
        } else {
            QDateEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdateedit_create_isbase) {
            qdateedit_create_isbase = false;
            QDateEdit::create();
        } else if (qdateedit_create_callback != nullptr) {
            qdateedit_create_callback();
        } else {
            QDateEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdateedit_destroy_isbase) {
            qdateedit_destroy_isbase = false;
            QDateEdit::destroy();
        } else if (qdateedit_destroy_callback != nullptr) {
            qdateedit_destroy_callback();
        } else {
            QDateEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdateedit_focusnextchild_isbase) {
            qdateedit_focusnextchild_isbase = false;
            return QDateEdit::focusNextChild();
        } else if (qdateedit_focusnextchild_callback != nullptr) {
            return qdateedit_focusnextchild_callback();
        } else {
            return QDateEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdateedit_focuspreviouschild_isbase) {
            qdateedit_focuspreviouschild_isbase = false;
            return QDateEdit::focusPreviousChild();
        } else if (qdateedit_focuspreviouschild_callback != nullptr) {
            return qdateedit_focuspreviouschild_callback();
        } else {
            return QDateEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdateedit_sender_isbase) {
            qdateedit_sender_isbase = false;
            return QDateEdit::sender();
        } else if (qdateedit_sender_callback != nullptr) {
            return qdateedit_sender_callback();
        } else {
            return QDateEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdateedit_sendersignalindex_isbase) {
            qdateedit_sendersignalindex_isbase = false;
            return QDateEdit::senderSignalIndex();
        } else if (qdateedit_sendersignalindex_callback != nullptr) {
            return qdateedit_sendersignalindex_callback();
        } else {
            return QDateEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdateedit_receivers_isbase) {
            qdateedit_receivers_isbase = false;
            return QDateEdit::receivers(signal);
        } else if (qdateedit_receivers_callback != nullptr) {
            return qdateedit_receivers_callback(this, signal);
        } else {
            return QDateEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdateedit_issignalconnected_isbase) {
            qdateedit_issignalconnected_isbase = false;
            return QDateEdit::isSignalConnected(signal);
        } else if (qdateedit_issignalconnected_callback != nullptr) {
            return qdateedit_issignalconnected_callback(this, signal);
        } else {
            return QDateEdit::isSignalConnected(signal);
        }
    }
};

#endif
