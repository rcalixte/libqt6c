#pragma once
#ifndef SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIBUILDER_H
#define SRC_EXTRAS_KXMLGUI_QT6C_LIBKXMLGUIBUILDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html)

/// k_xmlguibuilder_new constructs a new KXMLGUIBuilder object.
///
/// @param widget QWidget*
///
KXMLGUIBuilder* k_xmlguibuilder_new(void* widget);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#builderClient)
///
/// @param self KXMLGUIBuilder*
///
KXMLGUIClient* k_xmlguibuilder_builder_client(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#setBuilderClient)
///
/// @param self KXMLGUIBuilder*
/// @param client KXMLGUIClient*
///
void k_xmlguibuilder_set_builder_client(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#widget)
///
/// @param self KXMLGUIBuilder*
///
QWidget* k_xmlguibuilder_widget(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KXMLGUIBuilder*
///
const char** k_xmlguibuilder_container_tags(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback const char** func()
///
void k_xmlguibuilder_on_container_tags(void* self, const char** (*callback)());

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_container_tags` instead
///
#define k_xmlguibuilder_qbase_container_tags k_xmlguibuilder_super_container_tags

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#containerTags)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
///
const char** k_xmlguibuilder_super_container_tags(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// @param self KXMLGUIBuilder*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_xmlguibuilder_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback QWidget* func(KXMLGUIBuilder* self, QWidget* parent, int index, QDomElement* element, QAction** containerAction)
///
void k_xmlguibuilder_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**));

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_create_container` instead
///
#define k_xmlguibuilder_qbase_create_container k_xmlguibuilder_super_create_container

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createContainer)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
/// @param containerAction QAction**
///
QWidget* k_xmlguibuilder_super_create_container(void* self, void* parent, int index, void* element, void** containerAction);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// @param self KXMLGUIBuilder*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_xmlguibuilder_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback void func(KXMLGUIBuilder* self, QWidget* container, QWidget* parent, QDomElement* element, QAction* containerAction)
///
void k_xmlguibuilder_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*));

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_remove_container` instead
///
#define k_xmlguibuilder_qbase_remove_container k_xmlguibuilder_super_remove_container

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#removeContainer)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
/// @param container QWidget*
/// @param parent QWidget*
/// @param element QDomElement*
/// @param containerAction QAction*
///
void k_xmlguibuilder_super_remove_container(void* self, void* container, void* parent, void* element, void* containerAction);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KXMLGUIBuilder*
///
const char** k_xmlguibuilder_custom_tags(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback const char** func()
///
void k_xmlguibuilder_on_custom_tags(void* self, const char** (*callback)());

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_custom_tags` instead
///
#define k_xmlguibuilder_qbase_custom_tags k_xmlguibuilder_super_custom_tags

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#customTags)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
///
const char** k_xmlguibuilder_super_custom_tags(void* self);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// @param self KXMLGUIBuilder*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_xmlguibuilder_create_custom_element(void* self, void* parent, int index, void* element);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback QAction* func(KXMLGUIBuilder* self, QWidget* parent, int index, QDomElement* element)
///
void k_xmlguibuilder_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*));

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_create_custom_element` instead
///
#define k_xmlguibuilder_qbase_create_custom_element k_xmlguibuilder_super_create_custom_element

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#createCustomElement)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
/// @param parent QWidget*
/// @param index int
/// @param element QDomElement*
///
QAction* k_xmlguibuilder_super_create_custom_element(void* self, void* parent, int index, void* element);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// @param self KXMLGUIBuilder*
/// @param client KXMLGUIClient*
///
void k_xmlguibuilder_finalize_g_u_i(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// Allows for overriding the related default method
///
/// @param self KXMLGUIBuilder*
/// @param callback void func(KXMLGUIBuilder* self, KXMLGUIClient* client)
///
void k_xmlguibuilder_on_finalize_g_u_i(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_xmlguibuilder_super_finalize_g_u_i` instead
///
#define k_xmlguibuilder_qbase_finalize_g_u_i k_xmlguibuilder_super_finalize_g_u_i

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#finalizeGUI)
///
/// Base class method implementation
///
/// @param self KXMLGUIBuilder*
/// @param client KXMLGUIClient*
///
void k_xmlguibuilder_super_finalize_g_u_i(void* self, void* client);

/// [Upstream resources](https://api.kde.org/kxmlguibuilder.html#dtor.KXMLGUIBuilder)
///
/// Delete this object from C++ memory.
///
/// @param self KXMLGUIBuilder*
///
void k_xmlguibuilder_delete(void* self);

#endif
