#include "libqrect.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqpagesize.hpp"
#include "libqpagesize.h"

QPageSize* q_pagesize_new() {
    return QPageSize_new();
}

QPageSize* q_pagesize_new2(int64_t pageSizeId) {
    return QPageSize_new2(pageSizeId);
}

QPageSize* q_pagesize_new3(void* pointSize) {
    return QPageSize_new3((QSize*)pointSize);
}

QPageSize* q_pagesize_new4(void* size, int64_t units) {
    return QPageSize_new4((QSizeF*)size, units);
}

QPageSize* q_pagesize_new5(void* other) {
    return QPageSize_new5((QPageSize*)other);
}

QPageSize* q_pagesize_new6(void* pointSize, const char* name) {
    return QPageSize_new6((QSize*)pointSize, qstring(name));
}

QPageSize* q_pagesize_new7(void* pointSize, const char* name, int64_t matchPolicy) {
    return QPageSize_new7((QSize*)pointSize, qstring(name), matchPolicy);
}

QPageSize* q_pagesize_new8(void* size, int64_t units, const char* name) {
    return QPageSize_new8((QSizeF*)size, units, qstring(name));
}

QPageSize* q_pagesize_new9(void* size, int64_t units, const char* name, int64_t matchPolicy) {
    return QPageSize_new9((QSizeF*)size, units, qstring(name), matchPolicy);
}

void q_pagesize_operator_assign(void* self, void* other) {
    QPageSize_OperatorAssign((QPageSize*)self, (QPageSize*)other);
}

void q_pagesize_swap(void* self, void* other) {
    QPageSize_Swap((QPageSize*)self, (QPageSize*)other);
}

bool q_pagesize_is_equivalent_to(void* self, void* other) {
    return QPageSize_IsEquivalentTo((QPageSize*)self, (QPageSize*)other);
}

bool q_pagesize_is_valid(void* self) {
    return QPageSize_IsValid((QPageSize*)self);
}

const char* q_pagesize_key(void* self) {
    libqt_string _str = QPageSize_Key((QPageSize*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pagesize_name(void* self) {
    libqt_string _str = QPageSize_Name((QPageSize*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pagesize_id(void* self) {
    return QPageSize_Id((QPageSize*)self);
}

int32_t q_pagesize_windows_id(void* self) {
    return QPageSize_WindowsId((QPageSize*)self);
}

QSizeF* q_pagesize_definition_size(void* self) {
    return QPageSize_DefinitionSize((QPageSize*)self);
}

int64_t q_pagesize_definition_units(void* self) {
    return QPageSize_DefinitionUnits((QPageSize*)self);
}

QSizeF* q_pagesize_size(void* self, int64_t units) {
    return QPageSize_Size((QPageSize*)self, units);
}

QSize* q_pagesize_size_points(void* self) {
    return QPageSize_SizePoints((QPageSize*)self);
}

QSize* q_pagesize_size_pixels(void* self, int resolution) {
    return QPageSize_SizePixels((QPageSize*)self, resolution);
}

QRectF* q_pagesize_rect(void* self, int64_t units) {
    return QPageSize_Rect((QPageSize*)self, units);
}

QRect* q_pagesize_rect_points(void* self) {
    return QPageSize_RectPoints((QPageSize*)self);
}

QRect* q_pagesize_rect_pixels(void* self, int resolution) {
    return QPageSize_RectPixels((QPageSize*)self, resolution);
}

const char* q_pagesize_key_with_page_size_id(int64_t pageSizeId) {
    libqt_string _str = QPageSize_KeyWithPageSizeId(pageSizeId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pagesize_name_with_page_size_id(int64_t pageSizeId) {
    libqt_string _str = QPageSize_NameWithPageSizeId(pageSizeId);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pagesize_id_with_point_size(void* pointSize) {
    return QPageSize_IdWithPointSize((QSize*)pointSize);
}

int64_t q_pagesize_id2(void* size, int64_t units) {
    return QPageSize_Id2((QSizeF*)size, units);
}

int64_t q_pagesize_id_with_windows_id(int windowsId) {
    return QPageSize_IdWithWindowsId(windowsId);
}

int32_t q_pagesize_windows_id_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_WindowsIdWithPageSizeId(pageSizeId);
}

QSizeF* q_pagesize_definition_size_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_DefinitionSizeWithPageSizeId(pageSizeId);
}

int64_t q_pagesize_definition_units_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_DefinitionUnitsWithPageSizeId(pageSizeId);
}

QSizeF* q_pagesize_size2(int64_t pageSizeId, int64_t units) {
    return QPageSize_Size2(pageSizeId, units);
}

QSize* q_pagesize_size_points_with_page_size_id(int64_t pageSizeId) {
    return QPageSize_SizePointsWithPageSizeId(pageSizeId);
}

QSize* q_pagesize_size_pixels2(int64_t pageSizeId, int resolution) {
    return QPageSize_SizePixels2(pageSizeId, resolution);
}

int64_t q_pagesize_id22(void* pointSize, int64_t matchPolicy) {
    return QPageSize_Id22((QSize*)pointSize, matchPolicy);
}

int64_t q_pagesize_id3(void* size, int64_t units, int64_t matchPolicy) {
    return QPageSize_Id3((QSizeF*)size, units, matchPolicy);
}

void q_pagesize_delete(void* self) {
    QPageSize_Delete((QPageSize*)(self));
}
