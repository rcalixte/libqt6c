#include "libqaction.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqwhatsthis.hpp"
#include "libqwhatsthis.h"

/// https://doc.qt.io/qt-6/qwhatsthis.html

/// q_whatsthis_new constructs a new QWhatsThis object.
///
/// ``` QWhatsThis* other ```
QWhatsThis* q_whatsthis_new(void* other) {
    return QWhatsThis_new((QWhatsThis*)other);
}

/// q_whatsthis_new2 constructs a new QWhatsThis object and invalidates the source QWhatsThis object.
///
/// ``` QWhatsThis* other ```
QWhatsThis* q_whatsthis_new2(void* other) {
    return QWhatsThis_new2((QWhatsThis*)other);
}

/// q_whatsthis_copy_assign shallow copies `other` into `self`.
///
/// ``` QWhatsThis* self, QWhatsThis* other ```
void q_whatsthis_copy_assign(void* self, void* other) {
    QWhatsThis_CopyAssign((QWhatsThis*)self, (QWhatsThis*)other);
}

/// q_whatsthis_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QWhatsThis* self, QWhatsThis* other ```
void q_whatsthis_move_assign(void* self, void* other) {
    QWhatsThis_MoveAssign((QWhatsThis*)self, (QWhatsThis*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#enterWhatsThisMode)
///
///
void q_whatsthis_enter_whats_this_mode() {
    QWhatsThis_EnterWhatsThisMode();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#inWhatsThisMode)
///
///
bool q_whatsthis_in_whats_this_mode() {
    return QWhatsThis_InWhatsThisMode();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#leaveWhatsThisMode)
///
///
void q_whatsthis_leave_whats_this_mode() {
    QWhatsThis_LeaveWhatsThisMode();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// ``` QPoint* pos, const char* text ```
void q_whatsthis_show_text(void* pos, const char* text) {
    QWhatsThis_ShowText((QPoint*)pos, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#hideText)
///
///
void q_whatsthis_hide_text() {
    QWhatsThis_HideText();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
///
QAction* q_whatsthis_create_action() {
    return QWhatsThis_CreateAction();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#showText)
///
/// ``` QPoint* pos, const char* text, QWidget* w ```
void q_whatsthis_show_text3(void* pos, const char* text, void* w) {
    QWhatsThis_ShowText3((QPoint*)pos, qstring(text), (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwhatsthis.html#createAction)
///
/// ``` QObject* parent ```
QAction* q_whatsthis_create_action1(void* parent) {
    return QWhatsThis_CreateAction1((QObject*)parent);
}

/// Delete this object from C++ memory.
///
/// ``` QWhatsThis* self ```
void q_whatsthis_delete(void* self) {
    QWhatsThis_Delete((QWhatsThis*)(self));
}