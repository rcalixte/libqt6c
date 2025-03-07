#include "libqactiongroup.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqfont.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqaction.hpp"
#include "libqaction.h"

/// https://doc.qt.io/qt-6/qaction.html

/// q_action_new constructs a new QAction object.
///
///
QAction* q_action_new() {
    return QAction_new();
}

/// q_action_new2 constructs a new QAction object.
///
/// ``` const char* text ```
QAction* q_action_new2(const char* text) {
    return QAction_new2(qstring(text));
}

/// q_action_new3 constructs a new QAction object.
///
/// ``` QIcon* icon, const char* text ```
QAction* q_action_new3(void* icon, const char* text) {
    return QAction_new3((QIcon*)icon, qstring(text));
}

/// q_action_new4 constructs a new QAction object.
///
/// ``` QObject* parent ```
QAction* q_action_new4(void* parent) {
    return QAction_new4((QObject*)parent);
}

/// q_action_new5 constructs a new QAction object.
///
/// ``` const char* text, QObject* parent ```
QAction* q_action_new5(const char* text, void* parent) {
    return QAction_new5(qstring(text), (QObject*)parent);
}

/// q_action_new6 constructs a new QAction object.
///
/// ``` QIcon* icon, const char* text, QObject* parent ```
QAction* q_action_new6(void* icon, const char* text, void* parent) {
    return QAction_new6((QIcon*)icon, qstring(text), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAction* self ```
QMetaObject* q_action_meta_object(void* self) {
    return QAction_MetaObject((QAction*)self);
}

/// ``` QAction* self, const char* param1 ```
void* q_action_metacast(void* self, const char* param1) {
    return QAction_Metacast((QAction*)self, param1);
}

/// ``` QAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_action_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAction_Metacall((QAction*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAction* self, int32_t (*slot)(QAction*, enum QMetaObject__Call, int, void*) ```
void q_action_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAction_OnMetacall((QAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_action_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAction_QBaseMetacall((QAction*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_action_tr(const char* s) {
    libqt_string _str = QAction_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// ``` QAction* self ```
libqt_list /* of QObject* */ q_action_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// ``` QAction* self, QActionGroup* group ```
void q_action_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// ``` QAction* self ```
QActionGroup* q_action_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// ``` QAction* self, QIcon* icon ```
void q_action_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// ``` QAction* self ```
QIcon* q_action_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// ``` QAction* self, const char* text ```
void q_action_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// ``` QAction* self ```
const char* q_action_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// ``` QAction* self, const char* text ```
void q_action_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// ``` QAction* self ```
const char* q_action_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// ``` QAction* self, const char* tip ```
void q_action_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// ``` QAction* self ```
const char* q_action_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// ``` QAction* self, const char* statusTip ```
void q_action_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// ``` QAction* self ```
const char* q_action_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// ``` QAction* self, const char* what ```
void q_action_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// ``` QAction* self ```
const char* q_action_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// ``` QAction* self, enum QAction__Priority priority ```
void q_action_set_priority(void* self, int64_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// ``` QAction* self ```
int64_t q_action_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// ``` QAction* self, bool b ```
void q_action_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// ``` QAction* self ```
bool q_action_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// ``` QAction* self, QKeySequence* shortcut ```
void q_action_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// ``` QAction* self ```
QKeySequence* q_action_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QAction* self, QKeySequence* shortcuts[] ```
void q_action_set_shortcuts(void* self, void* shortcuts[]) {
    QKeySequence** shortcuts_arr = (QKeySequence**)shortcuts;
    size_t shortcuts_len = 0;
    while (shortcuts_arr[shortcuts_len] != NULL) {
        shortcuts_len++;
    }
    libqt_list shortcuts_list = {
        .len = shortcuts_len,
        .data = {(QKeySequence*)shortcuts},
    };
    QAction_SetShortcuts((QAction*)self, shortcuts_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QAction* self, enum QKeySequence__StandardKey shortcuts ```
void q_action_set_shortcuts_with_shortcuts(void* self, int64_t shortcuts) {
    QAction_SetShortcutsWithShortcuts((QAction*)self, shortcuts);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// ``` QAction* self ```
libqt_list /* of QKeySequence* */ q_action_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// ``` QAction* self, enum Qt__ShortcutContext context ```
void q_action_set_shortcut_context(void* self, int64_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// ``` QAction* self ```
int64_t q_action_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// ``` QAction* self, bool autoRepeat ```
void q_action_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// ``` QAction* self ```
bool q_action_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// ``` QAction* self, QFont* font ```
void q_action_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// ``` QAction* self ```
QFont* q_action_font(void* self) {
    return QAction_Font((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// ``` QAction* self, bool checkable ```
void q_action_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// ``` QAction* self ```
bool q_action_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// ``` QAction* self ```
QVariant* q_action_data(void* self) {
    return QAction_Data((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// ``` QAction* self, QVariant* varVal ```
void q_action_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// ``` QAction* self ```
bool q_action_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// ``` QAction* self ```
bool q_action_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// ``` QAction* self ```
bool q_action_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// ``` QAction* self, enum QAction__ActionEvent event ```
void q_action_activate(void* self, int64_t event) {
    QAction_Activate((QAction*)self, event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// ``` QAction* self, enum QAction__MenuRole menuRole ```
void q_action_set_menu_role(void* self, int64_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// ``` QAction* self ```
int64_t q_action_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// ``` QAction* self, bool visible ```
void q_action_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// ``` QAction* self ```
bool q_action_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// ``` QAction* self, bool show ```
void q_action_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// ``` QAction* self ```
bool q_action_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QAction* self ```
bool q_action_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
///
/// ``` QAction* self, QEvent* param1 ```
bool q_action_event(void* self, void* param1) {
    return QAction_Event((QAction*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAction* self, bool (*slot)(QAction*, QEvent*) ```
void q_action_on_event(void* self, bool (*slot)(void*, void*)) {
    QAction_OnEvent((QAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAction* self, QEvent* param1 ```
bool q_action_qbase_event(void* self, void* param1) {
    return QAction_QBaseEvent((QAction*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// ``` QAction* self ```
void q_action_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// ``` QAction* self ```
void q_action_hover(void* self) {
    QAction_Hover((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// ``` QAction* self, bool checked ```
void q_action_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// ``` QAction* self ```
void q_action_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// ``` QAction* self, bool enabled ```
void q_action_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// ``` QAction* self ```
void q_action_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// ``` QAction* self, bool b ```
void q_action_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// ``` QAction* self, bool visible ```
void q_action_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QAction* self ```
void q_action_changed(void* self) {
    QAction_Changed((QAction*)self);
}

/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QAction* self, bool enabled ```
void q_action_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QAction* self, bool checkable ```
void q_action_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_checkable_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QAction* self ```
void q_action_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_visible_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self ```
void q_action_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_triggered(void* self, void (*slot)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QAction* self ```
void q_action_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

/// ``` QAction* self, void (*slot)(QAction*) ```
void q_action_on_hovered(void* self, void (*slot)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QAction* self, bool param1 ```
void q_action_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_action_tr2(const char* s, const char* c) {
    libqt_string _str = QAction_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_action_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAction_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QAction* self, QObject* object ```
bool q_action_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QAction* self, bool checked ```
void q_action_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

/// ``` QAction* self, void (*slot)(QAction*, bool) ```
void q_action_on_triggered1(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAction* self ```
const char* q_action_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAction* self, const char* name ```
void q_action_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAction* self ```
bool q_action_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAction* self ```
bool q_action_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAction* self ```
bool q_action_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAction* self ```
bool q_action_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAction* self, bool b ```
bool q_action_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAction* self ```
QThread* q_action_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAction* self, QThread* thread ```
void q_action_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAction* self, int interval ```
int32_t q_action_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAction* self, int id ```
void q_action_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAction* self ```
libqt_list /* of QObject* */ q_action_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAction* self, QObject* parent ```
void q_action_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAction* self, QObject* filterObj ```
void q_action_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAction* self, QObject* obj ```
void q_action_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_action_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAction* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_action_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_action_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_action_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAction* self ```
void q_action_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAction* self ```
void q_action_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAction* self, const char* name, QVariant* value ```
bool q_action_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAction* self, const char* name ```
QVariant* q_action_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAction* self ```
const char** q_action_dynamic_property_names(void* self) {
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
/// ``` QAction* self ```
QBindingStorage* q_action_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAction* self ```
QBindingStorage* q_action_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self ```
void q_action_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAction* self, void (*slot)(QObject*) ```
void q_action_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAction* self ```
QObject* q_action_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAction* self, const char* classname ```
bool q_action_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAction* self ```
void q_action_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAction* self, int interval, enum Qt__TimerType timerType ```
int32_t q_action_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_action_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAction* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_action_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAction* self, QObject* param1 ```
void q_action_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAction* self, void (*slot)(QObject*, QObject*) ```
void q_action_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QObject* watched, QEvent* event ```
bool q_action_event_filter(void* self, void* watched, void* event) {
    return QAction_EventFilter((QAction*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QObject* watched, QEvent* event ```
bool q_action_qbase_event_filter(void* self, void* watched, void* event) {
    return QAction_QBaseEventFilter((QAction*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, bool (*slot)(QAction*, QObject*, QEvent*) ```
void q_action_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAction_OnEventFilter((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QTimerEvent* event ```
void q_action_timer_event(void* self, void* event) {
    QAction_TimerEvent((QAction*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QTimerEvent* event ```
void q_action_qbase_timer_event(void* self, void* event) {
    QAction_QBaseTimerEvent((QAction*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QTimerEvent*) ```
void q_action_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAction_OnTimerEvent((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QChildEvent* event ```
void q_action_child_event(void* self, void* event) {
    QAction_ChildEvent((QAction*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QChildEvent* event ```
void q_action_qbase_child_event(void* self, void* event) {
    QAction_QBaseChildEvent((QAction*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QChildEvent*) ```
void q_action_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAction_OnChildEvent((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QEvent* event ```
void q_action_custom_event(void* self, void* event) {
    QAction_CustomEvent((QAction*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QEvent* event ```
void q_action_qbase_custom_event(void* self, void* event) {
    QAction_QBaseCustomEvent((QAction*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QEvent*) ```
void q_action_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAction_OnCustomEvent((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_connect_notify(void* self, void* signal) {
    QAction_ConnectNotify((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_qbase_connect_notify(void* self, void* signal) {
    QAction_QBaseConnectNotify((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAction_OnConnectNotify((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_disconnect_notify(void* self, void* signal) {
    QAction_DisconnectNotify((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
void q_action_qbase_disconnect_notify(void* self, void* signal) {
    QAction_QBaseDisconnectNotify((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, void (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAction_OnDisconnectNotify((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self ```
QObject* q_action_sender(void* self) {
    return QAction_Sender((QAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self ```
QObject* q_action_qbase_sender(void* self) {
    return QAction_QBaseSender((QAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, QObject* (*slot)() ```
void q_action_on_sender(void* self, QObject* (*slot)()) {
    QAction_OnSender((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self ```
int32_t q_action_sender_signal_index(void* self) {
    return QAction_SenderSignalIndex((QAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self ```
int32_t q_action_qbase_sender_signal_index(void* self) {
    return QAction_QBaseSenderSignalIndex((QAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, int32_t (*slot)() ```
void q_action_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAction_OnSenderSignalIndex((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, const char* signal ```
int32_t q_action_receivers(void* self, const char* signal) {
    return QAction_Receivers((QAction*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, const char* signal ```
int32_t q_action_qbase_receivers(void* self, const char* signal) {
    return QAction_QBaseReceivers((QAction*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, int32_t (*slot)(QAction*, const char*) ```
void q_action_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAction_OnReceivers((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
bool q_action_is_signal_connected(void* self, void* signal) {
    return QAction_IsSignalConnected((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAction* self, QMetaMethod* signal ```
bool q_action_qbase_is_signal_connected(void* self, void* signal) {
    return QAction_QBaseIsSignalConnected((QAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAction* self, bool (*slot)(QAction*, QMetaMethod*) ```
void q_action_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAction_OnIsSignalConnected((QAction*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAction* self ```
void q_action_delete(void* self) {
    QAction_Delete((QAction*)(self));
}