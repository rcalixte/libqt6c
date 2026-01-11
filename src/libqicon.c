#include "libqiconengine.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwindow.hpp"
#include "libqicon.hpp"
#include "libqicon.h"

QIcon* q_icon_new() {
    return QIcon_new();
}

QIcon* q_icon_new2(void* pixmap) {
    return QIcon_new2((QPixmap*)pixmap);
}

QIcon* q_icon_new3(void* other) {
    return QIcon_new3((QIcon*)other);
}

QIcon* q_icon_new4(const char* fileName) {
    return QIcon_new4(qstring(fileName));
}

QIcon* q_icon_new5(void* engine) {
    return QIcon_new5((QIconEngine*)engine);
}

void q_icon_operator_assign(void* self, void* other) {
    QIcon_OperatorAssign((QIcon*)self, (QIcon*)other);
}

void q_icon_swap(void* self, void* other) {
    QIcon_Swap((QIcon*)self, (QIcon*)other);
}

QVariant* q_icon_to_q_variant(void* self) {
    return QIcon_ToQVariant((QIcon*)self);
}

QPixmap* q_icon_pixmap(void* self, void* size) {
    return QIcon_Pixmap((QIcon*)self, (QSize*)size);
}

QPixmap* q_icon_pixmap2(void* self, int w, int h) {
    return QIcon_Pixmap2((QIcon*)self, w, h);
}

QPixmap* q_icon_pixmap3(void* self, int extent) {
    return QIcon_Pixmap3((QIcon*)self, extent);
}

QPixmap* q_icon_pixmap4(void* self, void* size, double devicePixelRatio) {
    return QIcon_Pixmap4((QIcon*)self, (QSize*)size, devicePixelRatio);
}

QPixmap* q_icon_pixmap5(void* self, void* window, void* size) {
    return QIcon_Pixmap5((QIcon*)self, (QWindow*)window, (QSize*)size);
}

QSize* q_icon_actual_size(void* self, void* size) {
    return QIcon_ActualSize((QIcon*)self, (QSize*)size);
}

QSize* q_icon_actual_size2(void* self, void* window, void* size) {
    return QIcon_ActualSize2((QIcon*)self, (QWindow*)window, (QSize*)size);
}

