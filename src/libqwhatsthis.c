#include "libqaction.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include <string.h>
#include "libqwidget.hpp"
#include "libqwhatsthis.hpp"
#include "libqwhatsthis.h"

QWhatsThis* q_whatsthis_new(void* other) {
    return QWhatsThis_new((QWhatsThis*)other);
}

QWhatsThis* q_whatsthis_new2(void* other) {
    return QWhatsThis_new2((QWhatsThis*)other);
}

void q_whatsthis_copy_assign(void* self, void* other) {
    QWhatsThis_CopyAssign((QWhatsThis*)self, (QWhatsThis*)other);
}

void q_whatsthis_move_assign(void* self, void* other) {
    QWhatsThis_MoveAssign((QWhatsThis*)self, (QWhatsThis*)other);
}

void q_whatsthis_enter_whats_this_mode() {
    QWhatsThis_EnterWhatsThisMode();
}

bool q_whatsthis_in_whats_this_mode() {
    return QWhatsThis_InWhatsThisMode();
}

void q_whatsthis_leave_whats_this_mode() {
    QWhatsThis_LeaveWhatsThisMode();
}

void q_whatsthis_show_text(void* pos, const char* text) {
    QWhatsThis_ShowText((QPoint*)pos, qstring(text));
}

void q_whatsthis_hide_text() {
    QWhatsThis_HideText();
}

QAction* q_whatsthis_create_action() {
    return QWhatsThis_CreateAction();
}

void q_whatsthis_show_text3(void* pos, const char* text, void* w) {
    QWhatsThis_ShowText3((QPoint*)pos, qstring(text), (QWidget*)w);
}

QAction* q_whatsthis_create_action1(void* parent) {
    return QWhatsThis_CreateAction1((QObject*)parent);
}

void q_whatsthis_delete(void* self) {
    QWhatsThis_Delete((QWhatsThis*)(self));
}
