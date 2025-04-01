#include "libqfileinfo.hpp"
#include "libqiodevice.hpp"
#include "libqmimetype.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqmimedatabase.hpp"
#include "libqmimedatabase.h"

QMimeDatabase* q_mimedatabase_new() {
    return QMimeDatabase_new();
}

QMimeType* q_mimedatabase_mime_type_for_name(void* self, const char* nameOrAlias) {
    return QMimeDatabase_MimeTypeForName((QMimeDatabase*)self, qstring(nameOrAlias));
}

QMimeType* q_mimedatabase_mime_type_for_file(void* self, const char* fileName) {
    return QMimeDatabase_MimeTypeForFile((QMimeDatabase*)self, qstring(fileName));
}

QMimeType* q_mimedatabase_mime_type_for_file_with_file_info(void* self, void* fileInfo) {
    return QMimeDatabase_MimeTypeForFileWithFileInfo((QMimeDatabase*)self, (QFileInfo*)fileInfo);
}

libqt_list /* of QMimeType* */ q_mimedatabase_mime_types_for_file_name(void* self, const char* fileName) {
    libqt_list _arr = QMimeDatabase_MimeTypesForFileName((QMimeDatabase*)self, qstring(fileName));
    return _arr;
}

QMimeType* q_mimedatabase_mime_type_for_data(void* self, const char* data) {
    return QMimeDatabase_MimeTypeForData((QMimeDatabase*)self, qstring(data));
}

QMimeType* q_mimedatabase_mime_type_for_data_with_device(void* self, void* device) {
    return QMimeDatabase_MimeTypeForDataWithDevice((QMimeDatabase*)self, (QIODevice*)device);
}

QMimeType* q_mimedatabase_mime_type_for_url(void* self, void* url) {
    return QMimeDatabase_MimeTypeForUrl((QMimeDatabase*)self, (QUrl*)url);
}

QMimeType* q_mimedatabase_mime_type_for_file_name_and_data(void* self, const char* fileName, void* device) {
    return QMimeDatabase_MimeTypeForFileNameAndData((QMimeDatabase*)self, qstring(fileName), (QIODevice*)device);
}

QMimeType* q_mimedatabase_mime_type_for_file_name_and_data2(void* self, const char* fileName, const char* data) {
    return QMimeDatabase_MimeTypeForFileNameAndData2((QMimeDatabase*)self, qstring(fileName), qstring(data));
}

const char* q_mimedatabase_suffix_for_file_name(void* self, const char* fileName) {
    libqt_string _str = QMimeDatabase_SuffixForFileName((QMimeDatabase*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QMimeType* */ q_mimedatabase_all_mime_types(void* self) {
    libqt_list _arr = QMimeDatabase_AllMimeTypes((QMimeDatabase*)self);
    return _arr;
}

QMimeType* q_mimedatabase_mime_type_for_file2(void* self, const char* fileName, int64_t mode) {
    return QMimeDatabase_MimeTypeForFile2((QMimeDatabase*)self, qstring(fileName), mode);
}

QMimeType* q_mimedatabase_mime_type_for_file22(void* self, void* fileInfo, int64_t mode) {
    return QMimeDatabase_MimeTypeForFile22((QMimeDatabase*)self, (QFileInfo*)fileInfo, mode);
}

void q_mimedatabase_delete(void* self) {
    QMimeDatabase_Delete((QMimeDatabase*)(self));
}
