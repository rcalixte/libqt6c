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
#include <QHeaderView>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
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
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtreewidget.h>
#include "libqtreewidget.hpp"
#include "libqtreewidget.hxx"

QTreeWidgetItem* QTreeWidgetItem_new() {
    return new VirtualQTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(libqt_list /* of libqt_string */ strings) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
    return new VirtualQTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, libqt_list /* of libqt_string */ strings) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(treeview, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
    return new VirtualQTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
    return new VirtualQTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, libqt_list /* of libqt_string */ strings) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(parent, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after) {
    return new VirtualQTreeWidgetItem(parent, after);
}

QTreeWidgetItem* QTreeWidgetItem_new9(QTreeWidgetItem* other) {
    return new VirtualQTreeWidgetItem(*other);
}

QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal) {
    return new VirtualQTreeWidgetItem(static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new11(libqt_list /* of libqt_string */ strings, int typeVal) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
    return new VirtualQTreeWidgetItem(treeview, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, libqt_list /* of libqt_string */ strings, int typeVal) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(treeview, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
    return new VirtualQTreeWidgetItem(treeview, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
    return new VirtualQTreeWidgetItem(parent, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, libqt_list /* of libqt_string */ strings, int typeVal) {
    QStringList strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data.ptr);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(parent, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
    return new VirtualQTreeWidgetItem(parent, after, static_cast<int>(typeVal));
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
    return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
    self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self) {
    return self->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
    self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self) {
    return self->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
    self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self) {
    return self->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
    self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self) {
    return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
    self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self) {
    return self->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy) {
    self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self) {
    return static_cast<int>(self->childIndicatorPolicy());
}

int QTreeWidgetItem_Flags(const QTreeWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column) {
    QString _ret = self->text(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column) {
    return new QIcon(self->icon(static_cast<int>(column)));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, QIcon* icon) {
    self->setIcon(static_cast<int>(column), *icon);
}

libqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column) {
    QString _ret = self->statusTip(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

libqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column) {
    QString _ret = self->toolTip(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(static_cast<int>(column), toolTip_QString);
}

libqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column) {
    QString _ret = self->whatsThis(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column) {
    return new QFont(self->font(static_cast<int>(column)));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, QFont* font) {
    self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column) {
    return self->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

void QTreeWidgetItem_SetTextAlignment2(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<Qt::AlignmentFlag>(alignment));
}

void QTreeWidgetItem_SetTextAlignment3(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
    return new QBrush(self->background(static_cast<int>(column)));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, QBrush* brush) {
    self->setBackground(static_cast<int>(column), *brush);
}

QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column) {
    return new QBrush(self->foreground(static_cast<int>(column)));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, QBrush* brush) {
    self->setForeground(static_cast<int>(column), *brush);
}

int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column) {
    return static_cast<int>(self->checkState(static_cast<int>(column)));
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state) {
    self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column) {
    return new QSize(self->sizeHint(static_cast<int>(column)));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, QSize* size) {
    self->setSizeHint(static_cast<int>(column), *size);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, QTreeWidgetItem* other) {
    self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self) {
    return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index) {
    return self->child(static_cast<int>(index));
}

int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self) {
    return self->childCount();
}

int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self) {
    return self->columnCount();
}

int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
    return self->indexOfChild(child);
}

void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
    self->addChild(child);
}

void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
    self->insertChild(static_cast<int>(index), child);
}

void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
    self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index) {
    return self->takeChild(static_cast<int>(index));
}

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, libqt_list /* of QTreeWidgetItem* */ children) {
    QList<QTreeWidgetItem*> children_QList;
    children_QList.reserve(children.len);
    QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data.ptr);
    for (size_t i = 0; i < children.len; ++i) {
        children_QList.push_back(children_arr[i]);
    }
    self->addChildren(children_QList);
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, libqt_list /* of QTreeWidgetItem* */ children) {
    QList<QTreeWidgetItem*> children_QList;
    children_QList.reserve(children.len);
    QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data.ptr);
    for (size_t i = 0; i < children.len; ++i) {
        children_QList.push_back(children_arr[i]);
    }
    self->insertChildren(static_cast<int>(index), children_QList);
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self) {
    QList<QTreeWidgetItem*> _ret = self->takeChildren();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

int QTreeWidgetItem_Type(const QTreeWidgetItem* self) {
    return self->type();
}

void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order) {
    self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Derived class handler implementation
QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        return vqtreewidgetitem->clone();
    } else {
        return vqtreewidgetitem->clone();
    }
}

