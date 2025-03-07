#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqbrush.hpp"
#include "libqcursor.hpp"
#include "libqdatastream.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlistview.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqlistwidget.hpp"
#include "libqlistwidget.h"

/// https://doc.qt.io/qt-6/qlistwidgetitem.html

/// q_listwidgetitem_new constructs a new QListWidgetItem object.
///
///
QListWidgetItem* q_listwidgetitem_new() {
    return QListWidgetItem_new();
}

/// q_listwidgetitem_new2 constructs a new QListWidgetItem object.
///
/// ``` const char* text ```
QListWidgetItem* q_listwidgetitem_new2(const char* text) {
    return QListWidgetItem_new2(qstring(text));
}

/// q_listwidgetitem_new3 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text ```
QListWidgetItem* q_listwidgetitem_new3(void* icon, const char* text) {
    return QListWidgetItem_new3((QIcon*)icon, qstring(text));
}

/// q_listwidgetitem_new4 constructs a new QListWidgetItem object.
///
/// ``` QListWidgetItem* other ```
QListWidgetItem* q_listwidgetitem_new4(void* other) {
    return QListWidgetItem_new4((QListWidgetItem*)other);
}

/// q_listwidgetitem_new5 constructs a new QListWidgetItem object.
///
/// ``` QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new5(void* listview) {
    return QListWidgetItem_new5((QListWidget*)listview);
}

/// q_listwidgetitem_new6 constructs a new QListWidgetItem object.
///
/// ``` QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new6(void* listview, int typeVal) {
    return QListWidgetItem_new6((QListWidget*)listview, typeVal);
}

/// q_listwidgetitem_new7 constructs a new QListWidgetItem object.
///
/// ``` const char* text, QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new7(const char* text, void* listview) {
    return QListWidgetItem_new7(qstring(text), (QListWidget*)listview);
}

/// q_listwidgetitem_new8 constructs a new QListWidgetItem object.
///
/// ``` const char* text, QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new8(const char* text, void* listview, int typeVal) {
    return QListWidgetItem_new8(qstring(text), (QListWidget*)listview, typeVal);
}

/// q_listwidgetitem_new9 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text, QListWidget* listview ```
QListWidgetItem* q_listwidgetitem_new9(void* icon, const char* text, void* listview) {
    return QListWidgetItem_new9((QIcon*)icon, qstring(text), (QListWidget*)listview);
}

