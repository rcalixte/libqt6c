#include "libqjsonobject.hpp"
#include "libqplugin.hpp"
#include "libqplugin.h"

QStaticPlugin* q_staticplugin_new(void* other) {
    return QStaticPlugin_new((QStaticPlugin*)other);
}

QStaticPlugin* q_staticplugin_new2(void* other) {
    return QStaticPlugin_new2((QStaticPlugin*)other);
}

QStaticPlugin* q_staticplugin_new3(void* param1) {
    return QStaticPlugin_new3((QStaticPlugin*)param1);
}

void q_staticplugin_copy_assign(void* self, void* other) {
    QStaticPlugin_CopyAssign((QStaticPlugin*)self, (QStaticPlugin*)other);
}

void q_staticplugin_move_assign(void* self, void* other) {
    QStaticPlugin_MoveAssign((QStaticPlugin*)self, (QStaticPlugin*)other);
}

QObject__void__Function q_staticplugin_instance(void* self) {
    return (QObject__void__Function)QStaticPlugin_Instance((QStaticPlugin*)self);
}

void q_staticplugin_set_instance(void* self, QObject* (*instance)()) {
    QStaticPlugin_SetInstance((QStaticPlugin*)self, (intptr_t)instance);
}

QJsonObject* q_staticplugin_meta_data(void* self) {
    return QStaticPlugin_MetaData((QStaticPlugin*)self);
}

void q_staticplugin_delete(void* self) {
    QStaticPlugin_Delete((QStaticPlugin*)(self));
}
