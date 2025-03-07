#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QCompleter>
#include <QContextMenuEvent>
#include <QCursor>
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
#include <QLineEdit>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QModelIndex>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qcombobox.h>
#include "libqcombobox.hpp"
#include "libqcombobox.hxx"

QComboBox* QComboBox_new(QWidget* parent) {
    return new VirtualQComboBox(parent);
}

QComboBox* QComboBox_new2() {
    return new VirtualQComboBox();
}

QMetaObject* QComboBox_MetaObject(const QComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QComboBox_Metacast(QComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QComboBox_Metacall(QComboBox* self, int param1, int param2, void** param3) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QComboBox_OnMetacall(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Metacall_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QComboBox_QBaseMetacall(QComboBox* self, int param1, int param2, void** param3) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Metacall_IsBase(true);
        return vqcombobox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QComboBox_Tr(const char* s) {
    QString _ret = QComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QComboBox_MaxVisibleItems(const QComboBox* self) {
    return self->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
    self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_Count(const QComboBox* self) {
    return self->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
    self->setMaxCount(static_cast<int>(max));
}

int QComboBox_MaxCount(const QComboBox* self) {
    return self->maxCount();
}

bool QComboBox_DuplicatesEnabled(const QComboBox* self) {
    return self->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
    self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
    self->setFrame(frame);
}

bool QComboBox_HasFrame(const QComboBox* self) {
    return self->hasFrame();
}

int QComboBox_FindText(const QComboBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->findText(text_QString);
}

int QComboBox_FindData(const QComboBox* self, QVariant* data) {
    return self->findData(*data);
}

int QComboBox_InsertPolicy(const QComboBox* self) {
    return static_cast<int>(self->insertPolicy());
}

void QComboBox_SetInsertPolicy(QComboBox* self, int policy) {
    self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_SizeAdjustPolicy(const QComboBox* self) {
    return static_cast<int>(self->sizeAdjustPolicy());
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy) {
    self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
    return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
    self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(const QComboBox* self) {
    return new QSize(self->iconSize());
}

void QComboBox_SetIconSize(QComboBox* self, QSize* size) {
    self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string QComboBox_PlaceholderText(const QComboBox* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QComboBox_IsEditable(const QComboBox* self) {
    return self->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
    self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
    self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(const QComboBox* self) {
    return self->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, QValidator* v) {
    self->setValidator(v);
}

QValidator* QComboBox_Validator(const QComboBox* self) {
    return (QValidator*)self->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
    self->setCompleter(c);
}

QCompleter* QComboBox_Completer(const QComboBox* self) {
    return self->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self) {
    return self->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(const QComboBox* self) {
    return self->model();
}

QModelIndex* QComboBox_RootModelIndex(const QComboBox* self) {
    return new QModelIndex(self->rootModelIndex());
}

void QComboBox_SetRootModelIndex(QComboBox* self, QModelIndex* index) {
    self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(const QComboBox* self) {
    return self->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
    self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_CurrentIndex(const QComboBox* self) {
    return self->currentIndex();
}

libqt_string QComboBox_CurrentText(const QComboBox* self) {
    QString _ret = self->currentText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVariant* QComboBox_CurrentData(const QComboBox* self) {
    return new QVariant(self->currentData());
}

libqt_string QComboBox_ItemText(const QComboBox* self, int index) {
    QString _ret = self->itemText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
    return new QIcon(self->itemIcon(static_cast<int>(index)));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
    return new QVariant(self->itemData(static_cast<int>(index)));
}

void QComboBox_AddItem(QComboBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(text_QString);
}

void QComboBox_AddItem2(QComboBox* self, QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(*icon, text_QString);
}

void QComboBox_AddItems(QComboBox* self, libqt_list /* of libqt_string */ texts) {
    QStringList texts_QList;
    texts_QList.reserve(texts.len);
    libqt_string* texts_arr = static_cast<libqt_string*>(texts.data.ptr);
    for (size_t i = 0; i < texts.len; ++i) {
        QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
        texts_QList.push_back(texts_arr_i_QString);
    }
    self->addItems(texts_QList);
}

void QComboBox_InsertItem(QComboBox* self, int index, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_InsertItem2(QComboBox* self, int index, QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_InsertItems(QComboBox* self, int index, libqt_list /* of libqt_string */ texts) {
    QStringList texts_QList;
    texts_QList.reserve(texts.len);
    libqt_string* texts_arr = static_cast<libqt_string*>(texts.data.ptr);
    for (size_t i = 0; i < texts.len; ++i) {
        QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
        texts_QList.push_back(texts_arr_i_QString);
    }
    self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
    self->insertSeparator(static_cast<int>(index));
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
    self->removeItem(static_cast<int>(index));
}

void QComboBox_SetItemText(QComboBox* self, int index, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setItemText(static_cast<int>(index), text_QString);
}

void QComboBox_SetItemIcon(QComboBox* self, int index, QIcon* icon) {
    self->setItemIcon(static_cast<int>(index), *icon);
}

void QComboBox_SetItemData(QComboBox* self, int index, QVariant* value) {
    self->setItemData(static_cast<int>(index), *value);
}

QAbstractItemView* QComboBox_View(const QComboBox* self) {
    return self->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
    self->setView(itemView);
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_Clear(QComboBox* self) {
    self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
    self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setEditText(text_QString);
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_SetCurrentText(QComboBox* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCurrentText(text_QString);
}

void QComboBox_EditTextChanged(QComboBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->editTextChanged(param1_QString);
}

void QComboBox_Connect_EditTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, libqt_string) = reinterpret_cast<void (*)(QComboBox*, libqt_string)>(slot);
    QComboBox::connect(self, &QComboBox::editTextChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QComboBox_Activated(QComboBox* self, int index) {
    self->activated(static_cast<int>(index));
}

void QComboBox_Connect_Activated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::activated, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QComboBox_TextActivated(QComboBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textActivated(param1_QString);
}

void QComboBox_Connect_TextActivated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, libqt_string) = reinterpret_cast<void (*)(QComboBox*, libqt_string)>(slot);
    QComboBox::connect(self, &QComboBox::textActivated, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QComboBox_Highlighted(QComboBox* self, int index) {
    self->highlighted(static_cast<int>(index));
}

void QComboBox_Connect_Highlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::highlighted, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QComboBox_TextHighlighted(QComboBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textHighlighted(param1_QString);
}

void QComboBox_Connect_TextHighlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, libqt_string) = reinterpret_cast<void (*)(QComboBox*, libqt_string)>(slot);
    QComboBox::connect(self, &QComboBox::textHighlighted, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
    self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_Connect_CurrentIndexChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self, &QComboBox::currentIndexChanged, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

void QComboBox_CurrentTextChanged(QComboBox* self, libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->currentTextChanged(param1_QString);
}

void QComboBox_Connect_CurrentTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, libqt_string) = reinterpret_cast<void (*)(QComboBox*, libqt_string)>(slot);
    QComboBox::connect(self, &QComboBox::currentTextChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        libqt_string param1_str;
        param1_str.len = param1_b.length();
        param1_str.data = static_cast<char*>(malloc((param1_str.len + 1) * sizeof(char)));
        memcpy(param1_str.data, param1_b.data(), param1_str.len);
        param1_str.data[param1_str.len] = '\0';
        libqt_string sigval1 = param1_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QComboBox_Tr2(const char* s, const char* c) {
    QString _ret = QComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QComboBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QComboBox_FindText2(const QComboBox* self, libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(const QComboBox* self, QVariant* data, int role) {
    return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(const QComboBox* self, QVariant* data, int role, int flags) {
    return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
    return new QVariant(self->currentData(static_cast<int>(role)));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
    return new QVariant(self->itemData(static_cast<int>(index), static_cast<int>(role)));
}

void QComboBox_AddItem22(QComboBox* self, libqt_string text, QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(text_QString, *userData);
}

void QComboBox_AddItem3(QComboBox* self, QIcon* icon, libqt_string text, QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(*icon, text_QString, *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, libqt_string text, QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, QIcon* icon, libqt_string text, QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, QVariant* value, int role) {
    self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

// Derived class handler implementation
void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setModel(model);
    } else {
        vqcombobox->setModel(model);
    }
}

// Base class handler implementation
void QComboBox_QBaseSetModel(QComboBox* self, QAbstractItemModel* model) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_SetModel_IsBase(true);
        vqcombobox->setModel(model);
    } else {
        vqcombobox->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSetModel(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_SetModel_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QComboBox_SizeHint(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return new QSize(vqcombobox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QComboBox_QBaseSizeHint(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SizeHint_IsBase(true);
        return new QSize(vqcombobox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSizeHint(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SizeHint_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return new QSize(vqcombobox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QComboBox_QBaseMinimumSizeHint(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqcombobox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMinimumSizeHint(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ShowPopup(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->showPopup();
    } else {
        vqcombobox->showPopup();
    }
}

// Base class handler implementation
void QComboBox_QBaseShowPopup(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ShowPopup_IsBase(true);
        vqcombobox->showPopup();
    } else {
        vqcombobox->showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowPopup(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ShowPopup_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_HidePopup(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->hidePopup();
    } else {
        vqcombobox->hidePopup();
    }
}

// Base class handler implementation
void QComboBox_QBaseHidePopup(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_HidePopup_IsBase(true);
        vqcombobox->hidePopup();
    } else {
        vqcombobox->hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHidePopup(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_HidePopup_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_Event(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->event(event);
    } else {
        return vqcombobox->event(event);
    }
}

// Base class handler implementation
bool QComboBox_QBaseEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Event_IsBase(true);
        return vqcombobox->event(event);
    } else {
        return vqcombobox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Event_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return new QVariant(vqcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QComboBox_QBaseInputMethodQuery(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqcombobox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodQuery(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->focusInEvent(e);
    } else {
        vqcombobox->focusInEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseFocusInEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusInEvent_IsBase(true);
        vqcombobox->focusInEvent(e);
    } else {
        vqcombobox->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusInEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusInEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->focusOutEvent(e);
    } else {
        vqcombobox->focusOutEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseFocusOutEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusOutEvent_IsBase(true);
        vqcombobox->focusOutEvent(e);
    } else {
        vqcombobox->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusOutEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ChangeEvent(QComboBox* self, QEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->changeEvent(e);
    } else {
        vqcombobox->changeEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseChangeEvent(QComboBox* self, QEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ChangeEvent_IsBase(true);
        vqcombobox->changeEvent(e);
    } else {
        vqcombobox->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnChangeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ChangeEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->resizeEvent(e);
    } else {
        vqcombobox->resizeEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseResizeEvent(QComboBox* self, QResizeEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ResizeEvent_IsBase(true);
        vqcombobox->resizeEvent(e);
    } else {
        vqcombobox->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnResizeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ResizeEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->paintEvent(e);
    } else {
        vqcombobox->paintEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBasePaintEvent(QComboBox* self, QPaintEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_PaintEvent_IsBase(true);
        vqcombobox->paintEvent(e);
    } else {
        vqcombobox->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnPaintEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_PaintEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->showEvent(e);
    } else {
        vqcombobox->showEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseShowEvent(QComboBox* self, QShowEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ShowEvent_IsBase(true);
        vqcombobox->showEvent(e);
    } else {
        vqcombobox->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ShowEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_HideEvent(QComboBox* self, QHideEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->hideEvent(e);
    } else {
        vqcombobox->hideEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseHideEvent(QComboBox* self, QHideEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_HideEvent_IsBase(true);
        vqcombobox->hideEvent(e);
    } else {
        vqcombobox->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHideEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_HideEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->mousePressEvent(e);
    } else {
        vqcombobox->mousePressEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseMousePressEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MousePressEvent_IsBase(true);
        vqcombobox->mousePressEvent(e);
    } else {
        vqcombobox->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMousePressEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MousePressEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->mouseReleaseEvent(e);
    } else {
        vqcombobox->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseMouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseReleaseEvent_IsBase(true);
        vqcombobox->mouseReleaseEvent(e);
    } else {
        vqcombobox->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseReleaseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->keyPressEvent(e);
    } else {
        vqcombobox->keyPressEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseKeyPressEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_KeyPressEvent_IsBase(true);
        vqcombobox->keyPressEvent(e);
    } else {
        vqcombobox->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyPressEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->keyReleaseEvent(e);
    } else {
        vqcombobox->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseKeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_KeyReleaseEvent_IsBase(true);
        vqcombobox->keyReleaseEvent(e);
    } else {
        vqcombobox->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyReleaseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->wheelEvent(e);
    } else {
        vqcombobox->wheelEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseWheelEvent(QComboBox* self, QWheelEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_WheelEvent_IsBase(true);
        vqcombobox->wheelEvent(e);
    } else {
        vqcombobox->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnWheelEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_WheelEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->contextMenuEvent(e);
    } else {
        vqcombobox->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QComboBox_QBaseContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ContextMenuEvent_IsBase(true);
        vqcombobox->contextMenuEvent(e);
    } else {
        vqcombobox->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnContextMenuEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->inputMethodEvent(param1);
    } else {
        vqcombobox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QComboBox_QBaseInputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_InputMethodEvent_IsBase(true);
        vqcombobox->inputMethodEvent(param1);
    } else {
        vqcombobox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->initStyleOption(option);
    } else {
        vqcombobox->initStyleOption(option);
    }
}

// Base class handler implementation
void QComboBox_QBaseInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InitStyleOption_IsBase(true);
        vqcombobox->initStyleOption(option);
    } else {
        vqcombobox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInitStyleOption(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InitStyleOption_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QComboBox_DevType(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->devType();
    } else {
        return vqcombobox->devType();
    }
}

// Base class handler implementation
int QComboBox_QBaseDevType(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_DevType_IsBase(true);
        return vqcombobox->devType();
    } else {
        return vqcombobox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDevType(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_DevType_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_SetVisible(QComboBox* self, bool visible) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setVisible(visible);
    } else {
        vqcombobox->setVisible(visible);
    }
}

// Base class handler implementation
void QComboBox_QBaseSetVisible(QComboBox* self, bool visible) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_SetVisible_IsBase(true);
        vqcombobox->setVisible(visible);
    } else {
        vqcombobox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSetVisible(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_SetVisible_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QComboBox_HeightForWidth(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcombobox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QComboBox_QBaseHeightForWidth(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_HeightForWidth_IsBase(true);
        return vqcombobox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcombobox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHeightForWidth(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_HeightForWidth_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_HasHeightForWidth(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->hasHeightForWidth();
    } else {
        return vqcombobox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QComboBox_QBaseHasHeightForWidth(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_HasHeightForWidth_IsBase(true);
        return vqcombobox->hasHeightForWidth();
    } else {
        return vqcombobox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHasHeightForWidth(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QComboBox_PaintEngine(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->paintEngine();
    } else {
        return vqcombobox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QComboBox_QBasePaintEngine(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_PaintEngine_IsBase(true);
        return vqcombobox->paintEngine();
    } else {
        return vqcombobox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnPaintEngine(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_PaintEngine_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_MouseDoubleClickEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->mouseDoubleClickEvent(event);
    } else {
        vqcombobox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseMouseDoubleClickEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseDoubleClickEvent_IsBase(true);
        vqcombobox->mouseDoubleClickEvent(event);
    } else {
        vqcombobox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseDoubleClickEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_MouseMoveEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->mouseMoveEvent(event);
    } else {
        vqcombobox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseMouseMoveEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseMoveEvent_IsBase(true);
        vqcombobox->mouseMoveEvent(event);
    } else {
        vqcombobox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_EnterEvent(QComboBox* self, QEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->enterEvent(event);
    } else {
        vqcombobox->enterEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseEnterEvent(QComboBox* self, QEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_EnterEvent_IsBase(true);
        vqcombobox->enterEvent(event);
    } else {
        vqcombobox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEnterEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_EnterEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_LeaveEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->leaveEvent(event);
    } else {
        vqcombobox->leaveEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseLeaveEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_LeaveEvent_IsBase(true);
        vqcombobox->leaveEvent(event);
    } else {
        vqcombobox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnLeaveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_LeaveEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_MoveEvent(QComboBox* self, QMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->moveEvent(event);
    } else {
        vqcombobox->moveEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseMoveEvent(QComboBox* self, QMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MoveEvent_IsBase(true);
        vqcombobox->moveEvent(event);
    } else {
        vqcombobox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_MoveEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_CloseEvent(QComboBox* self, QCloseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->closeEvent(event);
    } else {
        vqcombobox->closeEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseCloseEvent(QComboBox* self, QCloseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_CloseEvent_IsBase(true);
        vqcombobox->closeEvent(event);
    } else {
        vqcombobox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnCloseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_CloseEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_TabletEvent(QComboBox* self, QTabletEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->tabletEvent(event);
    } else {
        vqcombobox->tabletEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseTabletEvent(QComboBox* self, QTabletEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_TabletEvent_IsBase(true);
        vqcombobox->tabletEvent(event);
    } else {
        vqcombobox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnTabletEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_TabletEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ActionEvent(QComboBox* self, QActionEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->actionEvent(event);
    } else {
        vqcombobox->actionEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseActionEvent(QComboBox* self, QActionEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ActionEvent_IsBase(true);
        vqcombobox->actionEvent(event);
    } else {
        vqcombobox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnActionEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ActionEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_DragEnterEvent(QComboBox* self, QDragEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->dragEnterEvent(event);
    } else {
        vqcombobox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseDragEnterEvent(QComboBox* self, QDragEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragEnterEvent_IsBase(true);
        vqcombobox->dragEnterEvent(event);
    } else {
        vqcombobox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragEnterEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_DragMoveEvent(QComboBox* self, QDragMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->dragMoveEvent(event);
    } else {
        vqcombobox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseDragMoveEvent(QComboBox* self, QDragMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragMoveEvent_IsBase(true);
        vqcombobox->dragMoveEvent(event);
    } else {
        vqcombobox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_DragLeaveEvent(QComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->dragLeaveEvent(event);
    } else {
        vqcombobox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseDragLeaveEvent(QComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragLeaveEvent_IsBase(true);
        vqcombobox->dragLeaveEvent(event);
    } else {
        vqcombobox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragLeaveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_DropEvent(QComboBox* self, QDropEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->dropEvent(event);
    } else {
        vqcombobox->dropEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseDropEvent(QComboBox* self, QDropEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DropEvent_IsBase(true);
        vqcombobox->dropEvent(event);
    } else {
        vqcombobox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDropEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DropEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_NativeEvent(QComboBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QComboBox_QBaseNativeEvent(QComboBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_NativeEvent_IsBase(true);
        return vqcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnNativeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_NativeEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QComboBox_Metric(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QComboBox_QBaseMetric(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Metric_IsBase(true);
        return vqcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMetric(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Metric_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_InitPainter(const QComboBox* self, QPainter* painter) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->initPainter(painter);
    } else {
        vqcombobox->initPainter(painter);
    }
}

// Base class handler implementation
void QComboBox_QBaseInitPainter(const QComboBox* self, QPainter* painter) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InitPainter_IsBase(true);
        vqcombobox->initPainter(painter);
    } else {
        vqcombobox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInitPainter(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_InitPainter_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QComboBox_Redirected(const QComboBox* self, QPoint* offset) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->redirected(offset);
    } else {
        return vqcombobox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QComboBox_QBaseRedirected(const QComboBox* self, QPoint* offset) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Redirected_IsBase(true);
        return vqcombobox->redirected(offset);
    } else {
        return vqcombobox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnRedirected(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Redirected_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QComboBox_SharedPainter(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->sharedPainter();
    } else {
        return vqcombobox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QComboBox_QBaseSharedPainter(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SharedPainter_IsBase(true);
        return vqcombobox->sharedPainter();
    } else {
        return vqcombobox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSharedPainter(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SharedPainter_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_FocusNextPrevChild(QComboBox* self, bool next) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->focusNextPrevChild(next);
    } else {
        return vqcombobox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QComboBox_QBaseFocusNextPrevChild(QComboBox* self, bool next) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusNextPrevChild_IsBase(true);
        return vqcombobox->focusNextPrevChild(next);
    } else {
        return vqcombobox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusNextPrevChild(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_EventFilter(QComboBox* self, QObject* watched, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->eventFilter(watched, event);
    } else {
        return vqcombobox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QComboBox_QBaseEventFilter(QComboBox* self, QObject* watched, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_EventFilter_IsBase(true);
        return vqcombobox->eventFilter(watched, event);
    } else {
        return vqcombobox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEventFilter(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_EventFilter_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_TimerEvent(QComboBox* self, QTimerEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->timerEvent(event);
    } else {
        vqcombobox->timerEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseTimerEvent(QComboBox* self, QTimerEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_TimerEvent_IsBase(true);
        vqcombobox->timerEvent(event);
    } else {
        vqcombobox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnTimerEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_TimerEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ChildEvent(QComboBox* self, QChildEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->childEvent(event);
    } else {
        vqcombobox->childEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseChildEvent(QComboBox* self, QChildEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ChildEvent_IsBase(true);
        vqcombobox->childEvent(event);
    } else {
        vqcombobox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnChildEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ChildEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_CustomEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->customEvent(event);
    } else {
        vqcombobox->customEvent(event);
    }
}

// Base class handler implementation
void QComboBox_QBaseCustomEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_CustomEvent_IsBase(true);
        vqcombobox->customEvent(event);
    } else {
        vqcombobox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnCustomEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_CustomEvent_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_ConnectNotify(QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->connectNotify(*signal);
    } else {
        vqcombobox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QComboBox_QBaseConnectNotify(QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ConnectNotify_IsBase(true);
        vqcombobox->connectNotify(*signal);
    } else {
        vqcombobox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnConnectNotify(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_ConnectNotify_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_DisconnectNotify(QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->disconnectNotify(*signal);
    } else {
        vqcombobox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QComboBox_QBaseDisconnectNotify(QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DisconnectNotify_IsBase(true);
        vqcombobox->disconnectNotify(*signal);
    } else {
        vqcombobox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDisconnectNotify(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_UpdateMicroFocus(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->updateMicroFocus();
    } else {
        vqcombobox->updateMicroFocus();
    }
}

// Base class handler implementation
void QComboBox_QBaseUpdateMicroFocus(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_UpdateMicroFocus_IsBase(true);
        vqcombobox->updateMicroFocus();
    } else {
        vqcombobox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnUpdateMicroFocus(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_Create(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->create();
    } else {
        vqcombobox->create();
    }
}

// Base class handler implementation
void QComboBox_QBaseCreate(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Create_IsBase(true);
        vqcombobox->create();
    } else {
        vqcombobox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnCreate(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Create_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QComboBox_Destroy(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->destroy();
    } else {
        vqcombobox->destroy();
    }
}

// Base class handler implementation
void QComboBox_QBaseDestroy(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Destroy_IsBase(true);
        vqcombobox->destroy();
    } else {
        vqcombobox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDestroy(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_Destroy_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_FocusNextChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->focusNextChild();
    } else {
        return vqcombobox->focusNextChild();
    }
}

// Base class handler implementation
bool QComboBox_QBaseFocusNextChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusNextChild_IsBase(true);
        return vqcombobox->focusNextChild();
    } else {
        return vqcombobox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusNextChild(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusNextChild_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_FocusPreviousChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->focusPreviousChild();
    } else {
        return vqcombobox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QComboBox_QBaseFocusPreviousChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusPreviousChild_IsBase(true);
        return vqcombobox->focusPreviousChild();
    } else {
        return vqcombobox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusPreviousChild(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->setQComboBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QComboBox_Sender(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->sender();
    } else {
        return vqcombobox->sender();
    }
}

// Base class handler implementation
QObject* QComboBox_QBaseSender(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Sender_IsBase(true);
        return vqcombobox->sender();
    } else {
        return vqcombobox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSender(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Sender_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QComboBox_SenderSignalIndex(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->senderSignalIndex();
    } else {
        return vqcombobox->senderSignalIndex();
    }
}

// Base class handler implementation
int QComboBox_QBaseSenderSignalIndex(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SenderSignalIndex_IsBase(true);
        return vqcombobox->senderSignalIndex();
    } else {
        return vqcombobox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSenderSignalIndex(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QComboBox_Receivers(const QComboBox* self, const char* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->receivers(signal);
    } else {
        return vqcombobox->receivers(signal);
    }
}

// Base class handler implementation
int QComboBox_QBaseReceivers(const QComboBox* self, const char* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Receivers_IsBase(true);
        return vqcombobox->receivers(signal);
    } else {
        return vqcombobox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnReceivers(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_Receivers_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QComboBox_IsSignalConnected(const QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->isSignalConnected(*signal);
    } else {
        return vqcombobox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QComboBox_QBaseIsSignalConnected(const QComboBox* self, QMetaMethod* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_IsSignalConnected_IsBase(true);
        return vqcombobox->isSignalConnected(*signal);
    } else {
        return vqcombobox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnIsSignalConnected(const QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->setQComboBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQComboBox::QComboBox_IsSignalConnected_Callback>(slot));
    }
}

void QComboBox_Delete(QComboBox* self) {
    delete self;
}
