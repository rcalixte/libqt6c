#include <QAbstractFileIconProvider>
#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDialog>
#include <QDir>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFileDialog>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qfiledialog.h>
#include "libqfiledialog.hpp"
#include "libqfiledialog.hxx"

QFileDialog* QFileDialog_new(QWidget* parent) {
    return new VirtualQFileDialog(parent);
}

QFileDialog* QFileDialog_new2(QWidget* parent, int f) {
    return new VirtualQFileDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QFileDialog* QFileDialog_new3() {
    return new VirtualQFileDialog();
}

QFileDialog* QFileDialog_new4(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new VirtualQFileDialog(parent, caption_QString);
}

QFileDialog* QFileDialog_new5(QWidget* parent, libqt_string caption, libqt_string directory) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return new VirtualQFileDialog(parent, caption_QString, directory_QString);
}

QFileDialog* QFileDialog_new6(QWidget* parent, libqt_string caption, libqt_string directory, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new VirtualQFileDialog(parent, caption_QString, directory_QString, filter_QString);
}

QMetaObject* QFileDialog_MetaObject(const QFileDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileDialog_Metacast(QFileDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileDialog_Metacall(QFileDialog* self, int param1, int param2, void** param3) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileDialog_OnMetacall(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Metacall_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileDialog_QBaseMetacall(QFileDialog* self, int param1, int param2, void** param3) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Metacall_IsBase(true);
        return vqfiledialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFileDialog_Tr(const char* s) {
    QString _ret = QFileDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetDirectory(QFileDialog* self, libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    self->setDirectory(directory_QString);
}

void QFileDialog_SetDirectoryWithDirectory(QFileDialog* self, QDir* directory) {
    self->setDirectory(*directory);
}

QDir* QFileDialog_Directory(const QFileDialog* self) {
    return new QDir(self->directory());
}

void QFileDialog_SetDirectoryUrl(QFileDialog* self, QUrl* directory) {
    self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self) {
    return new QUrl(self->directoryUrl());
}

void QFileDialog_SelectFile(QFileDialog* self, libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->selectFile(filename_QString);
}

libqt_list /* of libqt_string */ QFileDialog_SelectedFiles(const QFileDialog* self) {
    QStringList _ret = self->selectedFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectUrl(QFileDialog* self, QUrl* url) {
    self->selectUrl(*url);
}

libqt_list /* of QUrl* */ QFileDialog_SelectedUrls(const QFileDialog* self) {
    QList<QUrl> _ret = self->selectedUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetNameFilter(QFileDialog* self, libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setNameFilter(filter_QString);
}

void QFileDialog_SetNameFilters(QFileDialog* self, libqt_list /* of libqt_string */ filters) {
    QStringList filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data.ptr);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setNameFilters(filters_QList);
}

libqt_list /* of libqt_string */ QFileDialog_NameFilters(const QFileDialog* self) {
    QStringList _ret = self->nameFilters();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectNameFilter(QFileDialog* self, libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->selectNameFilter(filter_QString);
}

libqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self) {
    QString _ret = self->selectedMimeTypeFilter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self) {
    QString _ret = self->selectedNameFilter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetMimeTypeFilters(QFileDialog* self, libqt_list /* of libqt_string */ filters) {
    QStringList filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data.ptr);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setMimeTypeFilters(filters_QList);
}

libqt_list /* of libqt_string */ QFileDialog_MimeTypeFilters(const QFileDialog* self) {
    QStringList _ret = self->mimeTypeFilters();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->selectMimeTypeFilter(filter_QString);
}

int QFileDialog_Filter(const QFileDialog* self) {
    return static_cast<int>(self->filter());
}

void QFileDialog_SetFilter(QFileDialog* self, int filters) {
    self->setFilter(static_cast<QDir::Filters>(filters));
}

void QFileDialog_SetViewMode(QFileDialog* self, int mode) {
    self->setViewMode(static_cast<QFileDialog::ViewMode>(mode));
}

int QFileDialog_ViewMode(const QFileDialog* self) {
    return static_cast<int>(self->viewMode());
}

void QFileDialog_SetFileMode(QFileDialog* self, int mode) {
    self->setFileMode(static_cast<QFileDialog::FileMode>(mode));
}

int QFileDialog_FileMode(const QFileDialog* self) {
    return static_cast<int>(self->fileMode());
}

void QFileDialog_SetAcceptMode(QFileDialog* self, int mode) {
    self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
}

int QFileDialog_AcceptMode(const QFileDialog* self) {
    return static_cast<int>(self->acceptMode());
}

void QFileDialog_SetSidebarUrls(QFileDialog* self, libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data.ptr);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setSidebarUrls(urls_QList);
}

libqt_list /* of QUrl* */ QFileDialog_SidebarUrls(const QFileDialog* self) {
    QList<QUrl> _ret = self->sidebarUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_string QFileDialog_SaveState(const QFileDialog* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QFileDialog_RestoreState(QFileDialog* self, libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

void QFileDialog_SetDefaultSuffix(QFileDialog* self, libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setDefaultSuffix(suffix_QString);
}

libqt_string QFileDialog_DefaultSuffix(const QFileDialog* self) {
    QString _ret = self->defaultSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetHistory(QFileDialog* self, libqt_list /* of libqt_string */ paths) {
    QStringList paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data.ptr);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setHistory(paths_QList);
}

libqt_list /* of libqt_string */ QFileDialog_History(const QFileDialog* self) {
    QStringList _ret = self->history();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self) {
    return self->itemDelegate();
}

void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider) {
    self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self) {
    return self->iconProvider();
}

void QFileDialog_SetLabelText(QFileDialog* self, int label, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLabelText(static_cast<QFileDialog::DialogLabel>(label), text_QString);
}

libqt_string QFileDialog_LabelText(const QFileDialog* self, int label) {
    QString _ret = self->labelText(static_cast<QFileDialog::DialogLabel>(label));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetSupportedSchemes(QFileDialog* self, libqt_list /* of libqt_string */ schemes) {
    QStringList schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data.ptr);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

libqt_list /* of libqt_string */ QFileDialog_SupportedSchemes(const QFileDialog* self) {
    QStringList _ret = self->supportedSchemes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
    self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self) {
    return self->proxyModel();
}

void QFileDialog_SetOption(QFileDialog* self, int option) {
    self->setOption(static_cast<QFileDialog::Option>(option));
}

bool QFileDialog_TestOption(const QFileDialog* self, int option) {
    return self->testOption(static_cast<QFileDialog::Option>(option));
}

void QFileDialog_SetOptions(QFileDialog* self, int options) {
    self->setOptions(static_cast<QFileDialog::Options>(options));
}

int QFileDialog_Options(const QFileDialog* self) {
    return static_cast<int>(self->options());
}

void QFileDialog_FileSelected(QFileDialog* self, libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->fileSelected(file_QString);
}

void QFileDialog_Connect_FileSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_string) = reinterpret_cast<void (*)(QFileDialog*, libqt_string)>(slot);
    QFileDialog::connect(self, &QFileDialog::fileSelected, [self, slotFunc](const QString& file) {
        const QString file_ret = file;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray file_b = file_ret.toUtf8();
        libqt_string file_str;
        file_str.len = file_b.length();
        file_str.data = static_cast<char*>(malloc((file_str.len + 1) * sizeof(char)));
        memcpy(file_str.data, file_b.data(), file_str.len);
        file_str.data[file_str.len] = '\0';
        libqt_string sigval1 = file_str;
        slotFunc(self, sigval1);
    });
}

void QFileDialog_FilesSelected(QFileDialog* self, libqt_list /* of libqt_string */ files) {
    QStringList files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data.ptr);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    self->filesSelected(files_QList);
}

void QFileDialog_Connect_FilesSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_list /* of libqt_string */) = reinterpret_cast<void (*)(QFileDialog*, libqt_list /* of libqt_string */)>(slot);
    QFileDialog::connect(self, &QFileDialog::filesSelected, [self, slotFunc](const QStringList& files) {
        const QStringList& files_ret = files;
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* files_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * files_ret.length()));
        for (size_t i = 0; i < files_ret.length(); ++i) {
            QString files_lv_ret = files_ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray files_lv_b = files_lv_ret.toUtf8();
            libqt_string files_lv_str;
            files_lv_str.len = files_lv_b.length();
            files_lv_str.data = static_cast<char*>(malloc((files_lv_str.len + 1) * sizeof(char)));
            memcpy(files_lv_str.data, files_lv_b.data(), files_lv_str.len);
            files_lv_str.data[files_lv_str.len] = '\0';
            files_arr[i] = files_lv_str;
        }
        libqt_list files_out;
        files_out.len = files_ret.length();
        files_out.data.ptr = static_cast<void*>(files_arr);
        libqt_list /* of libqt_string */ sigval1 = files_out;
        slotFunc(self, sigval1);
    });
}