const char* q_icon_name(void* self) {
    libqt_string _str = QIcon_Name((QIcon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_icon_paint(void* self, void* painter, void* rect) {
    QIcon_Paint((QIcon*)self, (QPainter*)painter, (QRect*)rect);
}

void q_icon_paint2(void* self, void* painter, int x, int y, int w, int h) {
    QIcon_Paint2((QIcon*)self, (QPainter*)painter, x, y, w, h);
}

bool q_icon_is_null(void* self) {
    return QIcon_IsNull((QIcon*)self);
}

bool q_icon_is_detached(void* self) {
    return QIcon_IsDetached((QIcon*)self);
}

void q_icon_detach(void* self) {
    QIcon_Detach((QIcon*)self);
}

long long q_icon_cache_key(void* self) {
    return QIcon_CacheKey((QIcon*)self);
}

void q_icon_add_pixmap(void* self, void* pixmap) {
    QIcon_AddPixmap((QIcon*)self, (QPixmap*)pixmap);
}

void q_icon_add_file(void* self, const char* fileName) {
    QIcon_AddFile((QIcon*)self, qstring(fileName));
}

libqt_list /* of QSize* */ q_icon_available_sizes(void* self) {
    libqt_list _arr = QIcon_AvailableSizes((QIcon*)self);
    return _arr;
}

void q_icon_set_is_mask(void* self, bool isMask) {
    QIcon_SetIsMask((QIcon*)self, isMask);
}

bool q_icon_is_mask(void* self) {
    return QIcon_IsMask((QIcon*)self);
}

QIcon* q_icon_from_theme(const char* name) {
    return QIcon_FromTheme(qstring(name));
}

QIcon* q_icon_from_theme2(const char* name, void* fallback) {
    return QIcon_FromTheme2(qstring(name), (QIcon*)fallback);
}

bool q_icon_has_theme_icon(const char* name) {
    return QIcon_HasThemeIcon(qstring(name));
}

QIcon* q_icon_from_theme3(int32_t icon) {
    return QIcon_FromTheme3(icon);
}

QIcon* q_icon_from_theme4(int32_t icon, void* fallback) {
    return QIcon_FromTheme4(icon, (QIcon*)fallback);
}

bool q_icon_has_theme_icon2(int32_t icon) {
    return QIcon_HasThemeIcon2(icon);
}

const char** q_icon_theme_search_paths() {
    libqt_list _arr = QIcon_ThemeSearchPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_icon_theme_search_paths");
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

void q_icon_set_theme_search_paths(const char* searchpath[static 1]) {
    size_t searchpath_len = libqt_strv_length(searchpath);
    libqt_string* searchpath_qstr = (libqt_string*)malloc(searchpath_len * sizeof(libqt_string));
    if (searchpath_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_icon_set_theme_search_paths");
        abort();
    }
    for (size_t i = 0; i < searchpath_len; ++i) {
        searchpath_qstr[i] = qstring(searchpath[i]);
    }
    libqt_list searchpath_list = qlist(searchpath_qstr, searchpath_len);
    QIcon_SetThemeSearchPaths(searchpath_list);
    free(searchpath_qstr);
}

const char** q_icon_fallback_search_paths() {
    libqt_list _arr = QIcon_FallbackSearchPaths();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_icon_fallback_search_paths");
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

void q_icon_set_fallback_search_paths(const char* paths[static 1]) {
    size_t paths_len = libqt_strv_length(paths);
    libqt_string* paths_qstr = (libqt_string*)malloc(paths_len * sizeof(libqt_string));
    if (paths_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_icon_set_fallback_search_paths");
        abort();
    }
    for (size_t i = 0; i < paths_len; ++i) {
        paths_qstr[i] = qstring(paths[i]);
    }
    libqt_list paths_list = qlist(paths_qstr, paths_len);
    QIcon_SetFallbackSearchPaths(paths_list);
    free(paths_qstr);
}

const char* q_icon_theme_name() {
    libqt_string _str = QIcon_ThemeName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_icon_set_theme_name(const char* path) {
    QIcon_SetThemeName(qstring(path));
}

const char* q_icon_fallback_theme_name() {
    libqt_string _str = QIcon_FallbackThemeName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_icon_set_fallback_theme_name(const char* name) {
    QIcon_SetFallbackThemeName(qstring(name));
}

QPixmap* q_icon_pixmap22(void* self, void* size, int32_t mode) {
    return QIcon_Pixmap22((QIcon*)self, (QSize*)size, mode);
}

QPixmap* q_icon_pixmap32(void* self, void* size, int32_t mode, int32_t state) {
    return QIcon_Pixmap32((QIcon*)self, (QSize*)size, mode, state);
}

QPixmap* q_icon_pixmap33(void* self, int w, int h, int32_t mode) {
    return QIcon_Pixmap33((QIcon*)self, w, h, mode);
}

QPixmap* q_icon_pixmap42(void* self, int w, int h, int32_t mode, int32_t state) {
    return QIcon_Pixmap42((QIcon*)self, w, h, mode, state);
}

QPixmap* q_icon_pixmap23(void* self, int extent, int32_t mode) {
    return QIcon_Pixmap23((QIcon*)self, extent, mode);
}

QPixmap* q_icon_pixmap34(void* self, int extent, int32_t mode, int32_t state) {
    return QIcon_Pixmap34((QIcon*)self, extent, mode, state);
}

QPixmap* q_icon_pixmap35(void* self, void* size, double devicePixelRatio, int32_t mode) {
    return QIcon_Pixmap35((QIcon*)self, (QSize*)size, devicePixelRatio, mode);
}

QPixmap* q_icon_pixmap43(void* self, void* size, double devicePixelRatio, int32_t mode, int32_t state) {
    return QIcon_Pixmap43((QIcon*)self, (QSize*)size, devicePixelRatio, mode, state);
}

QPixmap* q_icon_pixmap36(void* self, void* window, void* size, int32_t mode) {
    return QIcon_Pixmap36((QIcon*)self, (QWindow*)window, (QSize*)size, mode);
}

QPixmap* q_icon_pixmap44(void* self, void* window, void* size, int32_t mode, int32_t state) {
    return QIcon_Pixmap44((QIcon*)self, (QWindow*)window, (QSize*)size, mode, state);
}

QSize* q_icon_actual_size22(void* self, void* size, int32_t mode) {
    return QIcon_ActualSize22((QIcon*)self, (QSize*)size, mode);
}

QSize* q_icon_actual_size3(void* self, void* size, int32_t mode, int32_t state) {
    return QIcon_ActualSize3((QIcon*)self, (QSize*)size, mode, state);
}

QSize* q_icon_actual_size32(void* self, void* window, void* size, int32_t mode) {
    return QIcon_ActualSize32((QIcon*)self, (QWindow*)window, (QSize*)size, mode);
}

QSize* q_icon_actual_size4(void* self, void* window, void* size, int32_t mode, int32_t state) {
    return QIcon_ActualSize4((QIcon*)self, (QWindow*)window, (QSize*)size, mode, state);
}

void q_icon_paint3(void* self, void* painter, void* rect, int32_t alignment) {
    QIcon_Paint3((QIcon*)self, (QPainter*)painter, (QRect*)rect, alignment);
}

void q_icon_paint4(void* self, void* painter, void* rect, int32_t alignment, int32_t mode) {
    QIcon_Paint4((QIcon*)self, (QPainter*)painter, (QRect*)rect, alignment, mode);
}

void q_icon_paint5(void* self, void* painter, void* rect, int32_t alignment, int32_t mode, int32_t state) {
    QIcon_Paint5((QIcon*)self, (QPainter*)painter, (QRect*)rect, alignment, mode, state);
}

void q_icon_paint6(void* self, void* painter, int x, int y, int w, int h, int32_t alignment) {
    QIcon_Paint6((QIcon*)self, (QPainter*)painter, x, y, w, h, alignment);
}

void q_icon_paint7(void* self, void* painter, int x, int y, int w, int h, int32_t alignment, int32_t mode) {
    QIcon_Paint7((QIcon*)self, (QPainter*)painter, x, y, w, h, alignment, mode);
}

void q_icon_paint8(void* self, void* painter, int x, int y, int w, int h, int32_t alignment, int32_t mode, int32_t state) {
    QIcon_Paint8((QIcon*)self, (QPainter*)painter, x, y, w, h, alignment, mode, state);
}

void q_icon_add_pixmap2(void* self, void* pixmap, int32_t mode) {
    QIcon_AddPixmap2((QIcon*)self, (QPixmap*)pixmap, mode);
}

void q_icon_add_pixmap3(void* self, void* pixmap, int32_t mode, int32_t state) {
    QIcon_AddPixmap3((QIcon*)self, (QPixmap*)pixmap, mode, state);
}

void q_icon_add_file2(void* self, const char* fileName, void* size) {
    QIcon_AddFile2((QIcon*)self, qstring(fileName), (QSize*)size);
}

void q_icon_add_file3(void* self, const char* fileName, void* size, int32_t mode) {
    QIcon_AddFile3((QIcon*)self, qstring(fileName), (QSize*)size, mode);
}

void q_icon_add_file4(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    QIcon_AddFile4((QIcon*)self, qstring(fileName), (QSize*)size, mode, state);
}

libqt_list /* of QSize* */ q_icon_available_sizes1(void* self, int32_t mode) {
    libqt_list _arr = QIcon_AvailableSizes1((QIcon*)self, mode);
    return _arr;
}

libqt_list /* of QSize* */ q_icon_available_sizes2(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = QIcon_AvailableSizes2((QIcon*)self, mode, state);
    return _arr;
}

void q_icon_delete(void* self) {
    QIcon_Delete((QIcon*)(self));
}
