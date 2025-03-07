#include "libqaction.hpp"
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
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqwidgetaction.hpp"
#include "libqwidgetaction.h"

/// https://doc.qt.io/qt-6/qwidgetaction.html

/// q_widgetaction_new constructs a new QWidgetAction object.
///
/// ``` QObject* parent ```
QWidgetAction* q_widgetaction_new(void* parent) {
    return QWidgetAction_new((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWidgetAction* self ```
QMetaObject* q_widgetaction_meta_object(void* self) {
    return QWidgetAction_MetaObject((QWidgetAction*)self);
}

/// ``` QWidgetAction* self, const char* param1 ```
void* q_widgetaction_metacast(void* self, const char* param1) {
    return QWidgetAction_Metacast((QWidgetAction*)self, param1);
}

/// ``` QWidgetAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widgetaction_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidgetAction_Metacall((QWidgetAction*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, int32_t (*slot)(QWidgetAction*, enum QMetaObject__Call, int, void*) ```
void q_widgetaction_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWidgetAction_OnMetacall((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_widgetaction_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWidgetAction_QBaseMetacall((QWidgetAction*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_widgetaction_tr(const char* s) {
    libqt_string _str = QWidgetAction_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
///
/// ``` QWidgetAction* self, QWidget* w ```
void q_widgetaction_set_default_widget(void* self, void* w) {
    QWidgetAction_SetDefaultWidget((QWidgetAction*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
///
/// ``` QWidgetAction* self ```
QWidget* q_widgetaction_default_widget(void* self) {
    return QWidgetAction_DefaultWidget((QWidgetAction*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_request_widget(void* self, void* parent) {
    return QWidgetAction_RequestWidget((QWidgetAction*)self, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_release_widget(void* self, void* widget) {
    QWidgetAction_ReleaseWidget((QWidgetAction*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#event)
///
/// ``` QWidgetAction* self, QEvent* param1 ```
bool q_widgetaction_event(void* self, void* param1) {
    return QWidgetAction_Event((QWidgetAction*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QEvent*) ```
void q_widgetaction_on_event(void* self, bool (*slot)(void*, void*)) {
    QWidgetAction_OnEvent((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self, QEvent* param1 ```
bool q_widgetaction_qbase_event(void* self, void* param1) {
    return QWidgetAction_QBaseEvent((QWidgetAction*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
///
/// ``` QWidgetAction* self, QObject* param1, QEvent* param2 ```
bool q_widgetaction_event_filter(void* self, void* param1, void* param2) {
    return QWidgetAction_EventFilter((QWidgetAction*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QObject*, QEvent*) ```
void q_widgetaction_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWidgetAction_OnEventFilter((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self, QObject* param1, QEvent* param2 ```
bool q_widgetaction_qbase_event_filter(void* self, void* param1, void* param2) {
    return QWidgetAction_QBaseEventFilter((QWidgetAction*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createWidget)
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_create_widget(void* self, void* parent) {
    return QWidgetAction_CreateWidget((QWidgetAction*)self, (QWidget*)parent);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, QWidget* (*slot)(QWidgetAction*, QWidget*) ```
void q_widgetaction_on_create_widget(void* self, QWidget* (*slot)(void*, void*)) {
    QWidgetAction_OnCreateWidget((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self, QWidget* parent ```
QWidget* q_widgetaction_qbase_create_widget(void* self, void* parent) {
    return QWidgetAction_QBaseCreateWidget((QWidgetAction*)self, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_delete_widget(void* self, void* widget) {
    QWidgetAction_DeleteWidget((QWidgetAction*)self, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QWidget*) ```
void q_widgetaction_on_delete_widget(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnDeleteWidget((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self, QWidget* widget ```
void q_widgetaction_qbase_delete_widget(void* self, void* widget) {
    QWidgetAction_QBaseDeleteWidget((QWidgetAction*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QWidget* */ q_widgetaction_created_widgets(void* self) {
    libqt_list _arr = QWidgetAction_CreatedWidgets((QWidgetAction*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QWidgetAction* self, libqt_list /* of QWidget* */ (*slot)() ```
void q_widgetaction_on_created_widgets(void* self, libqt_list /* of QWidget* */ (*slot)()) {
    QWidgetAction_OnCreatedWidgets((QWidgetAction*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWidgetAction* self ```
libqt_list /* of QWidget* */ q_widgetaction_qbase_created_widgets(void* self) {
    libqt_list _arr = QWidgetAction_QBaseCreatedWidgets((QWidgetAction*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_widgetaction_tr2(const char* s, const char* c) {
    libqt_string _str = QWidgetAction_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_widgetaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWidgetAction_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QObject* */ q_widgetaction_associated_objects(void* self) {
    libqt_list _arr = QAction_AssociatedObjects((QAction*)self);
    return _arr;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
///
/// ``` QWidgetAction* self, QActionGroup* group ```
void q_widgetaction_set_action_group(void* self, void* group) {
    QAction_SetActionGroup((QAction*)self, (QActionGroup*)group);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
///
/// ``` QWidgetAction* self ```
QActionGroup* q_widgetaction_action_group(void* self) {
    return QAction_ActionGroup((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
///
/// ``` QWidgetAction* self, QIcon* icon ```
void q_widgetaction_set_icon(void* self, void* icon) {
    QAction_SetIcon((QAction*)self, (QIcon*)icon);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
///
/// ``` QWidgetAction* self ```
QIcon* q_widgetaction_icon(void* self) {
    return QAction_Icon((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
///
/// ``` QWidgetAction* self, const char* text ```
void q_widgetaction_set_text(void* self, const char* text) {
    QAction_SetText((QAction*)self, qstring(text));
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_text(void* self) {
    libqt_string _str = QAction_Text((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
///
/// ``` QWidgetAction* self, const char* text ```
void q_widgetaction_set_icon_text(void* self, const char* text) {
    QAction_SetIconText((QAction*)self, qstring(text));
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_icon_text(void* self) {
    libqt_string _str = QAction_IconText((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
///
/// ``` QWidgetAction* self, const char* tip ```
void q_widgetaction_set_tool_tip(void* self, const char* tip) {
    QAction_SetToolTip((QAction*)self, qstring(tip));
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_tool_tip(void* self) {
    libqt_string _str = QAction_ToolTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
///
/// ``` QWidgetAction* self, const char* statusTip ```
void q_widgetaction_set_status_tip(void* self, const char* statusTip) {
    QAction_SetStatusTip((QAction*)self, qstring(statusTip));
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_status_tip(void* self) {
    libqt_string _str = QAction_StatusTip((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
///
/// ``` QWidgetAction* self, const char* what ```
void q_widgetaction_set_whats_this(void* self, const char* what) {
    QAction_SetWhatsThis((QAction*)self, qstring(what));
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_whats_this(void* self) {
    libqt_string _str = QAction_WhatsThis((QAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
///
/// ``` QWidgetAction* self, enum QAction__Priority priority ```
void q_widgetaction_set_priority(void* self, int64_t priority) {
    QAction_SetPriority((QAction*)self, priority);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_priority(void* self) {
    return QAction_Priority((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
///
/// ``` QWidgetAction* self, bool b ```
void q_widgetaction_set_separator(void* self, bool b) {
    QAction_SetSeparator((QAction*)self, b);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_separator(void* self) {
    return QAction_IsSeparator((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
///
/// ``` QWidgetAction* self, QKeySequence* shortcut ```
void q_widgetaction_set_shortcut(void* self, void* shortcut) {
    QAction_SetShortcut((QAction*)self, (QKeySequence*)shortcut);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
///
/// ``` QWidgetAction* self ```
QKeySequence* q_widgetaction_shortcut(void* self) {
    return QAction_Shortcut((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QWidgetAction* self, QKeySequence* shortcuts[] ```
void q_widgetaction_set_shortcuts(void* self, void* shortcuts[]) {
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

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
///
/// ``` QWidgetAction* self, enum QKeySequence__StandardKey shortcuts ```
void q_widgetaction_set_shortcuts_with_shortcuts(void* self, int64_t shortcuts) {
    QAction_SetShortcutsWithShortcuts((QAction*)self, shortcuts);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QKeySequence* */ q_widgetaction_shortcuts(void* self) {
    libqt_list _arr = QAction_Shortcuts((QAction*)self);
    return _arr;
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
///
/// ``` QWidgetAction* self, enum Qt__ShortcutContext context ```
void q_widgetaction_set_shortcut_context(void* self, int64_t context) {
    QAction_SetShortcutContext((QAction*)self, context);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_shortcut_context(void* self) {
    return QAction_ShortcutContext((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
///
/// ``` QWidgetAction* self, bool autoRepeat ```
void q_widgetaction_set_auto_repeat(void* self, bool autoRepeat) {
    QAction_SetAutoRepeat((QAction*)self, autoRepeat);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_auto_repeat(void* self) {
    return QAction_AutoRepeat((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
///
/// ``` QWidgetAction* self, QFont* font ```
void q_widgetaction_set_font(void* self, void* font) {
    QAction_SetFont((QAction*)self, (QFont*)font);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
///
/// ``` QWidgetAction* self ```
QFont* q_widgetaction_font(void* self) {
    return QAction_Font((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
///
/// ``` QWidgetAction* self, bool checkable ```
void q_widgetaction_set_checkable(void* self, bool checkable) {
    QAction_SetCheckable((QAction*)self, checkable);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_checkable(void* self) {
    return QAction_IsCheckable((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
///
/// ``` QWidgetAction* self ```
QVariant* q_widgetaction_data(void* self) {
    return QAction_Data((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
///
/// ``` QWidgetAction* self, QVariant* varVal ```
void q_widgetaction_set_data(void* self, void* varVal) {
    QAction_SetData((QAction*)self, (QVariant*)varVal);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_checked(void* self) {
    return QAction_IsChecked((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_enabled(void* self) {
    return QAction_IsEnabled((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_visible(void* self) {
    return QAction_IsVisible((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
///
/// ``` QWidgetAction* self, enum QAction__ActionEvent event ```
void q_widgetaction_activate(void* self, int64_t event) {
    QAction_Activate((QAction*)self, event);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
///
/// ``` QWidgetAction* self, enum QAction__MenuRole menuRole ```
void q_widgetaction_set_menu_role(void* self, int64_t menuRole) {
    QAction_SetMenuRole((QAction*)self, menuRole);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
///
/// ``` QWidgetAction* self ```
int64_t q_widgetaction_menu_role(void* self) {
    return QAction_MenuRole((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
///
/// ``` QWidgetAction* self, bool visible ```
void q_widgetaction_set_icon_visible_in_menu(void* self, bool visible) {
    QAction_SetIconVisibleInMenu((QAction*)self, visible);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_icon_visible_in_menu(void* self) {
    return QAction_IsIconVisibleInMenu((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
///
/// ``` QWidgetAction* self, bool show ```
void q_widgetaction_set_shortcut_visible_in_context_menu(void* self, bool show) {
    QAction_SetShortcutVisibleInContextMenu((QAction*)self, show);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_shortcut_visible_in_context_menu(void* self) {
    return QAction_IsShortcutVisibleInContextMenu((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_show_status_text(void* self) {
    return QAction_ShowStatusText((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_trigger(void* self) {
    QAction_Trigger((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_hover(void* self) {
    QAction_Hover((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
///
/// ``` QWidgetAction* self, bool checked ```
void q_widgetaction_set_checked(void* self, bool checked) {
    QAction_SetChecked((QAction*)self, checked);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_toggle(void* self) {
    QAction_Toggle((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
///
/// ``` QWidgetAction* self, bool enabled ```
void q_widgetaction_set_enabled(void* self, bool enabled) {
    QAction_SetEnabled((QAction*)self, enabled);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_reset_enabled(void* self) {
    QAction_ResetEnabled((QAction*)self);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
///
/// ``` QWidgetAction* self, bool b ```
void q_widgetaction_set_disabled(void* self, bool b) {
    QAction_SetDisabled((QAction*)self, b);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
///
/// ``` QWidgetAction* self, bool visible ```
void q_widgetaction_set_visible(void* self, bool visible) {
    QAction_SetVisible((QAction*)self, visible);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_changed(void* self) {
    QAction_Changed((QAction*)self);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_Changed((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
///
/// ``` QWidgetAction* self, bool enabled ```
void q_widgetaction_enabled_changed(void* self, bool enabled) {
    QAction_EnabledChanged((QAction*)self, enabled);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_EnabledChanged((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
///
/// ``` QWidgetAction* self, bool checkable ```
void q_widgetaction_checkable_changed(void* self, bool checkable) {
    QAction_CheckableChanged((QAction*)self, checkable);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_checkable_changed(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_CheckableChanged((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_visible_changed(void* self) {
    QAction_VisibleChanged((QAction*)self);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_visible_changed(void* self, void (*slot)(void*)) {
    QAction_Connect_VisibleChanged((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_triggered(void* self) {
    QAction_Triggered((QAction*)self);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_triggered(void* self, void (*slot)(void*)) {
    QAction_Connect_Triggered((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_hovered(void* self) {
    QAction_Hovered((QAction*)self);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*) ```
void q_widgetaction_on_hovered(void* self, void (*slot)(void*)) {
    QAction_Connect_Hovered((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
///
/// ``` QWidgetAction* self, bool param1 ```
void q_widgetaction_toggled(void* self, bool param1) {
    QAction_Toggled((QAction*)self, param1);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Toggled((QAction*)self, (intptr_t)slot);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
///
/// ``` QWidgetAction* self, QObject* object ```
bool q_widgetaction_show_status_text1(void* self, void* object) {
    return QAction_ShowStatusText1((QAction*)self, (QObject*)object);
}

/// Inherited from QAction
///
/// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
///
/// ``` QWidgetAction* self, bool checked ```
void q_widgetaction_triggered1(void* self, bool checked) {
    QAction_Triggered1((QAction*)self, checked);
}

/// Inherited from QAction
///
/// ``` QWidgetAction* self, void (*slot)(QAction*, bool) ```
void q_widgetaction_on_triggered1(void* self, void (*slot)(void*, bool)) {
    QAction_Connect_Triggered1((QAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWidgetAction* self ```
const char* q_widgetaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWidgetAction* self, const char* name ```
void q_widgetaction_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWidgetAction* self ```
bool q_widgetaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWidgetAction* self, bool b ```
bool q_widgetaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWidgetAction* self ```
QThread* q_widgetaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWidgetAction* self, QThread* thread ```
void q_widgetaction_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidgetAction* self, int interval ```
int32_t q_widgetaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWidgetAction* self, int id ```
void q_widgetaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWidgetAction* self ```
libqt_list /* of QObject* */ q_widgetaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWidgetAction* self, QObject* parent ```
void q_widgetaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWidgetAction* self, QObject* filterObj ```
void q_widgetaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWidgetAction* self, QObject* obj ```
void q_widgetaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_widgetaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidgetAction* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_widgetaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_widgetaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_widgetaction_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWidgetAction* self, const char* name, QVariant* value ```
bool q_widgetaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWidgetAction* self, const char* name ```
QVariant* q_widgetaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWidgetAction* self ```
const char** q_widgetaction_dynamic_property_names(void* self) {
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
/// ``` QWidgetAction* self ```
QBindingStorage* q_widgetaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWidgetAction* self ```
QBindingStorage* q_widgetaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWidgetAction* self, void (*slot)(QObject*) ```
void q_widgetaction_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWidgetAction* self, const char* classname ```
bool q_widgetaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWidgetAction* self ```
void q_widgetaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWidgetAction* self, int interval, enum Qt__TimerType timerType ```
int32_t q_widgetaction_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widgetaction_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWidgetAction* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_widgetaction_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWidgetAction* self, QObject* param1 ```
void q_widgetaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWidgetAction* self, void (*slot)(QObject*, QObject*) ```
void q_widgetaction_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QTimerEvent* event ```
void q_widgetaction_timer_event(void* self, void* event) {
    QWidgetAction_TimerEvent((QWidgetAction*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QTimerEvent* event ```
void q_widgetaction_qbase_timer_event(void* self, void* event) {
    QWidgetAction_QBaseTimerEvent((QWidgetAction*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QTimerEvent*) ```
void q_widgetaction_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnTimerEvent((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QChildEvent* event ```
void q_widgetaction_child_event(void* self, void* event) {
    QWidgetAction_ChildEvent((QWidgetAction*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QChildEvent* event ```
void q_widgetaction_qbase_child_event(void* self, void* event) {
    QWidgetAction_QBaseChildEvent((QWidgetAction*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QChildEvent*) ```
void q_widgetaction_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnChildEvent((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QEvent* event ```
void q_widgetaction_custom_event(void* self, void* event) {
    QWidgetAction_CustomEvent((QWidgetAction*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QEvent* event ```
void q_widgetaction_qbase_custom_event(void* self, void* event) {
    QWidgetAction_QBaseCustomEvent((QWidgetAction*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QEvent*) ```
void q_widgetaction_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnCustomEvent((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_connect_notify(void* self, void* signal) {
    QWidgetAction_ConnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_qbase_connect_notify(void* self, void* signal) {
    QWidgetAction_QBaseConnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnConnectNotify((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_disconnect_notify(void* self, void* signal) {
    QWidgetAction_DisconnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
void q_widgetaction_qbase_disconnect_notify(void* self, void* signal) {
    QWidgetAction_QBaseDisconnectNotify((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, void (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWidgetAction_OnDisconnectNotify((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_sender(void* self) {
    return QWidgetAction_Sender((QWidgetAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self ```
QObject* q_widgetaction_qbase_sender(void* self) {
    return QWidgetAction_QBaseSender((QWidgetAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, QObject* (*slot)() ```
void q_widgetaction_on_sender(void* self, QObject* (*slot)()) {
    QWidgetAction_OnSender((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self ```
int32_t q_widgetaction_sender_signal_index(void* self) {
    return QWidgetAction_SenderSignalIndex((QWidgetAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self ```
int32_t q_widgetaction_qbase_sender_signal_index(void* self) {
    return QWidgetAction_QBaseSenderSignalIndex((QWidgetAction*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, int32_t (*slot)() ```
void q_widgetaction_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWidgetAction_OnSenderSignalIndex((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, const char* signal ```
int32_t q_widgetaction_receivers(void* self, const char* signal) {
    return QWidgetAction_Receivers((QWidgetAction*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, const char* signal ```
int32_t q_widgetaction_qbase_receivers(void* self, const char* signal) {
    return QWidgetAction_QBaseReceivers((QWidgetAction*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, int32_t (*slot)(QWidgetAction*, const char*) ```
void q_widgetaction_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWidgetAction_OnReceivers((QWidgetAction*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
bool q_widgetaction_is_signal_connected(void* self, void* signal) {
    return QWidgetAction_IsSignalConnected((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWidgetAction* self, QMetaMethod* signal ```
bool q_widgetaction_qbase_is_signal_connected(void* self, void* signal) {
    return QWidgetAction_QBaseIsSignalConnected((QWidgetAction*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWidgetAction* self, bool (*slot)(QWidgetAction*, QMetaMethod*) ```
void q_widgetaction_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWidgetAction_OnIsSignalConnected((QWidgetAction*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWidgetAction* self ```
void q_widgetaction_delete(void* self) {
    QWidgetAction_Delete((QWidgetAction*)(self));
}