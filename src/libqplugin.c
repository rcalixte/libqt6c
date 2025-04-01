#include "libqjsonobject.hpp"
#include "libqplugin.hpp"
#include "libqplugin.h"

unsigned char q_pluginmetadata_arch_requirements() {
    return QPluginMetaData_ArchRequirements();
}

void q_pluginmetadata_delete(void* self) {
    QPluginMetaData_Delete((QPluginMetaData*)(self));
}

QStaticPlugin* q_staticplugin_new(void* other) {
    return QStaticPlugin_new((QStaticPlugin*)other);
}

QStaticPlugin* q_staticplugin_new2(void* other) {
    return QStaticPlugin_new2((QStaticPlugin*)other);
}

void q_staticplugin_copy_assign(void* self, void* other) {
    QStaticPlugin_CopyAssign((QStaticPlugin*)self, (QStaticPlugin*)other);
}

void q_staticplugin_move_assign(void* self, void* other) {
    QStaticPlugin_MoveAssign((QStaticPlugin*)self, (QStaticPlugin*)other);
}

QJsonObject* q_staticplugin_meta_data(void* self) {
    return QStaticPlugin_MetaData((QStaticPlugin*)self);
}

void q_staticplugin_delete(void* self) {
    QStaticPlugin_Delete((QStaticPlugin*)(self));
}

QPluginMetaData__Header* q_pluginmetadata__header_new(void* other) {
    return QPluginMetaData__Header_new((QPluginMetaData__Header*)other);
}

QPluginMetaData__Header* q_pluginmetadata__header_new2(void* other) {
    return QPluginMetaData__Header_new2((QPluginMetaData__Header*)other);
}

QPluginMetaData__Header* q_pluginmetadata__header_new3(void* param1) {
    return QPluginMetaData__Header_new3((QPluginMetaData__Header*)param1);
}

void q_pluginmetadata__header_copy_assign(void* self, void* other) {
    QPluginMetaData__Header_CopyAssign((QPluginMetaData__Header*)self, (QPluginMetaData__Header*)other);
}

void q_pluginmetadata__header_move_assign(void* self, void* other) {
    QPluginMetaData__Header_MoveAssign((QPluginMetaData__Header*)self, (QPluginMetaData__Header*)other);
}

void q_pluginmetadata__header_delete(void* self) {
    QPluginMetaData__Header_Delete((QPluginMetaData__Header*)(self));
}

QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new(void* other) {
    return QPluginMetaData__MagicHeader_new((QPluginMetaData__MagicHeader*)other);
}

QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new2(void* other) {
    return QPluginMetaData__MagicHeader_new2((QPluginMetaData__MagicHeader*)other);
}

QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new3() {
    return QPluginMetaData__MagicHeader_new3();
}

void q_pluginmetadata__magicheader_copy_assign(void* self, void* other) {
    QPluginMetaData__MagicHeader_CopyAssign((QPluginMetaData__MagicHeader*)self, (QPluginMetaData__MagicHeader*)other);
}

void q_pluginmetadata__magicheader_move_assign(void* self, void* other) {
    QPluginMetaData__MagicHeader_MoveAssign((QPluginMetaData__MagicHeader*)self, (QPluginMetaData__MagicHeader*)other);
}

void q_pluginmetadata__magicheader_delete(void* self) {
    QPluginMetaData__MagicHeader_Delete((QPluginMetaData__MagicHeader*)(self));
}

QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new(void* other) {
    return QPluginMetaData__ElfNoteHeader_new((QPluginMetaData__ElfNoteHeader*)other);
}

QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new2(void* other) {
    return QPluginMetaData__ElfNoteHeader_new2((QPluginMetaData__ElfNoteHeader*)other);
}

QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new3(uint32_t payloadSize) {
    return QPluginMetaData__ElfNoteHeader_new3(payloadSize);
}

QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new4(void* param1) {
    return QPluginMetaData__ElfNoteHeader_new4((QPluginMetaData__ElfNoteHeader*)param1);
}

void q_pluginmetadata__elfnoteheader_copy_assign(void* self, void* other) {
    QPluginMetaData__ElfNoteHeader_CopyAssign((QPluginMetaData__ElfNoteHeader*)self, (QPluginMetaData__ElfNoteHeader*)other);
}

void q_pluginmetadata__elfnoteheader_move_assign(void* self, void* other) {
    QPluginMetaData__ElfNoteHeader_MoveAssign((QPluginMetaData__ElfNoteHeader*)self, (QPluginMetaData__ElfNoteHeader*)other);
}

void q_pluginmetadata__elfnoteheader_delete(void* self) {
    QPluginMetaData__ElfNoteHeader_Delete((QPluginMetaData__ElfNoteHeader*)(self));
}
