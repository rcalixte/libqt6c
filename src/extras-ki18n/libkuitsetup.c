#include "libklocalizedstring.hpp"
#include "libkuitsetup.hpp"
#include "libkuitsetup.h"

KuitSetup* k_uit_setup_for_domain(const char* param1) {
    return Kuit_SetupForDomain(qstring(param1));
}

void k_uitsetup_set_tag_pattern(void* self, const char* tagName, const char* attribNames[static 1], int32_t format, void* pattern) {
    size_t attribNames_len = libqt_strv_length(attribNames);
    libqt_string* attribNames_qstr = (libqt_string*)malloc(attribNames_len * sizeof(libqt_string));
    if (attribNames_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_uitsetup_set_tag_pattern");
        abort();
    }
    for (size_t i = 0; i < attribNames_len; ++i) {
        attribNames_qstr[i] = qstring(attribNames[i]);
    }
    libqt_list attribNames_list = qlist(attribNames_qstr, attribNames_len);
    KuitSetup_SetTagPattern((KuitSetup*)self, qstring(tagName), attribNames_list, format, (KLocalizedString*)pattern);
    free(attribNames_qstr);
}

void k_uitsetup_set_tag_class(void* self, const char* tagName, int32_t aClass) {
    KuitSetup_SetTagClass((KuitSetup*)self, qstring(tagName), aClass);
}

void k_uitsetup_set_format_for_marker(void* self, const char* marker, int32_t format) {
    KuitSetup_SetFormatForMarker((KuitSetup*)self, qstring(marker), format);
}

void k_uitsetup_delete(void* self) {
    KuitSetup_Delete((KuitSetup*)(self));
}
