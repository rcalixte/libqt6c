#include <QAbstractButton>
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
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "libqwizard.hpp"
#include "libqwizard.hxx"

QWizard* QWizard_new(QWidget* parent) {
    return new VirtualQWizard(parent);
}

QWizard* QWizard_new2() {
    return new VirtualQWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
    return new VirtualQWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QWizard_MetaObject(const QWizard* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWizard_Metacast(QWizard* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWizard_Metacall(QWizard* self, int param1, int param2, void** param3) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWizard_OnMetacall(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Metacall_Callback(reinterpret_cast<VirtualQWizard::QWizard_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWizard_QBaseMetacall(QWizard* self, int param1, int param2, void** param3) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Metacall_IsBase(true);
        return vqwizard->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWizard_Tr(const char* s) {
    QString _ret = QWizard::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QWizard_AddPage(QWizard* self, QWizardPage* page) {
    return self->addPage(page);
}

void QWizard_SetPage(QWizard* self, int id, QWizardPage* page) {
    self->setPage(static_cast<int>(id), page);
}

void QWizard_RemovePage(QWizard* self, int id) {
    self->removePage(static_cast<int>(id));
}

QWizardPage* QWizard_Page(const QWizard* self, int id) {
    return self->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(const QWizard* self, int id) {
    return self->hasVisitedPage(static_cast<int>(id));
}

libqt_list /* of int */ QWizard_VisitedIds(const QWizard* self) {
    QList<int> _ret = self->visitedIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_list /* of int */ QWizard_PageIds(const QWizard* self) {
    QList<int> _ret = self->pageIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

void QWizard_SetStartId(QWizard* self, int id) {
    self->setStartId(static_cast<int>(id));
}

int QWizard_StartId(const QWizard* self) {
    return self->startId();
}

QWizardPage* QWizard_CurrentPage(const QWizard* self) {
    return self->currentPage();
}

int QWizard_CurrentId(const QWizard* self) {
    return self->currentId();
}

void QWizard_SetField(QWizard* self, libqt_string name, QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setField(name_QString, *value);
}

QVariant* QWizard_Field(const QWizard* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->field(name_QString));
}

void QWizard_SetWizardStyle(QWizard* self, int style) {
    self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_WizardStyle(const QWizard* self) {
    return static_cast<int>(self->wizardStyle());
}

void QWizard_SetOption(QWizard* self, int option) {
    self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(const QWizard* self, int option) {
    return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
    self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_Options(const QWizard* self) {
    return static_cast<int>(self->options());
}

void QWizard_SetButtonText(QWizard* self, int which, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

libqt_string QWizard_ButtonText(const QWizard* self, int which) {
    QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizard_SetButtonLayout(QWizard* self, libqt_list /* of int */ layout) {
    QList<QWizard::WizardButton> layout_QList;
    layout_QList.reserve(layout.len);
    int* layout_arr = static_cast<int*>(layout.data.ints);
    for (size_t i = 0; i < layout.len; ++i) {
        layout_QList.push_back(static_cast<QWizard::WizardButton>(layout_arr[i]));
    }
    self->setButtonLayout(layout_QList);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
    self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(const QWizard* self, int which) {
    return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, int format) {
    self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_TitleFormat(const QWizard* self) {
    return static_cast<int>(self->titleFormat());
}

void QWizard_SetSubTitleFormat(QWizard* self, int format) {
    self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_SubTitleFormat(const QWizard* self) {
    return static_cast<int>(self->subTitleFormat());
}

void QWizard_SetPixmap(QWizard* self, int which, QPixmap* pixmap) {
    self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(const QWizard* self, int which) {
    return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
    self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(const QWizard* self) {
    return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
    self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
    self->currentIdChanged(static_cast<int>(id));
}

void QWizard_Connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::currentIdChanged, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_HelpRequested(QWizard* self) {
    self->helpRequested();
}

void QWizard_Connect_HelpRequested(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*) = reinterpret_cast<void (*)(QWizard*)>(slot);
    QWizard::connect(self, &QWizard::helpRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
    self->customButtonClicked(static_cast<int>(which));
}

void QWizard_Connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::customButtonClicked, [self, slotFunc](int which) {
        int sigval1 = which;
        slotFunc(self, sigval1);
    });
}

void QWizard_PageAdded(QWizard* self, int id) {
    self->pageAdded(static_cast<int>(id));
}

void QWizard_Connect_PageAdded(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageAdded, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_PageRemoved(QWizard* self, int id) {
    self->pageRemoved(static_cast<int>(id));
}

void QWizard_Connect_PageRemoved(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageRemoved, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_Back(QWizard* self) {
    self->back();
}

void QWizard_Next(QWizard* self) {
    self->next();
}

void QWizard_SetCurrentId(QWizard* self, int id) {
    self->setCurrentId(static_cast<int>(id));
}

void QWizard_Restart(QWizard* self) {
    self->restart();
}

libqt_string QWizard_Tr2(const char* s, const char* c) {
    QString _ret = QWizard::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWizard_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWizard::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
    self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

// Derived class handler implementation
bool QWizard_ValidateCurrentPage(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->validateCurrentPage();
    } else {
        return vqwizard->validateCurrentPage();
    }
}

// Base class handler implementation
bool QWizard_QBaseValidateCurrentPage(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ValidateCurrentPage_IsBase(true);
        return vqwizard->validateCurrentPage();
    } else {
        return vqwizard->validateCurrentPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnValidateCurrentPage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ValidateCurrentPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_ValidateCurrentPage_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_NextId(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->nextId();
    } else {
        return vqwizard->nextId();
    }
}

// Base class handler implementation
int QWizard_QBaseNextId(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_NextId_IsBase(true);
        return vqwizard->nextId();
    } else {
        return vqwizard->nextId();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNextId(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_NextId_Callback(reinterpret_cast<VirtualQWizard::QWizard_NextId_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_SetVisible(QWizard* self, bool visible) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setVisible(visible);
    } else {
        vqwizard->setVisible(visible);
    }
}

// Base class handler implementation
void QWizard_QBaseSetVisible(QWizard* self, bool visible) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_SetVisible_IsBase(true);
        vqwizard->setVisible(visible);
    } else {
        vqwizard->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSetVisible(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_SetVisible_Callback(reinterpret_cast<VirtualQWizard::QWizard_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizard_SizeHint(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return new QSize(vqwizard->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QWizard_QBaseSizeHint(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SizeHint_IsBase(true);
        return new QSize(vqwizard->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSizeHint(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SizeHint_Callback(reinterpret_cast<VirtualQWizard::QWizard_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_Event(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->event(event);
    } else {
        return vqwizard->event(event);
    }
}

// Base class handler implementation
bool QWizard_QBaseEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Event_IsBase(true);
        return vqwizard->event(event);
    } else {
        return vqwizard->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Event_Callback(reinterpret_cast<VirtualQWizard::QWizard_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->resizeEvent(event);
    } else {
        vqwizard->resizeEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseResizeEvent(QWizard* self, QResizeEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ResizeEvent_IsBase(true);
        vqwizard->resizeEvent(event);
    } else {
        vqwizard->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnResizeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ResizeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_PaintEvent(QWizard* self, QPaintEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->paintEvent(event);
    } else {
        vqwizard->paintEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBasePaintEvent(QWizard* self, QPaintEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_PaintEvent_IsBase(true);
        vqwizard->paintEvent(event);
    } else {
        vqwizard->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_PaintEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Done(QWizard* self, int result) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->done(static_cast<int>(result));
    } else {
        vqwizard->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QWizard_QBaseDone(QWizard* self, int result) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Done_IsBase(true);
        vqwizard->done(static_cast<int>(result));
    } else {
        vqwizard->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDone(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Done_Callback(reinterpret_cast<VirtualQWizard::QWizard_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InitializePage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->initializePage(static_cast<int>(id));
    } else {
        vqwizard->initializePage(static_cast<int>(id));
    }
}

// Base class handler implementation
void QWizard_QBaseInitializePage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_InitializePage_IsBase(true);
        vqwizard->initializePage(static_cast<int>(id));
    } else {
        vqwizard->initializePage(static_cast<int>(id));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitializePage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_InitializePage_Callback(reinterpret_cast<VirtualQWizard::QWizard_InitializePage_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CleanupPage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->cleanupPage(static_cast<int>(id));
    } else {
        vqwizard->cleanupPage(static_cast<int>(id));
    }
}

// Base class handler implementation
void QWizard_QBaseCleanupPage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CleanupPage_IsBase(true);
        vqwizard->cleanupPage(static_cast<int>(id));
    } else {
        vqwizard->cleanupPage(static_cast<int>(id));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCleanupPage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CleanupPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_CleanupPage_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizard_MinimumSizeHint(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return new QSize(vqwizard->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWizard_QBaseMinimumSizeHint(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_MinimumSizeHint_IsBase(true);
        return new QSize(vqwizard->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMinimumSizeHint(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWizard::QWizard_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Open(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->open();
    } else {
        vqwizard->open();
    }
}

// Base class handler implementation
void QWizard_QBaseOpen(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Open_IsBase(true);
        vqwizard->open();
    } else {
        vqwizard->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnOpen(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Open_Callback(reinterpret_cast<VirtualQWizard::QWizard_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Exec(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->exec();
    } else {
        return vqwizard->exec();
    }
}

// Base class handler implementation
int QWizard_QBaseExec(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Exec_IsBase(true);
        return vqwizard->exec();
    } else {
        return vqwizard->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnExec(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Exec_Callback(reinterpret_cast<VirtualQWizard::QWizard_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Accept(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->accept();
    } else {
        vqwizard->accept();
    }
}

// Base class handler implementation
void QWizard_QBaseAccept(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Accept_IsBase(true);
        vqwizard->accept();
    } else {
        vqwizard->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnAccept(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Accept_Callback(reinterpret_cast<VirtualQWizard::QWizard_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Reject(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->reject();
    } else {
        vqwizard->reject();
    }
}

// Base class handler implementation
void QWizard_QBaseReject(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Reject_IsBase(true);
        vqwizard->reject();
    } else {
        vqwizard->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnReject(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Reject_Callback(reinterpret_cast<VirtualQWizard::QWizard_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_KeyPressEvent(QWizard* self, QKeyEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->keyPressEvent(param1);
    } else {
        vqwizard->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseKeyPressEvent(QWizard* self, QKeyEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_KeyPressEvent_IsBase(true);
        vqwizard->keyPressEvent(param1);
    } else {
        vqwizard->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyPressEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_KeyPressEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CloseEvent(QWizard* self, QCloseEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->closeEvent(param1);
    } else {
        vqwizard->closeEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseCloseEvent(QWizard* self, QCloseEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CloseEvent_IsBase(true);
        vqwizard->closeEvent(param1);
    } else {
        vqwizard->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCloseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CloseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ShowEvent(QWizard* self, QShowEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->showEvent(param1);
    } else {
        vqwizard->showEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseShowEvent(QWizard* self, QShowEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ShowEvent_IsBase(true);
        vqwizard->showEvent(param1);
    } else {
        vqwizard->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnShowEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ShowEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->contextMenuEvent(param1);
    } else {
        vqwizard->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ContextMenuEvent_IsBase(true);
        vqwizard->contextMenuEvent(param1);
    } else {
        vqwizard->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnContextMenuEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_EventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->eventFilter(param1, param2);
    } else {
        return vqwizard->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QWizard_QBaseEventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_EventFilter_IsBase(true);
        return vqwizard->eventFilter(param1, param2);
    } else {
        return vqwizard->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEventFilter(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_EventFilter_Callback(reinterpret_cast<VirtualQWizard::QWizard_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_DevType(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->devType();
    } else {
        return vqwizard->devType();
    }
}

// Base class handler implementation
int QWizard_QBaseDevType(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_DevType_IsBase(true);
        return vqwizard->devType();
    } else {
        return vqwizard->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDevType(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_DevType_Callback(reinterpret_cast<VirtualQWizard::QWizard_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_HeightForWidth(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwizard->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWizard_QBaseHeightForWidth(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_HeightForWidth_IsBase(true);
        return vqwizard->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwizard->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHeightForWidth(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_HeightForWidth_Callback(reinterpret_cast<VirtualQWizard::QWizard_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_HasHeightForWidth(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->hasHeightForWidth();
    } else {
        return vqwizard->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWizard_QBaseHasHeightForWidth(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_HasHeightForWidth_IsBase(true);
        return vqwizard->hasHeightForWidth();
    } else {
        return vqwizard->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHasHeightForWidth(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWizard::QWizard_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWizard_PaintEngine(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->paintEngine();
    } else {
        return vqwizard->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWizard_QBasePaintEngine(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_PaintEngine_IsBase(true);
        return vqwizard->paintEngine();
    } else {
        return vqwizard->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEngine(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_PaintEngine_Callback(reinterpret_cast<VirtualQWizard::QWizard_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MousePressEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->mousePressEvent(event);
    } else {
        vqwizard->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMousePressEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MousePressEvent_IsBase(true);
        vqwizard->mousePressEvent(event);
    } else {
        vqwizard->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMousePressEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MousePressEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->mouseReleaseEvent(event);
    } else {
        vqwizard->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseReleaseEvent_IsBase(true);
        vqwizard->mouseReleaseEvent(event);
    } else {
        vqwizard->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseReleaseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->mouseDoubleClickEvent(event);
    } else {
        vqwizard->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseDoubleClickEvent_IsBase(true);
        vqwizard->mouseDoubleClickEvent(event);
    } else {
        vqwizard->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseDoubleClickEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseMoveEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->mouseMoveEvent(event);
    } else {
        vqwizard->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseMoveEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseMoveEvent_IsBase(true);
        vqwizard->mouseMoveEvent(event);
    } else {
        vqwizard->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_WheelEvent(QWizard* self, QWheelEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->wheelEvent(event);
    } else {
        vqwizard->wheelEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseWheelEvent(QWizard* self, QWheelEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_WheelEvent_IsBase(true);
        vqwizard->wheelEvent(event);
    } else {
        vqwizard->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnWheelEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_WheelEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_KeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->keyReleaseEvent(event);
    } else {
        vqwizard->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseKeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_KeyReleaseEvent_IsBase(true);
        vqwizard->keyReleaseEvent(event);
    } else {
        vqwizard->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyReleaseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_FocusInEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->focusInEvent(event);
    } else {
        vqwizard->focusInEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseFocusInEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusInEvent_IsBase(true);
        vqwizard->focusInEvent(event);
    } else {
        vqwizard->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusInEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusInEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_FocusOutEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->focusOutEvent(event);
    } else {
        vqwizard->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseFocusOutEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusOutEvent_IsBase(true);
        vqwizard->focusOutEvent(event);
    } else {
        vqwizard->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusOutEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusOutEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_EnterEvent(QWizard* self, QEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->enterEvent(event);
    } else {
        vqwizard->enterEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseEnterEvent(QWizard* self, QEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_EnterEvent_IsBase(true);
        vqwizard->enterEvent(event);
    } else {
        vqwizard->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEnterEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_EnterEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_LeaveEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->leaveEvent(event);
    } else {
        vqwizard->leaveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseLeaveEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_LeaveEvent_IsBase(true);
        vqwizard->leaveEvent(event);
    } else {
        vqwizard->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnLeaveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_LeaveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MoveEvent(QWizard* self, QMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->moveEvent(event);
    } else {
        vqwizard->moveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMoveEvent(QWizard* self, QMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MoveEvent_IsBase(true);
        vqwizard->moveEvent(event);
    } else {
        vqwizard->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_MoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_TabletEvent(QWizard* self, QTabletEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->tabletEvent(event);
    } else {
        vqwizard->tabletEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseTabletEvent(QWizard* self, QTabletEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_TabletEvent_IsBase(true);
        vqwizard->tabletEvent(event);
    } else {
        vqwizard->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTabletEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_TabletEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ActionEvent(QWizard* self, QActionEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->actionEvent(event);
    } else {
        vqwizard->actionEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseActionEvent(QWizard* self, QActionEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ActionEvent_IsBase(true);
        vqwizard->actionEvent(event);
    } else {
        vqwizard->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnActionEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ActionEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->dragEnterEvent(event);
    } else {
        vqwizard->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragEnterEvent_IsBase(true);
        vqwizard->dragEnterEvent(event);
    } else {
        vqwizard->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragEnterEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragEnterEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->dragMoveEvent(event);
    } else {
        vqwizard->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragMoveEvent_IsBase(true);
        vqwizard->dragMoveEvent(event);
    } else {
        vqwizard->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragMoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->dragLeaveEvent(event);
    } else {
        vqwizard->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragLeaveEvent_IsBase(true);
        vqwizard->dragLeaveEvent(event);
    } else {
        vqwizard->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragLeaveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DropEvent(QWizard* self, QDropEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->dropEvent(event);
    } else {
        vqwizard->dropEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDropEvent(QWizard* self, QDropEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DropEvent_IsBase(true);
        vqwizard->dropEvent(event);
    } else {
        vqwizard->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDropEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DropEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_HideEvent(QWizard* self, QHideEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->hideEvent(event);
    } else {
        vqwizard->hideEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseHideEvent(QWizard* self, QHideEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_HideEvent_IsBase(true);
        vqwizard->hideEvent(event);
    } else {
        vqwizard->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHideEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_HideEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_NativeEvent(QWizard* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWizard_QBaseNativeEvent(QWizard* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_NativeEvent_IsBase(true);
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNativeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_NativeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ChangeEvent(QWizard* self, QEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->changeEvent(param1);
    } else {
        vqwizard->changeEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseChangeEvent(QWizard* self, QEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ChangeEvent_IsBase(true);
        vqwizard->changeEvent(param1);
    } else {
        vqwizard->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChangeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ChangeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Metric(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWizard_QBaseMetric(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Metric_IsBase(true);
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetric(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Metric_Callback(reinterpret_cast<VirtualQWizard::QWizard_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InitPainter(const QWizard* self, QPainter* painter) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->initPainter(painter);
    } else {
        vqwizard->initPainter(painter);
    }
}

// Base class handler implementation
void QWizard_QBaseInitPainter(const QWizard* self, QPainter* painter) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_InitPainter_IsBase(true);
        vqwizard->initPainter(painter);
    } else {
        vqwizard->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitPainter(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_InitPainter_Callback(reinterpret_cast<VirtualQWizard::QWizard_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWizard_Redirected(const QWizard* self, QPoint* offset) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->redirected(offset);
    } else {
        return vqwizard->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWizard_QBaseRedirected(const QWizard* self, QPoint* offset) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Redirected_IsBase(true);
        return vqwizard->redirected(offset);
    } else {
        return vqwizard->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnRedirected(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Redirected_Callback(reinterpret_cast<VirtualQWizard::QWizard_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWizard_SharedPainter(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->sharedPainter();
    } else {
        return vqwizard->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWizard_QBaseSharedPainter(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SharedPainter_IsBase(true);
        return vqwizard->sharedPainter();
    } else {
        return vqwizard->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSharedPainter(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SharedPainter_Callback(reinterpret_cast<VirtualQWizard::QWizard_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->inputMethodEvent(param1);
    } else {
        vqwizard->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseInputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_InputMethodEvent_IsBase(true);
        vqwizard->inputMethodEvent(param1);
    } else {
        vqwizard->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_InputMethodEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizard_InputMethodQuery(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return new QVariant(vqwizard->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWizard_QBaseInputMethodQuery(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_InputMethodQuery_IsBase(true);
        return new QVariant(vqwizard->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodQuery(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_InputMethodQuery_Callback(reinterpret_cast<VirtualQWizard::QWizard_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusNextPrevChild(QWizard* self, bool next) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->focusNextPrevChild(next);
    } else {
        return vqwizard->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusNextPrevChild(QWizard* self, bool next) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusNextPrevChild_IsBase(true);
        return vqwizard->focusNextPrevChild(next);
    } else {
        return vqwizard->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusNextPrevChild(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_TimerEvent(QWizard* self, QTimerEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->timerEvent(event);
    } else {
        vqwizard->timerEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseTimerEvent(QWizard* self, QTimerEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_TimerEvent_IsBase(true);
        vqwizard->timerEvent(event);
    } else {
        vqwizard->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTimerEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_TimerEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ChildEvent(QWizard* self, QChildEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->childEvent(event);
    } else {
        vqwizard->childEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseChildEvent(QWizard* self, QChildEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ChildEvent_IsBase(true);
        vqwizard->childEvent(event);
    } else {
        vqwizard->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChildEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ChildEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CustomEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->customEvent(event);
    } else {
        vqwizard->customEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseCustomEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CustomEvent_IsBase(true);
        vqwizard->customEvent(event);
    } else {
        vqwizard->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCustomEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_CustomEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ConnectNotify(QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->connectNotify(*signal);
    } else {
        vqwizard->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWizard_QBaseConnectNotify(QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ConnectNotify_IsBase(true);
        vqwizard->connectNotify(*signal);
    } else {
        vqwizard->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnConnectNotify(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_ConnectNotify_Callback(reinterpret_cast<VirtualQWizard::QWizard_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DisconnectNotify(QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->disconnectNotify(*signal);
    } else {
        vqwizard->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWizard_QBaseDisconnectNotify(QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DisconnectNotify_IsBase(true);
        vqwizard->disconnectNotify(*signal);
    } else {
        vqwizard->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDisconnectNotify(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_DisconnectNotify_Callback(reinterpret_cast<VirtualQWizard::QWizard_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_AdjustPosition(QWizard* self, QWidget* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->adjustPosition(param1);
    } else {
        vqwizard->adjustPosition(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseAdjustPosition(QWizard* self, QWidget* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_AdjustPosition_IsBase(true);
        vqwizard->adjustPosition(param1);
    } else {
        vqwizard->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnAdjustPosition(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_AdjustPosition_Callback(reinterpret_cast<VirtualQWizard::QWizard_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_UpdateMicroFocus(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->updateMicroFocus();
    } else {
        vqwizard->updateMicroFocus();
    }
}

// Base class handler implementation
void QWizard_QBaseUpdateMicroFocus(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_UpdateMicroFocus_IsBase(true);
        vqwizard->updateMicroFocus();
    } else {
        vqwizard->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnUpdateMicroFocus(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWizard::QWizard_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Create(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->create();
    } else {
        vqwizard->create();
    }
}

// Base class handler implementation
void QWizard_QBaseCreate(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Create_IsBase(true);
        vqwizard->create();
    } else {
        vqwizard->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCreate(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Create_Callback(reinterpret_cast<VirtualQWizard::QWizard_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Destroy(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->destroy();
    } else {
        vqwizard->destroy();
    }
}

// Base class handler implementation
void QWizard_QBaseDestroy(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Destroy_IsBase(true);
        vqwizard->destroy();
    } else {
        vqwizard->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDestroy(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_Destroy_Callback(reinterpret_cast<VirtualQWizard::QWizard_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusNextChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->focusNextChild();
    } else {
        return vqwizard->focusNextChild();
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusNextChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusNextChild_IsBase(true);
        return vqwizard->focusNextChild();
    } else {
        return vqwizard->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusNextChild(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusNextChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusPreviousChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->focusPreviousChild();
    } else {
        return vqwizard->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusPreviousChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusPreviousChild_IsBase(true);
        return vqwizard->focusPreviousChild();
    } else {
        return vqwizard->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusPreviousChild(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->setQWizard_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWizard_Sender(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->sender();
    } else {
        return vqwizard->sender();
    }
}

// Base class handler implementation
QObject* QWizard_QBaseSender(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Sender_IsBase(true);
        return vqwizard->sender();
    } else {
        return vqwizard->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSender(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Sender_Callback(reinterpret_cast<VirtualQWizard::QWizard_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_SenderSignalIndex(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->senderSignalIndex();
    } else {
        return vqwizard->senderSignalIndex();
    }
}

// Base class handler implementation
int QWizard_QBaseSenderSignalIndex(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SenderSignalIndex_IsBase(true);
        return vqwizard->senderSignalIndex();
    } else {
        return vqwizard->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSenderSignalIndex(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWizard::QWizard_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Receivers(const QWizard* self, const char* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->receivers(signal);
    } else {
        return vqwizard->receivers(signal);
    }
}

// Base class handler implementation
int QWizard_QBaseReceivers(const QWizard* self, const char* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Receivers_IsBase(true);
        return vqwizard->receivers(signal);
    } else {
        return vqwizard->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnReceivers(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_Receivers_Callback(reinterpret_cast<VirtualQWizard::QWizard_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_IsSignalConnected(const QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->isSignalConnected(*signal);
    } else {
        return vqwizard->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWizard_QBaseIsSignalConnected(const QWizard* self, QMetaMethod* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_IsSignalConnected_IsBase(true);
        return vqwizard->isSignalConnected(*signal);
    } else {
        return vqwizard->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnIsSignalConnected(const QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->setQWizard_IsSignalConnected_Callback(reinterpret_cast<VirtualQWizard::QWizard_IsSignalConnected_Callback>(slot));
    }
}

void QWizard_Delete(QWizard* self) {
    delete self;
}

QWizardPage* QWizardPage_new(QWidget* parent) {
    return new VirtualQWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
    return new VirtualQWizardPage();
}

QMetaObject* QWizardPage_MetaObject(const QWizardPage* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWizardPage_Metacast(QWizardPage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWizardPage_Metacall(QWizardPage* self, int param1, int param2, void** param3) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWizardPage_OnMetacall(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Metacall_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWizardPage_QBaseMetacall(QWizardPage* self, int param1, int param2, void** param3) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Metacall_IsBase(true);
        return vqwizardpage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWizardPage_Tr(const char* s) {
    QString _ret = QWizardPage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetTitle(QWizardPage* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QWizardPage_Title(const QWizardPage* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetSubTitle(QWizardPage* self, libqt_string subTitle) {
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setSubTitle(subTitle_QString);
}

libqt_string QWizardPage_SubTitle(const QWizardPage* self) {
    QString _ret = self->subTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetPixmap(QWizardPage* self, int which, QPixmap* pixmap) {
    self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which) {
    return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
    self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(const QWizardPage* self) {
    return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
    self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(const QWizardPage* self) {
    return self->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

libqt_string QWizardPage_ButtonText(const QWizardPage* self, int which) {
    QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
    self->completeChanged();
}

void QWizardPage_Connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
    void (*slotFunc)(QWizardPage*) = reinterpret_cast<void (*)(QWizardPage*)>(slot);
    QWizardPage::connect(self, &QWizardPage::completeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWizardPage_Tr2(const char* s, const char* c) {
    QString _ret = QWizardPage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWizardPage::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QWizardPage_InitializePage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->initializePage();
    } else {
        vqwizardpage->initializePage();
    }
}

// Base class handler implementation
void QWizardPage_QBaseInitializePage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_InitializePage_IsBase(true);
        vqwizardpage->initializePage();
    } else {
        vqwizardpage->initializePage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitializePage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_InitializePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InitializePage_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CleanupPage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->cleanupPage();
    } else {
        vqwizardpage->cleanupPage();
    }
}

// Base class handler implementation
void QWizardPage_QBaseCleanupPage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CleanupPage_IsBase(true);
        vqwizardpage->cleanupPage();
    } else {
        vqwizardpage->cleanupPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCleanupPage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CleanupPage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CleanupPage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_ValidatePage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->validatePage();
    } else {
        return vqwizardpage->validatePage();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseValidatePage(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ValidatePage_IsBase(true);
        return vqwizardpage->validatePage();
    } else {
        return vqwizardpage->validatePage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnValidatePage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ValidatePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ValidatePage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_IsComplete(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->isComplete();
    } else {
        return vqwizardpage->isComplete();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseIsComplete(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_IsComplete_IsBase(true);
        return vqwizardpage->isComplete();
    } else {
        return vqwizardpage->isComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsComplete(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_IsComplete_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_IsComplete_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_NextId(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->nextId();
    } else {
        return vqwizardpage->nextId();
    }
}

// Base class handler implementation
int QWizardPage_QBaseNextId(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_NextId_IsBase(true);
        return vqwizardpage->nextId();
    } else {
        return vqwizardpage->nextId();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNextId(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_NextId_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_NextId_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_DevType(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->devType();
    } else {
        return vqwizardpage->devType();
    }
}

// Base class handler implementation
int QWizardPage_QBaseDevType(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_DevType_IsBase(true);
        return vqwizardpage->devType();
    } else {
        return vqwizardpage->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDevType(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_DevType_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_SetVisible(QWizardPage* self, bool visible) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setVisible(visible);
    } else {
        vqwizardpage->setVisible(visible);
    }
}

// Base class handler implementation
void QWizardPage_QBaseSetVisible(QWizardPage* self, bool visible) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_SetVisible_IsBase(true);
        vqwizardpage->setVisible(visible);
    } else {
        vqwizardpage->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetVisible(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_SetVisible_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizardPage_SizeHint(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return new QSize(vqwizardpage->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QWizardPage_QBaseSizeHint(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SizeHint_IsBase(true);
        return new QSize(vqwizardpage->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSizeHint(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SizeHint_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizardPage_MinimumSizeHint(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return new QSize(vqwizardpage->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWizardPage_QBaseMinimumSizeHint(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_MinimumSizeHint_IsBase(true);
        return new QSize(vqwizardpage->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMinimumSizeHint(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_HeightForWidth(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWizardPage_QBaseHeightForWidth(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_HeightForWidth_IsBase(true);
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHeightForWidth(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_HeightForWidth_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_HasHeightForWidth(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->hasHeightForWidth();
    } else {
        return vqwizardpage->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseHasHeightForWidth(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_HasHeightForWidth_IsBase(true);
        return vqwizardpage->hasHeightForWidth();
    } else {
        return vqwizardpage->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHasHeightForWidth(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWizardPage_PaintEngine(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->paintEngine();
    } else {
        return vqwizardpage->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWizardPage_QBasePaintEngine(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_PaintEngine_IsBase(true);
        return vqwizardpage->paintEngine();
    } else {
        return vqwizardpage->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEngine(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_PaintEngine_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_Event(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->event(event);
    } else {
        return vqwizardpage->event(event);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Event_IsBase(true);
        return vqwizardpage->event(event);
    } else {
        return vqwizardpage->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Event_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MousePressEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->mousePressEvent(event);
    } else {
        vqwizardpage->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMousePressEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MousePressEvent_IsBase(true);
        vqwizardpage->mousePressEvent(event);
    } else {
        vqwizardpage->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMousePressEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MousePressEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->mouseReleaseEvent(event);
    } else {
        vqwizardpage->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseReleaseEvent_IsBase(true);
        vqwizardpage->mouseReleaseEvent(event);
    } else {
        vqwizardpage->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseReleaseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->mouseDoubleClickEvent(event);
    } else {
        vqwizardpage->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseDoubleClickEvent_IsBase(true);
        vqwizardpage->mouseDoubleClickEvent(event);
    } else {
        vqwizardpage->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseDoubleClickEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->mouseMoveEvent(event);
    } else {
        vqwizardpage->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseMoveEvent_IsBase(true);
        vqwizardpage->mouseMoveEvent(event);
    } else {
        vqwizardpage->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_WheelEvent(QWizardPage* self, QWheelEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->wheelEvent(event);
    } else {
        vqwizardpage->wheelEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseWheelEvent(QWizardPage* self, QWheelEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_WheelEvent_IsBase(true);
        vqwizardpage->wheelEvent(event);
    } else {
        vqwizardpage->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWheelEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_WheelEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_KeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->keyPressEvent(event);
    } else {
        vqwizardpage->keyPressEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseKeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_KeyPressEvent_IsBase(true);
        vqwizardpage->keyPressEvent(event);
    } else {
        vqwizardpage->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyPressEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_KeyPressEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_KeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->keyReleaseEvent(event);
    } else {
        vqwizardpage->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseKeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_KeyReleaseEvent_IsBase(true);
        vqwizardpage->keyReleaseEvent(event);
    } else {
        vqwizardpage->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyReleaseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_FocusInEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->focusInEvent(event);
    } else {
        vqwizardpage->focusInEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseFocusInEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusInEvent_IsBase(true);
        vqwizardpage->focusInEvent(event);
    } else {
        vqwizardpage->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusInEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusInEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_FocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->focusOutEvent(event);
    } else {
        vqwizardpage->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseFocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusOutEvent_IsBase(true);
        vqwizardpage->focusOutEvent(event);
    } else {
        vqwizardpage->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusOutEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusOutEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_EnterEvent(QWizardPage* self, QEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->enterEvent(event);
    } else {
        vqwizardpage->enterEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseEnterEvent(QWizardPage* self, QEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_EnterEvent_IsBase(true);
        vqwizardpage->enterEvent(event);
    } else {
        vqwizardpage->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEnterEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_EnterEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_LeaveEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->leaveEvent(event);
    } else {
        vqwizardpage->leaveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseLeaveEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_LeaveEvent_IsBase(true);
        vqwizardpage->leaveEvent(event);
    } else {
        vqwizardpage->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnLeaveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_LeaveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_PaintEvent(QWizardPage* self, QPaintEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->paintEvent(event);
    } else {
        vqwizardpage->paintEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBasePaintEvent(QWizardPage* self, QPaintEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_PaintEvent_IsBase(true);
        vqwizardpage->paintEvent(event);
    } else {
        vqwizardpage->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_PaintEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MoveEvent(QWizardPage* self, QMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->moveEvent(event);
    } else {
        vqwizardpage->moveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMoveEvent(QWizardPage* self, QMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MoveEvent_IsBase(true);
        vqwizardpage->moveEvent(event);
    } else {
        vqwizardpage->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_MoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ResizeEvent(QWizardPage* self, QResizeEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->resizeEvent(event);
    } else {
        vqwizardpage->resizeEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseResizeEvent(QWizardPage* self, QResizeEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ResizeEvent_IsBase(true);
        vqwizardpage->resizeEvent(event);
    } else {
        vqwizardpage->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnResizeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ResizeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CloseEvent(QWizardPage* self, QCloseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->closeEvent(event);
    } else {
        vqwizardpage->closeEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseCloseEvent(QWizardPage* self, QCloseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CloseEvent_IsBase(true);
        vqwizardpage->closeEvent(event);
    } else {
        vqwizardpage->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCloseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CloseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->contextMenuEvent(event);
    } else {
        vqwizardpage->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ContextMenuEvent_IsBase(true);
        vqwizardpage->contextMenuEvent(event);
    } else {
        vqwizardpage->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnContextMenuEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_TabletEvent(QWizardPage* self, QTabletEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->tabletEvent(event);
    } else {
        vqwizardpage->tabletEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseTabletEvent(QWizardPage* self, QTabletEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_TabletEvent_IsBase(true);
        vqwizardpage->tabletEvent(event);
    } else {
        vqwizardpage->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTabletEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_TabletEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ActionEvent(QWizardPage* self, QActionEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->actionEvent(event);
    } else {
        vqwizardpage->actionEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseActionEvent(QWizardPage* self, QActionEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ActionEvent_IsBase(true);
        vqwizardpage->actionEvent(event);
    } else {
        vqwizardpage->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnActionEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ActionEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->dragEnterEvent(event);
    } else {
        vqwizardpage->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragEnterEvent_IsBase(true);
        vqwizardpage->dragEnterEvent(event);
    } else {
        vqwizardpage->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragEnterEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragEnterEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->dragMoveEvent(event);
    } else {
        vqwizardpage->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragMoveEvent_IsBase(true);
        vqwizardpage->dragMoveEvent(event);
    } else {
        vqwizardpage->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragMoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->dragLeaveEvent(event);
    } else {
        vqwizardpage->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragLeaveEvent_IsBase(true);
        vqwizardpage->dragLeaveEvent(event);
    } else {
        vqwizardpage->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragLeaveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DropEvent(QWizardPage* self, QDropEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->dropEvent(event);
    } else {
        vqwizardpage->dropEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDropEvent(QWizardPage* self, QDropEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DropEvent_IsBase(true);
        vqwizardpage->dropEvent(event);
    } else {
        vqwizardpage->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDropEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DropEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ShowEvent(QWizardPage* self, QShowEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->showEvent(event);
    } else {
        vqwizardpage->showEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseShowEvent(QWizardPage* self, QShowEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ShowEvent_IsBase(true);
        vqwizardpage->showEvent(event);
    } else {
        vqwizardpage->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnShowEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ShowEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_HideEvent(QWizardPage* self, QHideEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->hideEvent(event);
    } else {
        vqwizardpage->hideEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseHideEvent(QWizardPage* self, QHideEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_HideEvent_IsBase(true);
        vqwizardpage->hideEvent(event);
    } else {
        vqwizardpage->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHideEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_HideEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_NativeEvent(QWizardPage* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWizardPage_QBaseNativeEvent(QWizardPage* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_NativeEvent_IsBase(true);
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNativeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_NativeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ChangeEvent(QWizardPage* self, QEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->changeEvent(param1);
    } else {
        vqwizardpage->changeEvent(param1);
    }
}

// Base class handler implementation
void QWizardPage_QBaseChangeEvent(QWizardPage* self, QEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ChangeEvent_IsBase(true);
        vqwizardpage->changeEvent(param1);
    } else {
        vqwizardpage->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChangeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ChangeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_Metric(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWizardPage_QBaseMetric(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Metric_IsBase(true);
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetric(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Metric_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_InitPainter(const QWizardPage* self, QPainter* painter) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->initPainter(painter);
    } else {
        vqwizardpage->initPainter(painter);
    }
}

// Base class handler implementation
void QWizardPage_QBaseInitPainter(const QWizardPage* self, QPainter* painter) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_InitPainter_IsBase(true);
        vqwizardpage->initPainter(painter);
    } else {
        vqwizardpage->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitPainter(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_InitPainter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWizardPage_Redirected(const QWizardPage* self, QPoint* offset) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->redirected(offset);
    } else {
        return vqwizardpage->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWizardPage_QBaseRedirected(const QWizardPage* self, QPoint* offset) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Redirected_IsBase(true);
        return vqwizardpage->redirected(offset);
    } else {
        return vqwizardpage->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRedirected(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Redirected_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWizardPage_SharedPainter(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->sharedPainter();
    } else {
        return vqwizardpage->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWizardPage_QBaseSharedPainter(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SharedPainter_IsBase(true);
        return vqwizardpage->sharedPainter();
    } else {
        return vqwizardpage->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSharedPainter(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SharedPainter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_InputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->inputMethodEvent(param1);
    } else {
        vqwizardpage->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWizardPage_QBaseInputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_InputMethodEvent_IsBase(true);
        vqwizardpage->inputMethodEvent(param1);
    } else {
        vqwizardpage->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_InputMethodEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizardPage_InputMethodQuery(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return new QVariant(vqwizardpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWizardPage_QBaseInputMethodQuery(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_InputMethodQuery_IsBase(true);
        return new QVariant(vqwizardpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodQuery(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_InputMethodQuery_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusNextPrevChild(QWizardPage* self, bool next) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->focusNextPrevChild(next);
    } else {
        return vqwizardpage->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusNextPrevChild(QWizardPage* self, bool next) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusNextPrevChild_IsBase(true);
        return vqwizardpage->focusNextPrevChild(next);
    } else {
        return vqwizardpage->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusNextPrevChild(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_EventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->eventFilter(watched, event);
    } else {
        return vqwizardpage->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseEventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_EventFilter_IsBase(true);
        return vqwizardpage->eventFilter(watched, event);
    } else {
        return vqwizardpage->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEventFilter(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_EventFilter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_TimerEvent(QWizardPage* self, QTimerEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->timerEvent(event);
    } else {
        vqwizardpage->timerEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseTimerEvent(QWizardPage* self, QTimerEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_TimerEvent_IsBase(true);
        vqwizardpage->timerEvent(event);
    } else {
        vqwizardpage->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTimerEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_TimerEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ChildEvent(QWizardPage* self, QChildEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->childEvent(event);
    } else {
        vqwizardpage->childEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseChildEvent(QWizardPage* self, QChildEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ChildEvent_IsBase(true);
        vqwizardpage->childEvent(event);
    } else {
        vqwizardpage->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChildEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ChildEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CustomEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->customEvent(event);
    } else {
        vqwizardpage->customEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseCustomEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CustomEvent_IsBase(true);
        vqwizardpage->customEvent(event);
    } else {
        vqwizardpage->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCustomEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_CustomEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ConnectNotify(QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->connectNotify(*signal);
    } else {
        vqwizardpage->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseConnectNotify(QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ConnectNotify_IsBase(true);
        vqwizardpage->connectNotify(*signal);
    } else {
        vqwizardpage->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnConnectNotify(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_ConnectNotify_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DisconnectNotify(QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->disconnectNotify(*signal);
    } else {
        vqwizardpage->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDisconnectNotify(QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DisconnectNotify_IsBase(true);
        vqwizardpage->disconnectNotify(*signal);
    } else {
        vqwizardpage->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDisconnectNotify(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_DisconnectNotify_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_SetField(QWizardPage* self, libqt_string name, QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setField(name_QString, *value);
    } else {
        vqwizardpage->setField(name_QString, *value);
    }
}

// Base class handler implementation
void QWizardPage_QBaseSetField(QWizardPage* self, libqt_string name, QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_SetField_IsBase(true);
        vqwizardpage->setField(name_QString, *value);
    } else {
        vqwizardpage->setField(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetField(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_SetField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SetField_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizardPage_Field(const QWizardPage* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return new QVariant(vqwizardpage->field(name_QString));
    }
    return {};
}

// Base class handler implementation
QVariant* QWizardPage_QBaseField(const QWizardPage* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Field_IsBase(true);
        return new QVariant(vqwizardpage->field(name_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnField(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Field_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Field_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField(QWizardPage* self, libqt_string name, QWidget* widget) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->registerField(name_QString, widget);
    } else {
        vqwizardpage->registerField(name_QString, widget);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField(QWizardPage* self, libqt_string name, QWidget* widget) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField_IsBase(true);
        vqwizardpage->registerField(name_QString, widget);
    } else {
        vqwizardpage->registerField(name_QString, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField_Callback>(slot));
    }
}

// Derived class handler implementation
QWizard* QWizardPage_Wizard(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->wizard();
    } else {
        return vqwizardpage->wizard();
    }
}

// Base class handler implementation
QWizard* QWizardPage_QBaseWizard(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Wizard_IsBase(true);
        return vqwizardpage->wizard();
    } else {
        return vqwizardpage->wizard();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWizard(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Wizard_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Wizard_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField3(QWizardPage* self, libqt_string name, QWidget* widget, const char* property) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->registerField(name_QString, widget, property);
    } else {
        vqwizardpage->registerField(name_QString, widget, property);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField3(QWizardPage* self, libqt_string name, QWidget* widget, const char* property) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField3_IsBase(true);
        vqwizardpage->registerField(name_QString, widget, property);
    } else {
        vqwizardpage->registerField(name_QString, widget, property);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField3(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField3_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField3_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField4(QWizardPage* self, libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    } else {
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField4(QWizardPage* self, libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField4_IsBase(true);
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    } else {
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField4(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_RegisterField4_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField4_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_UpdateMicroFocus(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->updateMicroFocus();
    } else {
        vqwizardpage->updateMicroFocus();
    }
}

// Base class handler implementation
void QWizardPage_QBaseUpdateMicroFocus(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_UpdateMicroFocus_IsBase(true);
        vqwizardpage->updateMicroFocus();
    } else {
        vqwizardpage->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnUpdateMicroFocus(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_Create(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->create();
    } else {
        vqwizardpage->create();
    }
}

// Base class handler implementation
void QWizardPage_QBaseCreate(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Create_IsBase(true);
        vqwizardpage->create();
    } else {
        vqwizardpage->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCreate(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Create_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_Destroy(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->destroy();
    } else {
        vqwizardpage->destroy();
    }
}

// Base class handler implementation
void QWizardPage_QBaseDestroy(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Destroy_IsBase(true);
        vqwizardpage->destroy();
    } else {
        vqwizardpage->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDestroy(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_Destroy_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusNextChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->focusNextChild();
    } else {
        return vqwizardpage->focusNextChild();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusNextChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusNextChild_IsBase(true);
        return vqwizardpage->focusNextChild();
    } else {
        return vqwizardpage->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusNextChild(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusNextChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusPreviousChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->focusPreviousChild();
    } else {
        return vqwizardpage->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusPreviousChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusPreviousChild_IsBase(true);
        return vqwizardpage->focusPreviousChild();
    } else {
        return vqwizardpage->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusPreviousChild(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->setQWizardPage_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWizardPage_Sender(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->sender();
    } else {
        return vqwizardpage->sender();
    }
}

// Base class handler implementation
QObject* QWizardPage_QBaseSender(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Sender_IsBase(true);
        return vqwizardpage->sender();
    } else {
        return vqwizardpage->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSender(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Sender_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_SenderSignalIndex(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->senderSignalIndex();
    } else {
        return vqwizardpage->senderSignalIndex();
    }
}

// Base class handler implementation
int QWizardPage_QBaseSenderSignalIndex(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SenderSignalIndex_IsBase(true);
        return vqwizardpage->senderSignalIndex();
    } else {
        return vqwizardpage->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSenderSignalIndex(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_Receivers(const QWizardPage* self, const char* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->receivers(signal);
    } else {
        return vqwizardpage->receivers(signal);
    }
}

// Base class handler implementation
int QWizardPage_QBaseReceivers(const QWizardPage* self, const char* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Receivers_IsBase(true);
        return vqwizardpage->receivers(signal);
    } else {
        return vqwizardpage->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnReceivers(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_Receivers_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_IsSignalConnected(const QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->isSignalConnected(*signal);
    } else {
        return vqwizardpage->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseIsSignalConnected(const QWizardPage* self, QMetaMethod* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_IsSignalConnected_IsBase(true);
        return vqwizardpage->isSignalConnected(*signal);
    } else {
        return vqwizardpage->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsSignalConnected(const QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->setQWizardPage_IsSignalConnected_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_IsSignalConnected_Callback>(slot));
    }
}

void QWizardPage_Delete(QWizardPage* self) {
    delete self;
}
