#include "libkxmlguiclient.hpp"
#include "../libqaction.hpp"
#include "../xml/libqdom.hpp"
#include "../libqwidget.hpp"
#include "libkxmlguibuilder.hpp"
#include "libkxmlguibuilder.h"

KXMLGUIBuilder* k_xmlguibuilder_new(void* widget) {
    return KXMLGUIBuilder_new((QWidget*)widget);
}

KXMLGUIClient* k_xmlguibuilder_builder_client(void* self) {
    return KXMLGUIBuilder_BuilderClient((KXMLGUIBuilder*)self);
}

void k_xmlguibuilder_set_builder_client(void* self, void* client) {
    KXMLGUIBuilder_SetBuilderClient((KXMLGUIBuilder*)self, (KXMLGUIClient*)client);
}

QWidget* k_xmlguibuilder_widget(void* self) {
    return KXMLGUIBuilder_Widget((KXMLGUIBuilder*)self);
}

const char** k_xmlguibuilder_container_tags(void* self) {
    libqt_list _arr = KXMLGUIBuilder_ContainerTags((KXMLGUIBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguibuilder_container_tags");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_xmlguibuilder_on_container_tags(void* self, const char** (*callback)()) {
    KXMLGUIBuilder_OnContainerTags((KXMLGUIBuilder*)self, (intptr_t)callback);
}

const char** k_xmlguibuilder_qbase_container_tags(void* self) {
    libqt_list _arr = KXMLGUIBuilder_QBaseContainerTags((KXMLGUIBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguibuilder_container_tags");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QWidget* k_xmlguibuilder_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KXMLGUIBuilder_CreateContainer((KXMLGUIBuilder*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

void k_xmlguibuilder_on_create_container(void* self, QWidget* (*callback)(void*, void*, int, void*, void**)) {
    KXMLGUIBuilder_OnCreateContainer((KXMLGUIBuilder*)self, (intptr_t)callback);
}

QWidget* k_xmlguibuilder_qbase_create_container(void* self, void* parent, int index, void* element, void** containerAction) {
    return KXMLGUIBuilder_QBaseCreateContainer((KXMLGUIBuilder*)self, (QWidget*)parent, index, (QDomElement*)element, (QAction**)containerAction);
}

void k_xmlguibuilder_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KXMLGUIBuilder_RemoveContainer((KXMLGUIBuilder*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

void k_xmlguibuilder_on_remove_container(void* self, void (*callback)(void*, void*, void*, void*, void*)) {
    KXMLGUIBuilder_OnRemoveContainer((KXMLGUIBuilder*)self, (intptr_t)callback);
}

void k_xmlguibuilder_qbase_remove_container(void* self, void* container, void* parent, void* element, void* containerAction) {
    KXMLGUIBuilder_QBaseRemoveContainer((KXMLGUIBuilder*)self, (QWidget*)container, (QWidget*)parent, (QDomElement*)element, (QAction*)containerAction);
}

const char** k_xmlguibuilder_custom_tags(void* self) {
    libqt_list _arr = KXMLGUIBuilder_CustomTags((KXMLGUIBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguibuilder_custom_tags");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_xmlguibuilder_on_custom_tags(void* self, const char** (*callback)()) {
    KXMLGUIBuilder_OnCustomTags((KXMLGUIBuilder*)self, (intptr_t)callback);
}

const char** k_xmlguibuilder_qbase_custom_tags(void* self) {
    libqt_list _arr = KXMLGUIBuilder_QBaseCustomTags((KXMLGUIBuilder*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_xmlguibuilder_custom_tags");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QAction* k_xmlguibuilder_create_custom_element(void* self, void* parent, int index, void* element) {
    return KXMLGUIBuilder_CreateCustomElement((KXMLGUIBuilder*)self, (QWidget*)parent, index, (QDomElement*)element);
}

void k_xmlguibuilder_on_create_custom_element(void* self, QAction* (*callback)(void*, void*, int, void*)) {
    KXMLGUIBuilder_OnCreateCustomElement((KXMLGUIBuilder*)self, (intptr_t)callback);
}

QAction* k_xmlguibuilder_qbase_create_custom_element(void* self, void* parent, int index, void* element) {
    return KXMLGUIBuilder_QBaseCreateCustomElement((KXMLGUIBuilder*)self, (QWidget*)parent, index, (QDomElement*)element);
}

void k_xmlguibuilder_finalize_g_u_i(void* self, void* client) {
    KXMLGUIBuilder_FinalizeGUI((KXMLGUIBuilder*)self, (KXMLGUIClient*)client);
}

void k_xmlguibuilder_on_finalize_g_u_i(void* self, void (*callback)(void*, void*)) {
    KXMLGUIBuilder_OnFinalizeGUI((KXMLGUIBuilder*)self, (intptr_t)callback);
}

void k_xmlguibuilder_qbase_finalize_g_u_i(void* self, void* client) {
    KXMLGUIBuilder_QBaseFinalizeGUI((KXMLGUIBuilder*)self, (KXMLGUIClient*)client);
}

void k_xmlguibuilder_delete(void* self) {
    KXMLGUIBuilder_Delete((KXMLGUIBuilder*)(self));
}
