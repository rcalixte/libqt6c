#include "libqfileinfo.hpp"
#include "libqiodevice.hpp"
#include "libqmimetype.hpp"
#include <string.h>
#include "libqurl.hpp"
#include "libqmimedatabase.hpp"
#include "libqmimedatabase.h"

/// https://doc.qt.io/qt-6/qmimedatabase.html

/// q_mimedatabase_new constructs a new QMimeDatabase object.
///
///
QMimeDatabase* q_mimedatabase_new() {
    return QMimeDatabase_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForName)
///
/// ``` QMimeDatabase* self, const char* nameOrAlias ```
QMimeType* q_mimedatabase_mime_type_for_name(void* self, const char* nameOrAlias) {
    return QMimeDatabase_MimeTypeForName((QMimeDatabase*)self, qstring(nameOrAlias));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// ``` QMimeDatabase* self, const char* fileName ```
QMimeType* q_mimedatabase_mime_type_for_file(void* self, const char* fileName) {
    return QMimeDatabase_MimeTypeForFile((QMimeDatabase*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// ``` QMimeDatabase* self, QFileInfo* fileInfo ```
QMimeType* q_mimedatabase_mime_type_for_file_with_file_info(void* self, void* fileInfo) {
    return QMimeDatabase_MimeTypeForFileWithFileInfo((QMimeDatabase*)self, (QFileInfo*)fileInfo);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypesForFileName)
///
/// ``` QMimeDatabase* self, const char* fileName ```
libqt_list /* of QMimeType* */ q_mimedatabase_mime_types_for_file_name(void* self, const char* fileName) {
    libqt_list _arr = QMimeDatabase_MimeTypesForFileName((QMimeDatabase*)self, qstring(fileName));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
///
/// ``` QMimeDatabase* self, const char* data ```
QMimeType* q_mimedatabase_mime_type_for_data(void* self, const char* data) {
    return QMimeDatabase_MimeTypeForData((QMimeDatabase*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
///
/// ``` QMimeDatabase* self, QIODevice* device ```
QMimeType* q_mimedatabase_mime_type_for_data_with_device(void* self, void* device) {
    return QMimeDatabase_MimeTypeForDataWithDevice((QMimeDatabase*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForUrl)
///
/// ``` QMimeDatabase* self, QUrl* url ```
QMimeType* q_mimedatabase_mime_type_for_url(void* self, void* url) {
    return QMimeDatabase_MimeTypeForUrl((QMimeDatabase*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
///
/// ``` QMimeDatabase* self, const char* fileName, QIODevice* device ```
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data(void* self, const char* fileName, void* device) {
    return QMimeDatabase_MimeTypeForFileNameAndData((QMimeDatabase*)self, qstring(fileName), (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
///
/// ``` QMimeDatabase* self, const char* fileName, const char* data ```
QMimeType* q_mimedatabase_mime_type_for_file_name_and_data2(void* self, const char* fileName, const char* data) {
    return QMimeDatabase_MimeTypeForFileNameAndData2((QMimeDatabase*)self, qstring(fileName), qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#suffixForFileName)
///
/// ``` QMimeDatabase* self, const char* fileName ```
const char* q_mimedatabase_suffix_for_file_name(void* self, const char* fileName) {
    libqt_string _str = QMimeDatabase_SuffixForFileName((QMimeDatabase*)self, qstring(fileName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#allMimeTypes)
///
/// ``` QMimeDatabase* self ```
libqt_list /* of QMimeType* */ q_mimedatabase_all_mime_types(void* self) {
    libqt_list _arr = QMimeDatabase_AllMimeTypes((QMimeDatabase*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// ``` QMimeDatabase* self, const char* fileName, enum QMimeDatabase__MatchMode mode ```
QMimeType* q_mimedatabase_mime_type_for_file2(void* self, const char* fileName, int64_t mode) {
    return QMimeDatabase_MimeTypeForFile2((QMimeDatabase*)self, qstring(fileName), mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
///
/// ``` QMimeDatabase* self, QFileInfo* fileInfo, enum QMimeDatabase__MatchMode mode ```
QMimeType* q_mimedatabase_mime_type_for_file22(void* self, void* fileInfo, int64_t mode) {
    return QMimeDatabase_MimeTypeForFile22((QMimeDatabase*)self, (QFileInfo*)fileInfo, mode);
}

/// Delete this object from C++ memory.
///
/// ``` QMimeDatabase* self ```
void q_mimedatabase_delete(void* self) {
    QMimeDatabase_Delete((QMimeDatabase*)(self));
}