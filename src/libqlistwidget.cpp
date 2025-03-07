#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDataStream>
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
#include <QFrame>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMimeData>
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
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qlistwidget.h>
#include "libqlistwidget.hpp"
#include "libqlistwidget.hxx"

QListWidgetItem* QListWidgetItem_new() {
    return new VirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other) {
    return new VirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
    return new VirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
    return new VirtualQListWidgetItem(listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new7(libqt_string text, QListWidget* listview) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(libqt_string text, QListWidget* listview, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, libqt_string text, QListWidget* listview) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, libqt_string text, QListWidget* listview, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(typeVal));
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
    return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
    self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
    return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
    self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
    return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetText(QListWidgetItem* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
    return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
    return new QFont(self->font());
}

void QListWidgetItem_SetFont(QListWidgetItem* self, QFont* font) {
    self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
    return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<int>(alignment));
}

void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
    return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, QBrush* brush) {
    self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
    return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, QBrush* brush) {
    self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
    return static_cast<int>(self->checkState());
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
    return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, QSize* size) {
    self->setSizeHint(*size);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
    self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
    return self->type();
}

// Derived class handler implementation
QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        return vqlistwidgetitem->clone();
    } else {
        return vqlistwidgetitem->clone();
    }
}

// Base class handler implementation
QListWidgetItem* QListWidgetItem_QBaseClone(const QListWidgetItem* self) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Clone_IsBase(true);
        return vqlistwidgetitem->clone();
    } else {
        return vqlistwidgetitem->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnClone(const QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Clone_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        return new QVariant(vqlistwidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QListWidgetItem_QBaseData(const QListWidgetItem* self, int role) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Data_IsBase(true);
        return new QVariant(vqlistwidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnData(const QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Data_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_SetData(QListWidgetItem* self, int role, QVariant* value) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    } else {
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseSetData(QListWidgetItem* self, int role, QVariant* value) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->setQListWidgetItem_SetData_IsBase(true);
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    } else {
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnSetData(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->setQListWidgetItem_SetData_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        return vqlistwidgetitem->operator<(*other);
    } else {
        return vqlistwidgetitem->operator<(*other);
    }
}

// Base class handler implementation
bool QListWidgetItem_QBaseOperatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_OperatorLesser_IsBase(true);
        return vqlistwidgetitem->operator<(*other);
    } else {
        return vqlistwidgetitem->operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnOperatorLesser(const QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->read(*in);
    } else {
        vqlistwidgetitem->read(*in);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseRead(QListWidgetItem* self, QDataStream* in) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->setQListWidgetItem_Read_IsBase(true);
        vqlistwidgetitem->read(*in);
    } else {
        vqlistwidgetitem->read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnRead(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self)) {
        vqlistwidgetitem->setQListWidgetItem_Read_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->write(*out);
    } else {
        vqlistwidgetitem->write(*out);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseWrite(const QListWidgetItem* self, QDataStream* out) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Write_IsBase(true);
        vqlistwidgetitem->write(*out);
    } else {
        vqlistwidgetitem->write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnWrite(const QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self))) {
        vqlistwidgetitem->setQListWidgetItem_Write_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Write_Callback>(slot));
    }
}

void QListWidgetItem_Delete(QListWidgetItem* self) {
    delete self;
}

QListWidget* QListWidget_new(QWidget* parent) {
    return new VirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
    return new VirtualQListWidget();
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QListWidget_Metacast(QListWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QListWidget_Metacall(QListWidget* self, int param1, int param2, void** param3) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QListWidget_OnMetacall(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Metacall_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QListWidget_QBaseMetacall(QListWidget* self, int param1, int param2, void** param3) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Metacall_IsBase(true);
        return vqlistwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QListWidget_Tr(const char* s) {
    QString _ret = QListWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
    return self->item(static_cast<int>(row));
}

int QListWidget_Row(const QListWidget* self, QListWidgetItem* item) {
    return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
    self->insertItem(static_cast<int>(row), item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data.ptr);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
    self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data.ptr);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
    return self->takeItem(static_cast<int>(row));
}

int QListWidget_Count(const QListWidget* self) {
    return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
    return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
    self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
    self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
    return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
    self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
    self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, QPoint* p) {
    return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, QListWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

void QListWidget_SortItems(QListWidget* self) {
    self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
    return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
    self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
    return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
    self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
    self->removeItemWidget(item);
}

libqt_list /* of QListWidgetItem* */ QListWidget_SelectedItems(const QListWidget* self) {
    QList<QListWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QListWidgetItem* */ QListWidget_FindItems(const QListWidget* self, libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QListWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QListWidgetItem* */ QListWidget_Items(const QListWidget* self, QMimeData* data) {
    QList<QListWidgetItem*> _ret = self->items(data);
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, QListWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, QModelIndex* index) {
    return self->itemFromIndex(*index);
}

void QListWidget_ScrollToItem(QListWidget* self, QListWidgetItem* item) {
    self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
    self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
    self->itemPressed(item);
}

void QListWidget_Connect_ItemPressed(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemPressed, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemClicked(item);
}

void QListWidget_Connect_ItemClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemClicked, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemDoubleClicked(item);
}

void QListWidget_Connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemDoubleClicked, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
    self->itemActivated(item);
}

void QListWidget_Connect_ItemActivated(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemActivated, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
    self->itemEntered(item);
}

void QListWidget_Connect_ItemEntered(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemEntered, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
    self->itemChanged(item);
}

void QListWidget_Connect_ItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemChanged, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QListWidget_Connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::currentItemChanged, [self, slotFunc](QListWidgetItem* current, QListWidgetItem* previous) {
        QListWidgetItem* sigval1 = current;
        QListWidgetItem* sigval2 = previous;
        slotFunc(self, sigval1, sigval2);
    });
}

void QListWidget_CurrentTextChanged(QListWidget* self, libqt_string currentText) {
    QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
    self->currentTextChanged(currentText_QString);
}

void QListWidget_Connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, libqt_string) = reinterpret_cast<void (*)(QListWidget*, libqt_string)>(slot);
    QListWidget::connect(self, &QListWidget::currentTextChanged, [self, slotFunc](const QString& currentText) {
        const QString currentText_ret = currentText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray currentText_b = currentText_ret.toUtf8();
        libqt_string currentText_str;
        currentText_str.len = currentText_b.length();
        currentText_str.data = static_cast<char*>(malloc((currentText_str.len + 1) * sizeof(char)));
        memcpy(currentText_str.data, currentText_b.data(), currentText_str.len);
        currentText_str.data[currentText_str.len] = '\0';
        libqt_string sigval1 = currentText_str;
        slotFunc(self, sigval1);
    });
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
    self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_Connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, int) = reinterpret_cast<void (*)(QListWidget*, int)>(slot);
    QListWidget::connect(self, &QListWidget::currentRowChanged, [self, slotFunc](int currentRow) {
        int sigval1 = currentRow;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
    self->itemSelectionChanged();
}

void QListWidget_Connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*) = reinterpret_cast<void (*)(QListWidget*)>(slot);
    QListWidget::connect(self, &QListWidget::itemSelectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QListWidget_Tr2(const char* s, const char* c) {
    QString _ret = QListWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
    self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setSelectionModel(selectionModel);
    } else {
        vqlistwidget->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetSelectionModel_IsBase(true);
        vqlistwidget->setSelectionModel(selectionModel);
    } else {
        vqlistwidget->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelectionModel(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DropEvent(QListWidget* self, QDropEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->dropEvent(event);
    } else {
        vqlistwidget->dropEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DropEvent_IsBase(true);
        vqlistwidget->dropEvent(event);
    } else {
        vqlistwidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DropEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_Event(QListWidget* self, QEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->event(e);
    } else {
        return vqlistwidget->event(e);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Event_IsBase(true);
        return vqlistwidget->event(e);
    } else {
        return vqlistwidget->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Event_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QListWidget_MimeTypes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        QStringList _ret = vqlistwidget->mimeTypes();
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
    } else {
        QStringList _ret = vqlistwidget->mimeTypes();
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QListWidget_QBaseMimeTypes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MimeTypes_IsBase(true);
        QStringList _ret = vqlistwidget->mimeTypes();
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
    } else {
        QStringList _ret = vqlistwidget->mimeTypes();
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
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeTypes(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MimeTypes_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QListWidget_MimeData(const QListWidget* self, libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->mimeData(items_QList);
    } else {
        return vqlistwidget->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MimeData_IsBase(true);
        return vqlistwidget->mimeData(items_QList);
    } else {
        return vqlistwidget->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeData(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_DropMimeData(QListWidget* self, int index, QMimeData* data, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, QMimeData* data, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DropMimeData_IsBase(true);
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropMimeData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DropMimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SupportedDropActions(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->supportedDropActions());
    } else {
        return static_cast<int>(vqlistwidget->supportedDropActions());
    }
}

// Base class handler implementation
int QListWidget_QBaseSupportedDropActions(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqlistwidget->supportedDropActions());
    } else {
        return static_cast<int>(vqlistwidget->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSupportedDropActions(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QListWidget_VisualRect(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QRect(vqlistwidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QListWidget_QBaseVisualRect(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VisualRect_IsBase(true);
        return new QRect(vqlistwidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRect(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VisualRect_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollTo(QListWidget* self, QModelIndex* index, int hint) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollTo(QListWidget* self, QModelIndex* index, int hint) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollTo_IsBase(true);
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollTo(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollTo_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListWidget_IndexAt(const QListWidget* self, QPoint* p) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QModelIndex(vqlistwidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QListWidget_QBaseIndexAt(const QListWidget* self, QPoint* p) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IndexAt_IsBase(true);
        return new QModelIndex(vqlistwidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIndexAt(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IndexAt_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DoItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->doItemsLayout();
    } else {
        vqlistwidget->doItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseDoItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DoItemsLayout_IsBase(true);
        vqlistwidget->doItemsLayout();
    } else {
        vqlistwidget->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDoItemsLayout(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DoItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Reset(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->reset();
    } else {
        vqlistwidget->reset();
    }
}

// Base class handler implementation
void QListWidget_QBaseReset(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Reset_IsBase(true);
        vqlistwidget->reset();
    } else {
        vqlistwidget->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnReset(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Reset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetRootIndex(QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setRootIndex(*index);
    } else {
        vqlistwidget->setRootIndex(*index);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetRootIndex(QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetRootIndex_IsBase(true);
        vqlistwidget->setRootIndex(*index);
    } else {
        vqlistwidget->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetRootIndex(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetRootIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollContentsBy(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollContentsBy(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollContentsBy_IsBase(true);
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollContentsBy(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DataChanged(QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QListWidget_QBaseDataChanged(QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DataChanged_IsBase(true);
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDataChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DataChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_RowsInserted(QListWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListWidget_QBaseRowsInserted(QListWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_RowsInserted_IsBase(true);
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsInserted(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_RowsInserted_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_RowsAboutToBeRemoved(QListWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListWidget_QBaseRowsAboutToBeRemoved(QListWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_RowsAboutToBeRemoved_IsBase(true);
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsAboutToBeRemoved(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->mouseMoveEvent(e);
    } else {
        vqlistwidget->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseMoveEvent_IsBase(true);
        vqlistwidget->mouseMoveEvent(e);
    } else {
        vqlistwidget->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->mouseReleaseEvent(e);
    } else {
        vqlistwidget->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseReleaseEvent_IsBase(true);
        vqlistwidget->mouseReleaseEvent(e);
    } else {
        vqlistwidget->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseReleaseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_WheelEvent(QListWidget* self, QWheelEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->wheelEvent(e);
    } else {
        vqlistwidget->wheelEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseWheelEvent(QListWidget* self, QWheelEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_WheelEvent_IsBase(true);
        vqlistwidget->wheelEvent(e);
    } else {
        vqlistwidget->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnWheelEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_WheelEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_TimerEvent(QListWidget* self, QTimerEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->timerEvent(e);
    } else {
        vqlistwidget->timerEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseTimerEvent(QListWidget* self, QTimerEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_TimerEvent_IsBase(true);
        vqlistwidget->timerEvent(e);
    } else {
        vqlistwidget->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTimerEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_TimerEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ResizeEvent(QListWidget* self, QResizeEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->resizeEvent(e);
    } else {
        vqlistwidget->resizeEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseResizeEvent(QListWidget* self, QResizeEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ResizeEvent_IsBase(true);
        vqlistwidget->resizeEvent(e);
    } else {
        vqlistwidget->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnResizeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->dragMoveEvent(e);
    } else {
        vqlistwidget->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragMoveEvent_IsBase(true);
        vqlistwidget->dragMoveEvent(e);
    } else {
        vqlistwidget->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->dragLeaveEvent(e);
    } else {
        vqlistwidget->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragLeaveEvent_IsBase(true);
        vqlistwidget->dragLeaveEvent(e);
    } else {
        vqlistwidget->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragLeaveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StartDrag(QListWidget* self, int supportedActions) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QListWidget_QBaseStartDrag(QListWidget* self, int supportedActions) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StartDrag_IsBase(true);
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStartDrag(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StartDrag_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->initViewItemOption(option);
    } else {
        vqlistwidget->initViewItemOption(option);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitViewItemOption_IsBase(true);
        vqlistwidget->initViewItemOption(option);
    } else {
        vqlistwidget->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitViewItemOption(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitViewItemOption_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_PaintEvent(QListWidget* self, QPaintEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->paintEvent(e);
    } else {
        vqlistwidget->paintEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBasePaintEvent(QListWidget* self, QPaintEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_PaintEvent_IsBase(true);
        vqlistwidget->paintEvent(e);
    } else {
        vqlistwidget->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_PaintEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_HorizontalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->horizontalOffset();
    } else {
        return vqlistwidget->horizontalOffset();
    }
}

// Base class handler implementation
int QListWidget_QBaseHorizontalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HorizontalOffset_IsBase(true);
        return vqlistwidget->horizontalOffset();
    } else {
        return vqlistwidget->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalOffset(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HorizontalOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_VerticalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->verticalOffset();
    } else {
        return vqlistwidget->verticalOffset();
    }
}

// Base class handler implementation
int QListWidget_QBaseVerticalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VerticalOffset_IsBase(true);
        return vqlistwidget->verticalOffset();
    } else {
        return vqlistwidget->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalOffset(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VerticalOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListWidget_MoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return new QModelIndex(vqlistwidget->moveCursor(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QListWidget_QBaseMoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MoveCursor_IsBase(true);
        return new QModelIndex(vqlistwidget->moveCursor(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveCursor(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MoveCursor_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetSelection(QListWidget* self, QRect* rect, int command) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetSelection(QListWidget* self, QRect* rect, int command) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetSelection_IsBase(true);
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelection(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetSelection_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QListWidget_VisualRegionForSelection(const QListWidget* self, QItemSelection* selection) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QRegion(vqlistwidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QListWidget_QBaseVisualRegionForSelection(const QListWidget* self, QItemSelection* selection) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqlistwidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRegionForSelection(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_SelectedIndexes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        QModelIndexList _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_QBaseSelectedIndexes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectedIndexes(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SelectedIndexes_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->updateGeometries();
    } else {
        vqlistwidget->updateGeometries();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateGeometries_IsBase(true);
        vqlistwidget->updateGeometries();
    } else {
        vqlistwidget->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateGeometries(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateGeometries_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_IsIndexHidden(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->isIndexHidden(*index);
    } else {
        return vqlistwidget->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QListWidget_QBaseIsIndexHidden(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IsIndexHidden_IsBase(true);
        return vqlistwidget->isIndexHidden(*index);
    } else {
        return vqlistwidget->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIsIndexHidden(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IsIndexHidden_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SelectionChanged(QListWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->selectionChanged(*selected, *deselected);
    } else {
        vqlistwidget->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QListWidget_QBaseSelectionChanged(QListWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SelectionChanged_IsBase(true);
        vqlistwidget->selectionChanged(*selected, *deselected);
    } else {
        vqlistwidget->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CurrentChanged(QListWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->currentChanged(*current, *previous);
    } else {
        vqlistwidget->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QListWidget_QBaseCurrentChanged(QListWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CurrentChanged_IsBase(true);
        vqlistwidget->currentChanged(*current, *previous);
    } else {
        vqlistwidget->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCurrentChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CurrentChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_ViewportSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QSize(vqlistwidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QListWidget_QBaseViewportSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vqlistwidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportSizeHint(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyboardSearch(QListWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->keyboardSearch(search_QString);
    } else {
        vqlistwidget->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyboardSearch(QListWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyboardSearch_IsBase(true);
        vqlistwidget->keyboardSearch(search_QString);
    } else {
        vqlistwidget->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyboardSearch(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyboardSearch_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SizeHintForRow(const QListWidget* self, int row) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QListWidget_QBaseSizeHintForRow(const QListWidget* self, int row) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHintForRow_IsBase(true);
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForRow(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHintForRow_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SizeHintForColumn(const QListWidget* self, int column) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QListWidget_QBaseSizeHintForColumn(const QListWidget* self, int column) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHintForColumn_IsBase(true);
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForColumn(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHintForColumn_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QListWidget_ItemDelegateForIndex(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->itemDelegateForIndex(*index);
    } else {
        return vqlistwidget->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QListWidget_QBaseItemDelegateForIndex(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ItemDelegateForIndex_IsBase(true);
        return vqlistwidget->itemDelegateForIndex(*index);
    } else {
        return vqlistwidget->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnItemDelegateForIndex(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QListWidget_InputMethodQuery(const QListWidget* self, int query) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QVariant(vqlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QListWidget_QBaseInputMethodQuery(const QListWidget* self, int query) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodQuery(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SelectAll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->selectAll();
    } else {
        vqlistwidget->selectAll();
    }
}

// Base class handler implementation
void QListWidget_QBaseSelectAll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SelectAll_IsBase(true);
        vqlistwidget->selectAll();
    } else {
        vqlistwidget->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectAll(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SelectAll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateEditorData(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->updateEditorData();
    } else {
        vqlistwidget->updateEditorData();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateEditorData(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateEditorData_IsBase(true);
        vqlistwidget->updateEditorData();
    } else {
        vqlistwidget->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateEditorData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateEditorGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->updateEditorGeometries();
    } else {
        vqlistwidget->updateEditorGeometries();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateEditorGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateEditorGeometries_IsBase(true);
        vqlistwidget->updateEditorGeometries();
    } else {
        vqlistwidget->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorGeometries(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListWidget_QBaseVerticalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_VerticalScrollbarAction_IsBase(true);
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarAction(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListWidget_QBaseHorizontalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HorizontalScrollbarAction_IsBase(true);
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarAction(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListWidget_QBaseVerticalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_VerticalScrollbarValueChanged_IsBase(true);
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListWidget_QBaseHorizontalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HorizontalScrollbarValueChanged_IsBase(true);
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CloseEditor(QListWidget* self, QWidget* editor, int hint) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QListWidget_QBaseCloseEditor(QListWidget* self, QWidget* editor, int hint) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CloseEditor_IsBase(true);
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEditor(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CloseEditor_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CommitData(QListWidget* self, QWidget* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->commitData(editor);
    } else {
        vqlistwidget->commitData(editor);
    }
}

// Base class handler implementation
void QListWidget_QBaseCommitData(QListWidget* self, QWidget* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CommitData_IsBase(true);
        vqlistwidget->commitData(editor);
    } else {
        vqlistwidget->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCommitData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CommitData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_EditorDestroyed(QListWidget* self, QObject* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->editorDestroyed(editor);
    } else {
        vqlistwidget->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QListWidget_QBaseEditorDestroyed(QListWidget* self, QObject* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EditorDestroyed_IsBase(true);
        vqlistwidget->editorDestroyed(editor);
    } else {
        vqlistwidget->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEditorDestroyed(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EditorDestroyed_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_Edit2(QListWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEdit2(QListWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Edit2_IsBase(true);
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEdit2(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Edit2_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SelectionCommand(const QListWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QListWidget_QBaseSelectionCommand(const QListWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SelectionCommand_IsBase(true);
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionCommand(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SelectionCommand_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusNextPrevChild(QListWidget* self, bool next) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->focusNextPrevChild(next);
    } else {
        return vqlistwidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusNextPrevChild(QListWidget* self, bool next) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusNextPrevChild_IsBase(true);
        return vqlistwidget->focusNextPrevChild(next);
    } else {
        return vqlistwidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusNextPrevChild(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_ViewportEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->viewportEvent(event);
    } else {
        return vqlistwidget->viewportEvent(event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseViewportEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ViewportEvent_IsBase(true);
        return vqlistwidget->viewportEvent(event);
    } else {
        return vqlistwidget->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ViewportEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MousePressEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->mousePressEvent(event);
    } else {
        vqlistwidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMousePressEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MousePressEvent_IsBase(true);
        vqlistwidget->mousePressEvent(event);
    } else {
        vqlistwidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMousePressEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->mouseDoubleClickEvent(event);
    } else {
        vqlistwidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseDoubleClickEvent_IsBase(true);
        vqlistwidget->mouseDoubleClickEvent(event);
    } else {
        vqlistwidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseDoubleClickEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->dragEnterEvent(event);
    } else {
        vqlistwidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragEnterEvent_IsBase(true);
        vqlistwidget->dragEnterEvent(event);
    } else {
        vqlistwidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragEnterEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_FocusInEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->focusInEvent(event);
    } else {
        vqlistwidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseFocusInEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusInEvent_IsBase(true);
        vqlistwidget->focusInEvent(event);
    } else {
        vqlistwidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusInEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_FocusOutEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->focusOutEvent(event);
    } else {
        vqlistwidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseFocusOutEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusOutEvent_IsBase(true);
        vqlistwidget->focusOutEvent(event);
    } else {
        vqlistwidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusOutEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyPressEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->keyPressEvent(event);
    } else {
        vqlistwidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyPressEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyPressEvent_IsBase(true);
        vqlistwidget->keyPressEvent(event);
    } else {
        vqlistwidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyPressEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->inputMethodEvent(event);
    } else {
        vqlistwidget->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseInputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_InputMethodEvent_IsBase(true);
        vqlistwidget->inputMethodEvent(event);
    } else {
        vqlistwidget->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_EventFilter(QListWidget* self, QObject* object, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->eventFilter(object, event);
    } else {
        return vqlistwidget->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEventFilter(QListWidget* self, QObject* object, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EventFilter_IsBase(true);
        return vqlistwidget->eventFilter(object, event);
    } else {
        return vqlistwidget->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEventFilter(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EventFilter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_MinimumSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QSize(vqlistwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QListWidget_QBaseMinimumSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqlistwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMinimumSizeHint(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_SizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QSize(vqlistwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QListWidget_QBaseSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHint_IsBase(true);
        return new QSize(vqlistwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHint(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetupViewport(QListWidget* self, QWidget* viewport) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setupViewport(viewport);
    } else {
        vqlistwidget->setupViewport(viewport);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetupViewport(QListWidget* self, QWidget* viewport) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetupViewport_IsBase(true);
        vqlistwidget->setupViewport(viewport);
    } else {
        vqlistwidget->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetupViewport(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetupViewport_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->contextMenuEvent(param1);
    } else {
        vqlistwidget->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ContextMenuEvent_IsBase(true);
        vqlistwidget->contextMenuEvent(param1);
    } else {
        vqlistwidget->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnContextMenuEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ChangeEvent(QListWidget* self, QEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->changeEvent(param1);
    } else {
        vqlistwidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseChangeEvent(QListWidget* self, QEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ChangeEvent_IsBase(true);
        vqlistwidget->changeEvent(param1);
    } else {
        vqlistwidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChangeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->initStyleOption(option);
    } else {
        vqlistwidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitStyleOption_IsBase(true);
        vqlistwidget->initStyleOption(option);
    } else {
        vqlistwidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitStyleOption(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_DevType(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->devType();
    } else {
        return vqlistwidget->devType();
    }
}

// Base class handler implementation
int QListWidget_QBaseDevType(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DevType_IsBase(true);
        return vqlistwidget->devType();
    } else {
        return vqlistwidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDevType(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DevType_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetVisible(QListWidget* self, bool visible) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setVisible(visible);
    } else {
        vqlistwidget->setVisible(visible);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetVisible(QListWidget* self, bool visible) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetVisible_IsBase(true);
        vqlistwidget->setVisible(visible);
    } else {
        vqlistwidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetVisible(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetVisible_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_HeightForWidth(const QListWidget* self, int param1) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QListWidget_QBaseHeightForWidth(const QListWidget* self, int param1) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HeightForWidth_IsBase(true);
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHeightForWidth(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_HasHeightForWidth(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->hasHeightForWidth();
    } else {
        return vqlistwidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QListWidget_QBaseHasHeightForWidth(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HasHeightForWidth_IsBase(true);
        return vqlistwidget->hasHeightForWidth();
    } else {
        return vqlistwidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHasHeightForWidth(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QListWidget_PaintEngine(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->paintEngine();
    } else {
        return vqlistwidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QListWidget_QBasePaintEngine(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_PaintEngine_IsBase(true);
        return vqlistwidget->paintEngine();
    } else {
        return vqlistwidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEngine(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_PaintEngine_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->keyReleaseEvent(event);
    } else {
        vqlistwidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyReleaseEvent_IsBase(true);
        vqlistwidget->keyReleaseEvent(event);
    } else {
        vqlistwidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyReleaseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_EnterEvent(QListWidget* self, QEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->enterEvent(event);
    } else {
        vqlistwidget->enterEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseEnterEvent(QListWidget* self, QEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EnterEvent_IsBase(true);
        vqlistwidget->enterEvent(event);
    } else {
        vqlistwidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEnterEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_EnterEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_LeaveEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->leaveEvent(event);
    } else {
        vqlistwidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseLeaveEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_LeaveEvent_IsBase(true);
        vqlistwidget->leaveEvent(event);
    } else {
        vqlistwidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnLeaveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MoveEvent(QListWidget* self, QMoveEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->moveEvent(event);
    } else {
        vqlistwidget->moveEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMoveEvent(QListWidget* self, QMoveEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MoveEvent_IsBase(true);
        vqlistwidget->moveEvent(event);
    } else {
        vqlistwidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_MoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CloseEvent(QListWidget* self, QCloseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->closeEvent(event);
    } else {
        vqlistwidget->closeEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseCloseEvent(QListWidget* self, QCloseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CloseEvent_IsBase(true);
        vqlistwidget->closeEvent(event);
    } else {
        vqlistwidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CloseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_TabletEvent(QListWidget* self, QTabletEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->tabletEvent(event);
    } else {
        vqlistwidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseTabletEvent(QListWidget* self, QTabletEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_TabletEvent_IsBase(true);
        vqlistwidget->tabletEvent(event);
    } else {
        vqlistwidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTabletEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_TabletEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ActionEvent(QListWidget* self, QActionEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->actionEvent(event);
    } else {
        vqlistwidget->actionEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseActionEvent(QListWidget* self, QActionEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ActionEvent_IsBase(true);
        vqlistwidget->actionEvent(event);
    } else {
        vqlistwidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnActionEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ActionEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ShowEvent(QListWidget* self, QShowEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->showEvent(event);
    } else {
        vqlistwidget->showEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseShowEvent(QListWidget* self, QShowEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ShowEvent_IsBase(true);
        vqlistwidget->showEvent(event);
    } else {
        vqlistwidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnShowEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ShowEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HideEvent(QListWidget* self, QHideEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->hideEvent(event);
    } else {
        vqlistwidget->hideEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseHideEvent(QListWidget* self, QHideEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HideEvent_IsBase(true);
        vqlistwidget->hideEvent(event);
    } else {
        vqlistwidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHideEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_HideEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_NativeEvent(QListWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QListWidget_QBaseNativeEvent(QListWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_NativeEvent_IsBase(true);
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnNativeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_NativeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_Metric(const QListWidget* self, int param1) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QListWidget_QBaseMetric(const QListWidget* self, int param1) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Metric_IsBase(true);
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetric(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Metric_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitPainter(const QListWidget* self, QPainter* painter) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->initPainter(painter);
    } else {
        vqlistwidget->initPainter(painter);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitPainter(const QListWidget* self, QPainter* painter) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitPainter_IsBase(true);
        vqlistwidget->initPainter(painter);
    } else {
        vqlistwidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitPainter(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_InitPainter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QListWidget_Redirected(const QListWidget* self, QPoint* offset) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->redirected(offset);
    } else {
        return vqlistwidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QListWidget_QBaseRedirected(const QListWidget* self, QPoint* offset) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Redirected_IsBase(true);
        return vqlistwidget->redirected(offset);
    } else {
        return vqlistwidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRedirected(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Redirected_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QListWidget_SharedPainter(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->sharedPainter();
    } else {
        return vqlistwidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QListWidget_QBaseSharedPainter(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SharedPainter_IsBase(true);
        return vqlistwidget->sharedPainter();
    } else {
        return vqlistwidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSharedPainter(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SharedPainter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ChildEvent(QListWidget* self, QChildEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->childEvent(event);
    } else {
        vqlistwidget->childEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseChildEvent(QListWidget* self, QChildEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ChildEvent_IsBase(true);
        vqlistwidget->childEvent(event);
    } else {
        vqlistwidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChildEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ChildEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CustomEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->customEvent(event);
    } else {
        vqlistwidget->customEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseCustomEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CustomEvent_IsBase(true);
        vqlistwidget->customEvent(event);
    } else {
        vqlistwidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCustomEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_CustomEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ConnectNotify(QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->connectNotify(*signal);
    } else {
        vqlistwidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QListWidget_QBaseConnectNotify(QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ConnectNotify_IsBase(true);
        vqlistwidget->connectNotify(*signal);
    } else {
        vqlistwidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnConnectNotify(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DisconnectNotify(QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->disconnectNotify(*signal);
    } else {
        vqlistwidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QListWidget_QBaseDisconnectNotify(QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DisconnectNotify_IsBase(true);
        vqlistwidget->disconnectNotify(*signal);
    } else {
        vqlistwidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDisconnectNotify(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ResizeContents(QListWidget* self, int width, int height) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void QListWidget_QBaseResizeContents(QListWidget* self, int width, int height) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ResizeContents_IsBase(true);
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnResizeContents(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ResizeContents_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_ContentsSize(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QSize(vqlistwidget->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* QListWidget_QBaseContentsSize(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ContentsSize_IsBase(true);
        return new QSize(vqlistwidget->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnContentsSize(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ContentsSize_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QListWidget_RectForIndex(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QRect(vqlistwidget->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QListWidget_QBaseRectForIndex(const QListWidget* self, QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_RectForIndex_IsBase(true);
        return new QRect(vqlistwidget->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRectForIndex(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_RectForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetPositionForIndex(QListWidget* self, QPoint* position, QModelIndex* index) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setPositionForIndex(*position, *index);
    } else {
        vqlistwidget->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetPositionForIndex(QListWidget* self, QPoint* position, QModelIndex* index) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetPositionForIndex_IsBase(true);
        vqlistwidget->setPositionForIndex(*position, *index);
    } else {
        vqlistwidget->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetPositionForIndex(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetPositionForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_State(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->state());
    } else {
        return static_cast<int>(vqlistwidget->state());
    }
}

// Base class handler implementation
int QListWidget_QBaseState(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_State_IsBase(true);
        return static_cast<int>(vqlistwidget->state());
    } else {
        return static_cast<int>(vqlistwidget->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnState(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_State_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetState(QListWidget* self, int state) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    } else {
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetState(QListWidget* self, int state) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetState_IsBase(true);
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    } else {
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetState(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetState_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScheduleDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->scheduleDelayedItemsLayout();
    } else {
        vqlistwidget->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseScheduleDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScheduleDelayedItemsLayout_IsBase(true);
        vqlistwidget->scheduleDelayedItemsLayout();
    } else {
        vqlistwidget->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScheduleDelayedItemsLayout(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ExecuteDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->executeDelayedItemsLayout();
    } else {
        vqlistwidget->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseExecuteDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ExecuteDelayedItemsLayout_IsBase(true);
        vqlistwidget->executeDelayedItemsLayout();
    } else {
        vqlistwidget->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnExecuteDelayedItemsLayout(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetDirtyRegion(QListWidget* self, QRegion* region) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setDirtyRegion(*region);
    } else {
        vqlistwidget->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetDirtyRegion(QListWidget* self, QRegion* region) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetDirtyRegion_IsBase(true);
        vqlistwidget->setDirtyRegion(*region);
    } else {
        vqlistwidget->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetDirtyRegion(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetDirtyRegion_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollDirtyRegion(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollDirtyRegion(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollDirtyRegion_IsBase(true);
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollDirtyRegion(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QListWidget_DirtyRegionOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QPoint(vqlistwidget->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QListWidget_QBaseDirtyRegionOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqlistwidget->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDirtyRegionOffset(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StartAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->startAutoScroll();
    } else {
        vqlistwidget->startAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseStartAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StartAutoScroll_IsBase(true);
        vqlistwidget->startAutoScroll();
    } else {
        vqlistwidget->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStartAutoScroll(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StartAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StopAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->stopAutoScroll();
    } else {
        vqlistwidget->stopAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseStopAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StopAutoScroll_IsBase(true);
        vqlistwidget->stopAutoScroll();
    } else {
        vqlistwidget->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStopAutoScroll(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_StopAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DoAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->doAutoScroll();
    } else {
        vqlistwidget->doAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseDoAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DoAutoScroll_IsBase(true);
        vqlistwidget->doAutoScroll();
    } else {
        vqlistwidget->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDoAutoScroll(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DoAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_DropIndicatorPosition(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QListWidget_QBaseDropIndicatorPosition(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropIndicatorPosition(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetViewportMargins(QListWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetViewportMargins(QListWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetViewportMargins_IsBase(true);
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetViewportMargins(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QListWidget_ViewportMargins(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return new QMargins(vqlistwidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QListWidget_QBaseViewportMargins(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ViewportMargins_IsBase(true);
        return new QMargins(vqlistwidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportMargins(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_ViewportMargins_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DrawFrame(QListWidget* self, QPainter* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->drawFrame(param1);
    } else {
        vqlistwidget->drawFrame(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseDrawFrame(QListWidget* self, QPainter* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DrawFrame_IsBase(true);
        vqlistwidget->drawFrame(param1);
    } else {
        vqlistwidget->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDrawFrame(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_DrawFrame_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateMicroFocus(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->updateMicroFocus();
    } else {
        vqlistwidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateMicroFocus(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateMicroFocus_IsBase(true);
        vqlistwidget->updateMicroFocus();
    } else {
        vqlistwidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateMicroFocus(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Create(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->create();
    } else {
        vqlistwidget->create();
    }
}

// Base class handler implementation
void QListWidget_QBaseCreate(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Create_IsBase(true);
        vqlistwidget->create();
    } else {
        vqlistwidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCreate(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Create_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Destroy(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->destroy();
    } else {
        vqlistwidget->destroy();
    }
}

// Base class handler implementation
void QListWidget_QBaseDestroy(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Destroy_IsBase(true);
        vqlistwidget->destroy();
    } else {
        vqlistwidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDestroy(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_Destroy_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusNextChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->focusNextChild();
    } else {
        return vqlistwidget->focusNextChild();
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusNextChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusNextChild_IsBase(true);
        return vqlistwidget->focusNextChild();
    } else {
        return vqlistwidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusNextChild(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusPreviousChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->focusPreviousChild();
    } else {
        return vqlistwidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusPreviousChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusPreviousChild_IsBase(true);
        return vqlistwidget->focusPreviousChild();
    } else {
        return vqlistwidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusPreviousChild(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->setQListWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QListWidget_Sender(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->sender();
    } else {
        return vqlistwidget->sender();
    }
}

// Base class handler implementation
QObject* QListWidget_QBaseSender(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Sender_IsBase(true);
        return vqlistwidget->sender();
    } else {
        return vqlistwidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSender(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Sender_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SenderSignalIndex(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->senderSignalIndex();
    } else {
        return vqlistwidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QListWidget_QBaseSenderSignalIndex(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SenderSignalIndex_IsBase(true);
        return vqlistwidget->senderSignalIndex();
    } else {
        return vqlistwidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSenderSignalIndex(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_Receivers(const QListWidget* self, const char* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->receivers(signal);
    } else {
        return vqlistwidget->receivers(signal);
    }
}

// Base class handler implementation
int QListWidget_QBaseReceivers(const QListWidget* self, const char* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Receivers_IsBase(true);
        return vqlistwidget->receivers(signal);
    } else {
        return vqlistwidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnReceivers(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_Receivers_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_IsSignalConnected(const QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->isSignalConnected(*signal);
    } else {
        return vqlistwidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QListWidget_QBaseIsSignalConnected(const QListWidget* self, QMetaMethod* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IsSignalConnected_IsBase(true);
        return vqlistwidget->isSignalConnected(*signal);
    } else {
        return vqlistwidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIsSignalConnected(const QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->setQListWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IsSignalConnected_Callback>(slot));
    }
}

void QListWidget_Delete(QListWidget* self) {
    delete self;
}
