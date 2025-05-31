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

/// https://doc.qt.io/qt-6/qpluginmetadata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#archRequirements)
///
///
unsigned char q_pluginmetadata_arch_requirements();

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata.html#dtor.QPluginMetaData)
///
/// Delete this object from C++ memory.
///
/// ``` QPluginMetaData* self ```
void q_pluginmetadata_delete(void* self);

/// https://doc.qt.io/qt-6/qstaticplugin.html

/// q_staticplugin_new constructs a new QStaticPlugin object.
///
/// ``` QStaticPlugin* other ```
QStaticPlugin* q_staticplugin_new(void* other);

/// q_staticplugin_new2 constructs a new QStaticPlugin object and invalidates the source QStaticPlugin object.
///
/// ``` QStaticPlugin* other ```
QStaticPlugin* q_staticplugin_new2(void* other);

/// q_staticplugin_copy_assign shallow copies `other` into `self`.
///
/// ``` QStaticPlugin* self, QStaticPlugin* other ```
void q_staticplugin_copy_assign(void* self, void* other);

/// q_staticplugin_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QStaticPlugin* self, QStaticPlugin* other ```
void q_staticplugin_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstaticplugin.html#metaData)
///
/// ``` QStaticPlugin* self ```
QJsonObject* q_staticplugin_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstaticplugin.html#dtor.QStaticPlugin)
///
/// Delete this object from C++ memory.
///
/// ``` QStaticPlugin* self ```
void q_staticplugin_delete(void* self);

/// https://doc.qt.io/qt-6/qpluginmetadata-header.html

/// q_pluginmetadata__header_new constructs a new QPluginMetaData::Header object.
///
/// ``` QPluginMetaData__Header* other ```
QPluginMetaData__Header* q_pluginmetadata__header_new(void* other);

/// q_pluginmetadata__header_new2 constructs a new QPluginMetaData::Header object and invalidates the source QPluginMetaData::Header object.
///
/// ``` QPluginMetaData__Header* other ```
QPluginMetaData__Header* q_pluginmetadata__header_new2(void* other);

/// q_pluginmetadata__header_new3 constructs a new QPluginMetaData::Header object.
///
/// ``` QPluginMetaData__Header* param1 ```
QPluginMetaData__Header* q_pluginmetadata__header_new3(void* param1);

/// q_pluginmetadata__header_copy_assign shallow copies `other` into `self`.
///
/// ``` QPluginMetaData__Header* self, QPluginMetaData__Header* other ```
void q_pluginmetadata__header_copy_assign(void* self, void* other);

/// q_pluginmetadata__header_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPluginMetaData__Header* self, QPluginMetaData__Header* other ```
void q_pluginmetadata__header_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata::header.html#dtor.QPluginMetaData::Header)
///
/// Delete this object from C++ memory.
///
/// ``` QPluginMetaData__Header* self ```
void q_pluginmetadata__header_delete(void* self);

/// https://doc.qt.io/qt-6/qpluginmetadata-magicheader.html

/// q_pluginmetadata__magicheader_new constructs a new QPluginMetaData::MagicHeader object.
///
/// ``` QPluginMetaData__MagicHeader* other ```
QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new(void* other);

/// q_pluginmetadata__magicheader_new2 constructs a new QPluginMetaData::MagicHeader object and invalidates the source QPluginMetaData::MagicHeader object.
///
/// ``` QPluginMetaData__MagicHeader* other ```
QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new2(void* other);

/// q_pluginmetadata__magicheader_new3 constructs a new QPluginMetaData::MagicHeader object.
///
///
QPluginMetaData__MagicHeader* q_pluginmetadata__magicheader_new3();

/// q_pluginmetadata__magicheader_copy_assign shallow copies `other` into `self`.
///
/// ``` QPluginMetaData__MagicHeader* self, QPluginMetaData__MagicHeader* other ```
void q_pluginmetadata__magicheader_copy_assign(void* self, void* other);

/// q_pluginmetadata__magicheader_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPluginMetaData__MagicHeader* self, QPluginMetaData__MagicHeader* other ```
void q_pluginmetadata__magicheader_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata::magicheader.html#dtor.QPluginMetaData::MagicHeader)
///
/// Delete this object from C++ memory.
///
/// ``` QPluginMetaData__MagicHeader* self ```
void q_pluginmetadata__magicheader_delete(void* self);

/// https://doc.qt.io/qt-6/qpluginmetadata-elfnoteheader.html

/// q_pluginmetadata__elfnoteheader_new constructs a new QPluginMetaData::ElfNoteHeader object.
///
/// ``` QPluginMetaData__ElfNoteHeader* other ```
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new(void* other);

/// q_pluginmetadata__elfnoteheader_new2 constructs a new QPluginMetaData::ElfNoteHeader object and invalidates the source QPluginMetaData::ElfNoteHeader object.
///
/// ``` QPluginMetaData__ElfNoteHeader* other ```
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new2(void* other);

/// q_pluginmetadata__elfnoteheader_new3 constructs a new QPluginMetaData::ElfNoteHeader object.
///
/// ``` uint32_t payloadSize ```
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new3(uint32_t payloadSize);

/// q_pluginmetadata__elfnoteheader_new4 constructs a new QPluginMetaData::ElfNoteHeader object.
///
/// ``` QPluginMetaData__ElfNoteHeader* param1 ```
QPluginMetaData__ElfNoteHeader* q_pluginmetadata__elfnoteheader_new4(void* param1);

/// q_pluginmetadata__elfnoteheader_copy_assign shallow copies `other` into `self`.
///
/// ``` QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__ElfNoteHeader* other ```
void q_pluginmetadata__elfnoteheader_copy_assign(void* self, void* other);

/// q_pluginmetadata__elfnoteheader_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPluginMetaData__ElfNoteHeader* self, QPluginMetaData__ElfNoteHeader* other ```
void q_pluginmetadata__elfnoteheader_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpluginmetadata::elfnoteheader.html#dtor.QPluginMetaData::ElfNoteHeader)
///
/// Delete this object from C++ memory.
///
/// ``` QPluginMetaData__ElfNoteHeader* self ```
void q_pluginmetadata__elfnoteheader_delete(void* self);

#endif
