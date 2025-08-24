#include "libqjsonobject.hpp"
#include "libqplugin.hpp"
#include "libqplugin.h"

unsigned char q_pluginmetadata_arch_requirements() {
    return QPluginMetaData_ArchRequirements();
}

uint64_t q_pluginmetadata_size(void* self) {
    return QPluginMetaData_Size((QPluginMetaData*)self);
}

void q_pluginmetadata_set_size(void* self, uint64_t size) {
    QPluginMetaData_SetSize((QPluginMetaData*)self, size);
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

QStaticPlugin* q_staticplugin_new3(void* param1) {
    return QStaticPlugin_new3((QStaticPlugin*)param1);
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

unsigned char q_pluginmetadata__header_version(void* self) {
    return QPluginMetaData__Header_Version((QPluginMetaData__Header*)self);
}

void q_pluginmetadata__header_set_version(void* self, unsigned char version) {
    QPluginMetaData__Header_SetVersion((QPluginMetaData__Header*)self, version);
}

unsigned char q_pluginmetadata__header_major_version(void* self) {
    return QPluginMetaData__Header_MajorVersion((QPluginMetaData__Header*)self);
}

void q_pluginmetadata__header_set_qt_major_version(void* self, unsigned char qt_major_version) {
    QPluginMetaData__Header_SetQtMajorVersion((QPluginMetaData__Header*)self, qt_major_version);
}

unsigned char q_pluginmetadata__header_minor_version(void* self) {
    return QPluginMetaData__Header_MinorVersion((QPluginMetaData__Header*)self);
}

void q_pluginmetadata__header_set_qt_minor_version(void* self, unsigned char qt_minor_version) {
    QPluginMetaData__Header_SetQtMinorVersion((QPluginMetaData__Header*)self, qt_minor_version);
}

unsigned char q_pluginmetadata__header_plugin_arch_requirements(void* self) {
    return QPluginMetaData__Header_PluginArchRequirements((QPluginMetaData__Header*)self);
}

void q_pluginmetadata__header_set_plugin_arch_requirements(void* self, unsigned char plugin_arch_requirements) {
    QPluginMetaData__Header_SetPluginArchRequirements((QPluginMetaData__Header*)self, plugin_arch_requirements);
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

QPluginMetaData__Header* q_pluginmetadata__magicheader_header(void* self) {
    return QPluginMetaData__MagicHeader_Header((QPluginMetaData__MagicHeader*)self);
}

void q_pluginmetadata__magicheader_set_header(void* self, void* header) {
    QPluginMetaData__MagicHeader_SetHeader((QPluginMetaData__MagicHeader*)self, (QPluginMetaData__Header*)header);
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

uint32_t q_pluginmetadata__elfnoteheader_n_namesz(void* self) {
    return QPluginMetaData__ElfNoteHeader_NNamesz((QPluginMetaData__ElfNoteHeader*)self);
}

void q_pluginmetadata__elfnoteheader_set_n_namesz(void* self, uint32_t n_namesz) {
    QPluginMetaData__ElfNoteHeader_SetNNamesz((QPluginMetaData__ElfNoteHeader*)self, n_namesz);
}

uint32_t q_pluginmetadata__elfnoteheader_n_descsz(void* self) {
    return QPluginMetaData__ElfNoteHeader_NDescsz((QPluginMetaData__ElfNoteHeader*)self);
}

void q_pluginmetadata__elfnoteheader_set_n_descsz(void* self, uint32_t n_descsz) {
    QPluginMetaData__ElfNoteHeader_SetNDescsz((QPluginMetaData__ElfNoteHeader*)self, n_descsz);
}

uint32_t q_pluginmetadata__elfnoteheader_n_type(void* self) {
    return QPluginMetaData__ElfNoteHeader_NType((QPluginMetaData__ElfNoteHeader*)self);
}

void q_pluginmetadata__elfnoteheader_set_n_type(void* self, uint32_t n_type) {
    QPluginMetaData__ElfNoteHeader_SetNType((QPluginMetaData__ElfNoteHeader*)self, n_type);
}

QPluginMetaData__Header* q_pluginmetadata__elfnoteheader_header(void* self) {
    return QPluginMetaData__ElfNoteHeader_Header((QPluginMetaData__ElfNoteHeader*)self);
}

void q_pluginmetadata__elfnoteheader_set_header(void* self, void* header) {
    QPluginMetaData__ElfNoteHeader_SetHeader((QPluginMetaData__ElfNoteHeader*)self, (QPluginMetaData__Header*)header);
}

void q_pluginmetadata__elfnoteheader_delete(void* self) {
    QPluginMetaData__ElfNoteHeader_Delete((QPluginMetaData__ElfNoteHeader*)(self));
}
