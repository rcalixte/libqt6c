#include "../libqaction.hpp"
#include "libtaskmenu.hpp"
#include "libtaskmenu.h"

QDesignerTaskMenuExtension* q_designertaskmenuextension_new() {
    return QDesignerTaskMenuExtension_new();
}

QAction* q_designertaskmenuextension_preferred_edit_action(void* self) {
    return QDesignerTaskMenuExtension_PreferredEditAction((QDesignerTaskMenuExtension*)self);
}

void q_designertaskmenuextension_on_preferred_edit_action(void* self, QAction* (*callback)()) {
    QDesignerTaskMenuExtension_OnPreferredEditAction((QDesignerTaskMenuExtension*)self, (intptr_t)callback);
}

QAction* q_designertaskmenuextension_qbase_preferred_edit_action(void* self) {
    return QDesignerTaskMenuExtension_QBasePreferredEditAction((QDesignerTaskMenuExtension*)self);
}

libqt_list /* of QAction* */ q_designertaskmenuextension_task_actions(void* self) {
    libqt_list _arr = QDesignerTaskMenuExtension_TaskActions((QDesignerTaskMenuExtension*)self);
    return _arr;
}

void q_designertaskmenuextension_on_task_actions(void* self, QAction** (*callback)()) {
    QDesignerTaskMenuExtension_OnTaskActions((QDesignerTaskMenuExtension*)self, (intptr_t)callback);
}

libqt_list /* of QAction* */ q_designertaskmenuextension_qbase_task_actions(void* self) {
    libqt_list _arr = QDesignerTaskMenuExtension_QBaseTaskActions((QDesignerTaskMenuExtension*)self);
    return _arr;
}

void q_designertaskmenuextension_delete(void* self) {
    QDesignerTaskMenuExtension_Delete((QDesignerTaskMenuExtension*)(self));
}
