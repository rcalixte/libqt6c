#include "../libqtextdocument.hpp"
#include "libautocorrectionsettings.hpp"
#include "libautocorrection.hpp"
#include "libautocorrection.h"

TextAutoCorrectionCore__AutoCorrection* k_textautocorrectioncore__autocorrection_new() {
    return TextAutoCorrectionCore__AutoCorrection_new();
}

void k_textautocorrectioncore__autocorrection_write_config(void* self) {
    TextAutoCorrectionCore__AutoCorrection_WriteConfig((TextAutoCorrectionCore__AutoCorrection*)self);
}

void k_textautocorrectioncore__autocorrection_read_config(void* self) {
    TextAutoCorrectionCore__AutoCorrection_ReadConfig((TextAutoCorrectionCore__AutoCorrection*)self);
}

bool k_textautocorrectioncore__autocorrection_autocorrect(void* self, bool htmlMode, void* document, int* position) {
    return TextAutoCorrectionCore__AutoCorrection_Autocorrect((TextAutoCorrectionCore__AutoCorrection*)self, htmlMode, (QTextDocument*)document, position);
}

void k_textautocorrectioncore__autocorrection_load_global_file_name(void* self, const char* fname) {
    TextAutoCorrectionCore__AutoCorrection_LoadGlobalFileName((TextAutoCorrectionCore__AutoCorrection*)self, qstring(fname));
}

TextAutoCorrectionCore__AutoCorrectionSettings* k_textautocorrectioncore__autocorrection_auto_correction_settings(void* self) {
    return TextAutoCorrectionCore__AutoCorrection_AutoCorrectionSettings((TextAutoCorrectionCore__AutoCorrection*)self);
}

void k_textautocorrectioncore__autocorrection_set_auto_correction_settings(void* self, void* newAutoCorrectionSettings) {
    TextAutoCorrectionCore__AutoCorrection_SetAutoCorrectionSettings((TextAutoCorrectionCore__AutoCorrection*)self, (TextAutoCorrectionCore__AutoCorrectionSettings*)newAutoCorrectionSettings);
}

void k_textautocorrectioncore__autocorrection_write_auto_correction_xml_file(void* self, const char* filename) {
    TextAutoCorrectionCore__AutoCorrection_WriteAutoCorrectionXmlFile((TextAutoCorrectionCore__AutoCorrection*)self, qstring(filename));
}

void k_textautocorrectioncore__autocorrection_delete(void* self) {
    TextAutoCorrectionCore__AutoCorrection_Delete((TextAutoCorrectionCore__AutoCorrection*)(self));
}
