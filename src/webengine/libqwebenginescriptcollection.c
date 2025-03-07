#include <string.h>
#include "libqwebenginescript.hpp"
#include "libqwebenginescriptcollection.hpp"
#include "libqwebenginescriptcollection.h"

/// https://doc.qt.io/qt-6/qwebenginescriptcollection.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#isEmpty)
///
/// ``` QWebEngineScriptCollection* self ```
bool q_webenginescriptcollection_is_empty(void* self) {
    return QWebEngineScriptCollection_IsEmpty((QWebEngineScriptCollection*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#count)
///
/// ``` QWebEngineScriptCollection* self ```
int32_t q_webenginescriptcollection_count(void* self) {
    return QWebEngineScriptCollection_Count((QWebEngineScriptCollection*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#contains)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* value ```
bool q_webenginescriptcollection_contains(void* self, void* value) {
    return QWebEngineScriptCollection_Contains((QWebEngineScriptCollection*)self, (QWebEngineScript*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#find)
///
/// ``` QWebEngineScriptCollection* self, const char* name ```
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_find(void* self, const char* name) {
    libqt_list _arr = QWebEngineScriptCollection_Find((QWebEngineScriptCollection*)self, qstring(name));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* param1 ```
void q_webenginescriptcollection_insert(void* self, void* param1) {
    QWebEngineScriptCollection_Insert((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#insert)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* list[] ```
void q_webenginescriptcollection_insert_with_list(void* self, void* list[]) {
    QWebEngineScript** list_arr = (QWebEngineScript**)list;
    size_t list_len = 0;
    while (list_arr[list_len] != NULL) {
        list_len++;
    }
    libqt_list list_list = {
        .len = list_len,
        .data = {(QWebEngineScript*)list},
    };
    QWebEngineScriptCollection_InsertWithList((QWebEngineScriptCollection*)self, list_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#remove)
///
/// ``` QWebEngineScriptCollection* self, QWebEngineScript* param1 ```
bool q_webenginescriptcollection_remove(void* self, void* param1) {
    return QWebEngineScriptCollection_Remove((QWebEngineScriptCollection*)self, (QWebEngineScript*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#clear)
///
/// ``` QWebEngineScriptCollection* self ```
void q_webenginescriptcollection_clear(void* self) {
    QWebEngineScriptCollection_Clear((QWebEngineScriptCollection*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginescriptcollection.html#toList)
///
/// ``` QWebEngineScriptCollection* self ```
libqt_list /* of QWebEngineScript* */ q_webenginescriptcollection_to_list(void* self) {
    libqt_list _arr = QWebEngineScriptCollection_ToList((QWebEngineScriptCollection*)self);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineScriptCollection* self ```
void q_webenginescriptcollection_delete(void* self) {
    QWebEngineScriptCollection_Delete((QWebEngineScriptCollection*)(self));
}