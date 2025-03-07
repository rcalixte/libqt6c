#pragma once
#ifndef SRCQT6C_LIBQPLUGIN_H
#define SRCQT6C_LIBQPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqjsonobject.h"

unsigned char q_pluginmetadata_arch_requirements();
void q_pluginmetadata_delete(void* self);

QStaticPlugin* q_staticplugin_new(void* other);
QStaticPlugin* q_staticplugin_new2(void* other);
void q_staticplugin_copy_assign(void* self, void* other);
void q_staticplugin_move_assign(void* self, void* other);
QJsonObject* q_staticplugin_meta_data(void* self);
void q_staticplugin_delete(void* self);

QPluginMetaData__Header* q_pluginmetadata__header_new(void* other);
QPluginMetaData__Header* q_pluginmetadata__header_new2(void* other);
QPluginMetaData__Header* q_pluginmetadata__header_new3(void* param1);
void q_pluginmetadata__header_copy_assign(void* self, void* other);
void q_pluginmetadata__header_move_assign(void* self, void* other);
void q_pluginmetadata__header_delete(void* self);

QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new(void* other);
QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new2(void* other);
QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new3();
void q_pluginmetadata__magicheader_copy_assign(void* self, void* other);
void q_pluginmetadata__magicheader_move_assign(void* self, void* other);
void q_pluginmetadata__magicheader_delete(void* self);

QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new(void* other);
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new2(void* other);
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new3(uint32_t payloadSize);
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new4(void* param1);
void q_pluginmetadata__elfnoteheader_copy_assign(void* self, void* other);
void q_pluginmetadata__elfnoteheader_move_assign(void* self, void* other);
void q_pluginmetadata__elfnoteheader_delete(void* self);

#endif
