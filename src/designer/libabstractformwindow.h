#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOW_H
#define SRC_DESIGNER_QT6C_LIBABSTRACTFORMWINDOW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDesignerFormWindowInterface*
///
const QMetaObject* q_designerformwindowinterface_meta_object(void* self);

/// @param self QDesignerFormWindowInterface*
/// @param param1 const char*
///
void* q_designerformwindowinterface_metacast(void* self, const char* param1);

/// @param self QDesignerFormWindowInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_designerformwindowinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_designerformwindowinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#absoluteDir)
///
/// @param self QDesignerFormWindowInterface*
///
QDir* q_designerformwindowinterface_absolute_dir(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#contents)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#checkContents)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char** q_designerformwindowinterface_check_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#features)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return flag of enum QDesignerFormWindowInterface__FeatureFlag
///
int32_t q_designerformwindowinterface_features(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#hasFeature)
///
/// @param self QDesignerFormWindowInterface*
/// @param f flag of enum QDesignerFormWindowInterface__FeatureFlag
///
bool q_designerformwindowinterface_has_feature(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#author)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_author(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setAuthor)
///
/// @param self QDesignerFormWindowInterface*
/// @param author const char*
///
void q_designerformwindowinterface_set_author(void* self, const char* author);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#comment)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_comment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setComment)
///
/// @param self QDesignerFormWindowInterface*
/// @param comment const char*
///
void q_designerformwindowinterface_set_comment(void* self, const char* comment);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#layoutDefault)
///
/// @param self QDesignerFormWindowInterface*
/// @param margin int*
/// @param spacing int*
///
void q_designerformwindowinterface_layout_default(void* self, int* margin, int* spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setLayoutDefault)
///
/// @param self QDesignerFormWindowInterface*
/// @param margin int
/// @param spacing int
///
void q_designerformwindowinterface_set_layout_default(void* self, int margin, int spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setLayoutFunction)
///
/// @param self QDesignerFormWindowInterface*
/// @param margin const char*
/// @param spacing const char*
///
void q_designerformwindowinterface_set_layout_function(void* self, const char* margin, const char* spacing);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#pixmapFunction)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_pixmap_function(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setPixmapFunction)
///
/// @param self QDesignerFormWindowInterface*
/// @param pixmapFunction const char*
///
void q_designerformwindowinterface_set_pixmap_function(void* self, const char* pixmapFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#exportMacro)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_export_macro(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setExportMacro)
///
/// @param self QDesignerFormWindowInterface*
/// @param exportMacro const char*
///
void q_designerformwindowinterface_set_export_macro(void* self, const char* exportMacro);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#includeHints)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char** q_designerformwindowinterface_include_hints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setIncludeHints)
///
/// @param self QDesignerFormWindowInterface*
/// @param includeHints const char**
///
void q_designerformwindowinterface_set_include_hints(void* self, const char* includeHints[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFileSaveMode)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum QDesignerFormWindowInterface__ResourceFileSaveMode
///
int32_t q_designerformwindowinterface_resource_file_save_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setResourceFileSaveMode)
///
/// @param self QDesignerFormWindowInterface*
/// @param behaviour enum QDesignerFormWindowInterface__ResourceFileSaveMode
///
void q_designerformwindowinterface_set_resource_file_save_mode(void* self, int32_t behaviour);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activeResourceFilePaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char** q_designerformwindowinterface_active_resource_file_paths(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#core)
///
/// @param self QDesignerFormWindowInterface*
///
QDesignerFormEditorInterface* q_designerformwindowinterface_core(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#cursor)
///
/// @param self QDesignerFormWindowInterface*
///
QDesignerFormWindowCursorInterface* q_designerformwindowinterface_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolCount)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_tool_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#currentTool)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_current_tool(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setCurrentTool)
///
/// @param self QDesignerFormWindowInterface*
/// @param index int
///
void q_designerformwindowinterface_set_current_tool(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#tool)
///
/// @param self QDesignerFormWindowInterface*
/// @param index int
///
QDesignerFormWindowToolInterface* q_designerformwindowinterface_tool(void* self, int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#registerTool)
///
/// @param self QDesignerFormWindowInterface*
/// @param tool QDesignerFormWindowToolInterface*
///
void q_designerformwindowinterface_register_tool(void* self, void* tool);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#grid)
///
/// @param self QDesignerFormWindowInterface*
///
QPoint* q_designerformwindowinterface_grid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainer)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_main_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setMainContainer)
///
/// @param self QDesignerFormWindowInterface*
/// @param mainContainer QWidget*
///
void q_designerformwindowinterface_set_main_container(void* self, void* mainContainer);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#formContainer)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_form_container(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#isManaged)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
bool q_designerformwindowinterface_is_managed(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#isDirty)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#findFormWindow)
///
/// @param w QWidget*
///
QDesignerFormWindowInterface* q_designerformwindowinterface_find_form_window(void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#findFormWindow)
///
/// @param obj QObject*
///
QDesignerFormWindowInterface* q_designerformwindowinterface_find_form_window2(void* obj);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#commandHistory)
///
/// @param self QDesignerFormWindowInterface*
///
QUndoStack* q_designerformwindowinterface_command_history(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#beginCommand)
///
/// @param self QDesignerFormWindowInterface*
/// @param description const char*
///
void q_designerformwindowinterface_begin_command(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#endCommand)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_end_command(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#simplifySelection)
///
/// @param self QDesignerFormWindowInterface*
/// @param widgets libqt_list of QWidget*
///
void q_designerformwindowinterface_simplify_selection(void* self, libqt_list /* of QWidget* */ widgets);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#emitSelectionChanged)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_emit_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFiles)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char** q_designerformwindowinterface_resource_files(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#addResourceFile)
///
/// @param self QDesignerFormWindowInterface*
/// @param path const char*
///
void q_designerformwindowinterface_add_resource_file(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#removeResourceFile)
///
/// @param self QDesignerFormWindowInterface*
/// @param path const char*
///
void q_designerformwindowinterface_remove_resource_file(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#ensureUniqueObjectName)
///
/// @param self QDesignerFormWindowInterface*
/// @param object QObject*
///
void q_designerformwindowinterface_ensure_unique_object_name(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#manageWidget)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_manage_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#unmanageWidget)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_unmanage_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setFeatures)
///
/// @param self QDesignerFormWindowInterface*
/// @param f flag of enum QDesignerFormWindowInterface__FeatureFlag
///
void q_designerformwindowinterface_set_features(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setDirty)
///
/// @param self QDesignerFormWindowInterface*
/// @param dirty bool
///
void q_designerformwindowinterface_set_dirty(void* self, bool dirty);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#clearSelection)
///
/// @param self QDesignerFormWindowInterface*
/// @param changePropertyDisplay bool
///
void q_designerformwindowinterface_clear_selection(void* self, bool changePropertyDisplay);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectWidget)
///
/// @param self QDesignerFormWindowInterface*
/// @param w QWidget*
/// @param selectVal bool
///
void q_designerformwindowinterface_select_widget(void* self, void* w, bool selectVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setGrid)
///
/// @param self QDesignerFormWindowInterface*
/// @param grid QPoint*
///
void q_designerformwindowinterface_set_grid(void* self, void* grid);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setFileName)
///
/// @param self QDesignerFormWindowInterface*
/// @param fileName const char*
///
void q_designerformwindowinterface_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#setContents)
///
/// @param self QDesignerFormWindowInterface*
/// @param contents const char*
///
bool q_designerformwindowinterface_set_contents2(void* self, const char* contents);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#editWidgets)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_edit_widgets(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activateResourceFilePaths)
///
/// @param self QDesignerFormWindowInterface*
/// @param paths const char**
///
void q_designerformwindowinterface_activate_resource_file_paths(void* self, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainerChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param mainContainer QWidget*
///
void q_designerformwindowinterface_main_container_changed(void* self, void* mainContainer);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#mainContainerChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* mainContainer)
///
void q_designerformwindowinterface_on_main_container_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param toolIndex int
///
void q_designerformwindowinterface_tool_changed(void* self, int toolIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#toolChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, int toolIndex)
///
void q_designerformwindowinterface_on_tool_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileNameChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param fileName const char*
///
void q_designerformwindowinterface_file_name_changed(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#fileNameChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, const char* fileName)
///
void q_designerformwindowinterface_on_file_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#featureChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param f flag of enum QDesignerFormWindowInterface__FeatureFlag
///
void q_designerformwindowinterface_feature_changed(void* self, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#featureChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, flag of enum QDesignerFormWindowInterface__FeatureFlag f)
///
void q_designerformwindowinterface_on_feature_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectionChanged)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#selectionChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self)
///
void q_designerformwindowinterface_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#geometryChanged)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_geometry_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#geometryChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self)
///
void q_designerformwindowinterface_on_geometry_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFilesChanged)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_resource_files_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#resourceFilesChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self)
///
void q_designerformwindowinterface_on_resource_files_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetManaged)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_widget_managed(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetManaged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* widget)
///
void q_designerformwindowinterface_on_widget_managed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetUnmanaged)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_widget_unmanaged(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetUnmanaged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* widget)
///
void q_designerformwindowinterface_on_widget_unmanaged(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#aboutToUnmanageWidget)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_about_to_unmanage_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#aboutToUnmanageWidget)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* widget)
///
void q_designerformwindowinterface_on_about_to_unmanage_widget(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activated)
///
/// @param self QDesignerFormWindowInterface*
/// @param widget QWidget*
///
void q_designerformwindowinterface_activated(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activated)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* widget)
///
void q_designerformwindowinterface_on_activated(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#changed)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#changed)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self)
///
void q_designerformwindowinterface_on_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetRemoved)
///
/// @param self QDesignerFormWindowInterface*
/// @param w QWidget*
///
void q_designerformwindowinterface_widget_removed(void* self, void* w);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#widgetRemoved)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QWidget* w)
///
void q_designerformwindowinterface_on_widget_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#objectRemoved)
///
/// @param self QDesignerFormWindowInterface*
/// @param o QObject*
///
void q_designerformwindowinterface_object_removed(void* self, void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#objectRemoved)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QObject* o)
///
void q_designerformwindowinterface_on_object_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_designerformwindowinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_designerformwindowinterface_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#activateResourceFilePaths)
///
/// @param self QDesignerFormWindowInterface*
/// @param paths const char**
/// @param errorCount int*
///
void q_designerformwindowinterface_activate_resource_file_paths2(void* self, const char* paths[static 1], int* errorCount);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QDesignerFormWindowInterface*
///
uintptr_t q_designerformwindowinterface_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QDesignerFormWindowInterface*
///
uintptr_t q_designerformwindowinterface_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QDesignerFormWindowInterface*
///
uintptr_t q_designerformwindowinterface_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QDesignerFormWindowInterface*
///
QStyle* q_designerformwindowinterface_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QDesignerFormWindowInterface*
/// @param style QStyle*
///
void q_designerformwindowinterface_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum Qt__WindowModality
///
int32_t q_designerformwindowinterface_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QDesignerFormWindowInterface*
/// @param windowModality enum Qt__WindowModality
///
void q_designerformwindowinterface_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
///
bool q_designerformwindowinterface_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QDesignerFormWindowInterface*
/// @param enabled bool
///
void q_designerformwindowinterface_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QDesignerFormWindowInterface*
/// @param disabled bool
///
void q_designerformwindowinterface_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QDesignerFormWindowInterface*
/// @param windowModified bool
///
void q_designerformwindowinterface_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QDesignerFormWindowInterface*
///
QRect* q_designerformwindowinterface_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QDesignerFormWindowInterface*
///
const QRect* q_designerformwindowinterface_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QDesignerFormWindowInterface*
///
QRect* q_designerformwindowinterface_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QDesignerFormWindowInterface*
///
QPoint* q_designerformwindowinterface_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QDesignerFormWindowInterface*
///
QRect* q_designerformwindowinterface_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QDesignerFormWindowInterface*
///
QRect* q_designerformwindowinterface_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QDesignerFormWindowInterface*
///
QRegion* q_designerformwindowinterface_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param minimumSize QSize*
///
void q_designerformwindowinterface_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param minw int
/// @param minh int
///
void q_designerformwindowinterface_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param maximumSize QSize*
///
void q_designerformwindowinterface_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param maxw int
/// @param maxh int
///
void q_designerformwindowinterface_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QDesignerFormWindowInterface*
/// @param minw int
///
void q_designerformwindowinterface_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QDesignerFormWindowInterface*
/// @param minh int
///
void q_designerformwindowinterface_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QDesignerFormWindowInterface*
/// @param maxw int
///
void q_designerformwindowinterface_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QDesignerFormWindowInterface*
/// @param maxh int
///
void q_designerformwindowinterface_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerFormWindowInterface*
/// @param sizeIncrement QSize*
///
void q_designerformwindowinterface_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QDesignerFormWindowInterface*
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param baseSize QSize*
///
void q_designerformwindowinterface_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param basew int
/// @param baseh int
///
void q_designerformwindowinterface_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param fixedSize QSize*
///
void q_designerformwindowinterface_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QDesignerFormWindowInterface*
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QDesignerFormWindowInterface*
/// @param w int
///
void q_designerformwindowinterface_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QDesignerFormWindowInterface*
/// @param h int
///
void q_designerformwindowinterface_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPointF*
///
QPointF* q_designerformwindowinterface_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPoint*
///
QPoint* q_designerformwindowinterface_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPointF*
///
QPointF* q_designerformwindowinterface_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPoint*
///
QPoint* q_designerformwindowinterface_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPointF*
///
QPointF* q_designerformwindowinterface_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPoint*
///
QPoint* q_designerformwindowinterface_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPointF*
///
QPointF* q_designerformwindowinterface_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPoint*
///
QPoint* q_designerformwindowinterface_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerformwindowinterface_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerformwindowinterface_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_designerformwindowinterface_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_designerformwindowinterface_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QDesignerFormWindowInterface*
///
const QPalette* q_designerformwindowinterface_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QDesignerFormWindowInterface*
/// @param palette QPalette*
///
void q_designerformwindowinterface_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QDesignerFormWindowInterface*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_designerformwindowinterface_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerformwindowinterface_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QDesignerFormWindowInterface*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_designerformwindowinterface_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum QPalette__ColorRole
///
int32_t q_designerformwindowinterface_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QDesignerFormWindowInterface*
///
const QFont* q_designerformwindowinterface_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QDesignerFormWindowInterface*
/// @param font QFont*
///
void q_designerformwindowinterface_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QDesignerFormWindowInterface*
///
QFontMetrics* q_designerformwindowinterface_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QDesignerFormWindowInterface*
///
QFontInfo* q_designerformwindowinterface_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QDesignerFormWindowInterface*
/// @param cursor QCursor*
///
void q_designerformwindowinterface_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QDesignerFormWindowInterface*
/// @param enable bool
///
void q_designerformwindowinterface_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QDesignerFormWindowInterface*
/// @param enable bool
///
void q_designerformwindowinterface_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerFormWindowInterface*
/// @param mask QBitmap*
///
void q_designerformwindowinterface_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QDesignerFormWindowInterface*
/// @param mask QRegion*
///
void q_designerformwindowinterface_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QDesignerFormWindowInterface*
///
QRegion* q_designerformwindowinterface_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param target QPaintDevice*
///
void q_designerformwindowinterface_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param painter QPainter*
///
void q_designerformwindowinterface_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerFormWindowInterface*
///
QPixmap* q_designerformwindowinterface_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QDesignerFormWindowInterface*
///
QGraphicsEffect* q_designerformwindowinterface_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QDesignerFormWindowInterface*
/// @param effect QGraphicsEffect*
///
void q_designerformwindowinterface_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerFormWindowInterface*
/// @param type enum Qt__GestureType
///
void q_designerformwindowinterface_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QDesignerFormWindowInterface*
/// @param type enum Qt__GestureType
///
void q_designerformwindowinterface_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QDesignerFormWindowInterface*
/// @param windowTitle const char*
///
void q_designerformwindowinterface_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QDesignerFormWindowInterface*
/// @param styleSheet const char*
///
void q_designerformwindowinterface_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QDesignerFormWindowInterface*
/// @param icon QIcon*
///
void q_designerformwindowinterface_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QDesignerFormWindowInterface*
///
QIcon* q_designerformwindowinterface_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QDesignerFormWindowInterface*
/// @param windowIconText const char*
///
void q_designerformwindowinterface_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QDesignerFormWindowInterface*
/// @param windowRole const char*
///
void q_designerformwindowinterface_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QDesignerFormWindowInterface*
/// @param filePath const char*
///
void q_designerformwindowinterface_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QDesignerFormWindowInterface*
/// @param level double
///
void q_designerformwindowinterface_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QDesignerFormWindowInterface*
///
double q_designerformwindowinterface_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QDesignerFormWindowInterface*
/// @param toolTip const char*
///
void q_designerformwindowinterface_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QDesignerFormWindowInterface*
/// @param msec int
///
void q_designerformwindowinterface_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QDesignerFormWindowInterface*
/// @param statusTip const char*
///
void q_designerformwindowinterface_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QDesignerFormWindowInterface*
/// @param whatsThis const char*
///
void q_designerformwindowinterface_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QDesignerFormWindowInterface*
/// @param name const char*
///
void q_designerformwindowinterface_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QDesignerFormWindowInterface*
/// @param description const char*
///
void q_designerformwindowinterface_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QDesignerFormWindowInterface*
/// @param direction enum Qt__LayoutDirection
///
void q_designerformwindowinterface_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_designerformwindowinterface_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QDesignerFormWindowInterface*
/// @param locale QLocale*
///
void q_designerformwindowinterface_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QDesignerFormWindowInterface*
///
QLocale* q_designerformwindowinterface_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QDesignerFormWindowInterface*
/// @param reason enum Qt__FocusReason
///
void q_designerformwindowinterface_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_designerformwindowinterface_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QDesignerFormWindowInterface*
/// @param policy enum Qt__FocusPolicy
///
void q_designerformwindowinterface_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_designerformwindowinterface_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QDesignerFormWindowInterface*
/// @param focusProxy QWidget*
///
void q_designerformwindowinterface_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_designerformwindowinterface_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QDesignerFormWindowInterface*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_designerformwindowinterface_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QCursor*
///
void q_designerformwindowinterface_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerFormWindowInterface*
/// @param key QKeySequence*
///
int32_t q_designerformwindowinterface_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
///
void q_designerformwindowinterface_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
///
void q_designerformwindowinterface_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
///
void q_designerformwindowinterface_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_designerformwindowinterface_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_designerformwindowinterface_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QDesignerFormWindowInterface*
/// @param enable bool
///
void q_designerformwindowinterface_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QDesignerFormWindowInterface*
///
QGraphicsProxyWidget* q_designerformwindowinterface_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerFormWindowInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QRect*
///
void q_designerformwindowinterface_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QRegion*
///
void q_designerformwindowinterface_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerFormWindowInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QRect*
///
void q_designerformwindowinterface_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QRegion*
///
void q_designerformwindowinterface_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// @param self QDesignerFormWindowInterface*
/// @param visible bool
///
void q_designerformwindowinterface_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QDesignerFormWindowInterface*
/// @param hidden bool
///
void q_designerformwindowinterface_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
///
void q_designerformwindowinterface_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerFormWindowInterface*
/// @param x int
/// @param y int
///
void q_designerformwindowinterface_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QPoint*
///
void q_designerformwindowinterface_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerFormWindowInterface*
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QSize*
///
void q_designerformwindowinterface_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerFormWindowInterface*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_designerformwindowinterface_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QDesignerFormWindowInterface*
/// @param geometry QRect*
///
void q_designerformwindowinterface_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
char* q_designerformwindowinterface_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QDesignerFormWindowInterface*
/// @param geometry const char*
///
bool q_designerformwindowinterface_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QWidget*
///
bool q_designerformwindowinterface_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_designerformwindowinterface_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QDesignerFormWindowInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerformwindowinterface_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QDesignerFormWindowInterface*
/// @param state flag of enum Qt__WindowState
///
void q_designerformwindowinterface_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// @param self QDesignerFormWindowInterface*
///
QSize* q_designerformwindowinterface_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QDesignerFormWindowInterface*
///
QSizePolicy* q_designerformwindowinterface_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerFormWindowInterface*
/// @param sizePolicy QSizePolicy*
///
void q_designerformwindowinterface_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QDesignerFormWindowInterface*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_designerformwindowinterface_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 int
///
int32_t q_designerformwindowinterface_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QDesignerFormWindowInterface*
///
QRegion* q_designerformwindowinterface_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerFormWindowInterface*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_designerformwindowinterface_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QDesignerFormWindowInterface*
/// @param margins QMargins*
///
void q_designerformwindowinterface_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QDesignerFormWindowInterface*
///
QMargins* q_designerformwindowinterface_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QDesignerFormWindowInterface*
///
QRect* q_designerformwindowinterface_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QDesignerFormWindowInterface*
///
QLayout* q_designerformwindowinterface_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QDesignerFormWindowInterface*
/// @param layout QLayout*
///
void q_designerformwindowinterface_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param parent QWidget*
///
void q_designerformwindowinterface_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QDesignerFormWindowInterface*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_designerformwindowinterface_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerFormWindowInterface*
/// @param dx int
/// @param dy int
///
void q_designerformwindowinterface_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QDesignerFormWindowInterface*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_designerformwindowinterface_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QDesignerFormWindowInterface*
/// @param on bool
///
void q_designerformwindowinterface_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param action QAction*
///
void q_designerformwindowinterface_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QDesignerFormWindowInterface*
/// @param actions libqt_list of QAction*
///
void q_designerformwindowinterface_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QDesignerFormWindowInterface*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_designerformwindowinterface_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param before QAction*
/// @param action QAction*
///
void q_designerformwindowinterface_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param action QAction*
///
void q_designerformwindowinterface_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return libqt_list of QAction*
///
libqt_list q_designerformwindowinterface_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param text const char*
///
QAction* q_designerformwindowinterface_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_designerformwindowinterface_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerformwindowinterface_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QDesignerFormWindowInterface*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_designerformwindowinterface_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QDesignerFormWindowInterface*
///
QWidget* q_designerformwindowinterface_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QDesignerFormWindowInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerformwindowinterface_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_designerformwindowinterface_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__WindowType
///
void q_designerformwindowinterface_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QDesignerFormWindowInterface*
/// @param type flag of enum Qt__WindowType
///
void q_designerformwindowinterface_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return enum Qt__WindowType
///
int32_t q_designerformwindowinterface_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_designerformwindowinterface_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerFormWindowInterface*
/// @param x int
/// @param y int
///
QWidget* q_designerformwindowinterface_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerFormWindowInterface*
/// @param p QPoint*
///
QWidget* q_designerformwindowinterface_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QDesignerFormWindowInterface*
/// @param p QPointF*
///
QWidget* q_designerformwindowinterface_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__WidgetAttribute
///
void q_designerformwindowinterface_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_designerformwindowinterface_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// @param self QDesignerFormWindowInterface*
///
QPaintEngine* q_designerformwindowinterface_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QDesignerFormWindowInterface*
/// @param child QWidget*
///
bool q_designerformwindowinterface_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QDesignerFormWindowInterface*
/// @param enabled bool
///
void q_designerformwindowinterface_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QDesignerFormWindowInterface*
///
QBackingStore* q_designerformwindowinterface_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QDesignerFormWindowInterface*
///
QWindow* q_designerformwindowinterface_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QDesignerFormWindowInterface*
///
QScreen* q_designerformwindowinterface_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QDesignerFormWindowInterface*
/// @param screen QScreen*
///
void q_designerformwindowinterface_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_designerformwindowinterface_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param title const char*
///
void q_designerformwindowinterface_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, const char* title)
///
void q_designerformwindowinterface_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param icon QIcon*
///
void q_designerformwindowinterface_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QIcon* icon)
///
void q_designerformwindowinterface_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param iconText const char*
///
void q_designerformwindowinterface_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, const char* iconText)
///
void q_designerformwindowinterface_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerFormWindowInterface*
/// @param pos QPoint*
///
void q_designerformwindowinterface_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QPoint* pos)
///
void q_designerformwindowinterface_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_designerformwindowinterface_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_designerformwindowinterface_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QDesignerFormWindowInterface*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_designerformwindowinterface_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_designerformwindowinterface_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerformwindowinterface_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerformwindowinterface_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_designerformwindowinterface_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_designerformwindowinterface_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QDesignerFormWindowInterface*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_designerformwindowinterface_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QDesignerFormWindowInterface*
/// @param rectangle QRect*
///
QPixmap* q_designerformwindowinterface_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QDesignerFormWindowInterface*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_designerformwindowinterface_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QDesignerFormWindowInterface*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_designerformwindowinterface_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
/// @param enable bool
///
void q_designerformwindowinterface_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
/// @param enable bool
///
void q_designerformwindowinterface_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_designerformwindowinterface_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_designerformwindowinterface_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_designerformwindowinterface_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_designerformwindowinterface_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDesignerFormWindowInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_designerformwindowinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char* q_designerformwindowinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDesignerFormWindowInterface*
/// @param name char*
///
void q_designerformwindowinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDesignerFormWindowInterface*
/// @param b bool
///
bool q_designerformwindowinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDesignerFormWindowInterface*
///
QThread* q_designerformwindowinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormWindowInterface*
/// @param thread QThread*
///
bool q_designerformwindowinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param interval int
///
int32_t q_designerformwindowinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param time int64_t of nanoseconds
///
int32_t q_designerformwindowinterface_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param id int
///
void q_designerformwindowinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param id enum Qt__TimerId
///
void q_designerformwindowinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDesignerFormWindowInterface*
///
/// @return libqt_list of QObject*
///
libqt_list q_designerformwindowinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDesignerFormWindowInterface*
/// @param filterObj QObject*
///
void q_designerformwindowinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDesignerFormWindowInterface*
/// @param obj QObject*
///
void q_designerformwindowinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_designerformwindowinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_designerformwindowinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_designerformwindowinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_designerformwindowinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDesignerFormWindowInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_designerformwindowinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDesignerFormWindowInterface*
/// @param name const char*
///
QVariant* q_designerformwindowinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDesignerFormWindowInterface*
///
const char** q_designerformwindowinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormWindowInterface*
///
QBindingStorage* q_designerformwindowinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDesignerFormWindowInterface*
///
const QBindingStorage* q_designerformwindowinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self)
///
void q_designerformwindowinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDesignerFormWindowInterface*
///
QObject* q_designerformwindowinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDesignerFormWindowInterface*
/// @param classname const char*
///
bool q_designerformwindowinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDesignerFormWindowInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_designerformwindowinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowinterface_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDesignerFormWindowInterface*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_designerformwindowinterface_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDesignerFormWindowInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_designerformwindowinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowInterface*
/// @param param1 QObject*
///
void q_designerformwindowinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, QObject* param1)
///
void q_designerformwindowinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QDesignerFormWindowInterface*
///
bool q_designerformwindowinterface_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QDesignerFormWindowInterface*
///
double q_designerformwindowinterface_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QDesignerFormWindowInterface*
///
double q_designerformwindowinterface_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QDesignerFormWindowInterface*
///
int32_t q_designerformwindowinterface_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_designerformwindowinterface_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_designerformwindowinterface_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDesignerFormWindowInterface*
/// @param callback void func(QDesignerFormWindowInterface* self, const char* objectName)
///
void q_designerformwindowinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdesignerformwindowinterface.html#dtor.QDesignerFormWindowInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDesignerFormWindowInterface*
///
void q_designerformwindowinterface_delete(void* self);

/// [Upstream resources](https://api.kde.org/abstractformwindow.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_EDITFEATURE = 1,
    QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_GRIDFEATURE = 2,
    QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_TABORDERFEATURE = 4,
    QDESIGNERFORMWINDOWINTERFACE_FEATUREFLAG_DEFAULTFEATURE = 3
} QDesignerFormWindowInterface__FeatureFlag;

/// [Upstream resources](https://api.kde.org/abstractformwindow.html#public-types)

typedef enum {
    QDESIGNERFORMWINDOWINTERFACE_RESOURCEFILESAVEMODE_SAVEALLRESOURCEFILES = 0,
    QDESIGNERFORMWINDOWINTERFACE_RESOURCEFILESAVEMODE_SAVEONLYUSEDRESOURCEFILES = 1,
    QDESIGNERFORMWINDOWINTERFACE_RESOURCEFILESAVEMODE_DONTSAVERESOURCEFILES = 2
} QDesignerFormWindowInterface__ResourceFileSaveMode;

#endif