// Base class handler implementation
QTreeWidgetItem* QTreeWidgetItem_QBaseClone(const QTreeWidgetItem* self) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Clone_IsBase(true);
        return vqtreewidgetitem->clone();
    } else {
        return vqtreewidgetitem->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnClone(const QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Clone_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        return new QVariant(vqtreewidgetitem->data(static_cast<int>(column), static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(column), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QTreeWidgetItem_QBaseData(const QTreeWidgetItem* self, int column, int role) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Data_IsBase(true);
        return new QVariant(vqtreewidgetitem->data(static_cast<int>(column), static_cast<int>(role)));
    } else {
        return new QVariant(self->data(static_cast<int>(column), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnData(const QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Data_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    } else {
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseSetData(QTreeWidgetItem* self, int column, int role, QVariant* value) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_SetData_IsBase(true);
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    } else {
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnSetData(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_SetData_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        return vqtreewidgetitem->operator<(*other);
    } else {
        return vqtreewidgetitem->operator<(*other);
    }
}

// Base class handler implementation
bool QTreeWidgetItem_QBaseOperatorLesser(const QTreeWidgetItem* self, QTreeWidgetItem* other) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_IsBase(true);
        return vqtreewidgetitem->operator<(*other);
    } else {
        return vqtreewidgetitem->operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnOperatorLesser(const QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->read(*in);
    } else {
        vqtreewidgetitem->read(*in);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseRead(QTreeWidgetItem* self, QDataStream* in) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_Read_IsBase(true);
        vqtreewidgetitem->read(*in);
    } else {
        vqtreewidgetitem->read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnRead(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_Read_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->write(*out);
    } else {
        vqtreewidgetitem->write(*out);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseWrite(const QTreeWidgetItem* self, QDataStream* out) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Write_IsBase(true);
        vqtreewidgetitem->write(*out);
    } else {
        vqtreewidgetitem->write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnWrite(const QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self))) {
        vqtreewidgetitem->setQTreeWidgetItem_Write_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Write_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->emitDataChanged();
    } else {
        vqtreewidgetitem->emitDataChanged();
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseEmitDataChanged(QTreeWidgetItem* self) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_IsBase(true);
        vqtreewidgetitem->emitDataChanged();
    } else {
        vqtreewidgetitem->emitDataChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnEmitDataChanged(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_EmitDataChanged_Callback>(slot));
    }
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self) {
    delete self;
}

QTreeWidget* QTreeWidget_new(QWidget* parent) {
    return new VirtualQTreeWidget(parent);
}

QTreeWidget* QTreeWidget_new2() {
    return new VirtualQTreeWidget();
}

QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTreeWidget_Metacast(QTreeWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTreeWidget_Metacall(QTreeWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTreeWidget_OnMetacall(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Metacall_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTreeWidget_QBaseMetacall(QTreeWidget* self, int param1, int param2, void** param3) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Metacall_IsBase(true);
        return vqtreewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTreeWidget_Tr(const char* s) {
    QString _ret = QTreeWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QTreeWidget_ColumnCount(const QTreeWidget* self) {
    return self->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self) {
    return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index) {
    return self->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_TopLevelItemCount(const QTreeWidget* self) {
    return self->topLevelItemCount();
}

void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
    self->insertTopLevelItem(static_cast<int>(index), item);
}

void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index) {
    return self->takeTopLevelItem(static_cast<int>(index));
}

int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self) {
    return self->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, libqt_list /* of libqt_string */ labels) {
    QStringList labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data.ptr);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHeaderLabels(labels_QList);
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self) {
    return self->currentItem();
}

int QTreeWidget_CurrentColumn(const QTreeWidget* self) {
    return self->currentColumn();
}

void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->setCurrentItem(item);
}

void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->setCurrentItem(item, static_cast<int>(column));
}

void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
    self->setCurrentItem(item, static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, QPoint* p) {
    return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, QTreeWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

int QTreeWidget_SortColumn(const QTreeWidget* self) {
    return self->sortColumn();
}

void QTreeWidget_SortItems(QTreeWidget* self, int column, int order) {
    self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->editItem(item);
}

void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
    return self->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
    self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->removeItemWidget(item, static_cast<int>(column));
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_SelectedItems(const QTreeWidget* self) {
    QList<QTreeWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_FindItems(const QTreeWidget* self, libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->itemBelow(item);
}

QModelIndex* QTreeWidget_IndexFromItem(const QTreeWidget* self, QTreeWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QTreeWidgetItem* QTreeWidget_ItemFromIndex(const QTreeWidget* self, QModelIndex* index) {
    return self->itemFromIndex(*index);
}

void QTreeWidget_ScrollToItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->scrollToItem(item);
}

void QTreeWidget_ExpandItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->expandItem(item);
}

void QTreeWidget_CollapseItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->collapseItem(item);
}

void QTreeWidget_Clear(QTreeWidget* self) {
    self->clear();
}

void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemPressed(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemPressed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemPressed, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemDoubleClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemActivated(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemActivated, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemEntered(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemEntered, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemChanged, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
    self->itemExpanded(item);
}

void QTreeWidget_Connect_ItemExpanded(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemExpanded, [self, slotFunc](QTreeWidgetItem* item) {
        QTreeWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
    self->itemCollapsed(item);
}

void QTreeWidget_Connect_ItemCollapsed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemCollapsed, [self, slotFunc](QTreeWidgetItem* item) {
        QTreeWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QTreeWidget_Connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::currentItemChanged, [self, slotFunc](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
        QTreeWidgetItem* sigval1 = current;
        QTreeWidgetItem* sigval2 = previous;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
    self->itemSelectionChanged();
}

void QTreeWidget_Connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*) = reinterpret_cast<void (*)(QTreeWidget*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemSelectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QTreeWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTreeWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTreeWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->editItem(item, static_cast<int>(column));
}

void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->openPersistentEditor(item, static_cast<int>(column));
}

void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->closePersistentEditor(item, static_cast<int>(column));
}

bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
    return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_FindItems3(const QTreeWidget* self, libqt_string text, int flags, int column) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QTreeWidget_IndexFromItem2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
    return new QModelIndex(self->indexFromItem(item, static_cast<int>(column)));
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, QTreeWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setSelectionModel(selectionModel);
    } else {
        vqtreewidget->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetSelectionModel_IsBase(true);
        vqtreewidget->setSelectionModel(selectionModel);
    } else {
        vqtreewidget->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelectionModel(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_Event(QTreeWidget* self, QEvent* e) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->event(e);
    } else {
        return vqtreewidget->event(e);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEvent(QTreeWidget* self, QEvent* e) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Event_IsBase(true);
        return vqtreewidget->event(e);
    } else {
        return vqtreewidget->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Event_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTreeWidget_MimeTypes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        QStringList _ret = vqtreewidget->mimeTypes();
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
        QStringList _ret = vqtreewidget->mimeTypes();
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
libqt_list /* of libqt_string */ QTreeWidget_QBaseMimeTypes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MimeTypes_IsBase(true);
        QStringList _ret = vqtreewidget->mimeTypes();
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
        QStringList _ret = vqtreewidget->mimeTypes();
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
void QTreeWidget_OnMimeTypes(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MimeTypes_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->mimeData(items_QList);
    } else {
        return vqtreewidget->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* QTreeWidget_QBaseMimeData(const QTreeWidget* self, libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data.ptr);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MimeData_IsBase(true);
        return vqtreewidget->mimeData(items_QList);
    } else {
        return vqtreewidget->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeData(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DropMimeData_IsBase(true);
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropMimeData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DropMimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SupportedDropActions(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->supportedDropActions());
    } else {
        return static_cast<int>(vqtreewidget->supportedDropActions());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSupportedDropActions(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqtreewidget->supportedDropActions());
    } else {
        return static_cast<int>(vqtreewidget->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSupportedDropActions(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->dropEvent(event);
    } else {
        vqtreewidget->dropEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDropEvent(QTreeWidget* self, QDropEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DropEvent_IsBase(true);
        vqtreewidget->dropEvent(event);
    } else {
        vqtreewidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DropEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetRootIndex(QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setRootIndex(*index);
    } else {
        vqtreewidget->setRootIndex(*index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetRootIndex(QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetRootIndex_IsBase(true);
        vqtreewidget->setRootIndex(*index);
    } else {
        vqtreewidget->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetRootIndex(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetRootIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyboardSearch(QTreeWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->keyboardSearch(search_QString);
    } else {
        vqtreewidget->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyboardSearch(QTreeWidget* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyboardSearch_IsBase(true);
        vqtreewidget->keyboardSearch(search_QString);
    } else {
        vqtreewidget->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyboardSearch(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyboardSearch_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QTreeWidget_VisualRect(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QRect(vqtreewidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QTreeWidget_QBaseVisualRect(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VisualRect_IsBase(true);
        return new QRect(vqtreewidget->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRect(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VisualRect_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollTo(QTreeWidget* self, QModelIndex* index, int hint) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollTo(QTreeWidget* self, QModelIndex* index, int hint) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollTo_IsBase(true);
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollTo(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollTo_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeWidget_IndexAt(const QTreeWidget* self, QPoint* p) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QModelIndex(vqtreewidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QTreeWidget_QBaseIndexAt(const QTreeWidget* self, QPoint* p) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IndexAt_IsBase(true);
        return new QModelIndex(vqtreewidget->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIndexAt(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IndexAt_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DoItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->doItemsLayout();
    } else {
        vqtreewidget->doItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDoItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DoItemsLayout_IsBase(true);
        vqtreewidget->doItemsLayout();
    } else {
        vqtreewidget->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDoItemsLayout(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DoItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Reset(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->reset();
    } else {
        vqtreewidget->reset();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseReset(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Reset_IsBase(true);
        vqtreewidget->reset();
    } else {
        vqtreewidget->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReset(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Reset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DataChanged(QTreeWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDataChanged(QTreeWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DataChanged_IsBase(true);
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDataChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DataChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SelectAll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->selectAll();
    } else {
        vqtreewidget->selectAll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSelectAll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SelectAll_IsBase(true);
        vqtreewidget->selectAll();
    } else {
        vqtreewidget->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectAll(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SelectAll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseVerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarValueChanged_IsBase(true);
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollContentsBy_IsBase(true);
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollContentsBy(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsInserted(QTreeWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsInserted(QTreeWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsInserted_IsBase(true);
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsInserted(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsInserted_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsAboutToBeRemoved(QTreeWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsAboutToBeRemoved(QTreeWidget* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsAboutToBeRemoved_IsBase(true);
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsAboutToBeRemoved(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeWidget_MoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return new QModelIndex(vqtreewidget->moveCursor(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTreeWidget_QBaseMoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MoveCursor_IsBase(true);
        return new QModelIndex(vqtreewidget->moveCursor(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveCursor(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MoveCursor_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_HorizontalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->horizontalOffset();
    } else {
        return vqtreewidget->horizontalOffset();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseHorizontalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HorizontalOffset_IsBase(true);
        return vqtreewidget->horizontalOffset();
    } else {
        return vqtreewidget->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalOffset(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HorizontalOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_VerticalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->verticalOffset();
    } else {
        return vqtreewidget->verticalOffset();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseVerticalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VerticalOffset_IsBase(true);
        return vqtreewidget->verticalOffset();
    } else {
        return vqtreewidget->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalOffset(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VerticalOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetSelection(QTreeWidget* self, QRect* rect, int command) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetSelection(QTreeWidget* self, QRect* rect, int command) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetSelection_IsBase(true);
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelection(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetSelection_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QTreeWidget_VisualRegionForSelection(const QTreeWidget* self, QItemSelection* selection) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QRegion(vqtreewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QTreeWidget_QBaseVisualRegionForSelection(const QTreeWidget* self, QItemSelection* selection) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtreewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRegionForSelection(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTreeWidget_SelectedIndexes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        QModelIndexList _ret = vqtreewidget->selectedIndexes();
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
        QModelIndexList _ret = vqtreewidget->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QTreeWidget_QBaseSelectedIndexes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqtreewidget->selectedIndexes();
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
        QModelIndexList _ret = vqtreewidget->selectedIndexes();
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
void QTreeWidget_OnSelectedIndexes(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SelectedIndexes_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ChangeEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->changeEvent(event);
    } else {
        vqtreewidget->changeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseChangeEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ChangeEvent_IsBase(true);
        vqtreewidget->changeEvent(event);
    } else {
        vqtreewidget->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChangeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_TimerEvent(QTreeWidget* self, QTimerEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->timerEvent(event);
    } else {
        vqtreewidget->timerEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseTimerEvent(QTreeWidget* self, QTimerEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_TimerEvent_IsBase(true);
        vqtreewidget->timerEvent(event);
    } else {
        vqtreewidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTimerEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_PaintEvent(QTreeWidget* self, QPaintEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->paintEvent(event);
    } else {
        vqtreewidget->paintEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBasePaintEvent(QTreeWidget* self, QPaintEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_PaintEvent_IsBase(true);
        vqtreewidget->paintEvent(event);
    } else {
        vqtreewidget->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawRow(const QTreeWidget* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->drawRow(painter, *options, *index);
    } else {
        vqtreewidget->drawRow(painter, *options, *index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawRow(const QTreeWidget* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawRow_IsBase(true);
        vqtreewidget->drawRow(painter, *options, *index);
    } else {
        vqtreewidget->drawRow(painter, *options, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawRow(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawRow_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawRow_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawBranches(const QTreeWidget* self, QPainter* painter, QRect* rect, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->drawBranches(painter, *rect, *index);
    } else {
        vqtreewidget->drawBranches(painter, *rect, *index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawBranches(const QTreeWidget* self, QPainter* painter, QRect* rect, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawBranches_IsBase(true);
        vqtreewidget->drawBranches(painter, *rect, *index);
    } else {
        vqtreewidget->drawBranches(painter, *rect, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawBranches(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawBranches_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawBranches_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->mousePressEvent(event);
    } else {
        vqtreewidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MousePressEvent_IsBase(true);
        vqtreewidget->mousePressEvent(event);
    } else {
        vqtreewidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMousePressEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->mouseReleaseEvent(event);
    } else {
        vqtreewidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseReleaseEvent_IsBase(true);
        vqtreewidget->mouseReleaseEvent(event);
    } else {
        vqtreewidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseReleaseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->mouseDoubleClickEvent(event);
    } else {
        vqtreewidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseDoubleClickEvent_IsBase(true);
        vqtreewidget->mouseDoubleClickEvent(event);
    } else {
        vqtreewidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseDoubleClickEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->mouseMoveEvent(event);
    } else {
        vqtreewidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseMoveEvent_IsBase(true);
        vqtreewidget->mouseMoveEvent(event);
    } else {
        vqtreewidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->keyPressEvent(event);
    } else {
        vqtreewidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyPressEvent_IsBase(true);
        vqtreewidget->keyPressEvent(event);
    } else {
        vqtreewidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyPressEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->dragMoveEvent(event);
    } else {
        vqtreewidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragMoveEvent_IsBase(true);
        vqtreewidget->dragMoveEvent(event);
    } else {
        vqtreewidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_ViewportEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->viewportEvent(event);
    } else {
        return vqtreewidget->viewportEvent(event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseViewportEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ViewportEvent_IsBase(true);
        return vqtreewidget->viewportEvent(event);
    } else {
        return vqtreewidget->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ViewportEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->updateGeometries();
    } else {
        vqtreewidget->updateGeometries();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateGeometries_IsBase(true);
        vqtreewidget->updateGeometries();
    } else {
        vqtreewidget->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateGeometries(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateGeometries_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_ViewportSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QSize(vqtreewidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTreeWidget_QBaseViewportSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vqtreewidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportSizeHint(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SizeHintForColumn(const QTreeWidget* self, int column) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSizeHintForColumn(const QTreeWidget* self, int column) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHintForColumn_IsBase(true);
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForColumn(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHorizontalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarAction_IsBase(true);
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_IsIndexHidden(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->isIndexHidden(*index);
    } else {
        return vqtreewidget->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseIsIndexHidden(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IsIndexHidden_IsBase(true);
        return vqtreewidget->isIndexHidden(*index);
    } else {
        return vqtreewidget->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIsIndexHidden(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IsIndexHidden_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SelectionChanged(QTreeWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->selectionChanged(*selected, *deselected);
    } else {
        vqtreewidget->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSelectionChanged(QTreeWidget* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SelectionChanged_IsBase(true);
        vqtreewidget->selectionChanged(*selected, *deselected);
    } else {
        vqtreewidget->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CurrentChanged(QTreeWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->currentChanged(*current, *previous);
    } else {
        vqtreewidget->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCurrentChanged(QTreeWidget* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CurrentChanged_IsBase(true);
        vqtreewidget->currentChanged(*current, *previous);
    } else {
        vqtreewidget->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCurrentChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CurrentChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SizeHintForRow(const QTreeWidget* self, int row) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSizeHintForRow(const QTreeWidget* self, int row) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHintForRow_IsBase(true);
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForRow(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHintForRow_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeWidget_ItemDelegateForIndex(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->itemDelegateForIndex(*index);
    } else {
        return vqtreewidget->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTreeWidget_QBaseItemDelegateForIndex(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ItemDelegateForIndex_IsBase(true);
        return vqtreewidget->itemDelegateForIndex(*index);
    } else {
        return vqtreewidget->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnItemDelegateForIndex(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeWidget_InputMethodQuery(const QTreeWidget* self, int query) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QVariant(vqtreewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTreeWidget_QBaseInputMethodQuery(const QTreeWidget* self, int query) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtreewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodQuery(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorData(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->updateEditorData();
    } else {
        vqtreewidget->updateEditorData();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateEditorData(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateEditorData_IsBase(true);
        vqtreewidget->updateEditorData();
    } else {
        vqtreewidget->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateEditorData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->updateEditorGeometries();
    } else {
        vqtreewidget->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateEditorGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateEditorGeometries_IsBase(true);
        vqtreewidget->updateEditorGeometries();
    } else {
        vqtreewidget->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorGeometries(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseVerticalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarAction_IsBase(true);
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarValueChanged_IsBase(true);
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CloseEditor_IsBase(true);
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEditor(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CloseEditor_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CommitData(QTreeWidget* self, QWidget* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->commitData(editor);
    } else {
        vqtreewidget->commitData(editor);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCommitData(QTreeWidget* self, QWidget* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CommitData_IsBase(true);
        vqtreewidget->commitData(editor);
    } else {
        vqtreewidget->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCommitData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CommitData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_EditorDestroyed(QTreeWidget* self, QObject* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->editorDestroyed(editor);
    } else {
        vqtreewidget->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseEditorDestroyed(QTreeWidget* self, QObject* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EditorDestroyed_IsBase(true);
        vqtreewidget->editorDestroyed(editor);
    } else {
        vqtreewidget->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEditorDestroyed(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EditorDestroyed_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_Edit2(QTreeWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEdit2(QTreeWidget* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Edit2_IsBase(true);
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEdit2(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Edit2_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SelectionCommand(const QTreeWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSelectionCommand(const QTreeWidget* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionCommand(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SelectionCommand_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StartDrag(QTreeWidget* self, int supportedActions) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStartDrag(QTreeWidget* self, int supportedActions) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StartDrag_IsBase(true);
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStartDrag(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StartDrag_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->initViewItemOption(option);
    } else {
        vqtreewidget->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitViewItemOption_IsBase(true);
        vqtreewidget->initViewItemOption(option);
    } else {
        vqtreewidget->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitViewItemOption(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitViewItemOption_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusNextPrevChild(QTreeWidget* self, bool next) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->focusNextPrevChild(next);
    } else {
        return vqtreewidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusNextPrevChild(QTreeWidget* self, bool next) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusNextPrevChild_IsBase(true);
        return vqtreewidget->focusNextPrevChild(next);
    } else {
        return vqtreewidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusNextPrevChild(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->dragEnterEvent(event);
    } else {
        vqtreewidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragEnterEvent_IsBase(true);
        vqtreewidget->dragEnterEvent(event);
    } else {
        vqtreewidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragEnterEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->dragLeaveEvent(event);
    } else {
        vqtreewidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragLeaveEvent_IsBase(true);
        vqtreewidget->dragLeaveEvent(event);
    } else {
        vqtreewidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragLeaveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_FocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->focusInEvent(event);
    } else {
        vqtreewidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseFocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusInEvent_IsBase(true);
        vqtreewidget->focusInEvent(event);
    } else {
        vqtreewidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusInEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_FocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->focusOutEvent(event);
    } else {
        vqtreewidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseFocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusOutEvent_IsBase(true);
        vqtreewidget->focusOutEvent(event);
    } else {
        vqtreewidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusOutEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->resizeEvent(event);
    } else {
        vqtreewidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ResizeEvent_IsBase(true);
        vqtreewidget->resizeEvent(event);
    } else {
        vqtreewidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnResizeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->inputMethodEvent(event);
    } else {
        vqtreewidget->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_InputMethodEvent_IsBase(true);
        vqtreewidget->inputMethodEvent(event);
    } else {
        vqtreewidget->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_EventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->eventFilter(object, event);
    } else {
        return vqtreewidget->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EventFilter_IsBase(true);
        return vqtreewidget->eventFilter(object, event);
    } else {
        return vqtreewidget->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEventFilter(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EventFilter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_MinimumSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QSize(vqtreewidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTreeWidget_QBaseMinimumSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtreewidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMinimumSizeHint(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_SizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QSize(vqtreewidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTreeWidget_QBaseSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHint_IsBase(true);
        return new QSize(vqtreewidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHint(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetupViewport(QTreeWidget* self, QWidget* viewport) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setupViewport(viewport);
    } else {
        vqtreewidget->setupViewport(viewport);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetupViewport(QTreeWidget* self, QWidget* viewport) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetupViewport_IsBase(true);
        vqtreewidget->setupViewport(viewport);
    } else {
        vqtreewidget->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetupViewport(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetupViewport_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_WheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->wheelEvent(param1);
    } else {
        vqtreewidget->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseWheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_WheelEvent_IsBase(true);
        vqtreewidget->wheelEvent(param1);
    } else {
        vqtreewidget->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnWheelEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->contextMenuEvent(param1);
    } else {
        vqtreewidget->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ContextMenuEvent_IsBase(true);
        vqtreewidget->contextMenuEvent(param1);
    } else {
        vqtreewidget->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnContextMenuEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->initStyleOption(option);
    } else {
        vqtreewidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitStyleOption_IsBase(true);
        vqtreewidget->initStyleOption(option);
    } else {
        vqtreewidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitStyleOption(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_DevType(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->devType();
    } else {
        return vqtreewidget->devType();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseDevType(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DevType_IsBase(true);
        return vqtreewidget->devType();
    } else {
        return vqtreewidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDevType(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DevType_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetVisible(QTreeWidget* self, bool visible) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setVisible(visible);
    } else {
        vqtreewidget->setVisible(visible);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetVisible(QTreeWidget* self, bool visible) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetVisible_IsBase(true);
        vqtreewidget->setVisible(visible);
    } else {
        vqtreewidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetVisible(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetVisible_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_HeightForWidth(const QTreeWidget* self, int param1) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseHeightForWidth(const QTreeWidget* self, int param1) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HeightForWidth_IsBase(true);
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHeightForWidth(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_HasHeightForWidth(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->hasHeightForWidth();
    } else {
        return vqtreewidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseHasHeightForWidth(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HasHeightForWidth_IsBase(true);
        return vqtreewidget->hasHeightForWidth();
    } else {
        return vqtreewidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHasHeightForWidth(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTreeWidget_PaintEngine(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->paintEngine();
    } else {
        return vqtreewidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTreeWidget_QBasePaintEngine(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_PaintEngine_IsBase(true);
        return vqtreewidget->paintEngine();
    } else {
        return vqtreewidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEngine(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->keyReleaseEvent(event);
    } else {
        vqtreewidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyReleaseEvent_IsBase(true);
        vqtreewidget->keyReleaseEvent(event);
    } else {
        vqtreewidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyReleaseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_EnterEvent(QTreeWidget* self, QEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->enterEvent(event);
    } else {
        vqtreewidget->enterEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseEnterEvent(QTreeWidget* self, QEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EnterEvent_IsBase(true);
        vqtreewidget->enterEvent(event);
    } else {
        vqtreewidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEnterEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_LeaveEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->leaveEvent(event);
    } else {
        vqtreewidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseLeaveEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_LeaveEvent_IsBase(true);
        vqtreewidget->leaveEvent(event);
    } else {
        vqtreewidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnLeaveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MoveEvent(QTreeWidget* self, QMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->moveEvent(event);
    } else {
        vqtreewidget->moveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMoveEvent(QTreeWidget* self, QMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MoveEvent_IsBase(true);
        vqtreewidget->moveEvent(event);
    } else {
        vqtreewidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CloseEvent(QTreeWidget* self, QCloseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->closeEvent(event);
    } else {
        vqtreewidget->closeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCloseEvent(QTreeWidget* self, QCloseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CloseEvent_IsBase(true);
        vqtreewidget->closeEvent(event);
    } else {
        vqtreewidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_TabletEvent(QTreeWidget* self, QTabletEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->tabletEvent(event);
    } else {
        vqtreewidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseTabletEvent(QTreeWidget* self, QTabletEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_TabletEvent_IsBase(true);
        vqtreewidget->tabletEvent(event);
    } else {
        vqtreewidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTabletEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ActionEvent(QTreeWidget* self, QActionEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->actionEvent(event);
    } else {
        vqtreewidget->actionEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseActionEvent(QTreeWidget* self, QActionEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ActionEvent_IsBase(true);
        vqtreewidget->actionEvent(event);
    } else {
        vqtreewidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnActionEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ShowEvent(QTreeWidget* self, QShowEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->showEvent(event);
    } else {
        vqtreewidget->showEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseShowEvent(QTreeWidget* self, QShowEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ShowEvent_IsBase(true);
        vqtreewidget->showEvent(event);
    } else {
        vqtreewidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnShowEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HideEvent(QTreeWidget* self, QHideEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->hideEvent(event);
    } else {
        vqtreewidget->hideEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHideEvent(QTreeWidget* self, QHideEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HideEvent_IsBase(true);
        vqtreewidget->hideEvent(event);
    } else {
        vqtreewidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHideEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_HideEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_NativeEvent(QTreeWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseNativeEvent(QTreeWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_NativeEvent_IsBase(true);
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnNativeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_Metric(const QTreeWidget* self, int param1) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseMetric(const QTreeWidget* self, int param1) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Metric_IsBase(true);
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetric(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Metric_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitPainter(const QTreeWidget* self, QPainter* painter) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->initPainter(painter);
    } else {
        vqtreewidget->initPainter(painter);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitPainter(const QTreeWidget* self, QPainter* painter) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitPainter_IsBase(true);
        vqtreewidget->initPainter(painter);
    } else {
        vqtreewidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitPainter(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_InitPainter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTreeWidget_Redirected(const QTreeWidget* self, QPoint* offset) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->redirected(offset);
    } else {
        return vqtreewidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTreeWidget_QBaseRedirected(const QTreeWidget* self, QPoint* offset) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Redirected_IsBase(true);
        return vqtreewidget->redirected(offset);
    } else {
        return vqtreewidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRedirected(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Redirected_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTreeWidget_SharedPainter(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->sharedPainter();
    } else {
        return vqtreewidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTreeWidget_QBaseSharedPainter(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SharedPainter_IsBase(true);
        return vqtreewidget->sharedPainter();
    } else {
        return vqtreewidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSharedPainter(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ChildEvent(QTreeWidget* self, QChildEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->childEvent(event);
    } else {
        vqtreewidget->childEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseChildEvent(QTreeWidget* self, QChildEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ChildEvent_IsBase(true);
        vqtreewidget->childEvent(event);
    } else {
        vqtreewidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChildEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CustomEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->customEvent(event);
    } else {
        vqtreewidget->customEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCustomEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CustomEvent_IsBase(true);
        vqtreewidget->customEvent(event);
    } else {
        vqtreewidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCustomEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ConnectNotify(QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->connectNotify(*signal);
    } else {
        vqtreewidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseConnectNotify(QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ConnectNotify_IsBase(true);
        vqtreewidget->connectNotify(*signal);
    } else {
        vqtreewidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnConnectNotify(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DisconnectNotify(QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->disconnectNotify(*signal);
    } else {
        vqtreewidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDisconnectNotify(QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DisconnectNotify_IsBase(true);
        vqtreewidget->disconnectNotify(*signal);
    } else {
        vqtreewidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDisconnectNotify(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnResized(QTreeWidget* self, int column, int oldSize, int newSize) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnResized(QTreeWidget* self, int column, int oldSize, int newSize) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnResized_IsBase(true);
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnResized(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnResized_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnCountChanged(QTreeWidget* self, int oldCount, int newCount) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnCountChanged(QTreeWidget* self, int oldCount, int newCount) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnCountChanged_IsBase(true);
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnCountChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnMoved(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->columnMoved();
    } else {
        vqtreewidget->columnMoved();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnMoved(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnMoved_IsBase(true);
        vqtreewidget->columnMoved();
    } else {
        vqtreewidget->columnMoved();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnMoved(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ColumnMoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Reexpand(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->reexpand();
    } else {
        vqtreewidget->reexpand();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseReexpand(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Reexpand_IsBase(true);
        vqtreewidget->reexpand();
    } else {
        vqtreewidget->reexpand();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReexpand(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Reexpand_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Reexpand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsRemoved(QTreeWidget* self, QModelIndex* parent, int first, int last) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsRemoved(QTreeWidget* self, QModelIndex* parent, int first, int last) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsRemoved_IsBase(true);
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsRemoved(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_RowsRemoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawTree(const QTreeWidget* self, QPainter* painter, QRegion* region) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->drawTree(painter, *region);
    } else {
        vqtreewidget->drawTree(painter, *region);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawTree(const QTreeWidget* self, QPainter* painter, QRegion* region) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawTree_IsBase(true);
        vqtreewidget->drawTree(painter, *region);
    } else {
        vqtreewidget->drawTree(painter, *region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawTree(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DrawTree_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawTree_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_IndexRowSizeHint(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->indexRowSizeHint(*index);
    } else {
        return vqtreewidget->indexRowSizeHint(*index);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseIndexRowSizeHint(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IndexRowSizeHint_IsBase(true);
        return vqtreewidget->indexRowSizeHint(*index);
    } else {
        return vqtreewidget->indexRowSizeHint(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIndexRowSizeHint(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IndexRowSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IndexRowSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_RowHeight(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->rowHeight(*index);
    } else {
        return vqtreewidget->rowHeight(*index);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseRowHeight(const QTreeWidget* self, QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_RowHeight_IsBase(true);
        return vqtreewidget->rowHeight(*index);
    } else {
        return vqtreewidget->rowHeight(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowHeight(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_RowHeight_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowHeight_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_State(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->state());
    } else {
        return static_cast<int>(vqtreewidget->state());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseState(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_State_IsBase(true);
        return static_cast<int>(vqtreewidget->state());
    } else {
        return static_cast<int>(vqtreewidget->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnState(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_State_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetState(QTreeWidget* self, int state) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    } else {
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetState(QTreeWidget* self, int state) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetState_IsBase(true);
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    } else {
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetState(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetState_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScheduleDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->scheduleDelayedItemsLayout();
    } else {
        vqtreewidget->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScheduleDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScheduleDelayedItemsLayout_IsBase(true);
        vqtreewidget->scheduleDelayedItemsLayout();
    } else {
        vqtreewidget->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScheduleDelayedItemsLayout(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ExecuteDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->executeDelayedItemsLayout();
    } else {
        vqtreewidget->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseExecuteDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ExecuteDelayedItemsLayout_IsBase(true);
        vqtreewidget->executeDelayedItemsLayout();
    } else {
        vqtreewidget->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnExecuteDelayedItemsLayout(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetDirtyRegion(QTreeWidget* self, QRegion* region) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setDirtyRegion(*region);
    } else {
        vqtreewidget->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetDirtyRegion(QTreeWidget* self, QRegion* region) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetDirtyRegion_IsBase(true);
        vqtreewidget->setDirtyRegion(*region);
    } else {
        vqtreewidget->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetDirtyRegion(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollDirtyRegion(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollDirtyRegion(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollDirtyRegion_IsBase(true);
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollDirtyRegion(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTreeWidget_DirtyRegionOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QPoint(vqtreewidget->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTreeWidget_QBaseDirtyRegionOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtreewidget->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDirtyRegionOffset(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StartAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->startAutoScroll();
    } else {
        vqtreewidget->startAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStartAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StartAutoScroll_IsBase(true);
        vqtreewidget->startAutoScroll();
    } else {
        vqtreewidget->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStartAutoScroll(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StartAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StopAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->stopAutoScroll();
    } else {
        vqtreewidget->stopAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStopAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StopAutoScroll_IsBase(true);
        vqtreewidget->stopAutoScroll();
    } else {
        vqtreewidget->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStopAutoScroll(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_StopAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DoAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->doAutoScroll();
    } else {
        vqtreewidget->doAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDoAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DoAutoScroll_IsBase(true);
        vqtreewidget->doAutoScroll();
    } else {
        vqtreewidget->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDoAutoScroll(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DoAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_DropIndicatorPosition(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseDropIndicatorPosition(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropIndicatorPosition(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetViewportMargins(QTreeWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetViewportMargins(QTreeWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetViewportMargins_IsBase(true);
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetViewportMargins(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTreeWidget_ViewportMargins(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return new QMargins(vqtreewidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTreeWidget_QBaseViewportMargins(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ViewportMargins_IsBase(true);
        return new QMargins(vqtreewidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportMargins(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_ViewportMargins_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawFrame(QTreeWidget* self, QPainter* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->drawFrame(param1);
    } else {
        vqtreewidget->drawFrame(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawFrame(QTreeWidget* self, QPainter* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DrawFrame_IsBase(true);
        vqtreewidget->drawFrame(param1);
    } else {
        vqtreewidget->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawFrame(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_DrawFrame_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateMicroFocus(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->updateMicroFocus();
    } else {
        vqtreewidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateMicroFocus(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateMicroFocus_IsBase(true);
        vqtreewidget->updateMicroFocus();
    } else {
        vqtreewidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateMicroFocus(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Create(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->create();
    } else {
        vqtreewidget->create();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCreate(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Create_IsBase(true);
        vqtreewidget->create();
    } else {
        vqtreewidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCreate(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Create_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Destroy(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->destroy();
    } else {
        vqtreewidget->destroy();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDestroy(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Destroy_IsBase(true);
        vqtreewidget->destroy();
    } else {
        vqtreewidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDestroy(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_Destroy_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusNextChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->focusNextChild();
    } else {
        return vqtreewidget->focusNextChild();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusNextChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusNextChild_IsBase(true);
        return vqtreewidget->focusNextChild();
    } else {
        return vqtreewidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusNextChild(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusPreviousChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->focusPreviousChild();
    } else {
        return vqtreewidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusPreviousChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusPreviousChild_IsBase(true);
        return vqtreewidget->focusPreviousChild();
    } else {
        return vqtreewidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusPreviousChild(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->setQTreeWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTreeWidget_Sender(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->sender();
    } else {
        return vqtreewidget->sender();
    }
}

// Base class handler implementation
QObject* QTreeWidget_QBaseSender(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Sender_IsBase(true);
        return vqtreewidget->sender();
    } else {
        return vqtreewidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSender(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Sender_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SenderSignalIndex(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->senderSignalIndex();
    } else {
        return vqtreewidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSenderSignalIndex(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SenderSignalIndex_IsBase(true);
        return vqtreewidget->senderSignalIndex();
    } else {
        return vqtreewidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSenderSignalIndex(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_Receivers(const QTreeWidget* self, const char* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->receivers(signal);
    } else {
        return vqtreewidget->receivers(signal);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseReceivers(const QTreeWidget* self, const char* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Receivers_IsBase(true);
        return vqtreewidget->receivers(signal);
    } else {
        return vqtreewidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReceivers(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_Receivers_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_IsSignalConnected(const QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->isSignalConnected(*signal);
    } else {
        return vqtreewidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseIsSignalConnected(const QTreeWidget* self, QMetaMethod* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IsSignalConnected_IsBase(true);
        return vqtreewidget->isSignalConnected(*signal);
    } else {
        return vqtreewidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIsSignalConnected(const QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->setQTreeWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IsSignalConnected_Callback>(slot));
    }
}

void QTreeWidget_Delete(QTreeWidget* self) {
    delete self;
}