void QFileDialog_CurrentChanged(QFileDialog* self, libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->currentChanged(path_QString);
}

void QFileDialog_Connect_CurrentChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_string) = reinterpret_cast<void (*)(QFileDialog*, libqt_string)>(slot);
    QFileDialog::connect(self, &QFileDialog::currentChanged, [self, slotFunc](const QString& path) {
        const QString path_ret = path;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray path_b = path_ret.toUtf8();
        libqt_string path_str;
        path_str.len = path_b.length();
        path_str.data = static_cast<char*>(malloc((path_str.len + 1) * sizeof(char)));
        memcpy(path_str.data, path_b.data(), path_str.len);
        path_str.data[path_str.len] = '\0';
        libqt_string sigval1 = path_str;
        slotFunc(self, sigval1);
    });
}

void QFileDialog_DirectoryEntered(QFileDialog* self, libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    self->directoryEntered(directory_QString);
}

void QFileDialog_Connect_DirectoryEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_string) = reinterpret_cast<void (*)(QFileDialog*, libqt_string)>(slot);
    QFileDialog::connect(self, &QFileDialog::directoryEntered, [self, slotFunc](const QString& directory) {
        const QString directory_ret = directory;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray directory_b = directory_ret.toUtf8();
        libqt_string directory_str;
        directory_str.len = directory_b.length();
        directory_str.data = static_cast<char*>(malloc((directory_str.len + 1) * sizeof(char)));
        memcpy(directory_str.data, directory_b.data(), directory_str.len);
        directory_str.data[directory_str.len] = '\0';
        libqt_string sigval1 = directory_str;
        slotFunc(self, sigval1);
    });
}