/// q_listwidgetitem_new10 constructs a new QListWidgetItem object.
///
/// ``` QIcon* icon, const char* text, QListWidget* listview, int typeVal ```
QListWidgetItem* q_listwidgetitem_new10(void* icon, const char* text, void* listview, int typeVal) {
    return QListWidgetItem_new10((QIcon*)icon, qstring(text), (QListWidget*)listview, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
///
/// ``` QListWidgetItem* self ```
QListWidgetItem* q_listwidgetitem_clone(void* self) {
    return QListWidgetItem_Clone((QListWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, QListWidgetItem* (*slot)() ```
void q_listwidgetitem_on_clone(void* self, QListWidgetItem* (*slot)()) {
    QListWidgetItem_OnClone((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self ```
QListWidgetItem* q_listwidgetitem_qbase_clone(void* self) {
    return QListWidgetItem_QBaseClone((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#listWidget)
///
/// ``` QListWidgetItem* self ```
QListWidget* q_listwidgetitem_list_widget(void* self) {
    return QListWidgetItem_ListWidget((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSelected)
///
/// ``` QListWidgetItem* self, bool selectVal ```
void q_listwidgetitem_set_selected(void* self, bool selectVal) {
    QListWidgetItem_SetSelected((QListWidgetItem*)self, selectVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isSelected)
///
/// ``` QListWidgetItem* self ```
bool q_listwidgetitem_is_selected(void* self) {
    return QListWidgetItem_IsSelected((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setHidden)
///
/// ``` QListWidgetItem* self, bool hide ```
void q_listwidgetitem_set_hidden(void* self, bool hide) {
    QListWidgetItem_SetHidden((QListWidgetItem*)self, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#isHidden)
///
/// ``` QListWidgetItem* self ```
bool q_listwidgetitem_is_hidden(void* self) {
    return QListWidgetItem_IsHidden((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#flags)
///
/// ``` QListWidgetItem* self ```
int64_t q_listwidgetitem_flags(void* self) {
    return QListWidgetItem_Flags((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFlags)
///
/// ``` QListWidgetItem* self, int flags ```
void q_listwidgetitem_set_flags(void* self, int64_t flags) {
    QListWidgetItem_SetFlags((QListWidgetItem*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#text)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_text(void* self) {
    libqt_string _str = QListWidgetItem_Text((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setText)
///
/// ``` QListWidgetItem* self, const char* text ```
void q_listwidgetitem_set_text(void* self, const char* text) {
    QListWidgetItem_SetText((QListWidgetItem*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#icon)
///
/// ``` QListWidgetItem* self ```
QIcon* q_listwidgetitem_icon(void* self) {
    return QListWidgetItem_Icon((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setIcon)
///
/// ``` QListWidgetItem* self, QIcon* icon ```
void q_listwidgetitem_set_icon(void* self, void* icon) {
    QListWidgetItem_SetIcon((QListWidgetItem*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#statusTip)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_status_tip(void* self) {
    libqt_string _str = QListWidgetItem_StatusTip((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setStatusTip)
///
/// ``` QListWidgetItem* self, const char* statusTip ```
void q_listwidgetitem_set_status_tip(void* self, const char* statusTip) {
    QListWidgetItem_SetStatusTip((QListWidgetItem*)self, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#toolTip)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_tool_tip(void* self) {
    libqt_string _str = QListWidgetItem_ToolTip((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setToolTip)
///
/// ``` QListWidgetItem* self, const char* toolTip ```
void q_listwidgetitem_set_tool_tip(void* self, const char* toolTip) {
    QListWidgetItem_SetToolTip((QListWidgetItem*)self, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#whatsThis)
///
/// ``` QListWidgetItem* self ```
const char* q_listwidgetitem_whats_this(void* self) {
    libqt_string _str = QListWidgetItem_WhatsThis((QListWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setWhatsThis)
///
/// ``` QListWidgetItem* self, const char* whatsThis ```
void q_listwidgetitem_set_whats_this(void* self, const char* whatsThis) {
    QListWidgetItem_SetWhatsThis((QListWidgetItem*)self, qstring(whatsThis));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#font)
///
/// ``` QListWidgetItem* self ```
QFont* q_listwidgetitem_font(void* self) {
    return QListWidgetItem_Font((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFont)
///
/// ``` QListWidgetItem* self, QFont* font ```
void q_listwidgetitem_set_font(void* self, void* font) {
    QListWidgetItem_SetFont((QListWidgetItem*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#textAlignment)
///
/// ``` QListWidgetItem* self ```
int32_t q_listwidgetitem_text_alignment(void* self) {
    return QListWidgetItem_TextAlignment((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, int alignment ```
void q_listwidgetitem_set_text_alignment(void* self, int alignment) {
    QListWidgetItem_SetTextAlignment((QListWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, enum Qt__AlignmentFlag alignment ```
void q_listwidgetitem_set_text_alignment_with_alignment(void* self, int64_t alignment) {
    QListWidgetItem_SetTextAlignmentWithAlignment((QListWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
///
/// ``` QListWidgetItem* self, int alignment ```
void q_listwidgetitem_set_text_alignment2(void* self, int64_t alignment) {
    QListWidgetItem_SetTextAlignment2((QListWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#background)
///
/// ``` QListWidgetItem* self ```
QBrush* q_listwidgetitem_background(void* self) {
    return QListWidgetItem_Background((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setBackground)
///
/// ``` QListWidgetItem* self, QBrush* brush ```
void q_listwidgetitem_set_background(void* self, void* brush) {
    QListWidgetItem_SetBackground((QListWidgetItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#foreground)
///
/// ``` QListWidgetItem* self ```
QBrush* q_listwidgetitem_foreground(void* self) {
    return QListWidgetItem_Foreground((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setForeground)
///
/// ``` QListWidgetItem* self, QBrush* brush ```
void q_listwidgetitem_set_foreground(void* self, void* brush) {
    QListWidgetItem_SetForeground((QListWidgetItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#checkState)
///
/// ``` QListWidgetItem* self ```
int64_t q_listwidgetitem_check_state(void* self) {
    return QListWidgetItem_CheckState((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setCheckState)
///
/// ``` QListWidgetItem* self, enum Qt__CheckState state ```
void q_listwidgetitem_set_check_state(void* self, int64_t state) {
    QListWidgetItem_SetCheckState((QListWidgetItem*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#sizeHint)
///
/// ``` QListWidgetItem* self ```
QSize* q_listwidgetitem_size_hint(void* self) {
    return QListWidgetItem_SizeHint((QListWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSizeHint)
///
/// ``` QListWidgetItem* self, QSize* size ```
void q_listwidgetitem_set_size_hint(void* self, void* size) {
    QListWidgetItem_SetSizeHint((QListWidgetItem*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
///
/// ``` QListWidgetItem* self, int role ```
QVariant* q_listwidgetitem_data(void* self, int role) {
    return QListWidgetItem_Data((QListWidgetItem*)self, role);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, QVariant* (*slot)(QListWidgetItem*, int) ```
void q_listwidgetitem_on_data(void* self, QVariant* (*slot)(void*, int)) {
    QListWidgetItem_OnData((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self, int role ```
QVariant* q_listwidgetitem_qbase_data(void* self, int role) {
    return QListWidgetItem_QBaseData((QListWidgetItem*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
///
/// ``` QListWidgetItem* self, int role, QVariant* value ```
void q_listwidgetitem_set_data(void* self, int role, void* value) {
    QListWidgetItem_SetData((QListWidgetItem*)self, role, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, int, QVariant*) ```
void q_listwidgetitem_on_set_data(void* self, void (*slot)(void*, int, void*)) {
    QListWidgetItem_OnSetData((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self, int role, QVariant* value ```
void q_listwidgetitem_qbase_set_data(void* self, int role, void* value) {
    QListWidgetItem_QBaseSetData((QListWidgetItem*)self, role, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator<)
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
bool q_listwidgetitem_operator_lesser(void* self, void* other) {
    return QListWidgetItem_OperatorLesser((QListWidgetItem*)self, (QListWidgetItem*)other);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, bool (*slot)(QListWidgetItem*, QListWidgetItem*) ```
void q_listwidgetitem_on_operator_lesser(void* self, bool (*slot)(void*, void*)) {
    QListWidgetItem_OnOperatorLesser((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
bool q_listwidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QListWidgetItem_QBaseOperatorLesser((QListWidgetItem*)self, (QListWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
///
/// ``` QListWidgetItem* self, QDataStream* in ```
void q_listwidgetitem_read(void* self, void* in) {
    QListWidgetItem_Read((QListWidgetItem*)self, (QDataStream*)in);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, QDataStream*) ```
void q_listwidgetitem_on_read(void* self, void (*slot)(void*, void*)) {
    QListWidgetItem_OnRead((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self, QDataStream* in ```
void q_listwidgetitem_qbase_read(void* self, void* in) {
    QListWidgetItem_QBaseRead((QListWidgetItem*)self, (QDataStream*)in);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
///
/// ``` QListWidgetItem* self, QDataStream* out ```
void q_listwidgetitem_write(void* self, void* out) {
    QListWidgetItem_Write((QListWidgetItem*)self, (QDataStream*)out);
}

/// Allows for overriding the related default method
///
/// ``` QListWidgetItem* self, void (*slot)(QListWidgetItem*, QDataStream*) ```
void q_listwidgetitem_on_write(void* self, void (*slot)(void*, void*)) {
    QListWidgetItem_OnWrite((QListWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidgetItem* self, QDataStream* out ```
void q_listwidgetitem_qbase_write(void* self, void* out) {
    QListWidgetItem_QBaseWrite((QListWidgetItem*)self, (QDataStream*)out);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator=)
///
/// ``` QListWidgetItem* self, QListWidgetItem* other ```
void q_listwidgetitem_operator_assign(void* self, void* other) {
    QListWidgetItem_OperatorAssign((QListWidgetItem*)self, (QListWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidgetitem.html#type)
///
/// ``` QListWidgetItem* self ```
int32_t q_listwidgetitem_type(void* self) {
    return QListWidgetItem_Type((QListWidgetItem*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QListWidgetItem* self ```
void q_listwidgetitem_delete(void* self) {
    QListWidgetItem_Delete((QListWidgetItem*)(self));
}

/// https://doc.qt.io/qt-6/qlistwidget.html

/// q_listwidget_new constructs a new QListWidget object.
///
/// ``` QWidget* parent ```
QListWidget* q_listwidget_new(void* parent) {
    return QListWidget_new((QWidget*)parent);
}

/// q_listwidget_new2 constructs a new QListWidget object.
///
///
QListWidget* q_listwidget_new2() {
    return QListWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QListWidget* self ```
QMetaObject* q_listwidget_meta_object(void* self) {
    return QListWidget_MetaObject((QListWidget*)self);
}

/// ``` QListWidget* self, const char* param1 ```
void* q_listwidget_metacast(void* self, const char* param1) {
    return QListWidget_Metacast((QListWidget*)self, param1);
}

/// ``` QListWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListWidget_Metacall((QListWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, enum QMetaObject__Call, int, void*) ```
void q_listwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QListWidget_OnMetacall((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QListWidget_QBaseMetacall((QListWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_listwidget_tr(const char* s) {
    libqt_string _str = QListWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
///
/// ``` QListWidget* self, QItemSelectionModel* selectionModel ```
void q_listwidget_set_selection_model(void* self, void* selectionModel) {
    QListWidget_SetSelectionModel((QListWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QItemSelectionModel*) ```
void q_listwidget_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnSetSelectionModel((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, QItemSelectionModel* selectionModel ```
void q_listwidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QListWidget_QBaseSetSelectionModel((QListWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#item)
///
/// ``` QListWidget* self, int row ```
QListWidgetItem* q_listwidget_item(void* self, int row) {
    return QListWidget_Item((QListWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#row)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
int32_t q_listwidget_row(void* self, void* item) {
    return QListWidget_Row((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// ``` QListWidget* self, int row, QListWidgetItem* item ```
void q_listwidget_insert_item(void* self, int row, void* item) {
    QListWidget_InsertItem((QListWidget*)self, row, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
///
/// ``` QListWidget* self, int row, const char* label ```
void q_listwidget_insert_item2(void* self, int row, const char* label) {
    QListWidget_InsertItem2((QListWidget*)self, row, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#insertItems)
///
/// ``` QListWidget* self, int row, const char* labels[] ```
void q_listwidget_insert_items(void* self, int row, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QListWidget_InsertItems((QListWidget*)self, row, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// ``` QListWidget* self, const char* label ```
void q_listwidget_add_item(void* self, const char* label) {
    QListWidget_AddItem((QListWidget*)self, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_add_item_with_item(void* self, void* item) {
    QListWidget_AddItemWithItem((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
///
/// ``` QListWidget* self, const char* labels[] ```
void q_listwidget_add_items(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QListWidget_AddItems((QListWidget*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
///
/// ``` QListWidget* self, int row ```
QListWidgetItem* q_listwidget_take_item(void* self, int row) {
    return QListWidget_TakeItem((QListWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#count)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_count(void* self) {
    return QListWidget_Count((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
///
/// ``` QListWidget* self ```
QListWidgetItem* q_listwidget_current_item(void* self) {
    return QListWidget_CurrentItem((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_set_current_item(void* self, void* item) {
    QListWidget_SetCurrentItem((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
///
/// ``` QListWidget* self, QListWidgetItem* item, int command ```
void q_listwidget_set_current_item2(void* self, void* item, int64_t command) {
    QListWidget_SetCurrentItem2((QListWidget*)self, (QListWidgetItem*)item, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_current_row(void* self) {
    return QListWidget_CurrentRow((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// ``` QListWidget* self, int row ```
void q_listwidget_set_current_row(void* self, int row) {
    QListWidget_SetCurrentRow((QListWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
///
/// ``` QListWidget* self, int row, int command ```
void q_listwidget_set_current_row2(void* self, int row, int64_t command) {
    QListWidget_SetCurrentRow2((QListWidget*)self, row, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// ``` QListWidget* self, QPoint* p ```
QListWidgetItem* q_listwidget_item_at(void* self, void* p) {
    return QListWidget_ItemAt((QListWidget*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
///
/// ``` QListWidget* self, int x, int y ```
QListWidgetItem* q_listwidget_item_at2(void* self, int x, int y) {
    return QListWidget_ItemAt2((QListWidget*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QRect* q_listwidget_visual_item_rect(void* self, void* item) {
    return QListWidget_VisualItemRect((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// ``` QListWidget* self ```
void q_listwidget_sort_items(void* self) {
    QListWidget_SortItems((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_sorting_enabled(void* self, bool enable) {
    QListWidget_SetSortingEnabled((QListWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_sorting_enabled(void* self) {
    return QListWidget_IsSortingEnabled((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_edit_item(void* self, void* item) {
    QListWidget_EditItem((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_open_persistent_editor(void* self, void* item) {
    QListWidget_OpenPersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_close_persistent_editor(void* self, void* item) {
    QListWidget_ClosePersistentEditor((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
bool q_listwidget_is_persistent_editor_open(void* self, void* item) {
    return QListWidget_IsPersistentEditorOpen((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QWidget* q_listwidget_item_widget(void* self, void* item) {
    return QListWidget_ItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item, QWidget* widget ```
void q_listwidget_set_item_widget(void* self, void* item, void* widget) {
    QListWidget_SetItemWidget((QListWidget*)self, (QListWidgetItem*)item, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_remove_item_widget(void* self, void* item) {
    QListWidget_RemoveItemWidget((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
///
/// ``` QListWidget* self ```
libqt_list /* of QListWidgetItem* */ q_listwidget_selected_items(void* self) {
    libqt_list _arr = QListWidget_SelectedItems((QListWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
///
/// ``` QListWidget* self, const char* text, int flags ```
libqt_list /* of QListWidgetItem* */ q_listwidget_find_items(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QListWidget_FindItems((QListWidget*)self, qstring(text), flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#items)
///
/// ``` QListWidget* self, QMimeData* data ```
libqt_list /* of QListWidgetItem* */ q_listwidget_items(void* self, void* data) {
    libqt_list _arr = QListWidget_Items((QListWidget*)self, (QMimeData*)data);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
QModelIndex* q_listwidget_index_from_item(void* self, void* item) {
    return QListWidget_IndexFromItem((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
QListWidgetItem* q_listwidget_item_from_index(void* self, void* index) {
    return QListWidget_ItemFromIndex((QListWidget*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
///
/// ``` QListWidget* self, QDropEvent* event ```
void q_listwidget_drop_event(void* self, void* event) {
    QListWidget_DropEvent((QListWidget*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDropEvent*) ```
void q_listwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDropEvent((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, QDropEvent* event ```
void q_listwidget_qbase_drop_event(void* self, void* event) {
    QListWidget_QBaseDropEvent((QListWidget*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_scroll_to_item(void* self, void* item) {
    QListWidget_ScrollToItem((QListWidget*)self, (QListWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#clear)
///
/// ``` QListWidget* self ```
void q_listwidget_clear(void* self) {
    QListWidget_Clear((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_pressed(void* self, void* item) {
    QListWidget_ItemPressed((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_pressed(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemPressed((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_clicked(void* self, void* item) {
    QListWidget_ItemClicked((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_clicked(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemClicked((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_double_clicked(void* self, void* item) {
    QListWidget_ItemDoubleClicked((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_double_clicked(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemDoubleClicked((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_activated(void* self, void* item) {
    QListWidget_ItemActivated((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_activated(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemActivated((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_entered(void* self, void* item) {
    QListWidget_ItemEntered((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_entered(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemEntered((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
///
/// ``` QListWidget* self, QListWidgetItem* item ```
void q_listwidget_item_changed(void* self, void* item) {
    QListWidget_ItemChanged((QListWidget*)self, (QListWidgetItem*)item);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*) ```
void q_listwidget_on_item_changed(void* self, void (*slot)(void*, void*)) {
    QListWidget_Connect_ItemChanged((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
///
/// ``` QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous ```
void q_listwidget_current_item_changed(void* self, void* current, void* previous) {
    QListWidget_CurrentItemChanged((QListWidget*)self, (QListWidgetItem*)current, (QListWidgetItem*)previous);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, QListWidgetItem*, QListWidgetItem*) ```
void q_listwidget_on_current_item_changed(void* self, void (*slot)(void*, void*, void*)) {
    QListWidget_Connect_CurrentItemChanged((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
///
/// ``` QListWidget* self, const char* currentText ```
void q_listwidget_current_text_changed(void* self, const char* currentText) {
    QListWidget_CurrentTextChanged((QListWidget*)self, qstring(currentText));
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_current_text_changed(void* self, void (*slot)(void*, const char*)) {
    QListWidget_Connect_CurrentTextChanged((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
///
/// ``` QListWidget* self, int currentRow ```
void q_listwidget_current_row_changed(void* self, int currentRow) {
    QListWidget_CurrentRowChanged((QListWidget*)self, currentRow);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_current_row_changed(void* self, void (*slot)(void*, int)) {
    QListWidget_Connect_CurrentRowChanged((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
///
/// ``` QListWidget* self ```
void q_listwidget_item_selection_changed(void* self) {
    QListWidget_ItemSelectionChanged((QListWidget*)self);
}

/// ``` QListWidget* self, void (*slot)(QListWidget*) ```
void q_listwidget_on_item_selection_changed(void* self, void (*slot)(void*)) {
    QListWidget_Connect_ItemSelectionChanged((QListWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#event)
///
/// ``` QListWidget* self, QEvent* e ```
bool q_listwidget_event(void* self, void* e) {
    return QListWidget_Event((QListWidget*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QListWidget_OnEvent((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, QEvent* e ```
bool q_listwidget_qbase_event(void* self, void* e) {
    return QListWidget_QBaseEvent((QListWidget*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
///
/// ``` QListWidget* self ```
const char** q_listwidget_mime_types(void* self) {
    libqt_list _arr = QListWidget_MimeTypes((QListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, const char** (*slot)() ```
void q_listwidget_on_mime_types(void* self, const char** (*slot)()) {
    QListWidget_OnMimeTypes((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self ```
const char** q_listwidget_qbase_mime_types(void* self) {
    libqt_list _arr = QListWidget_QBaseMimeTypes((QListWidget*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
///
/// ``` QListWidget* self, QListWidgetItem* items[] ```
QMimeData* q_listwidget_mime_data(void* self, void* items[]) {
    QListWidgetItem** items_arr = (QListWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QListWidgetItem*)items},
    };
    return QListWidget_MimeData((QListWidget*)self, items_list);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, QMimeData* (*slot)(QListWidget*, QListWidgetItem*[]) ```
void q_listwidget_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QListWidget_OnMimeData((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, QListWidgetItem* items[] ```
QMimeData* q_listwidget_qbase_mime_data(void* self, void* items[]) {
    QListWidgetItem** items_arr = (QListWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QListWidgetItem*)items},
    };
    return QListWidget_QBaseMimeData((QListWidget*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
///
/// ``` QListWidget* self, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_listwidget_drop_mime_data(void* self, int index, void* data, int64_t action) {
    return QListWidget_DropMimeData((QListWidget*)self, index, (QMimeData*)data, action);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, int, QMimeData*, enum Qt__DropAction) ```
void q_listwidget_on_drop_mime_data(void* self, bool (*slot)(void*, int, void*, int64_t)) {
    QListWidget_OnDropMimeData((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_listwidget_qbase_drop_mime_data(void* self, int index, void* data, int64_t action) {
    return QListWidget_QBaseDropMimeData((QListWidget*)self, index, (QMimeData*)data, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_supported_drop_actions(void* self) {
    return QListWidget_SupportedDropActions((QListWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QListWidget_OnSupportedDropActions((QListWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_supported_drop_actions(void* self) {
    return QListWidget_QBaseSupportedDropActions((QListWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_listwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QListWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_listwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QListWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
///
/// ``` QListWidget* self, enum Qt__SortOrder order ```
void q_listwidget_sort_items1(void* self, int64_t order) {
    QListWidget_SortItems1((QListWidget*)self, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
///
/// ``` QListWidget* self, QListWidgetItem* item, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_scroll_to_item2(void* self, void* item, int64_t hint) {
    QListWidget_ScrollToItem2((QListWidget*)self, (QListWidgetItem*)item, hint);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// ``` QListWidget* self, enum QListView__Movement movement ```
void q_listwidget_set_movement(void* self, int64_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// ``` QListWidget* self, enum QListView__Flow flow ```
void q_listwidget_set_flow(void* self, int64_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// ``` QListWidget* self, enum QListView__ResizeMode mode ```
void q_listwidget_set_resize_mode(void* self, int64_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// ``` QListWidget* self, enum QListView__LayoutMode mode ```
void q_listwidget_set_layout_mode(void* self, int64_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// ``` QListWidget* self, int space ```
void q_listwidget_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// ``` QListWidget* self, int batchSize ```
void q_listwidget_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// ``` QListWidget* self, enum QListView__ViewMode mode ```
void q_listwidget_set_view_mode(void* self, int64_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// ``` QListWidget* self, int row ```
bool q_listwidget_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// ``` QListWidget* self, int row, bool hide ```
void q_listwidget_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// ``` QListWidget* self, int column ```
void q_listwidget_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// ``` QListWidget* self ```
bool q_listwidget_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// ``` QListWidget* self, bool on ```
void q_listwidget_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// ``` QListWidget* self ```
bool q_listwidget_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// ``` QListWidget* self, bool show ```
void q_listwidget_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// ``` QListWidget* self, int alignment ```
void q_listwidget_set_item_alignment(void* self, int64_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListWidget* self, QModelIndex* indexes[] ```
void q_listwidget_indexes_moved(void* self, void* indexes[]) {
    QModelIndex** indexes_arr = (QModelIndex**)indexes;
    size_t indexes_len = 0;
    while (indexes_arr[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(QModelIndex*)indexes},
    };
    QListView_IndexesMoved((QListView*)self, indexes_list);
}

/// Inherited from QListView
///
/// ``` QListWidget* self, void (*slot)(QListView*, QModelIndex*[]) ```
void q_listwidget_on_indexes_moved(void* self, void (*slot)(void*, void*)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// ``` QListWidget* self, QAbstractItemModel* model ```
void q_listwidget_set_model(void* self, void* model) {
    QAbstractItemView_SetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QAbstractItemView
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QAbstractItemModel*) ```
void q_listwidget_on_set_model(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetModel((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// Base class method implementation
///
/// ``` QListWidget* self, QAbstractItemModel* model ```
void q_listwidget_qbase_set_model(void* self, void* model) {
    QAbstractItemView_QBaseSetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QListWidget* self ```
QAbstractItemModel* q_listwidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QListWidget* self ```
QItemSelectionModel* q_listwidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QListWidget* self, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListWidget* self ```
QAbstractItemDelegate* q_listwidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__SelectionMode mode ```
void q_listwidget_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QListWidget* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_listwidget_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QListWidget* self ```
QModelIndex* q_listwidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QListWidget* self ```
QModelIndex* q_listwidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QListWidget* self, int triggers ```
void q_listwidget_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_listwidget_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QListWidget* self ```
void q_listwidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_listwidget_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QListWidget* self ```
void q_listwidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QListWidget* self, int margin ```
void q_listwidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QListWidget* self ```
bool q_listwidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QListWidget* self ```
bool q_listwidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QListWidget* self, bool overwrite ```
void q_listwidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QListWidget* self ```
bool q_listwidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QListWidget* self, enum QAbstractItemView__DragDropMode behavior ```
void q_listwidget_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QListWidget* self, enum Qt__DropAction dropAction ```
void q_listwidget_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QListWidget* self ```
bool q_listwidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QListWidget* self, enum Qt__TextElideMode mode ```
void q_listwidget_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
QSize* q_listwidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QListWidget* self, QModelIndex* index, QWidget* widget ```
void q_listwidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QListWidget* self, QModelIndex* index ```
QWidget* q_listwidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QListWidget* self, int row, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QListWidget* self, int row ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QListWidget* self, int column, QAbstractItemDelegate* delegate ```
void q_listwidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QListWidget* self, int column ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QListWidget* self ```
void q_listwidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QListWidget* self ```
void q_listwidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listwidget_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListWidget* self ```
void q_listwidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*) ```
void q_listwidget_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListWidget* self, QSize* size ```
void q_listwidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QListWidget* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_listwidget_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QListWidget* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_listwidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QListWidget* self ```
QScrollBar* q_listwidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QListWidget* self, QScrollBar* scrollbar ```
void q_listwidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QListWidget* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_listwidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QListWidget* self ```
QScrollBar* q_listwidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QListWidget* self, QScrollBar* scrollbar ```
void q_listwidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QListWidget* self, QWidget* widget ```
void q_listwidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QListWidget* self, QWidget* widget, int alignment ```
void q_listwidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QListWidget* self, int alignment ```
libqt_list /* of QWidget* */ q_listwidget_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QListWidget* self, QWidget* widget ```
void q_listwidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QListWidget* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_listwidget_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QListWidget* self, int frameStyle ```
void q_listwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QListWidget* self, enum QFrame__Shape frameShape ```
void q_listwidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QListWidget* self, enum QFrame__Shadow frameShadow ```
void q_listwidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QListWidget* self, int lineWidth ```
void q_listwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QListWidget* self, int midLineWidth ```
void q_listwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QListWidget* self, QRect* frameRect ```
void q_listwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QListWidget* self ```
void q_listwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QListWidget* self ```
uintptr_t q_listwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QListWidget* self ```
QStyle* q_listwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QListWidget* self, QStyle* style ```
void q_listwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QListWidget* self, enum Qt__WindowModality windowModality ```
void q_listwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QListWidget* self, QWidget* param1 ```
bool q_listwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QListWidget* self, bool enabled ```
void q_listwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QListWidget* self, bool disabled ```
void q_listwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QListWidget* self, bool windowModified ```
void q_listwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListWidget* self, QSize* minimumSize ```
void q_listwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListWidget* self, int minw, int minh ```
void q_listwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListWidget* self, QSize* maximumSize ```
void q_listwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListWidget* self, int maxw, int maxh ```
void q_listwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QListWidget* self, int minw ```
void q_listwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QListWidget* self, int minh ```
void q_listwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QListWidget* self, int maxw ```
void q_listwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QListWidget* self, int maxh ```
void q_listwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListWidget* self, QSize* sizeIncrement ```
void q_listwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QListWidget* self ```
QSize* q_listwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListWidget* self, QSize* baseSize ```
void q_listwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListWidget* self, int basew, int baseh ```
void q_listwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListWidget* self, QSize* fixedSize ```
void q_listwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QListWidget* self, int w ```
void q_listwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QListWidget* self, int h ```
void q_listwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListWidget* self, QPointF* param1 ```
QPointF* q_listwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListWidget* self, QPoint* param1 ```
QPoint* q_listwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QListWidget* self ```
QPalette* q_listwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QListWidget* self, QPalette* palette ```
void q_listwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QListWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_listwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QListWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_listwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QListWidget* self ```
QFont* q_listwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QListWidget* self, QFont* font ```
void q_listwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QListWidget* self ```
QFontMetrics* q_listwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QListWidget* self ```
QFontInfo* q_listwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QListWidget* self ```
QCursor* q_listwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QListWidget* self, QCursor* cursor ```
void q_listwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QListWidget* self ```
bool q_listwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListWidget* self, QBitmap* mask ```
void q_listwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListWidget* self, QRegion* mask ```
void q_listwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target ```
void q_listwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListWidget* self ```
QPixmap* q_listwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QListWidget* self ```
QGraphicsEffect* q_listwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QListWidget* self, QGraphicsEffect* effect ```
void q_listwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal ```
void q_listwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal ```
void q_listwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QListWidget* self, const char* windowTitle ```
void q_listwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QListWidget* self, const char* styleSheet ```
void q_listwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QListWidget* self ```
const char* q_listwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QListWidget* self, QIcon* icon ```
void q_listwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QListWidget* self ```
QIcon* q_listwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QListWidget* self, const char* windowIconText ```
void q_listwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QListWidget* self, const char* windowRole ```
void q_listwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QListWidget* self, const char* filePath ```
void q_listwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QListWidget* self ```
const char* q_listwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QListWidget* self, double level ```
void q_listwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QListWidget* self ```
double q_listwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QListWidget* self, const char* toolTip ```
void q_listwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QListWidget* self ```
const char* q_listwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QListWidget* self, int msec ```
void q_listwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QListWidget* self, const char* statusTip ```
void q_listwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QListWidget* self ```
const char* q_listwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QListWidget* self, const char* whatsThis ```
void q_listwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QListWidget* self ```
const char* q_listwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QListWidget* self ```
const char* q_listwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QListWidget* self, const char* name ```
void q_listwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QListWidget* self ```
const char* q_listwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QListWidget* self, const char* description ```
void q_listwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QListWidget* self, enum Qt__LayoutDirection direction ```
void q_listwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QListWidget* self, QLocale* locale ```
void q_listwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QListWidget* self ```
QLocale* q_listwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QListWidget* self ```
void q_listwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListWidget* self ```
void q_listwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QListWidget* self ```
void q_listwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QListWidget* self ```
void q_listwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListWidget* self, enum Qt__FocusReason reason ```
void q_listwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QListWidget* self, enum Qt__FocusPolicy policy ```
void q_listwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QListWidget* self ```
bool q_listwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_listwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QListWidget* self, QWidget* focusProxy ```
void q_listwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QListWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_listwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListWidget* self ```
void q_listwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListWidget* self, QCursor* param1 ```
void q_listwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QListWidget* self ```
void q_listwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QListWidget* self ```
void q_listwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QListWidget* self ```
void q_listwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListWidget* self, QKeySequence* key ```
int32_t q_listwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_listwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_listwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QListWidget* self ```
bool q_listwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QListWidget* self, bool enable ```
void q_listwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QListWidget* self ```
QGraphicsProxyWidget* q_listwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self ```
void q_listwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, QRect* param1 ```
void q_listwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListWidget* self, QRegion* param1 ```
void q_listwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, QRect* param1 ```
void q_listwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListWidget* self, QRegion* param1 ```
void q_listwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QListWidget* self, bool hidden ```
void q_listwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QListWidget* self ```
void q_listwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QListWidget* self ```
void q_listwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QListWidget* self ```
void q_listwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QListWidget* self ```
void q_listwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QListWidget* self ```
void q_listwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QListWidget* self ```
void q_listwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QListWidget* self ```
bool q_listwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QListWidget* self ```
void q_listwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QListWidget* self ```
void q_listwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QListWidget* self, QWidget* param1 ```
void q_listwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListWidget* self, int x, int y ```
void q_listwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListWidget* self, QPoint* param1 ```
void q_listwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListWidget* self, int w, int h ```
void q_listwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListWidget* self, QSize* param1 ```
void q_listwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListWidget* self, int x, int y, int w, int h ```
void q_listwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListWidget* self, QRect* geometry ```
void q_listwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QListWidget* self ```
char* q_listwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QListWidget* self, const char* geometry ```
bool q_listwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QListWidget* self ```
void q_listwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QListWidget* self, QWidget* param1 ```
bool q_listwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QListWidget* self, int state ```
void q_listwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QListWidget* self, int state ```
void q_listwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QListWidget* self ```
QSizePolicy* q_listwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListWidget* self, QSizePolicy* sizePolicy ```
void q_listwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_listwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QListWidget* self ```
QRegion* q_listwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListWidget* self, QMargins* margins ```
void q_listwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QListWidget* self ```
QRect* q_listwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QListWidget* self ```
QLayout* q_listwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QListWidget* self, QLayout* layout ```
void q_listwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QListWidget* self ```
void q_listwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListWidget* self, QWidget* parent ```
void q_listwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListWidget* self, QWidget* parent, int f ```
void q_listwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListWidget* self, int dx, int dy, QRect* param3 ```
void q_listwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QListWidget* self ```
bool q_listwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QListWidget* self, bool on ```
void q_listwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QAction* action ```
void q_listwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QListWidget* self, QAction* actions[] ```
void q_listwidget_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QListWidget* self, QAction* before, QAction* actions[] ```
void q_listwidget_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QListWidget* self, QAction* before, QAction* action ```
void q_listwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QListWidget* self, QAction* action ```
void q_listwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QListWidget* self ```
libqt_list /* of QAction* */ q_listwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, const char* text ```
QAction* q_listwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QIcon* icon, const char* text ```
QAction* q_listwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_listwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_listwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QListWidget* self ```
QWidget* q_listwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QListWidget* self, int typeVal ```
void q_listwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListWidget* self, enum Qt__WindowType param1 ```
void q_listwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QListWidget* self, int typeVal ```
void q_listwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_listwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListWidget* self, int x, int y ```
QWidget* q_listwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListWidget* self, QPoint* p ```
QWidget* q_listwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1 ```
void q_listwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_listwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QListWidget* self ```
void q_listwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QListWidget* self, QWidget* child ```
bool q_listwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QListWidget* self ```
bool q_listwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QListWidget* self, bool enabled ```
void q_listwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QListWidget* self ```
QBackingStore* q_listwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QListWidget* self ```
QWindow* q_listwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QListWidget* self ```
QScreen* q_listwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QListWidget* self, QScreen* screen ```
void q_listwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_listwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListWidget* self, const char* title ```
void q_listwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QListWidget* self, void (*slot)(QWidget*, const char*) ```
void q_listwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListWidget* self, QIcon* icon ```
void q_listwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QListWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_listwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListWidget* self, const char* iconText ```
void q_listwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QListWidget* self, void (*slot)(QWidget*, const char*) ```
void q_listwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListWidget* self, QPoint* pos ```
void q_listwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QListWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_listwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QListWidget* self ```
int64_t q_listwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QListWidget* self, int hints ```
void q_listwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_listwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_listwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListWidget* self, QRect* rectangle ```
QPixmap* q_listwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_listwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_listwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListWidget* self, int id, bool enable ```
void q_listwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListWidget* self, int id, bool enable ```
void q_listwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListWidget* self, enum Qt__WindowType param1, bool on ```
void q_listwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_listwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_listwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_listwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QListWidget* self ```
const char* q_listwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QListWidget* self, const char* name ```
void q_listwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QListWidget* self ```
bool q_listwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QListWidget* self ```
bool q_listwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QListWidget* self, bool b ```
bool q_listwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QListWidget* self ```
QThread* q_listwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QListWidget* self, QThread* thread ```
void q_listwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListWidget* self, int interval ```
int32_t q_listwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QListWidget* self, int id ```
void q_listwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QListWidget* self ```
libqt_list /* of QObject* */ q_listwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QListWidget* self, QObject* filterObj ```
void q_listwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QListWidget* self, QObject* obj ```
void q_listwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_listwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_listwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_listwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_listwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QListWidget* self ```
void q_listwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QListWidget* self ```
void q_listwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QListWidget* self, const char* name, QVariant* value ```
bool q_listwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QListWidget* self, const char* name ```
QVariant* q_listwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QListWidget* self ```
const char** q_listwidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListWidget* self ```
QBindingStorage* q_listwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListWidget* self ```
QBindingStorage* q_listwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self ```
void q_listwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QListWidget* self, void (*slot)(QObject*) ```
void q_listwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QListWidget* self ```
QObject* q_listwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QListWidget* self, const char* classname ```
bool q_listwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QListWidget* self ```
void q_listwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_listwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListWidget* self, QObject* param1 ```
void q_listwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QListWidget* self, void (*slot)(QObject*, QObject*) ```
void q_listwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QListWidget* self ```
bool q_listwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QListWidget* self ```
double q_listwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QListWidget* self ```
double q_listwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QListWidget* self ```
int32_t q_listwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_listwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_visual_rect(void* self, void* index) {
    return QListWidget_VisualRect((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_qbase_visual_rect(void* self, void* index) {
    return QListWidget_QBaseVisualRect((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRect* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QListWidget_OnVisualRect((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_scroll_to(void* self, void* index, int64_t hint) {
    QListWidget_ScrollTo((QListWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listwidget_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QListWidget_QBaseScrollTo((QListWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_listwidget_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QListWidget_OnScrollTo((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* p ```
QModelIndex* q_listwidget_index_at(void* self, void* p) {
    return QListWidget_IndexAt((QListWidget*)self, (QPoint*)p);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* p ```
QModelIndex* q_listwidget_qbase_index_at(void* self, void* p) {
    return QListWidget_QBaseIndexAt((QListWidget*)self, (QPoint*)p);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* (*slot)(QListWidget*, QPoint*) ```
void q_listwidget_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QListWidget_OnIndexAt((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_do_items_layout(void* self) {
    QListWidget_DoItemsLayout((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_do_items_layout(void* self) {
    QListWidget_QBaseDoItemsLayout((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_do_items_layout(void* self, void (*slot)()) {
    QListWidget_OnDoItemsLayout((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_reset(void* self) {
    QListWidget_Reset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_reset(void* self) {
    QListWidget_QBaseReset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_reset(void* self, void (*slot)()) {
    QListWidget_OnReset((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_set_root_index(void* self, void* index) {
    QListWidget_SetRootIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
void q_listwidget_qbase_set_root_index(void* self, void* index) {
    QListWidget_QBaseSetRootIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnSetRootIndex((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll_contents_by(void* self, int dx, int dy) {
    QListWidget_ScrollContentsBy((QListWidget*)self, dx, dy);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QListWidget_QBaseScrollContentsBy((QListWidget*)self, dx, dy);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QListWidget_OnScrollContentsBy((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_listwidget_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QListWidget_DataChanged((QListWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_listwidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QListWidget_QBaseDataChanged((QListWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, QModelIndex*, int*[]) ```
void q_listwidget_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QListWidget_OnDataChanged((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_rows_inserted(void* self, void* parent, int start, int end) {
    QListWidget_RowsInserted((QListWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QListWidget_QBaseRowsInserted((QListWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, int, int) ```
void q_listwidget_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QListWidget_OnRowsInserted((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListWidget_RowsAboutToBeRemoved((QListWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* parent, int start, int end ```
void q_listwidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListWidget_QBaseRowsAboutToBeRemoved((QListWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, int, int) ```
void q_listwidget_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QListWidget_OnRowsAboutToBeRemoved((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_mouse_move_event(void* self, void* e) {
    QListWidget_MouseMoveEvent((QListWidget*)self, (QMouseEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_qbase_mouse_move_event(void* self, void* e) {
    QListWidget_QBaseMouseMoveEvent((QListWidget*)self, (QMouseEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnMouseMoveEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_mouse_release_event(void* self, void* e) {
    QListWidget_MouseReleaseEvent((QListWidget*)self, (QMouseEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* e ```
void q_listwidget_qbase_mouse_release_event(void* self, void* e) {
    QListWidget_QBaseMouseReleaseEvent((QListWidget*)self, (QMouseEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnMouseReleaseEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWheelEvent* e ```
void q_listwidget_wheel_event(void* self, void* e) {
    QListWidget_WheelEvent((QListWidget*)self, (QWheelEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWheelEvent* e ```
void q_listwidget_qbase_wheel_event(void* self, void* e) {
    QListWidget_QBaseWheelEvent((QListWidget*)self, (QWheelEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWheelEvent*) ```
void q_listwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnWheelEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QTimerEvent* e ```
void q_listwidget_timer_event(void* self, void* e) {
    QListWidget_TimerEvent((QListWidget*)self, (QTimerEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QTimerEvent* e ```
void q_listwidget_qbase_timer_event(void* self, void* e) {
    QListWidget_QBaseTimerEvent((QListWidget*)self, (QTimerEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QTimerEvent*) ```
void q_listwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnTimerEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QResizeEvent* e ```
void q_listwidget_resize_event(void* self, void* e) {
    QListWidget_ResizeEvent((QListWidget*)self, (QResizeEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QResizeEvent* e ```
void q_listwidget_qbase_resize_event(void* self, void* e) {
    QListWidget_QBaseResizeEvent((QListWidget*)self, (QResizeEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QResizeEvent*) ```
void q_listwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnResizeEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragMoveEvent* e ```
void q_listwidget_drag_move_event(void* self, void* e) {
    QListWidget_DragMoveEvent((QListWidget*)self, (QDragMoveEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragMoveEvent* e ```
void q_listwidget_qbase_drag_move_event(void* self, void* e) {
    QListWidget_QBaseDragMoveEvent((QListWidget*)self, (QDragMoveEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragMoveEvent*) ```
void q_listwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDragMoveEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragLeaveEvent* e ```
void q_listwidget_drag_leave_event(void* self, void* e) {
    QListWidget_DragLeaveEvent((QListWidget*)self, (QDragLeaveEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragLeaveEvent* e ```
void q_listwidget_qbase_drag_leave_event(void* self, void* e) {
    QListWidget_QBaseDragLeaveEvent((QListWidget*)self, (QDragLeaveEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragLeaveEvent*) ```
void q_listwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDragLeaveEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int supportedActions ```
void q_listwidget_start_drag(void* self, int64_t supportedActions) {
    QListWidget_StartDrag((QListWidget*)self, supportedActions);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int supportedActions ```
void q_listwidget_qbase_start_drag(void* self, int64_t supportedActions) {
    QListWidget_QBaseStartDrag((QListWidget*)self, supportedActions);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QListWidget_OnStartDrag((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionViewItem* option ```
void q_listwidget_init_view_item_option(void* self, void* option) {
    QListWidget_InitViewItemOption((QListWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionViewItem* option ```
void q_listwidget_qbase_init_view_item_option(void* self, void* option) {
    QListWidget_QBaseInitViewItemOption((QListWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QStyleOptionViewItem*) ```
void q_listwidget_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnInitViewItemOption((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPaintEvent* e ```
void q_listwidget_paint_event(void* self, void* e) {
    QListWidget_PaintEvent((QListWidget*)self, (QPaintEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPaintEvent* e ```
void q_listwidget_qbase_paint_event(void* self, void* e) {
    QListWidget_QBasePaintEvent((QListWidget*)self, (QPaintEvent*)e);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPaintEvent*) ```
void q_listwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnPaintEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_horizontal_offset(void* self) {
    return QListWidget_HorizontalOffset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_horizontal_offset(void* self) {
    return QListWidget_QBaseHorizontalOffset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QListWidget_OnHorizontalOffset((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_vertical_offset(void* self) {
    return QListWidget_VerticalOffset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_vertical_offset(void* self) {
    return QListWidget_QBaseVerticalOffset((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_vertical_offset(void* self, int32_t (*slot)()) {
    QListWidget_OnVerticalOffset((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listwidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListWidget_MoveCursor((QListWidget*)self, cursorAction, modifiers);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listwidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QListWidget_QBaseMoveCursor((QListWidget*)self, cursorAction, modifiers);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* (*slot)(QListWidget*, enum QAbstractItemView__CursorAction, int) ```
void q_listwidget_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QListWidget_OnMoveCursor((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QRect* rect, int command ```
void q_listwidget_set_selection(void* self, void* rect, int64_t command) {
    QListWidget_SetSelection((QListWidget*)self, (QRect*)rect, command);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QRect* rect, int command ```
void q_listwidget_qbase_set_selection(void* self, void* rect, int64_t command) {
    QListWidget_QBaseSetSelection((QListWidget*)self, (QRect*)rect, command);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QRect*, int) ```
void q_listwidget_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QListWidget_OnSetSelection((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selection ```
QRegion* q_listwidget_visual_region_for_selection(void* self, void* selection) {
    return QListWidget_VisualRegionForSelection((QListWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selection ```
QRegion* q_listwidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QListWidget_QBaseVisualRegionForSelection((QListWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRegion* (*slot)(QListWidget*, QItemSelection*) ```
void q_listwidget_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QListWidget_OnVisualRegionForSelection((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
libqt_list /* of QModelIndex* */ q_listwidget_selected_indexes(void* self) {
    libqt_list _arr = QListWidget_SelectedIndexes((QListWidget*)self);
    return _arr;
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
libqt_list /* of QModelIndex* */ q_listwidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QListWidget_QBaseSelectedIndexes((QListWidget*)self);
    return _arr;
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_listwidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QListWidget_OnSelectedIndexes((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_geometries(void* self) {
    QListWidget_UpdateGeometries((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_geometries(void* self) {
    QListWidget_QBaseUpdateGeometries((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_geometries(void* self, void (*slot)()) {
    QListWidget_OnUpdateGeometries((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
bool q_listwidget_is_index_hidden(void* self, void* index) {
    return QListWidget_IsIndexHidden((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
bool q_listwidget_qbase_is_index_hidden(void* self, void* index) {
    return QListWidget_QBaseIsIndexHidden((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QListWidget_OnIsIndexHidden((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listwidget_selection_changed(void* self, void* selected, void* deselected) {
    QListWidget_SelectionChanged((QListWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listwidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QListWidget_QBaseSelectionChanged((QListWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QItemSelection*, QItemSelection*) ```
void q_listwidget_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QListWidget_OnSelectionChanged((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_listwidget_current_changed(void* self, void* current, void* previous) {
    QListWidget_CurrentChanged((QListWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_listwidget_qbase_current_changed(void* self, void* current, void* previous) {
    QListWidget_QBaseCurrentChanged((QListWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QModelIndex*, QModelIndex*) ```
void q_listwidget_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QListWidget_OnCurrentChanged((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_viewport_size_hint(void* self) {
    return QListWidget_ViewportSizeHint((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_viewport_size_hint(void* self) {
    return QListWidget_QBaseViewportSizeHint((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QListWidget_OnViewportSizeHint((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* search ```
void q_listwidget_keyboard_search(void* self, const char* search) {
    QListWidget_KeyboardSearch((QListWidget*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* search ```
void q_listwidget_qbase_keyboard_search(void* self, const char* search) {
    QListWidget_QBaseKeyboardSearch((QListWidget*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QListWidget_OnKeyboardSearch((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int row ```
int32_t q_listwidget_size_hint_for_row(void* self, int row) {
    return QListWidget_SizeHintForRow((QListWidget*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int row ```
int32_t q_listwidget_qbase_size_hint_for_row(void* self, int row) {
    return QListWidget_QBaseSizeHintForRow((QListWidget*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QListWidget_OnSizeHintForRow((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int column ```
int32_t q_listwidget_size_hint_for_column(void* self, int column) {
    return QListWidget_SizeHintForColumn((QListWidget*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int column ```
int32_t q_listwidget_qbase_size_hint_for_column(void* self, int column) {
    return QListWidget_QBaseSizeHintForColumn((QListWidget*)self, column);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QListWidget_OnSizeHintForColumn((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_item_delegate_for_index(void* self, void* index) {
    return QListWidget_ItemDelegateForIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_listwidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QListWidget_QBaseItemDelegateForIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QAbstractItemDelegate* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QListWidget_OnItemDelegateForIndex((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_listwidget_input_method_query(void* self, int64_t query) {
    return QListWidget_InputMethodQuery((QListWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_listwidget_qbase_input_method_query(void* self, int64_t query) {
    return QListWidget_QBaseInputMethodQuery((QListWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QVariant* (*slot)(QListWidget*, enum Qt__InputMethodQuery) ```
void q_listwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QListWidget_OnInputMethodQuery((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_select_all(void* self) {
    QListWidget_SelectAll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_select_all(void* self) {
    QListWidget_QBaseSelectAll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_select_all(void* self, void (*slot)()) {
    QListWidget_OnSelectAll((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_editor_data(void* self) {
    QListWidget_UpdateEditorData((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_editor_data(void* self) {
    QListWidget_QBaseUpdateEditorData((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_editor_data(void* self, void (*slot)()) {
    QListWidget_OnUpdateEditorData((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_editor_geometries(void* self) {
    QListWidget_UpdateEditorGeometries((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_editor_geometries(void* self) {
    QListWidget_QBaseUpdateEditorGeometries((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_editor_geometries(void* self, void (*slot)()) {
    QListWidget_OnUpdateEditorGeometries((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_vertical_scrollbar_action(void* self, int action) {
    QListWidget_VerticalScrollbarAction((QListWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QListWidget_QBaseVerticalScrollbarAction((QListWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QListWidget_OnVerticalScrollbarAction((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_horizontal_scrollbar_action(void* self, int action) {
    QListWidget_HorizontalScrollbarAction((QListWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int action ```
void q_listwidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QListWidget_QBaseHorizontalScrollbarAction((QListWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QListWidget_OnHorizontalScrollbarAction((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_vertical_scrollbar_value_changed(void* self, int value) {
    QListWidget_VerticalScrollbarValueChanged((QListWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QListWidget_QBaseVerticalScrollbarValueChanged((QListWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QListWidget_OnVerticalScrollbarValueChanged((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QListWidget_HorizontalScrollbarValueChanged((QListWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int value ```
void q_listwidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QListWidget_QBaseHorizontalScrollbarValueChanged((QListWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int) ```
void q_listwidget_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QListWidget_OnHorizontalScrollbarValueChanged((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listwidget_close_editor(void* self, void* editor, int64_t hint) {
    QListWidget_CloseEditor((QListWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listwidget_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QListWidget_QBaseCloseEditor((QListWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_listwidget_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QListWidget_OnCloseEditor((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor ```
void q_listwidget_commit_data(void* self, void* editor) {
    QListWidget_CommitData((QListWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* editor ```
void q_listwidget_qbase_commit_data(void* self, void* editor) {
    QListWidget_QBaseCommitData((QListWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*) ```
void q_listwidget_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnCommitData((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QObject* editor ```
void q_listwidget_editor_destroyed(void* self, void* editor) {
    QListWidget_EditorDestroyed((QListWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QObject* editor ```
void q_listwidget_qbase_editor_destroyed(void* self, void* editor) {
    QListWidget_QBaseEditorDestroyed((QListWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QObject*) ```
void q_listwidget_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnEditorDestroyed((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listwidget_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListWidget_Edit2((QListWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listwidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QListWidget_QBaseEdit2((QListWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_listwidget_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QListWidget_OnEdit2((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_listwidget_selection_command(void* self, void* index, void* event) {
    return QListWidget_SelectionCommand((QListWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_listwidget_qbase_selection_command(void* self, void* index, void* event) {
    return QListWidget_QBaseSelectionCommand((QListWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)(QListWidget*, QModelIndex*, QEvent*) ```
void q_listwidget_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QListWidget_OnSelectionCommand((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, bool next ```
bool q_listwidget_focus_next_prev_child(void* self, bool next) {
    return QListWidget_FocusNextPrevChild((QListWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, bool next ```
bool q_listwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QListWidget_QBaseFocusNextPrevChild((QListWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, bool) ```
void q_listwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QListWidget_OnFocusNextPrevChild((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
bool q_listwidget_viewport_event(void* self, void* event) {
    return QListWidget_ViewportEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
bool q_listwidget_qbase_viewport_event(void* self, void* event) {
    return QListWidget_QBaseViewportEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QListWidget_OnViewportEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_mouse_press_event(void* self, void* event) {
    QListWidget_MousePressEvent((QListWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_qbase_mouse_press_event(void* self, void* event) {
    QListWidget_QBaseMousePressEvent((QListWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnMousePressEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_mouse_double_click_event(void* self, void* event) {
    QListWidget_MouseDoubleClickEvent((QListWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMouseEvent* event ```
void q_listwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QListWidget_QBaseMouseDoubleClickEvent((QListWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMouseEvent*) ```
void q_listwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnMouseDoubleClickEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QDragEnterEvent* event ```
void q_listwidget_drag_enter_event(void* self, void* event) {
    QListWidget_DragEnterEvent((QListWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QDragEnterEvent* event ```
void q_listwidget_qbase_drag_enter_event(void* self, void* event) {
    QListWidget_QBaseDragEnterEvent((QListWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QDragEnterEvent*) ```
void q_listwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDragEnterEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_focus_in_event(void* self, void* event) {
    QListWidget_FocusInEvent((QListWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_qbase_focus_in_event(void* self, void* event) {
    QListWidget_QBaseFocusInEvent((QListWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QFocusEvent*) ```
void q_listwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnFocusInEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_focus_out_event(void* self, void* event) {
    QListWidget_FocusOutEvent((QListWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QFocusEvent* event ```
void q_listwidget_qbase_focus_out_event(void* self, void* event) {
    QListWidget_QBaseFocusOutEvent((QListWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QFocusEvent*) ```
void q_listwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnFocusOutEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_key_press_event(void* self, void* event) {
    QListWidget_KeyPressEvent((QListWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_qbase_key_press_event(void* self, void* event) {
    QListWidget_QBaseKeyPressEvent((QListWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QKeyEvent*) ```
void q_listwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnKeyPressEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QInputMethodEvent* event ```
void q_listwidget_input_method_event(void* self, void* event) {
    QListWidget_InputMethodEvent((QListWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QInputMethodEvent* event ```
void q_listwidget_qbase_input_method_event(void* self, void* event) {
    QListWidget_QBaseInputMethodEvent((QListWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QInputMethodEvent*) ```
void q_listwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnInputMethodEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QObject* object, QEvent* event ```
bool q_listwidget_event_filter(void* self, void* object, void* event) {
    return QListWidget_EventFilter((QListWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QObject* object, QEvent* event ```
bool q_listwidget_qbase_event_filter(void* self, void* object, void* event) {
    return QListWidget_QBaseEventFilter((QListWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QObject*, QEvent*) ```
void q_listwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QListWidget_OnEventFilter((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_minimum_size_hint(void* self) {
    return QListWidget_MinimumSizeHint((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_minimum_size_hint(void* self) {
    return QListWidget_QBaseMinimumSizeHint((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QListWidget_OnMinimumSizeHint((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_size_hint(void* self) {
    return QListWidget_SizeHint((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_size_hint(void* self) {
    return QListWidget_QBaseSizeHint((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QListWidget_OnSizeHint((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QWidget* viewport ```
void q_listwidget_setup_viewport(void* self, void* viewport) {
    QListWidget_SetupViewport((QListWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QWidget* viewport ```
void q_listwidget_qbase_setup_viewport(void* self, void* viewport) {
    QListWidget_QBaseSetupViewport((QListWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QWidget*) ```
void q_listwidget_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnSetupViewport((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QContextMenuEvent* param1 ```
void q_listwidget_context_menu_event(void* self, void* param1) {
    QListWidget_ContextMenuEvent((QListWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QContextMenuEvent* param1 ```
void q_listwidget_qbase_context_menu_event(void* self, void* param1) {
    QListWidget_QBaseContextMenuEvent((QListWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QContextMenuEvent*) ```
void q_listwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnContextMenuEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* param1 ```
void q_listwidget_change_event(void* self, void* param1) {
    QListWidget_ChangeEvent((QListWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* param1 ```
void q_listwidget_qbase_change_event(void* self, void* param1) {
    QListWidget_QBaseChangeEvent((QListWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnChangeEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionFrame* option ```
void q_listwidget_init_style_option(void* self, void* option) {
    QListWidget_InitStyleOption((QListWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QStyleOptionFrame* option ```
void q_listwidget_qbase_init_style_option(void* self, void* option) {
    QListWidget_QBaseInitStyleOption((QListWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QStyleOptionFrame*) ```
void q_listwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnInitStyleOption((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_dev_type(void* self) {
    return QListWidget_DevType((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_dev_type(void* self) {
    return QListWidget_QBaseDevType((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QListWidget_OnDevType((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, bool visible ```
void q_listwidget_set_visible(void* self, bool visible) {
    QListWidget_SetVisible((QListWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, bool visible ```
void q_listwidget_qbase_set_visible(void* self, bool visible) {
    QListWidget_QBaseSetVisible((QListWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, bool) ```
void q_listwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QListWidget_OnSetVisible((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int param1 ```
int32_t q_listwidget_height_for_width(void* self, int param1) {
    return QListWidget_HeightForWidth((QListWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int param1 ```
int32_t q_listwidget_qbase_height_for_width(void* self, int param1) {
    return QListWidget_QBaseHeightForWidth((QListWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, int) ```
void q_listwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QListWidget_OnHeightForWidth((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_has_height_for_width(void* self) {
    return QListWidget_HasHeightForWidth((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_has_height_for_width(void* self) {
    return QListWidget_QBaseHasHeightForWidth((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QListWidget_OnHasHeightForWidth((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPaintEngine* q_listwidget_paint_engine(void* self) {
    return QListWidget_PaintEngine((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPaintEngine* q_listwidget_qbase_paint_engine(void* self) {
    return QListWidget_QBasePaintEngine((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPaintEngine* (*slot)() ```
void q_listwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QListWidget_OnPaintEngine((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_key_release_event(void* self, void* event) {
    QListWidget_KeyReleaseEvent((QListWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QKeyEvent* event ```
void q_listwidget_qbase_key_release_event(void* self, void* event) {
    QListWidget_QBaseKeyReleaseEvent((QListWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QKeyEvent*) ```
void q_listwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnKeyReleaseEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEnterEvent* event ```
void q_listwidget_enter_event(void* self, void* event) {
    QListWidget_EnterEvent((QListWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEnterEvent* event ```
void q_listwidget_qbase_enter_event(void* self, void* event) {
    QListWidget_QBaseEnterEvent((QListWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEnterEvent*) ```
void q_listwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnEnterEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_leave_event(void* self, void* event) {
    QListWidget_LeaveEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_qbase_leave_event(void* self, void* event) {
    QListWidget_QBaseLeaveEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnLeaveEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMoveEvent* event ```
void q_listwidget_move_event(void* self, void* event) {
    QListWidget_MoveEvent((QListWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMoveEvent* event ```
void q_listwidget_qbase_move_event(void* self, void* event) {
    QListWidget_QBaseMoveEvent((QListWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMoveEvent*) ```
void q_listwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnMoveEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QCloseEvent* event ```
void q_listwidget_close_event(void* self, void* event) {
    QListWidget_CloseEvent((QListWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QCloseEvent* event ```
void q_listwidget_qbase_close_event(void* self, void* event) {
    QListWidget_QBaseCloseEvent((QListWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QCloseEvent*) ```
void q_listwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnCloseEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QTabletEvent* event ```
void q_listwidget_tablet_event(void* self, void* event) {
    QListWidget_TabletEvent((QListWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QTabletEvent* event ```
void q_listwidget_qbase_tablet_event(void* self, void* event) {
    QListWidget_QBaseTabletEvent((QListWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QTabletEvent*) ```
void q_listwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnTabletEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QActionEvent* event ```
void q_listwidget_action_event(void* self, void* event) {
    QListWidget_ActionEvent((QListWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QActionEvent* event ```
void q_listwidget_qbase_action_event(void* self, void* event) {
    QListWidget_QBaseActionEvent((QListWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QActionEvent*) ```
void q_listwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnActionEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QShowEvent* event ```
void q_listwidget_show_event(void* self, void* event) {
    QListWidget_ShowEvent((QListWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QShowEvent* event ```
void q_listwidget_qbase_show_event(void* self, void* event) {
    QListWidget_QBaseShowEvent((QListWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QShowEvent*) ```
void q_listwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnShowEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QHideEvent* event ```
void q_listwidget_hide_event(void* self, void* event) {
    QListWidget_HideEvent((QListWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QHideEvent* event ```
void q_listwidget_qbase_hide_event(void* self, void* event) {
    QListWidget_QBaseHideEvent((QListWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QHideEvent*) ```
void q_listwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnHideEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_listwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListWidget_NativeEvent((QListWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_listwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListWidget_QBaseNativeEvent((QListWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, const char*, void*, intptr_t*) ```
void q_listwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QListWidget_OnNativeEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listwidget_metric(void* self, int64_t param1) {
    return QListWidget_Metric((QListWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listwidget_qbase_metric(void* self, int64_t param1) {
    return QListWidget_QBaseMetric((QListWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_listwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QListWidget_OnMetric((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_init_painter(void* self, void* painter) {
    QListWidget_InitPainter((QListWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* painter ```
void q_listwidget_qbase_init_painter(void* self, void* painter) {
    QListWidget_QBaseInitPainter((QListWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPainter*) ```
void q_listwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnInitPainter((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* offset ```
QPaintDevice* q_listwidget_redirected(void* self, void* offset) {
    return QListWidget_Redirected((QListWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* offset ```
QPaintDevice* q_listwidget_qbase_redirected(void* self, void* offset) {
    return QListWidget_QBaseRedirected((QListWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPaintDevice* (*slot)(QListWidget*, QPoint*) ```
void q_listwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QListWidget_OnRedirected((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPainter* q_listwidget_shared_painter(void* self) {
    return QListWidget_SharedPainter((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPainter* q_listwidget_qbase_shared_painter(void* self) {
    return QListWidget_QBaseSharedPainter((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* (*slot)() ```
void q_listwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QListWidget_OnSharedPainter((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QChildEvent* event ```
void q_listwidget_child_event(void* self, void* event) {
    QListWidget_ChildEvent((QListWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QChildEvent* event ```
void q_listwidget_qbase_child_event(void* self, void* event) {
    QListWidget_QBaseChildEvent((QListWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QChildEvent*) ```
void q_listwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnChildEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_custom_event(void* self, void* event) {
    QListWidget_CustomEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QEvent* event ```
void q_listwidget_qbase_custom_event(void* self, void* event) {
    QListWidget_QBaseCustomEvent((QListWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QEvent*) ```
void q_listwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnCustomEvent((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_connect_notify(void* self, void* signal) {
    QListWidget_ConnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_qbase_connect_notify(void* self, void* signal) {
    QListWidget_QBaseConnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnConnectNotify((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_disconnect_notify(void* self, void* signal) {
    QListWidget_DisconnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
void q_listwidget_qbase_disconnect_notify(void* self, void* signal) {
    QListWidget_QBaseDisconnectNotify((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDisconnectNotify((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int width, int height ```
void q_listwidget_resize_contents(void* self, int width, int height) {
    QListWidget_ResizeContents((QListWidget*)self, width, height);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int width, int height ```
void q_listwidget_qbase_resize_contents(void* self, int width, int height) {
    QListWidget_QBaseResizeContents((QListWidget*)self, width, height);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_resize_contents(void* self, void (*slot)(void*, int, int)) {
    QListWidget_OnResizeContents((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_contents_size(void* self) {
    return QListWidget_ContentsSize((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QSize* q_listwidget_qbase_contents_size(void* self) {
    return QListWidget_QBaseContentsSize((QListWidget*)self);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QSize* (*slot)() ```
void q_listwidget_on_contents_size(void* self, QSize* (*slot)()) {
    QListWidget_OnContentsSize((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_rect_for_index(void* self, void* index) {
    return QListWidget_RectForIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QModelIndex* index ```
QRect* q_listwidget_qbase_rect_for_index(void* self, void* index) {
    return QListWidget_QBaseRectForIndex((QListWidget*)self, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QRect* (*slot)(QListWidget*, QModelIndex*) ```
void q_listwidget_on_rect_for_index(void* self, QRect* (*slot)(void*, void*)) {
    QListWidget_OnRectForIndex((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPoint* position, QModelIndex* index ```
void q_listwidget_set_position_for_index(void* self, void* position, void* index) {
    QListWidget_SetPositionForIndex((QListWidget*)self, (QPoint*)position, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* position, QModelIndex* index ```
void q_listwidget_qbase_set_position_for_index(void* self, void* position, void* index) {
    QListWidget_QBaseSetPositionForIndex((QListWidget*)self, (QPoint*)position, (QModelIndex*)index);
}

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPoint*, QModelIndex*) ```
void q_listwidget_on_set_position_for_index(void* self, void (*slot)(void*, void*, void*)) {
    QListWidget_OnSetPositionForIndex((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_state(void* self) {
    return QListWidget_State((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_state(void* self) {
    return QListWidget_QBaseState((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_state(void* self, int64_t (*slot)()) {
    QListWidget_OnState((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__State state ```
void q_listwidget_set_state(void* self, int64_t state) {
    QListWidget_SetState((QListWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, enum QAbstractItemView__State state ```
void q_listwidget_qbase_set_state(void* self, int64_t state) {
    QListWidget_QBaseSetState((QListWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, enum QAbstractItemView__State) ```
void q_listwidget_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QListWidget_OnSetState((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_schedule_delayed_items_layout(void* self) {
    QListWidget_ScheduleDelayedItemsLayout((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_schedule_delayed_items_layout(void* self) {
    QListWidget_QBaseScheduleDelayedItemsLayout((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QListWidget_OnScheduleDelayedItemsLayout((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_execute_delayed_items_layout(void* self) {
    QListWidget_ExecuteDelayedItemsLayout((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_execute_delayed_items_layout(void* self) {
    QListWidget_QBaseExecuteDelayedItemsLayout((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QListWidget_OnExecuteDelayedItemsLayout((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QRegion* region ```
void q_listwidget_set_dirty_region(void* self, void* region) {
    QListWidget_SetDirtyRegion((QListWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QRegion* region ```
void q_listwidget_qbase_set_dirty_region(void* self, void* region) {
    QListWidget_QBaseSetDirtyRegion((QListWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QRegion*) ```
void q_listwidget_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnSetDirtyRegion((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_scroll_dirty_region(void* self, int dx, int dy) {
    QListWidget_ScrollDirtyRegion((QListWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int dx, int dy ```
void q_listwidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QListWidget_QBaseScrollDirtyRegion((QListWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int) ```
void q_listwidget_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QListWidget_OnScrollDirtyRegion((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_dirty_region_offset(void* self) {
    return QListWidget_DirtyRegionOffset((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QPoint* q_listwidget_qbase_dirty_region_offset(void* self) {
    return QListWidget_QBaseDirtyRegionOffset((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QPoint* (*slot)() ```
void q_listwidget_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QListWidget_OnDirtyRegionOffset((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_start_auto_scroll(void* self) {
    QListWidget_StartAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_start_auto_scroll(void* self) {
    QListWidget_QBaseStartAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_start_auto_scroll(void* self, void (*slot)()) {
    QListWidget_OnStartAutoScroll((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_stop_auto_scroll(void* self) {
    QListWidget_StopAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_stop_auto_scroll(void* self) {
    QListWidget_QBaseStopAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_stop_auto_scroll(void* self, void (*slot)()) {
    QListWidget_OnStopAutoScroll((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_do_auto_scroll(void* self) {
    QListWidget_DoAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_do_auto_scroll(void* self) {
    QListWidget_QBaseDoAutoScroll((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_do_auto_scroll(void* self, void (*slot)()) {
    QListWidget_OnDoAutoScroll((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_drop_indicator_position(void* self) {
    return QListWidget_DropIndicatorPosition((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int64_t q_listwidget_qbase_drop_indicator_position(void* self) {
    return QListWidget_QBaseDropIndicatorPosition((QListWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int64_t (*slot)() ```
void q_listwidget_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QListWidget_OnDropIndicatorPosition((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListWidget_SetViewportMargins((QListWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, int left, int top, int right, int bottom ```
void q_listwidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListWidget_QBaseSetViewportMargins((QListWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, int, int, int, int) ```
void q_listwidget_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QListWidget_OnSetViewportMargins((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_viewport_margins(void* self) {
    return QListWidget_ViewportMargins((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QMargins* q_listwidget_qbase_viewport_margins(void* self) {
    return QListWidget_QBaseViewportMargins((QListWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QMargins* (*slot)() ```
void q_listwidget_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QListWidget_OnViewportMargins((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QPainter* param1 ```
void q_listwidget_draw_frame(void* self, void* param1) {
    QListWidget_DrawFrame((QListWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QPainter* param1 ```
void q_listwidget_qbase_draw_frame(void* self, void* param1) {
    QListWidget_QBaseDrawFrame((QListWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)(QListWidget*, QPainter*) ```
void q_listwidget_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QListWidget_OnDrawFrame((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_update_micro_focus(void* self) {
    QListWidget_UpdateMicroFocus((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_update_micro_focus(void* self) {
    QListWidget_QBaseUpdateMicroFocus((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QListWidget_OnUpdateMicroFocus((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_create(void* self) {
    QListWidget_Create((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_create(void* self) {
    QListWidget_QBaseCreate((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_create(void* self, void (*slot)()) {
    QListWidget_OnCreate((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_destroy(void* self) {
    QListWidget_Destroy((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
void q_listwidget_qbase_destroy(void* self) {
    QListWidget_QBaseDestroy((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, void (*slot)() ```
void q_listwidget_on_destroy(void* self, void (*slot)()) {
    QListWidget_OnDestroy((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_focus_next_child(void* self) {
    return QListWidget_FocusNextChild((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_focus_next_child(void* self) {
    return QListWidget_QBaseFocusNextChild((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QListWidget_OnFocusNextChild((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_focus_previous_child(void* self) {
    return QListWidget_FocusPreviousChild((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
bool q_listwidget_qbase_focus_previous_child(void* self) {
    return QListWidget_QBaseFocusPreviousChild((QListWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)() ```
void q_listwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QListWidget_OnFocusPreviousChild((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
QObject* q_listwidget_sender(void* self) {
    return QListWidget_Sender((QListWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
QObject* q_listwidget_qbase_sender(void* self) {
    return QListWidget_QBaseSender((QListWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, QObject* (*slot)() ```
void q_listwidget_on_sender(void* self, QObject* (*slot)()) {
    QListWidget_OnSender((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_sender_signal_index(void* self) {
    return QListWidget_SenderSignalIndex((QListWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self ```
int32_t q_listwidget_qbase_sender_signal_index(void* self) {
    return QListWidget_QBaseSenderSignalIndex((QListWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)() ```
void q_listwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QListWidget_OnSenderSignalIndex((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, const char* signal ```
int32_t q_listwidget_receivers(void* self, const char* signal) {
    return QListWidget_Receivers((QListWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, const char* signal ```
int32_t q_listwidget_qbase_receivers(void* self, const char* signal) {
    return QListWidget_QBaseReceivers((QListWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, int32_t (*slot)(QListWidget*, const char*) ```
void q_listwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QListWidget_OnReceivers((QListWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
bool q_listwidget_is_signal_connected(void* self, void* signal) {
    return QListWidget_IsSignalConnected((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListWidget* self, QMetaMethod* signal ```
bool q_listwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QListWidget_QBaseIsSignalConnected((QListWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListWidget* self, bool (*slot)(QListWidget*, QMetaMethod*) ```
void q_listwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QListWidget_OnIsSignalConnected((QListWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QListWidget* self ```
void q_listwidget_delete(void* self) {
    QListWidget_Delete((QListWidget*)(self));
}