void QFileDialog_UrlSelected(QFileDialog* self, QUrl* url) {
    self->urlSelected(*url);
}

void QFileDialog_Connect_UrlSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::urlSelected, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QFileDialog_UrlsSelected(QFileDialog* self, libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data.ptr);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->urlsSelected(urls_QList);
}

void QFileDialog_Connect_UrlsSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_list /* of QUrl* */) = reinterpret_cast<void (*)(QFileDialog*, libqt_list /* of QUrl* */)>(slot);
    QFileDialog::connect(self, &QFileDialog::urlsSelected, [self, slotFunc](const QList<QUrl>& urls) {
        const QList<QUrl>& urls_ret = urls;
        // Convert QList<> from C++ memory to manually-managed C memory
        QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * urls_ret.length()));
        for (size_t i = 0; i < urls_ret.length(); ++i) {
            urls_arr[i] = new QUrl(urls_ret[i]);
        }
        libqt_list urls_out;
        urls_out.len = urls_ret.length();
        urls_out.data.ptr = static_cast<void*>(urls_arr);
        libqt_list /* of QUrl* */ sigval1 = urls_out;
        slotFunc(self, sigval1);
    });
}

void QFileDialog_CurrentUrlChanged(QFileDialog* self, QUrl* url) {
    self->currentUrlChanged(*url);
}

void QFileDialog_Connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::currentUrlChanged, [self, slotFunc](const QUrl& url) {
        const QUrl& url_ret = url;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
        slotFunc(self, sigval1);
    });
}

void QFileDialog_DirectoryUrlEntered(QFileDialog* self, QUrl* directory) {
    self->directoryUrlEntered(*directory);
}

void QFileDialog_Connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::directoryUrlEntered, [self, slotFunc](const QUrl& directory) {
        const QUrl& directory_ret = directory;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&directory_ret);
        slotFunc(self, sigval1);
    });
}

void QFileDialog_FilterSelected(QFileDialog* self, libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->filterSelected(filter_QString);
}

void QFileDialog_Connect_FilterSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_string) = reinterpret_cast<void (*)(QFileDialog*, libqt_string)>(slot);
    QFileDialog::connect(self, &QFileDialog::filterSelected, [self, slotFunc](const QString& filter) {
        const QString filter_ret = filter;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray filter_b = filter_ret.toUtf8();
        libqt_string filter_str;
        filter_str.len = filter_b.length();
        filter_str.data = static_cast<char*>(malloc((filter_str.len + 1) * sizeof(char)));
        memcpy(filter_str.data, filter_b.data(), filter_str.len);
        filter_str.data[filter_str.len] = '\0';
        libqt_string sigval1 = filter_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QFileDialog_GetOpenFileName() {
    QString _ret = QFileDialog::getOpenFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetOpenFileUrl() {
    return new QUrl(QFileDialog::getOpenFileUrl());
}

libqt_string QFileDialog_GetSaveFileName() {
    QString _ret = QFileDialog::getSaveFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetSaveFileUrl() {
    return new QUrl(QFileDialog::getSaveFileUrl());
}

libqt_string QFileDialog_GetExistingDirectory() {
    QString _ret = QFileDialog::getExistingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl() {
    return new QUrl(QFileDialog::getExistingDirectoryUrl());
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames() {
    QStringList _ret = QFileDialog::getOpenFileNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls() {
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SaveFileContent(libqt_string fileContent, libqt_string fileNameHint) {
    QByteArray fileContent_QByteArray(fileContent.data, fileContent.len);
    QString fileNameHint_QString = QString::fromUtf8(fileNameHint.data, fileNameHint.len);
    QFileDialog::saveFileContent(fileContent_QByteArray, fileNameHint_QString);
}

libqt_string QFileDialog_Tr2(const char* s, const char* c) {
    QString _ret = QFileDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFileDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetOption2(QFileDialog* self, int option, bool on) {
    self->setOption(static_cast<QFileDialog::Option>(option), on);
}

libqt_string QFileDialog_GetOpenFileName1(QWidget* parent) {
    QString _ret = QFileDialog::getOpenFileName(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString _ret = QFileDialog::getOpenFileName(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName3(QWidget* parent, libqt_string caption, libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString, filter_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getOpenFileUrl(parent));
}

QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, libqt_string caption, QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir, filter_QString));
}

libqt_string QFileDialog_GetSaveFileName1(QWidget* parent) {
    QString _ret = QFileDialog::getSaveFileName(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString _ret = QFileDialog::getSaveFileName(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName3(QWidget* parent, libqt_string caption, libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString, filter_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getSaveFileUrl(parent));
}

QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, libqt_string caption, QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir, filter_QString));
}

libqt_string QFileDialog_GetExistingDirectory1(QWidget* parent) {
    QString _ret = QFileDialog::getExistingDirectory(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, libqt_string caption, libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, libqt_string caption, libqt_string dir, int options) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString, static_cast<QFileDialog::Options>(options));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}

QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, libqt_string caption, QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, libqt_string caption, QUrl* dir, int options) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options)));
}

QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, libqt_string caption, QUrl* dir, int options, libqt_list /* of libqt_string */ supportedSchemes) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QStringList supportedSchemes_QList;
    supportedSchemes_QList.reserve(supportedSchemes.len);
    libqt_string* supportedSchemes_arr = static_cast<libqt_string*>(supportedSchemes.data.ptr);
    for (size_t i = 0; i < supportedSchemes.len; ++i) {
        QString supportedSchemes_arr_i_QString = QString::fromUtf8(supportedSchemes_arr[i].data, supportedSchemes_arr[i].len);
        supportedSchemes_QList.push_back(supportedSchemes_arr_i_QString);
    }
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options), supportedSchemes_QList));
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames1(QWidget* parent) {
    QStringList _ret = QFileDialog::getOpenFileNames(parent);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames3(QWidget* parent, libqt_string caption, libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames4(QWidget* parent, libqt_string caption, libqt_string dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QStringList _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString, filter_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls1(QWidget* parent) {
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls2(QWidget* parent, libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls3(QWidget* parent, libqt_string caption, QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls4(QWidget* parent, libqt_string caption, QUrl* dir, libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir, filter_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

// Derived class handler implementation
void QFileDialog_SetVisible(QFileDialog* self, bool visible) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setVisible(visible);
    } else {
        vqfiledialog->setVisible(visible);
    }
}

// Base class handler implementation
void QFileDialog_QBaseSetVisible(QFileDialog* self, bool visible) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_SetVisible_IsBase(true);
        vqfiledialog->setVisible(visible);
    } else {
        vqfiledialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSetVisible(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_SetVisible_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Done(QFileDialog* self, int result) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->done(static_cast<int>(result));
    } else {
        vqfiledialog->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QFileDialog_QBaseDone(QFileDialog* self, int result) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Done_IsBase(true);
        vqfiledialog->done(static_cast<int>(result));
    } else {
        vqfiledialog->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDone(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Done_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Accept(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->accept();
    } else {
        vqfiledialog->accept();
    }
}

// Base class handler implementation
void QFileDialog_QBaseAccept(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Accept_IsBase(true);
        vqfiledialog->accept();
    } else {
        vqfiledialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnAccept(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Accept_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->changeEvent(e);
    } else {
        vqfiledialog->changeEvent(e);
    }
}

// Base class handler implementation
void QFileDialog_QBaseChangeEvent(QFileDialog* self, QEvent* e) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ChangeEvent_IsBase(true);
        vqfiledialog->changeEvent(e);
    } else {
        vqfiledialog->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnChangeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFileDialog_SizeHint(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return new QSize(vqfiledialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QFileDialog_QBaseSizeHint(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SizeHint_IsBase(true);
        return new QSize(vqfiledialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSizeHint(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SizeHint_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFileDialog_MinimumSizeHint(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return new QSize(vqfiledialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFileDialog_QBaseMinimumSizeHint(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqfiledialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMinimumSizeHint(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Open(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->open();
    } else {
        vqfiledialog->open();
    }
}

// Base class handler implementation
void QFileDialog_QBaseOpen(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Open_IsBase(true);
        vqfiledialog->open();
    } else {
        vqfiledialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnOpen(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Open_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_Exec(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->exec();
    } else {
        return vqfiledialog->exec();
    }
}

// Base class handler implementation
int QFileDialog_QBaseExec(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Exec_IsBase(true);
        return vqfiledialog->exec();
    } else {
        return vqfiledialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnExec(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Exec_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Reject(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->reject();
    } else {
        vqfiledialog->reject();
    }
}

// Base class handler implementation
void QFileDialog_QBaseReject(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Reject_IsBase(true);
        vqfiledialog->reject();
    } else {
        vqfiledialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnReject(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Reject_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_KeyPressEvent(QFileDialog* self, QKeyEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->keyPressEvent(param1);
    } else {
        vqfiledialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseKeyPressEvent(QFileDialog* self, QKeyEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_KeyPressEvent_IsBase(true);
        vqfiledialog->keyPressEvent(param1);
    } else {
        vqfiledialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnKeyPressEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_CloseEvent(QFileDialog* self, QCloseEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->closeEvent(param1);
    } else {
        vqfiledialog->closeEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseCloseEvent(QFileDialog* self, QCloseEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_CloseEvent_IsBase(true);
        vqfiledialog->closeEvent(param1);
    } else {
        vqfiledialog->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnCloseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_CloseEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ShowEvent(QFileDialog* self, QShowEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->showEvent(param1);
    } else {
        vqfiledialog->showEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseShowEvent(QFileDialog* self, QShowEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ShowEvent_IsBase(true);
        vqfiledialog->showEvent(param1);
    } else {
        vqfiledialog->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnShowEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ShowEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ResizeEvent(QFileDialog* self, QResizeEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->resizeEvent(param1);
    } else {
        vqfiledialog->resizeEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseResizeEvent(QFileDialog* self, QResizeEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ResizeEvent_IsBase(true);
        vqfiledialog->resizeEvent(param1);
    } else {
        vqfiledialog->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnResizeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->contextMenuEvent(param1);
    } else {
        vqfiledialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ContextMenuEvent_IsBase(true);
        vqfiledialog->contextMenuEvent(param1);
    } else {
        vqfiledialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnContextMenuEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_EventFilter(QFileDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->eventFilter(param1, param2);
    } else {
        return vqfiledialog->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QFileDialog_QBaseEventFilter(QFileDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_EventFilter_IsBase(true);
        return vqfiledialog->eventFilter(param1, param2);
    } else {
        return vqfiledialog->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEventFilter(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_EventFilter_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_DevType(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->devType();
    } else {
        return vqfiledialog->devType();
    }
}

// Base class handler implementation
int QFileDialog_QBaseDevType(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_DevType_IsBase(true);
        return vqfiledialog->devType();
    } else {
        return vqfiledialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDevType(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_DevType_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_HeightForWidth(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfiledialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFileDialog_QBaseHeightForWidth(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_HeightForWidth_IsBase(true);
        return vqfiledialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfiledialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHeightForWidth(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_HasHeightForWidth(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->hasHeightForWidth();
    } else {
        return vqfiledialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFileDialog_QBaseHasHeightForWidth(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_HasHeightForWidth_IsBase(true);
        return vqfiledialog->hasHeightForWidth();
    } else {
        return vqfiledialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHasHeightForWidth(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFileDialog_PaintEngine(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->paintEngine();
    } else {
        return vqfiledialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFileDialog_QBasePaintEngine(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_PaintEngine_IsBase(true);
        return vqfiledialog->paintEngine();
    } else {
        return vqfiledialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnPaintEngine(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_PaintEngine_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_Event(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->event(event);
    } else {
        return vqfiledialog->event(event);
    }
}

// Base class handler implementation
bool QFileDialog_QBaseEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Event_IsBase(true);
        return vqfiledialog->event(event);
    } else {
        return vqfiledialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Event_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_MousePressEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->mousePressEvent(event);
    } else {
        vqfiledialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseMousePressEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MousePressEvent_IsBase(true);
        vqfiledialog->mousePressEvent(event);
    } else {
        vqfiledialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMousePressEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_MouseReleaseEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->mouseReleaseEvent(event);
    } else {
        vqfiledialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseMouseReleaseEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseReleaseEvent_IsBase(true);
        vqfiledialog->mouseReleaseEvent(event);
    } else {
        vqfiledialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseReleaseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_MouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->mouseDoubleClickEvent(event);
    } else {
        vqfiledialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseMouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseDoubleClickEvent_IsBase(true);
        vqfiledialog->mouseDoubleClickEvent(event);
    } else {
        vqfiledialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseDoubleClickEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_MouseMoveEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->mouseMoveEvent(event);
    } else {
        vqfiledialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseMouseMoveEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseMoveEvent_IsBase(true);
        vqfiledialog->mouseMoveEvent(event);
    } else {
        vqfiledialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_WheelEvent(QFileDialog* self, QWheelEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->wheelEvent(event);
    } else {
        vqfiledialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseWheelEvent(QFileDialog* self, QWheelEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_WheelEvent_IsBase(true);
        vqfiledialog->wheelEvent(event);
    } else {
        vqfiledialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnWheelEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_WheelEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_KeyReleaseEvent(QFileDialog* self, QKeyEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->keyReleaseEvent(event);
    } else {
        vqfiledialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseKeyReleaseEvent(QFileDialog* self, QKeyEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_KeyReleaseEvent_IsBase(true);
        vqfiledialog->keyReleaseEvent(event);
    } else {
        vqfiledialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnKeyReleaseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_FocusInEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->focusInEvent(event);
    } else {
        vqfiledialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseFocusInEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusInEvent_IsBase(true);
        vqfiledialog->focusInEvent(event);
    } else {
        vqfiledialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusInEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_FocusOutEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->focusOutEvent(event);
    } else {
        vqfiledialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseFocusOutEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusOutEvent_IsBase(true);
        vqfiledialog->focusOutEvent(event);
    } else {
        vqfiledialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusOutEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_EnterEvent(QFileDialog* self, QEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->enterEvent(event);
    } else {
        vqfiledialog->enterEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseEnterEvent(QFileDialog* self, QEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_EnterEvent_IsBase(true);
        vqfiledialog->enterEvent(event);
    } else {
        vqfiledialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEnterEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_EnterEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_LeaveEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->leaveEvent(event);
    } else {
        vqfiledialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseLeaveEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_LeaveEvent_IsBase(true);
        vqfiledialog->leaveEvent(event);
    } else {
        vqfiledialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnLeaveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_PaintEvent(QFileDialog* self, QPaintEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->paintEvent(event);
    } else {
        vqfiledialog->paintEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBasePaintEvent(QFileDialog* self, QPaintEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_PaintEvent_IsBase(true);
        vqfiledialog->paintEvent(event);
    } else {
        vqfiledialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnPaintEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_PaintEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_MoveEvent(QFileDialog* self, QMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->moveEvent(event);
    } else {
        vqfiledialog->moveEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseMoveEvent(QFileDialog* self, QMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MoveEvent_IsBase(true);
        vqfiledialog->moveEvent(event);
    } else {
        vqfiledialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_MoveEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_TabletEvent(QFileDialog* self, QTabletEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->tabletEvent(event);
    } else {
        vqfiledialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseTabletEvent(QFileDialog* self, QTabletEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_TabletEvent_IsBase(true);
        vqfiledialog->tabletEvent(event);
    } else {
        vqfiledialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnTabletEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_TabletEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ActionEvent(QFileDialog* self, QActionEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->actionEvent(event);
    } else {
        vqfiledialog->actionEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseActionEvent(QFileDialog* self, QActionEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ActionEvent_IsBase(true);
        vqfiledialog->actionEvent(event);
    } else {
        vqfiledialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnActionEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ActionEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_DragEnterEvent(QFileDialog* self, QDragEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->dragEnterEvent(event);
    } else {
        vqfiledialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseDragEnterEvent(QFileDialog* self, QDragEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragEnterEvent_IsBase(true);
        vqfiledialog->dragEnterEvent(event);
    } else {
        vqfiledialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragEnterEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_DragMoveEvent(QFileDialog* self, QDragMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->dragMoveEvent(event);
    } else {
        vqfiledialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseDragMoveEvent(QFileDialog* self, QDragMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragMoveEvent_IsBase(true);
        vqfiledialog->dragMoveEvent(event);
    } else {
        vqfiledialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_DragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->dragLeaveEvent(event);
    } else {
        vqfiledialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseDragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragLeaveEvent_IsBase(true);
        vqfiledialog->dragLeaveEvent(event);
    } else {
        vqfiledialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragLeaveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_DropEvent(QFileDialog* self, QDropEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->dropEvent(event);
    } else {
        vqfiledialog->dropEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseDropEvent(QFileDialog* self, QDropEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DropEvent_IsBase(true);
        vqfiledialog->dropEvent(event);
    } else {
        vqfiledialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDropEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DropEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_HideEvent(QFileDialog* self, QHideEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->hideEvent(event);
    } else {
        vqfiledialog->hideEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseHideEvent(QFileDialog* self, QHideEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_HideEvent_IsBase(true);
        vqfiledialog->hideEvent(event);
    } else {
        vqfiledialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHideEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_HideEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_NativeEvent(QFileDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFileDialog_QBaseNativeEvent(QFileDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_NativeEvent_IsBase(true);
        return vqfiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnNativeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_NativeEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_Metric(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFileDialog_QBaseMetric(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Metric_IsBase(true);
        return vqfiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMetric(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Metric_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_InitPainter(const QFileDialog* self, QPainter* painter) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->initPainter(painter);
    } else {
        vqfiledialog->initPainter(painter);
    }
}

// Base class handler implementation
void QFileDialog_QBaseInitPainter(const QFileDialog* self, QPainter* painter) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_InitPainter_IsBase(true);
        vqfiledialog->initPainter(painter);
    } else {
        vqfiledialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInitPainter(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_InitPainter_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFileDialog_Redirected(const QFileDialog* self, QPoint* offset) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->redirected(offset);
    } else {
        return vqfiledialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFileDialog_QBaseRedirected(const QFileDialog* self, QPoint* offset) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Redirected_IsBase(true);
        return vqfiledialog->redirected(offset);
    } else {
        return vqfiledialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnRedirected(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Redirected_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFileDialog_SharedPainter(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->sharedPainter();
    } else {
        return vqfiledialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFileDialog_QBaseSharedPainter(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SharedPainter_IsBase(true);
        return vqfiledialog->sharedPainter();
    } else {
        return vqfiledialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSharedPainter(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SharedPainter_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_InputMethodEvent(QFileDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->inputMethodEvent(param1);
    } else {
        vqfiledialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseInputMethodEvent(QFileDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_InputMethodEvent_IsBase(true);
        vqfiledialog->inputMethodEvent(param1);
    } else {
        vqfiledialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInputMethodEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFileDialog_InputMethodQuery(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return new QVariant(vqfiledialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFileDialog_QBaseInputMethodQuery(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqfiledialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInputMethodQuery(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_FocusNextPrevChild(QFileDialog* self, bool next) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->focusNextPrevChild(next);
    } else {
        return vqfiledialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFileDialog_QBaseFocusNextPrevChild(QFileDialog* self, bool next) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusNextPrevChild_IsBase(true);
        return vqfiledialog->focusNextPrevChild(next);
    } else {
        return vqfiledialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusNextPrevChild(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_TimerEvent(QFileDialog* self, QTimerEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->timerEvent(event);
    } else {
        vqfiledialog->timerEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseTimerEvent(QFileDialog* self, QTimerEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_TimerEvent_IsBase(true);
        vqfiledialog->timerEvent(event);
    } else {
        vqfiledialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnTimerEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_TimerEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ChildEvent(QFileDialog* self, QChildEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->childEvent(event);
    } else {
        vqfiledialog->childEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseChildEvent(QFileDialog* self, QChildEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ChildEvent_IsBase(true);
        vqfiledialog->childEvent(event);
    } else {
        vqfiledialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnChildEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ChildEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_CustomEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->customEvent(event);
    } else {
        vqfiledialog->customEvent(event);
    }
}

// Base class handler implementation
void QFileDialog_QBaseCustomEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_CustomEvent_IsBase(true);
        vqfiledialog->customEvent(event);
    } else {
        vqfiledialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnCustomEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_CustomEvent_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_ConnectNotify(QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->connectNotify(*signal);
    } else {
        vqfiledialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFileDialog_QBaseConnectNotify(QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ConnectNotify_IsBase(true);
        vqfiledialog->connectNotify(*signal);
    } else {
        vqfiledialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnConnectNotify(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_DisconnectNotify(QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->disconnectNotify(*signal);
    } else {
        vqfiledialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFileDialog_QBaseDisconnectNotify(QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DisconnectNotify_IsBase(true);
        vqfiledialog->disconnectNotify(*signal);
    } else {
        vqfiledialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDisconnectNotify(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_AdjustPosition(QFileDialog* self, QWidget* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->adjustPosition(param1);
    } else {
        vqfiledialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QFileDialog_QBaseAdjustPosition(QFileDialog* self, QWidget* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_AdjustPosition_IsBase(true);
        vqfiledialog->adjustPosition(param1);
    } else {
        vqfiledialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnAdjustPosition(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_UpdateMicroFocus(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->updateMicroFocus();
    } else {
        vqfiledialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QFileDialog_QBaseUpdateMicroFocus(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_UpdateMicroFocus_IsBase(true);
        vqfiledialog->updateMicroFocus();
    } else {
        vqfiledialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnUpdateMicroFocus(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Create(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->create();
    } else {
        vqfiledialog->create();
    }
}

// Base class handler implementation
void QFileDialog_QBaseCreate(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Create_IsBase(true);
        vqfiledialog->create();
    } else {
        vqfiledialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnCreate(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Create_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileDialog_Destroy(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->destroy();
    } else {
        vqfiledialog->destroy();
    }
}

// Base class handler implementation
void QFileDialog_QBaseDestroy(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Destroy_IsBase(true);
        vqfiledialog->destroy();
    } else {
        vqfiledialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDestroy(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_Destroy_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_FocusNextChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->focusNextChild();
    } else {
        return vqfiledialog->focusNextChild();
    }
}

// Base class handler implementation
bool QFileDialog_QBaseFocusNextChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusNextChild_IsBase(true);
        return vqfiledialog->focusNextChild();
    } else {
        return vqfiledialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusNextChild(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_FocusPreviousChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->focusPreviousChild();
    } else {
        return vqfiledialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFileDialog_QBaseFocusPreviousChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusPreviousChild_IsBase(true);
        return vqfiledialog->focusPreviousChild();
    } else {
        return vqfiledialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusPreviousChild(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->setQFileDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFileDialog_Sender(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->sender();
    } else {
        return vqfiledialog->sender();
    }
}

// Base class handler implementation
QObject* QFileDialog_QBaseSender(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Sender_IsBase(true);
        return vqfiledialog->sender();
    } else {
        return vqfiledialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSender(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Sender_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_SenderSignalIndex(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->senderSignalIndex();
    } else {
        return vqfiledialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QFileDialog_QBaseSenderSignalIndex(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SenderSignalIndex_IsBase(true);
        return vqfiledialog->senderSignalIndex();
    } else {
        return vqfiledialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSenderSignalIndex(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileDialog_Receivers(const QFileDialog* self, const char* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->receivers(signal);
    } else {
        return vqfiledialog->receivers(signal);
    }
}

// Base class handler implementation
int QFileDialog_QBaseReceivers(const QFileDialog* self, const char* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Receivers_IsBase(true);
        return vqfiledialog->receivers(signal);
    } else {
        return vqfiledialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnReceivers(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_Receivers_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileDialog_IsSignalConnected(const QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->isSignalConnected(*signal);
    } else {
        return vqfiledialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFileDialog_QBaseIsSignalConnected(const QFileDialog* self, QMetaMethod* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_IsSignalConnected_IsBase(true);
        return vqfiledialog->isSignalConnected(*signal);
    } else {
        return vqfiledialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnIsSignalConnected(const QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->setQFileDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_IsSignalConnected_Callback>(slot));
    }
}

void QFileDialog_Delete(QFileDialog* self) {
    delete self;
}
