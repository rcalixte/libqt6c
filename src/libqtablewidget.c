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
#include "libqheaderview.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
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
#include "libqtableview.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtablewidget.hpp"
#include "libqtablewidget.h"

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html

/// q_tablewidgetselectionrange_new constructs a new QTableWidgetSelectionRange object.
///
/// ``` QTableWidgetSelectionRange* other ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new(void* other) {
    return QTableWidgetSelectionRange_new((QTableWidgetSelectionRange*)other);
}

/// q_tablewidgetselectionrange_new2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
///
/// ``` QTableWidgetSelectionRange* other ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new2(void* other) {
    return QTableWidgetSelectionRange_new2((QTableWidgetSelectionRange*)other);
}

/// q_tablewidgetselectionrange_new3 constructs a new QTableWidgetSelectionRange object.
///
///
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new3() {
    return QTableWidgetSelectionRange_new3();
}

/// q_tablewidgetselectionrange_new4 constructs a new QTableWidgetSelectionRange object.
///
/// ``` int top, int left, int bottom, int right ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new4(int top, int left, int bottom, int right) {
    return QTableWidgetSelectionRange_new4(top, left, bottom, right);
}

/// q_tablewidgetselectionrange_copy_assign shallow copies `other` into `self`.
///
/// ``` QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other ```
void q_tablewidgetselectionrange_copy_assign(void* self, void* other) {
    QTableWidgetSelectionRange_CopyAssign((QTableWidgetSelectionRange*)self, (QTableWidgetSelectionRange*)other);
}

/// q_tablewidgetselectionrange_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other ```
void q_tablewidgetselectionrange_move_assign(void* self, void* other) {
    QTableWidgetSelectionRange_MoveAssign((QTableWidgetSelectionRange*)self, (QTableWidgetSelectionRange*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_top_row(void* self) {
    return QTableWidgetSelectionRange_TopRow((QTableWidgetSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_bottom_row(void* self) {
    return QTableWidgetSelectionRange_BottomRow((QTableWidgetSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_left_column(void* self) {
    return QTableWidgetSelectionRange_LeftColumn((QTableWidgetSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_right_column(void* self) {
    return QTableWidgetSelectionRange_RightColumn((QTableWidgetSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_row_count(void* self) {
    return QTableWidgetSelectionRange_RowCount((QTableWidgetSelectionRange*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_column_count(void* self) {
    return QTableWidgetSelectionRange_ColumnCount((QTableWidgetSelectionRange*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTableWidgetSelectionRange* self ```
void q_tablewidgetselectionrange_delete(void* self) {
    QTableWidgetSelectionRange_Delete((QTableWidgetSelectionRange*)(self));
}

/// https://doc.qt.io/qt-6/qtablewidgetitem.html

/// q_tablewidgetitem_new constructs a new QTableWidgetItem object.
///
///
QTableWidgetItem* q_tablewidgetitem_new() {
    return QTableWidgetItem_new();
}

/// q_tablewidgetitem_new2 constructs a new QTableWidgetItem object.
///
/// ``` const char* text ```
QTableWidgetItem* q_tablewidgetitem_new2(const char* text) {
    return QTableWidgetItem_new2(qstring(text));
}

/// q_tablewidgetitem_new3 constructs a new QTableWidgetItem object.
///
/// ``` QIcon* icon, const char* text ```
QTableWidgetItem* q_tablewidgetitem_new3(void* icon, const char* text) {
    return QTableWidgetItem_new3((QIcon*)icon, qstring(text));
}

/// q_tablewidgetitem_new4 constructs a new QTableWidgetItem object.
///
/// ``` QTableWidgetItem* other ```
QTableWidgetItem* q_tablewidgetitem_new4(void* other) {
    return QTableWidgetItem_new4((QTableWidgetItem*)other);
}

/// q_tablewidgetitem_new5 constructs a new QTableWidgetItem object.
///
/// ``` int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new5(int typeVal) {
    return QTableWidgetItem_new5(typeVal);
}

/// q_tablewidgetitem_new6 constructs a new QTableWidgetItem object.
///
/// ``` const char* text, int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new6(const char* text, int typeVal) {
    return QTableWidgetItem_new6(qstring(text), typeVal);
}

/// q_tablewidgetitem_new7 constructs a new QTableWidgetItem object.
///
/// ``` QIcon* icon, const char* text, int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new7(void* icon, const char* text, int typeVal) {
    return QTableWidgetItem_new7((QIcon*)icon, qstring(text), typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// ``` QTableWidgetItem* self ```
QTableWidgetItem* q_tablewidgetitem_clone(void* self) {
    return QTableWidgetItem_Clone((QTableWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* (*slot)() ```
void q_tablewidgetitem_on_clone(void* self, QTableWidgetItem* (*slot)()) {
    QTableWidgetItem_OnClone((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self ```
QTableWidgetItem* q_tablewidgetitem_qbase_clone(void* self) {
    return QTableWidgetItem_QBaseClone((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
///
/// ``` QTableWidgetItem* self ```
QTableWidget* q_tablewidgetitem_table_widget(void* self) {
    return QTableWidgetItem_TableWidget((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_row(void* self) {
    return QTableWidgetItem_Row((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_column(void* self) {
    return QTableWidgetItem_Column((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
///
/// ``` QTableWidgetItem* self, bool selectVal ```
void q_tablewidgetitem_set_selected(void* self, bool selectVal) {
    QTableWidgetItem_SetSelected((QTableWidgetItem*)self, selectVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
///
/// ``` QTableWidgetItem* self ```
bool q_tablewidgetitem_is_selected(void* self) {
    return QTableWidgetItem_IsSelected((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
///
/// ``` QTableWidgetItem* self ```
int64_t q_tablewidgetitem_flags(void* self) {
    return QTableWidgetItem_Flags((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
///
/// ``` QTableWidgetItem* self, int flags ```
void q_tablewidgetitem_set_flags(void* self, int64_t flags) {
    QTableWidgetItem_SetFlags((QTableWidgetItem*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_text(void* self) {
    libqt_string _str = QTableWidgetItem_Text((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
///
/// ``` QTableWidgetItem* self, const char* text ```
void q_tablewidgetitem_set_text(void* self, const char* text) {
    QTableWidgetItem_SetText((QTableWidgetItem*)self, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
///
/// ``` QTableWidgetItem* self ```
QIcon* q_tablewidgetitem_icon(void* self) {
    return QTableWidgetItem_Icon((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
///
/// ``` QTableWidgetItem* self, QIcon* icon ```
void q_tablewidgetitem_set_icon(void* self, void* icon) {
    QTableWidgetItem_SetIcon((QTableWidgetItem*)self, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_status_tip(void* self) {
    libqt_string _str = QTableWidgetItem_StatusTip((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
///
/// ``` QTableWidgetItem* self, const char* statusTip ```
void q_tablewidgetitem_set_status_tip(void* self, const char* statusTip) {
    QTableWidgetItem_SetStatusTip((QTableWidgetItem*)self, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_tool_tip(void* self) {
    libqt_string _str = QTableWidgetItem_ToolTip((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
///
/// ``` QTableWidgetItem* self, const char* toolTip ```
void q_tablewidgetitem_set_tool_tip(void* self, const char* toolTip) {
    QTableWidgetItem_SetToolTip((QTableWidgetItem*)self, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_whats_this(void* self) {
    libqt_string _str = QTableWidgetItem_WhatsThis((QTableWidgetItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
///
/// ``` QTableWidgetItem* self, const char* whatsThis ```
void q_tablewidgetitem_set_whats_this(void* self, const char* whatsThis) {
    QTableWidgetItem_SetWhatsThis((QTableWidgetItem*)self, qstring(whatsThis));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
///
/// ``` QTableWidgetItem* self ```
QFont* q_tablewidgetitem_font(void* self) {
    return QTableWidgetItem_Font((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
///
/// ``` QTableWidgetItem* self, QFont* font ```
void q_tablewidgetitem_set_font(void* self, void* font) {
    QTableWidgetItem_SetFont((QTableWidgetItem*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_text_alignment(void* self) {
    return QTableWidgetItem_TextAlignment((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, int alignment ```
void q_tablewidgetitem_set_text_alignment(void* self, int alignment) {
    QTableWidgetItem_SetTextAlignment((QTableWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, enum Qt__AlignmentFlag alignment ```
void q_tablewidgetitem_set_text_alignment_with_alignment(void* self, int64_t alignment) {
    QTableWidgetItem_SetTextAlignmentWithAlignment((QTableWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, int alignment ```
void q_tablewidgetitem_set_text_alignment2(void* self, int64_t alignment) {
    QTableWidgetItem_SetTextAlignment2((QTableWidgetItem*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
///
/// ``` QTableWidgetItem* self ```
QBrush* q_tablewidgetitem_background(void* self) {
    return QTableWidgetItem_Background((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
///
/// ``` QTableWidgetItem* self, QBrush* brush ```
void q_tablewidgetitem_set_background(void* self, void* brush) {
    QTableWidgetItem_SetBackground((QTableWidgetItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
///
/// ``` QTableWidgetItem* self ```
QBrush* q_tablewidgetitem_foreground(void* self) {
    return QTableWidgetItem_Foreground((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
///
/// ``` QTableWidgetItem* self, QBrush* brush ```
void q_tablewidgetitem_set_foreground(void* self, void* brush) {
    QTableWidgetItem_SetForeground((QTableWidgetItem*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
///
/// ``` QTableWidgetItem* self ```
int64_t q_tablewidgetitem_check_state(void* self) {
    return QTableWidgetItem_CheckState((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
///
/// ``` QTableWidgetItem* self, enum Qt__CheckState state ```
void q_tablewidgetitem_set_check_state(void* self, int64_t state) {
    QTableWidgetItem_SetCheckState((QTableWidgetItem*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
///
/// ``` QTableWidgetItem* self ```
QSize* q_tablewidgetitem_size_hint(void* self) {
    return QTableWidgetItem_SizeHint((QTableWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
///
/// ``` QTableWidgetItem* self, QSize* size ```
void q_tablewidgetitem_set_size_hint(void* self, void* size) {
    QTableWidgetItem_SetSizeHint((QTableWidgetItem*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// ``` QTableWidgetItem* self, int role ```
QVariant* q_tablewidgetitem_data(void* self, int role) {
    return QTableWidgetItem_Data((QTableWidgetItem*)self, role);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, QVariant* (*slot)(QTableWidgetItem*, int) ```
void q_tablewidgetitem_on_data(void* self, QVariant* (*slot)(void*, int)) {
    QTableWidgetItem_OnData((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self, int role ```
QVariant* q_tablewidgetitem_qbase_data(void* self, int role) {
    return QTableWidgetItem_QBaseData((QTableWidgetItem*)self, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// ``` QTableWidgetItem* self, int role, QVariant* value ```
void q_tablewidgetitem_set_data(void* self, int role, void* value) {
    QTableWidgetItem_SetData((QTableWidgetItem*)self, role, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, int, QVariant*) ```
void q_tablewidgetitem_on_set_data(void* self, void (*slot)(void*, int, void*)) {
    QTableWidgetItem_OnSetData((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self, int role, QVariant* value ```
void q_tablewidgetitem_qbase_set_data(void* self, int role, void* value) {
    QTableWidgetItem_QBaseSetData((QTableWidgetItem*)self, role, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator<)
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
bool q_tablewidgetitem_operator_lesser(void* self, void* other) {
    return QTableWidgetItem_OperatorLesser((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, bool (*slot)(QTableWidgetItem*, QTableWidgetItem*) ```
void q_tablewidgetitem_on_operator_lesser(void* self, bool (*slot)(void*, void*)) {
    QTableWidgetItem_OnOperatorLesser((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
bool q_tablewidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QTableWidgetItem_QBaseOperatorLesser((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// ``` QTableWidgetItem* self, QDataStream* in ```
void q_tablewidgetitem_read(void* self, void* in) {
    QTableWidgetItem_Read((QTableWidgetItem*)self, (QDataStream*)in);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, QDataStream*) ```
void q_tablewidgetitem_on_read(void* self, void (*slot)(void*, void*)) {
    QTableWidgetItem_OnRead((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QDataStream* in ```
void q_tablewidgetitem_qbase_read(void* self, void* in) {
    QTableWidgetItem_QBaseRead((QTableWidgetItem*)self, (QDataStream*)in);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// ``` QTableWidgetItem* self, QDataStream* out ```
void q_tablewidgetitem_write(void* self, void* out) {
    QTableWidgetItem_Write((QTableWidgetItem*)self, (QDataStream*)out);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, QDataStream*) ```
void q_tablewidgetitem_on_write(void* self, void (*slot)(void*, void*)) {
    QTableWidgetItem_OnWrite((QTableWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QDataStream* out ```
void q_tablewidgetitem_qbase_write(void* self, void* out) {
    QTableWidgetItem_QBaseWrite((QTableWidgetItem*)self, (QDataStream*)out);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator=)
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
void q_tablewidgetitem_operator_assign(void* self, void* other) {
    QTableWidgetItem_OperatorAssign((QTableWidgetItem*)self, (QTableWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_type(void* self) {
    return QTableWidgetItem_Type((QTableWidgetItem*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTableWidgetItem* self ```
void q_tablewidgetitem_delete(void* self) {
    QTableWidgetItem_Delete((QTableWidgetItem*)(self));
}

/// https://doc.qt.io/qt-6/qtablewidget.html

/// q_tablewidget_new constructs a new QTableWidget object.
///
/// ``` QWidget* parent ```
QTableWidget* q_tablewidget_new(void* parent) {
    return QTableWidget_new((QWidget*)parent);
}

/// q_tablewidget_new2 constructs a new QTableWidget object.
///
///
QTableWidget* q_tablewidget_new2() {
    return QTableWidget_new2();
}

/// q_tablewidget_new3 constructs a new QTableWidget object.
///
/// ``` int rows, int columns ```
QTableWidget* q_tablewidget_new3(int rows, int columns) {
    return QTableWidget_new3(rows, columns);
}

/// q_tablewidget_new4 constructs a new QTableWidget object.
///
/// ``` int rows, int columns, QWidget* parent ```
QTableWidget* q_tablewidget_new4(int rows, int columns, void* parent) {
    return QTableWidget_new4(rows, columns, (QWidget*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTableWidget* self ```
QMetaObject* q_tablewidget_meta_object(void* self) {
    return QTableWidget_MetaObject((QTableWidget*)self);
}

/// ``` QTableWidget* self, const char* param1 ```
void* q_tablewidget_metacast(void* self, const char* param1) {
    return QTableWidget_Metacast((QTableWidget*)self, param1);
}

/// ``` QTableWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tablewidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableWidget_Metacall((QTableWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, enum QMetaObject__Call, int, void*) ```
void q_tablewidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTableWidget_OnMetacall((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tablewidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableWidget_QBaseMetacall((QTableWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tablewidget_tr(const char* s) {
    libqt_string _str = QTableWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
///
/// ``` QTableWidget* self, int rows ```
void q_tablewidget_set_row_count(void* self, int rows) {
    QTableWidget_SetRowCount((QTableWidget*)self, rows);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_row_count(void* self) {
    return QTableWidget_RowCount((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
///
/// ``` QTableWidget* self, int columns ```
void q_tablewidget_set_column_count(void* self, int columns) {
    QTableWidget_SetColumnCount((QTableWidget*)self, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_column_count(void* self) {
    return QTableWidget_ColumnCount((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#row)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
int32_t q_tablewidget_row(void* self, void* item) {
    return QTableWidget_Row((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#column)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
int32_t q_tablewidget_column(void* self, void* item) {
    return QTableWidget_Column((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#item)
///
/// ``` QTableWidget* self, int row, int column ```
QTableWidgetItem* q_tablewidget_item(void* self, int row, int column) {
    return QTableWidget_Item((QTableWidget*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
///
/// ``` QTableWidget* self, int row, int column, QTableWidgetItem* item ```
void q_tablewidget_set_item(void* self, int row, int column, void* item) {
    QTableWidget_SetItem((QTableWidget*)self, row, column, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
///
/// ``` QTableWidget* self, int row, int column ```
QTableWidgetItem* q_tablewidget_take_item(void* self, int row, int column) {
    return QTableWidget_TakeItem((QTableWidget*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#items)
///
/// ``` QTableWidget* self, QMimeData* data ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_items(void* self, void* data) {
    libqt_list _arr = QTableWidget_Items((QTableWidget*)self, (QMimeData*)data);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
QModelIndex* q_tablewidget_index_from_item(void* self, void* item) {
    return QTableWidget_IndexFromItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QTableWidgetItem* q_tablewidget_item_from_index(void* self, void* index) {
    return QTableWidget_ItemFromIndex((QTableWidget*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
///
/// ``` QTableWidget* self, int row ```
QTableWidgetItem* q_tablewidget_vertical_header_item(void* self, int row) {
    return QTableWidget_VerticalHeaderItem((QTableWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
///
/// ``` QTableWidget* self, int row, QTableWidgetItem* item ```
void q_tablewidget_set_vertical_header_item(void* self, int row, void* item) {
    QTableWidget_SetVerticalHeaderItem((QTableWidget*)self, row, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
///
/// ``` QTableWidget* self, int row ```
QTableWidgetItem* q_tablewidget_take_vertical_header_item(void* self, int row) {
    return QTableWidget_TakeVerticalHeaderItem((QTableWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
///
/// ``` QTableWidget* self, int column ```
QTableWidgetItem* q_tablewidget_horizontal_header_item(void* self, int column) {
    return QTableWidget_HorizontalHeaderItem((QTableWidget*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
///
/// ``` QTableWidget* self, int column, QTableWidgetItem* item ```
void q_tablewidget_set_horizontal_header_item(void* self, int column, void* item) {
    QTableWidget_SetHorizontalHeaderItem((QTableWidget*)self, column, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
///
/// ``` QTableWidget* self, int column ```
QTableWidgetItem* q_tablewidget_take_horizontal_header_item(void* self, int column) {
    return QTableWidget_TakeHorizontalHeaderItem((QTableWidget*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
///
/// ``` QTableWidget* self, const char* labels[] ```
void q_tablewidget_set_vertical_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QTableWidget_SetVerticalHeaderLabels((QTableWidget*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
///
/// ``` QTableWidget* self, const char* labels[] ```
void q_tablewidget_set_horizontal_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QTableWidget_SetHorizontalHeaderLabels((QTableWidget*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_current_row(void* self) {
    return QTableWidget_CurrentRow((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_current_column(void* self) {
    return QTableWidget_CurrentColumn((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
///
/// ``` QTableWidget* self ```
QTableWidgetItem* q_tablewidget_current_item(void* self) {
    return QTableWidget_CurrentItem((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_set_current_item(void* self, void* item) {
    QTableWidget_SetCurrentItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item, int command ```
void q_tablewidget_set_current_item2(void* self, void* item, int64_t command) {
    QTableWidget_SetCurrentItem2((QTableWidget*)self, (QTableWidgetItem*)item, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_set_current_cell(void* self, int row, int column) {
    QTableWidget_SetCurrentCell((QTableWidget*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// ``` QTableWidget* self, int row, int column, int command ```
void q_tablewidget_set_current_cell2(void* self, int row, int column, int64_t command) {
    QTableWidget_SetCurrentCell2((QTableWidget*)self, row, column, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_sort_items(void* self, int column) {
    QTableWidget_SortItems((QTableWidget*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_sorting_enabled(void* self, bool enable) {
    QTableWidget_SetSortingEnabled((QTableWidget*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_sorting_enabled(void* self) {
    return QTableWidget_IsSortingEnabled((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_edit_item(void* self, void* item) {
    QTableWidget_EditItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_open_persistent_editor(void* self, void* item) {
    QTableWidget_OpenPersistentEditor((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_close_persistent_editor(void* self, void* item) {
    QTableWidget_ClosePersistentEditor((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
bool q_tablewidget_is_persistent_editor_open(void* self, void* item) {
    return QTableWidget_IsPersistentEditorOpen((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
///
/// ``` QTableWidget* self, int row, int column ```
QWidget* q_tablewidget_cell_widget(void* self, int row, int column) {
    return QTableWidget_CellWidget((QTableWidget*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
///
/// ``` QTableWidget* self, int row, int column, QWidget* widget ```
void q_tablewidget_set_cell_widget(void* self, int row, int column, void* widget) {
    QTableWidget_SetCellWidget((QTableWidget*)self, row, column, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_remove_cell_widget(void* self, int row, int column) {
    QTableWidget_RemoveCellWidget((QTableWidget*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
///
/// ``` QTableWidget* self, QTableWidgetSelectionRange* range, bool selectVal ```
void q_tablewidget_set_range_selected(void* self, void* range, bool selectVal) {
    QTableWidget_SetRangeSelected((QTableWidget*)self, (QTableWidgetSelectionRange*)range, selectVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
///
/// ``` QTableWidget* self ```
libqt_list /* of QTableWidgetSelectionRange* */ q_tablewidget_selected_ranges(void* self) {
    libqt_list _arr = QTableWidget_SelectedRanges((QTableWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
///
/// ``` QTableWidget* self ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_selected_items(void* self) {
    libqt_list _arr = QTableWidget_SelectedItems((QTableWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
///
/// ``` QTableWidget* self, const char* text, int flags ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_find_items(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QTableWidget_FindItems((QTableWidget*)self, qstring(text), flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
///
/// ``` QTableWidget* self, int logicalRow ```
int32_t q_tablewidget_visual_row(void* self, int logicalRow) {
    return QTableWidget_VisualRow((QTableWidget*)self, logicalRow);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
///
/// ``` QTableWidget* self, int logicalColumn ```
int32_t q_tablewidget_visual_column(void* self, int logicalColumn) {
    return QTableWidget_VisualColumn((QTableWidget*)self, logicalColumn);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// ``` QTableWidget* self, QPoint* p ```
QTableWidgetItem* q_tablewidget_item_at(void* self, void* p) {
    return QTableWidget_ItemAt((QTableWidget*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// ``` QTableWidget* self, int x, int y ```
QTableWidgetItem* q_tablewidget_item_at2(void* self, int x, int y) {
    return QTableWidget_ItemAt2((QTableWidget*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
QRect* q_tablewidget_visual_item_rect(void* self, void* item) {
    return QTableWidget_VisualItemRect((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
///
/// ``` QTableWidget* self ```
QTableWidgetItem* q_tablewidget_item_prototype(void* self) {
    return QTableWidget_ItemPrototype((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_set_item_prototype(void* self, void* item) {
    QTableWidget_SetItemPrototype((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_scroll_to_item(void* self, void* item) {
    QTableWidget_ScrollToItem((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_insert_row(void* self, int row) {
    QTableWidget_InsertRow((QTableWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_insert_column(void* self, int column) {
    QTableWidget_InsertColumn((QTableWidget*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_remove_row(void* self, int row) {
    QTableWidget_RemoveRow((QTableWidget*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_remove_column(void* self, int column) {
    QTableWidget_RemoveColumn((QTableWidget*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clear)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear(void* self) {
    QTableWidget_Clear((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_contents(void* self) {
    QTableWidget_ClearContents((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_pressed(void* self, void* item) {
    QTableWidget_ItemPressed((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_pressed(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemPressed((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_clicked(void* self, void* item) {
    QTableWidget_ItemClicked((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_clicked(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemClicked((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_double_clicked(void* self, void* item) {
    QTableWidget_ItemDoubleClicked((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_double_clicked(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemDoubleClicked((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_activated(void* self, void* item) {
    QTableWidget_ItemActivated((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_activated(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemActivated((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_entered(void* self, void* item) {
    QTableWidget_ItemEntered((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_entered(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemEntered((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_changed(void* self, void* item) {
    QTableWidget_ItemChanged((QTableWidget*)self, (QTableWidgetItem*)item);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_changed(void* self, void (*slot)(void*, void*)) {
    QTableWidget_Connect_ItemChanged((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
///
/// ``` QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous ```
void q_tablewidget_current_item_changed(void* self, void* current, void* previous) {
    QTableWidget_CurrentItemChanged((QTableWidget*)self, (QTableWidgetItem*)current, (QTableWidgetItem*)previous);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*) ```
void q_tablewidget_on_current_item_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableWidget_Connect_CurrentItemChanged((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
///
/// ``` QTableWidget* self ```
void q_tablewidget_item_selection_changed(void* self) {
    QTableWidget_ItemSelectionChanged((QTableWidget*)self);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*) ```
void q_tablewidget_on_item_selection_changed(void* self, void (*slot)(void*)) {
    QTableWidget_Connect_ItemSelectionChanged((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_pressed(void* self, int row, int column) {
    QTableWidget_CellPressed((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_pressed(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellPressed((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_clicked(void* self, int row, int column) {
    QTableWidget_CellClicked((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_clicked(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellClicked((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_double_clicked(void* self, int row, int column) {
    QTableWidget_CellDoubleClicked((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_double_clicked(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellDoubleClicked((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_activated(void* self, int row, int column) {
    QTableWidget_CellActivated((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_activated(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellActivated((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_entered(void* self, int row, int column) {
    QTableWidget_CellEntered((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_entered(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellEntered((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_changed(void* self, int row, int column) {
    QTableWidget_CellChanged((QTableWidget*)self, row, column);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_changed(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_Connect_CellChanged((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
///
/// ``` QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn ```
void q_tablewidget_current_cell_changed(void* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
    QTableWidget_CurrentCellChanged((QTableWidget*)self, currentRow, currentColumn, previousRow, previousColumn);
}

/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int, int) ```
void q_tablewidget_on_current_cell_changed(void* self, void (*slot)(void*, int, int, int, int)) {
    QTableWidget_Connect_CurrentCellChanged((QTableWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// ``` QTableWidget* self, QEvent* e ```
bool q_tablewidget_event(void* self, void* e) {
    return QTableWidget_Event((QTableWidget*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QTableWidget_OnEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self, QEvent* e ```
bool q_tablewidget_qbase_event(void* self, void* e) {
    return QTableWidget_QBaseEvent((QTableWidget*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_mime_types(void* self) {
    libqt_list _arr = QTableWidget_MimeTypes((QTableWidget*)self);
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
/// ``` QTableWidget* self, const char** (*slot)() ```
void q_tablewidget_on_mime_types(void* self, const char** (*slot)()) {
    QTableWidget_OnMimeTypes((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_qbase_mime_types(void* self) {
    libqt_list _arr = QTableWidget_QBaseMimeTypes((QTableWidget*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// ``` QTableWidget* self, QTableWidgetItem* items[] ```
QMimeData* q_tablewidget_mime_data(void* self, void* items[]) {
    QTableWidgetItem** items_arr = (QTableWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTableWidgetItem*)items},
    };
    return QTableWidget_MimeData((QTableWidget*)self, items_list);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, QMimeData* (*slot)(QTableWidget*, QTableWidgetItem*[]) ```
void q_tablewidget_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QTableWidget_OnMimeData((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self, QTableWidgetItem* items[] ```
QMimeData* q_tablewidget_qbase_mime_data(void* self, void* items[]) {
    QTableWidgetItem** items_arr = (QTableWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTableWidgetItem*)items},
    };
    return QTableWidget_QBaseMimeData((QTableWidget*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// ``` QTableWidget* self, int row, int column, QMimeData* data, enum Qt__DropAction action ```
bool q_tablewidget_drop_mime_data(void* self, int row, int column, void* data, int64_t action) {
    return QTableWidget_DropMimeData((QTableWidget*)self, row, column, (QMimeData*)data, action);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, int, int, QMimeData*, enum Qt__DropAction) ```
void q_tablewidget_on_drop_mime_data(void* self, bool (*slot)(void*, int, int, void*, int64_t)) {
    QTableWidget_OnDropMimeData((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self, int row, int column, QMimeData* data, enum Qt__DropAction action ```
bool q_tablewidget_qbase_drop_mime_data(void* self, int row, int column, void* data, int64_t action) {
    return QTableWidget_QBaseDropMimeData((QTableWidget*)self, row, column, (QMimeData*)data, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_supported_drop_actions(void* self) {
    return QTableWidget_SupportedDropActions((QTableWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QTableWidget_OnSupportedDropActions((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_supported_drop_actions(void* self) {
    return QTableWidget_QBaseSupportedDropActions((QTableWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// ``` QTableWidget* self, QDropEvent* event ```
void q_tablewidget_drop_event(void* self, void* event) {
    QTableWidget_DropEvent((QTableWidget*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDropEvent*) ```
void q_tablewidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDropEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableWidget* self, QDropEvent* event ```
void q_tablewidget_qbase_drop_event(void* self, void* event) {
    QTableWidget_QBaseDropEvent((QTableWidget*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tablewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QTableWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tablewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTableWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// ``` QTableWidget* self, int column, enum Qt__SortOrder order ```
void q_tablewidget_sort_items2(void* self, int column, int64_t order) {
    QTableWidget_SortItems2((QTableWidget*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_scroll_to_item2(void* self, void* item, int64_t hint) {
    QTableWidget_ScrollToItem2((QTableWidget*)self, (QTableWidgetItem*)item, hint);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// ``` QTableWidget* self, QAbstractItemModel* model ```
void q_tablewidget_set_model(void* self, void* model) {
    QTableView_SetModel((QTableView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QTableView
///
/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QAbstractItemModel*) ```
void q_tablewidget_on_set_model(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetModel((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// Base class method implementation
///
/// ``` QTableWidget* self, QAbstractItemModel* model ```
void q_tablewidget_qbase_set_model(void* self, void* model) {
    QTableView_QBaseSetModel((QTableView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// ``` QTableWidget* self ```
QHeaderView* q_tablewidget_horizontal_header(void* self) {
    return QTableView_HorizontalHeader((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// ``` QTableWidget* self ```
QHeaderView* q_tablewidget_vertical_header(void* self) {
    return QTableView_VerticalHeader((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// ``` QTableWidget* self, QHeaderView* header ```
void q_tablewidget_set_horizontal_header(void* self, void* header) {
    QTableView_SetHorizontalHeader((QTableView*)self, (QHeaderView*)header);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// ``` QTableWidget* self, QHeaderView* header ```
void q_tablewidget_set_vertical_header(void* self, void* header) {
    QTableView_SetVerticalHeader((QTableView*)self, (QHeaderView*)header);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_row_viewport_position(void* self, int row) {
    return QTableView_RowViewportPosition((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// ``` QTableWidget* self, int y ```
int32_t q_tablewidget_row_at(void* self, int y) {
    return QTableView_RowAt((QTableView*)self, y);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// ``` QTableWidget* self, int row, int height ```
void q_tablewidget_set_row_height(void* self, int row, int height) {
    QTableView_SetRowHeight((QTableView*)self, row, height);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_row_height(void* self, int row) {
    return QTableView_RowHeight((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_column_viewport_position(void* self, int column) {
    return QTableView_ColumnViewportPosition((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// ``` QTableWidget* self, int x ```
int32_t q_tablewidget_column_at(void* self, int x) {
    return QTableView_ColumnAt((QTableView*)self, x);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// ``` QTableWidget* self, int column, int width ```
void q_tablewidget_set_column_width(void* self, int column, int width) {
    QTableView_SetColumnWidth((QTableView*)self, column, width);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_column_width(void* self, int column) {
    return QTableView_ColumnWidth((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// ``` QTableWidget* self, int row ```
bool q_tablewidget_is_row_hidden(void* self, int row) {
    return QTableView_IsRowHidden((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// ``` QTableWidget* self, int row, bool hide ```
void q_tablewidget_set_row_hidden(void* self, int row, bool hide) {
    QTableView_SetRowHidden((QTableView*)self, row, hide);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// ``` QTableWidget* self, int column ```
bool q_tablewidget_is_column_hidden(void* self, int column) {
    return QTableView_IsColumnHidden((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// ``` QTableWidget* self, int column, bool hide ```
void q_tablewidget_set_column_hidden(void* self, int column, bool hide) {
    QTableView_SetColumnHidden((QTableView*)self, column, hide);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_show_grid(void* self) {
    return QTableView_ShowGrid((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_grid_style(void* self) {
    return QTableView_GridStyle((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// ``` QTableWidget* self, enum Qt__PenStyle style ```
void q_tablewidget_set_grid_style(void* self, int64_t style) {
    QTableView_SetGridStyle((QTableView*)self, style);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// ``` QTableWidget* self, bool on ```
void q_tablewidget_set_word_wrap(void* self, bool on) {
    QTableView_SetWordWrap((QTableView*)self, on);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_word_wrap(void* self) {
    return QTableView_WordWrap((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_corner_button_enabled(void* self, bool enable) {
    QTableView_SetCornerButtonEnabled((QTableView*)self, enable);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_corner_button_enabled(void* self) {
    return QTableView_IsCornerButtonEnabled((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// ``` QTableWidget* self, int row, int column, int rowSpan, int columnSpan ```
void q_tablewidget_set_span(void* self, int row, int column, int rowSpan, int columnSpan) {
    QTableView_SetSpan((QTableView*)self, row, column, rowSpan, columnSpan);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// ``` QTableWidget* self, int row, int column ```
int32_t q_tablewidget_row_span(void* self, int row, int column) {
    return QTableView_RowSpan((QTableView*)self, row, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// ``` QTableWidget* self, int row, int column ```
int32_t q_tablewidget_column_span(void* self, int row, int column) {
    return QTableView_ColumnSpan((QTableView*)self, row, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_spans(void* self) {
    QTableView_ClearSpans((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_select_row(void* self, int row) {
    QTableView_SelectRow((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_select_column(void* self, int column) {
    QTableView_SelectColumn((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_hide_row(void* self, int row) {
    QTableView_HideRow((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_hide_column(void* self, int column) {
    QTableView_HideColumn((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_show_row(void* self, int row) {
    QTableView_ShowRow((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_show_column(void* self, int column) {
    QTableView_ShowColumn((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_resize_row_to_contents(void* self, int row) {
    QTableView_ResizeRowToContents((QTableView*)self, row);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_resize_rows_to_contents(void* self) {
    QTableView_ResizeRowsToContents((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_resize_column_to_contents(void* self, int column) {
    QTableView_ResizeColumnToContents((QTableView*)self, column);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_resize_columns_to_contents(void* self) {
    QTableView_ResizeColumnsToContents((QTableView*)self);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// ``` QTableWidget* self, int column, enum Qt__SortOrder order ```
void q_tablewidget_sort_by_column(void* self, int column, int64_t order) {
    QTableView_SortByColumn((QTableView*)self, column, order);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// ``` QTableWidget* self, bool show ```
void q_tablewidget_set_show_grid(void* self, bool show) {
    QTableView_SetShowGrid((QTableView*)self, show);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTableWidget* self ```
QAbstractItemModel* q_tablewidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTableWidget* self ```
QItemSelectionModel* q_tablewidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTableWidget* self, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableWidget* self ```
QAbstractItemDelegate* q_tablewidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__SelectionMode mode ```
void q_tablewidget_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTableWidget* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_tablewidget_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTableWidget* self ```
QModelIndex* q_tablewidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTableWidget* self ```
QModelIndex* q_tablewidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTableWidget* self, int triggers ```
void q_tablewidget_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_tablewidget_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_tablewidget_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTableWidget* self, int margin ```
void q_tablewidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTableWidget* self, bool overwrite ```
void q_tablewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__DragDropMode behavior ```
void q_tablewidget_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTableWidget* self, enum Qt__DropAction dropAction ```
void q_tablewidget_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTableWidget* self, QSize* size ```
void q_tablewidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTableWidget* self, enum Qt__TextElideMode mode ```
void q_tablewidget_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QSize* q_tablewidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTableWidget* self, QModelIndex* index, QWidget* widget ```
void q_tablewidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QWidget* q_tablewidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTableWidget* self, int row, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTableWidget* self, int row ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTableWidget* self, int column, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTableWidget* self, int column ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTableWidget* self ```
void q_tablewidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTableWidget* self ```
void q_tablewidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTableWidget* self ```
void q_tablewidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*) ```
void q_tablewidget_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTableWidget* self, QSize* size ```
void q_tablewidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_tablewidget_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTableWidget* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_tablewidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTableWidget* self ```
QScrollBar* q_tablewidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTableWidget* self, QScrollBar* scrollbar ```
void q_tablewidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTableWidget* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_tablewidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTableWidget* self ```
QScrollBar* q_tablewidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTableWidget* self, QScrollBar* scrollbar ```
void q_tablewidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTableWidget* self, QWidget* widget ```
void q_tablewidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTableWidget* self, QWidget* widget, int alignment ```
void q_tablewidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTableWidget* self, int alignment ```
libqt_list /* of QWidget* */ q_tablewidget_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTableWidget* self, QWidget* widget ```
void q_tablewidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTableWidget* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_tablewidget_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTableWidget* self, int frameStyle ```
void q_tablewidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTableWidget* self, enum QFrame__Shape frameShape ```
void q_tablewidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTableWidget* self, enum QFrame__Shadow frameShadow ```
void q_tablewidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTableWidget* self, int lineWidth ```
void q_tablewidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTableWidget* self, int midLineWidth ```
void q_tablewidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTableWidget* self, QRect* frameRect ```
void q_tablewidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTableWidget* self ```
void q_tablewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTableWidget* self ```
QStyle* q_tablewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTableWidget* self, QStyle* style ```
void q_tablewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTableWidget* self, enum Qt__WindowModality windowModality ```
void q_tablewidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTableWidget* self, QWidget* param1 ```
bool q_tablewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTableWidget* self, bool enabled ```
void q_tablewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTableWidget* self, bool disabled ```
void q_tablewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTableWidget* self, bool windowModified ```
void q_tablewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableWidget* self, QSize* minimumSize ```
void q_tablewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableWidget* self, int minw, int minh ```
void q_tablewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableWidget* self, QSize* maximumSize ```
void q_tablewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableWidget* self, int maxw, int maxh ```
void q_tablewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTableWidget* self, int minw ```
void q_tablewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTableWidget* self, int minh ```
void q_tablewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTableWidget* self, int maxw ```
void q_tablewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTableWidget* self, int maxh ```
void q_tablewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableWidget* self, QSize* sizeIncrement ```
void q_tablewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableWidget* self, QSize* baseSize ```
void q_tablewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableWidget* self, int basew, int baseh ```
void q_tablewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableWidget* self, QSize* fixedSize ```
void q_tablewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTableWidget* self, int w ```
void q_tablewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTableWidget* self, int h ```
void q_tablewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tablewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tablewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tablewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tablewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTableWidget* self ```
QPalette* q_tablewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTableWidget* self, QPalette* palette ```
void q_tablewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTableWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_tablewidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTableWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_tablewidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTableWidget* self ```
QFont* q_tablewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTableWidget* self, QFont* font ```
void q_tablewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTableWidget* self ```
QFontMetrics* q_tablewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTableWidget* self ```
QFontInfo* q_tablewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTableWidget* self ```
QCursor* q_tablewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTableWidget* self, QCursor* cursor ```
void q_tablewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableWidget* self, QBitmap* mask ```
void q_tablewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableWidget* self, QRegion* mask ```
void q_tablewidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target ```
void q_tablewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableWidget* self ```
QPixmap* q_tablewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTableWidget* self ```
QGraphicsEffect* q_tablewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTableWidget* self, QGraphicsEffect* effect ```
void q_tablewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal ```
void q_tablewidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal ```
void q_tablewidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTableWidget* self, const char* windowTitle ```
void q_tablewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTableWidget* self, const char* styleSheet ```
void q_tablewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTableWidget* self, QIcon* icon ```
void q_tablewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTableWidget* self ```
QIcon* q_tablewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTableWidget* self, const char* windowIconText ```
void q_tablewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTableWidget* self, const char* windowRole ```
void q_tablewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTableWidget* self, const char* filePath ```
void q_tablewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTableWidget* self, double level ```
void q_tablewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTableWidget* self ```
double q_tablewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTableWidget* self, const char* toolTip ```
void q_tablewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTableWidget* self, int msec ```
void q_tablewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTableWidget* self, const char* statusTip ```
void q_tablewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTableWidget* self, const char* whatsThis ```
void q_tablewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTableWidget* self, const char* name ```
void q_tablewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTableWidget* self, const char* description ```
void q_tablewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTableWidget* self, enum Qt__LayoutDirection direction ```
void q_tablewidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTableWidget* self, QLocale* locale ```
void q_tablewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTableWidget* self ```
QLocale* q_tablewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableWidget* self ```
void q_tablewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTableWidget* self ```
void q_tablewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableWidget* self, enum Qt__FocusReason reason ```
void q_tablewidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTableWidget* self, enum Qt__FocusPolicy policy ```
void q_tablewidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tablewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTableWidget* self, QWidget* focusProxy ```
void q_tablewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTableWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_tablewidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableWidget* self ```
void q_tablewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableWidget* self, QCursor* param1 ```
void q_tablewidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTableWidget* self ```
void q_tablewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTableWidget* self ```
void q_tablewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTableWidget* self ```
void q_tablewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableWidget* self, QKeySequence* key ```
int32_t q_tablewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tablewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tablewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTableWidget* self ```
QGraphicsProxyWidget* q_tablewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self ```
void q_tablewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, QRect* param1 ```
void q_tablewidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, QRegion* param1 ```
void q_tablewidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, QRect* param1 ```
void q_tablewidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, QRegion* param1 ```
void q_tablewidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTableWidget* self, bool hidden ```
void q_tablewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTableWidget* self ```
void q_tablewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTableWidget* self ```
void q_tablewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTableWidget* self ```
void q_tablewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTableWidget* self, QWidget* param1 ```
void q_tablewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableWidget* self, int x, int y ```
void q_tablewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableWidget* self, QPoint* param1 ```
void q_tablewidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableWidget* self, QSize* param1 ```
void q_tablewidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableWidget* self, QRect* geometry ```
void q_tablewidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTableWidget* self ```
char* q_tablewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTableWidget* self, const char* geometry ```
bool q_tablewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTableWidget* self ```
void q_tablewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTableWidget* self, QWidget* param1 ```
bool q_tablewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTableWidget* self, int state ```
void q_tablewidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTableWidget* self, int state ```
void q_tablewidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTableWidget* self ```
QSizePolicy* q_tablewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableWidget* self, QSizePolicy* sizePolicy ```
void q_tablewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tablewidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableWidget* self, QMargins* margins ```
void q_tablewidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTableWidget* self ```
QLayout* q_tablewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTableWidget* self, QLayout* layout ```
void q_tablewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableWidget* self, QWidget* parent ```
void q_tablewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableWidget* self, QWidget* parent, int f ```
void q_tablewidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableWidget* self, int dx, int dy, QRect* param3 ```
void q_tablewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTableWidget* self, bool on ```
void q_tablewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QAction* action ```
void q_tablewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTableWidget* self, QAction* actions[] ```
void q_tablewidget_add_actions(void* self, void* actions[]) {
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
/// ``` QTableWidget* self, QAction* before, QAction* actions[] ```
void q_tablewidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QTableWidget* self, QAction* before, QAction* action ```
void q_tablewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTableWidget* self, QAction* action ```
void q_tablewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTableWidget* self ```
libqt_list /* of QAction* */ q_tablewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, const char* text ```
QAction* q_tablewidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QIcon* icon, const char* text ```
QAction* q_tablewidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_tablewidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tablewidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTableWidget* self, int typeVal ```
void q_tablewidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableWidget* self, enum Qt__WindowType param1 ```
void q_tablewidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTableWidget* self, int typeVal ```
void q_tablewidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tablewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableWidget* self, int x, int y ```
QWidget* q_tablewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableWidget* self, QPoint* p ```
QWidget* q_tablewidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1 ```
void q_tablewidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_tablewidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTableWidget* self ```
void q_tablewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTableWidget* self, QWidget* child ```
bool q_tablewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTableWidget* self, bool enabled ```
void q_tablewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTableWidget* self ```
QBackingStore* q_tablewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTableWidget* self ```
QWindow* q_tablewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTableWidget* self ```
QScreen* q_tablewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTableWidget* self, QScreen* screen ```
void q_tablewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tablewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTableWidget* self, const char* title ```
void q_tablewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tablewidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTableWidget* self, QIcon* icon ```
void q_tablewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_tablewidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTableWidget* self, const char* iconText ```
void q_tablewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tablewidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTableWidget* self, QPoint* pos ```
void q_tablewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_tablewidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTableWidget* self, int hints ```
void q_tablewidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tablewidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tablewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tablewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_tablewidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tablewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tablewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableWidget* self, QRect* rectangle ```
QPixmap* q_tablewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_tablewidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tablewidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableWidget* self, int id, bool enable ```
void q_tablewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableWidget* self, int id, bool enable ```
void q_tablewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableWidget* self, enum Qt__WindowType param1, bool on ```
void q_tablewidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tablewidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tablewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tablewidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTableWidget* self, const char* name ```
void q_tablewidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTableWidget* self, bool b ```
bool q_tablewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTableWidget* self ```
QThread* q_tablewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTableWidget* self, QThread* thread ```
void q_tablewidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableWidget* self, int interval ```
int32_t q_tablewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTableWidget* self ```
libqt_list /* of QObject* */ q_tablewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTableWidget* self, QObject* filterObj ```
void q_tablewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTableWidget* self, QObject* obj ```
void q_tablewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tablewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tablewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tablewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tablewidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTableWidget* self ```
void q_tablewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTableWidget* self ```
void q_tablewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTableWidget* self, const char* name, QVariant* value ```
bool q_tablewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTableWidget* self, const char* name ```
QVariant* q_tablewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_dynamic_property_names(void* self) {
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
/// ``` QTableWidget* self ```
QBindingStorage* q_tablewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableWidget* self ```
QBindingStorage* q_tablewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self ```
void q_tablewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTableWidget* self, void (*slot)(QObject*) ```
void q_tablewidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTableWidget* self, const char* classname ```
bool q_tablewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTableWidget* self ```
void q_tablewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tablewidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tablewidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tablewidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self, QObject* param1 ```
void q_tablewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTableWidget* self, void (*slot)(QObject*, QObject*) ```
void q_tablewidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTableWidget* self ```
double q_tablewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTableWidget* self ```
double q_tablewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tablewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_set_root_index(void* self, void* index) {
    QTableWidget_SetRootIndex((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_qbase_set_root_index(void* self, void* index) {
    QTableWidget_QBaseSetRootIndex((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnSetRootIndex((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelectionModel* selectionModel ```
void q_tablewidget_set_selection_model(void* self, void* selectionModel) {
    QTableWidget_SetSelectionModel((QTableWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelectionModel* selectionModel ```
void q_tablewidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QTableWidget_QBaseSetSelectionModel((QTableWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QItemSelectionModel*) ```
void q_tablewidget_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnSetSelectionModel((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_do_items_layout(void* self) {
    QTableWidget_DoItemsLayout((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_do_items_layout(void* self) {
    QTableWidget_QBaseDoItemsLayout((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_do_items_layout(void* self, void (*slot)()) {
    QTableWidget_OnDoItemsLayout((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QRect* q_tablewidget_visual_rect(void* self, void* index) {
    return QTableWidget_VisualRect((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QRect* q_tablewidget_qbase_visual_rect(void* self, void* index) {
    return QTableWidget_QBaseVisualRect((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QRect* (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QTableWidget_OnVisualRect((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_scroll_to(void* self, void* index, int64_t hint) {
    QTableWidget_ScrollTo((QTableWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTableWidget_QBaseScrollTo((QTableWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_tablewidget_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableWidget_OnScrollTo((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPoint* p ```
QModelIndex* q_tablewidget_index_at(void* self, void* p) {
    return QTableWidget_IndexAt((QTableWidget*)self, (QPoint*)p);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* p ```
QModelIndex* q_tablewidget_qbase_index_at(void* self, void* p) {
    return QTableWidget_QBaseIndexAt((QTableWidget*)self, (QPoint*)p);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* (*slot)(QTableWidget*, QPoint*) ```
void q_tablewidget_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTableWidget_OnIndexAt((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll_contents_by(void* self, int dx, int dy) {
    QTableWidget_ScrollContentsBy((QTableWidget*)self, dx, dy);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTableWidget_QBaseScrollContentsBy((QTableWidget*)self, dx, dy);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_OnScrollContentsBy((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionViewItem* option ```
void q_tablewidget_init_view_item_option(void* self, void* option) {
    QTableWidget_InitViewItemOption((QTableWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionViewItem* option ```
void q_tablewidget_qbase_init_view_item_option(void* self, void* option) {
    QTableWidget_QBaseInitViewItemOption((QTableWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QStyleOptionViewItem*) ```
void q_tablewidget_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnInitViewItemOption((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPaintEvent* e ```
void q_tablewidget_paint_event(void* self, void* e) {
    QTableWidget_PaintEvent((QTableWidget*)self, (QPaintEvent*)e);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintEvent* e ```
void q_tablewidget_qbase_paint_event(void* self, void* e) {
    QTableWidget_QBasePaintEvent((QTableWidget*)self, (QPaintEvent*)e);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPaintEvent*) ```
void q_tablewidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnPaintEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QTimerEvent* event ```
void q_tablewidget_timer_event(void* self, void* event) {
    QTableWidget_TimerEvent((QTableWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QTimerEvent* event ```
void q_tablewidget_qbase_timer_event(void* self, void* event) {
    QTableWidget_QBaseTimerEvent((QTableWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTimerEvent*) ```
void q_tablewidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnTimerEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_horizontal_offset(void* self) {
    return QTableWidget_HorizontalOffset((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_horizontal_offset(void* self) {
    return QTableWidget_QBaseHorizontalOffset((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QTableWidget_OnHorizontalOffset((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_vertical_offset(void* self) {
    return QTableWidget_VerticalOffset((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_vertical_offset(void* self) {
    return QTableWidget_QBaseVerticalOffset((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_vertical_offset(void* self, int32_t (*slot)()) {
    QTableWidget_OnVerticalOffset((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tablewidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableWidget_MoveCursor((QTableWidget*)self, cursorAction, modifiers);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tablewidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableWidget_QBaseMoveCursor((QTableWidget*)self, cursorAction, modifiers);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* (*slot)(QTableWidget*, enum QAbstractItemView__CursorAction, int) ```
void q_tablewidget_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QTableWidget_OnMoveCursor((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QRect* rect, int command ```
void q_tablewidget_set_selection(void* self, void* rect, int64_t command) {
    QTableWidget_SetSelection((QTableWidget*)self, (QRect*)rect, command);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QRect* rect, int command ```
void q_tablewidget_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTableWidget_QBaseSetSelection((QTableWidget*)self, (QRect*)rect, command);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QRect*, int) ```
void q_tablewidget_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableWidget_OnSetSelection((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selection ```
QRegion* q_tablewidget_visual_region_for_selection(void* self, void* selection) {
    return QTableWidget_VisualRegionForSelection((QTableWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selection ```
QRegion* q_tablewidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTableWidget_QBaseVisualRegionForSelection((QTableWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QRegion* (*slot)(QTableWidget*, QItemSelection*) ```
void q_tablewidget_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QTableWidget_OnVisualRegionForSelection((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
libqt_list /* of QModelIndex* */ q_tablewidget_selected_indexes(void* self) {
    libqt_list _arr = QTableWidget_SelectedIndexes((QTableWidget*)self);
    return _arr;
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
libqt_list /* of QModelIndex* */ q_tablewidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTableWidget_QBaseSelectedIndexes((QTableWidget*)self);
    return _arr;
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_tablewidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTableWidget_OnSelectedIndexes((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_geometries(void* self) {
    QTableWidget_UpdateGeometries((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_geometries(void* self) {
    QTableWidget_QBaseUpdateGeometries((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_geometries(void* self, void (*slot)()) {
    QTableWidget_OnUpdateGeometries((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_viewport_size_hint(void* self) {
    return QTableWidget_ViewportSizeHint((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_viewport_size_hint(void* self) {
    return QTableWidget_QBaseViewportSizeHint((QTableWidget*)self);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTableWidget_OnViewportSizeHint((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_size_hint_for_row(void* self, int row) {
    return QTableWidget_SizeHintForRow((QTableWidget*)self, row);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_qbase_size_hint_for_row(void* self, int row) {
    return QTableWidget_QBaseSizeHintForRow((QTableWidget*)self, row);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QTableWidget_OnSizeHintForRow((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_size_hint_for_column(void* self, int column) {
    return QTableWidget_SizeHintForColumn((QTableWidget*)self, column);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_qbase_size_hint_for_column(void* self, int column) {
    return QTableWidget_QBaseSizeHintForColumn((QTableWidget*)self, column);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QTableWidget_OnSizeHintForColumn((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_vertical_scrollbar_action(void* self, int action) {
    QTableWidget_VerticalScrollbarAction((QTableWidget*)self, action);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QTableWidget_QBaseVerticalScrollbarAction((QTableWidget*)self, action);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableWidget_OnVerticalScrollbarAction((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_horizontal_scrollbar_action(void* self, int action) {
    QTableWidget_HorizontalScrollbarAction((QTableWidget*)self, action);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTableWidget_QBaseHorizontalScrollbarAction((QTableWidget*)self, action);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableWidget_OnHorizontalScrollbarAction((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
bool q_tablewidget_is_index_hidden(void* self, void* index) {
    return QTableWidget_IsIndexHidden((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
bool q_tablewidget_qbase_is_index_hidden(void* self, void* index) {
    return QTableWidget_QBaseIsIndexHidden((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QTableWidget_OnIsIndexHidden((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tablewidget_selection_changed(void* self, void* selected, void* deselected) {
    QTableWidget_SelectionChanged((QTableWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tablewidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTableWidget_QBaseSelectionChanged((QTableWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QItemSelection*, QItemSelection*) ```
void q_tablewidget_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableWidget_OnSelectionChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_tablewidget_current_changed(void* self, void* current, void* previous) {
    QTableWidget_CurrentChanged((QTableWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_tablewidget_qbase_current_changed(void* self, void* current, void* previous) {
    QTableWidget_QBaseCurrentChanged((QTableWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, QModelIndex*) ```
void q_tablewidget_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableWidget_OnCurrentChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* search ```
void q_tablewidget_keyboard_search(void* self, const char* search) {
    QTableWidget_KeyboardSearch((QTableWidget*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* search ```
void q_tablewidget_qbase_keyboard_search(void* self, const char* search) {
    QTableWidget_QBaseKeyboardSearch((QTableWidget*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, const char*) ```
void q_tablewidget_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QTableWidget_OnKeyboardSearch((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_index(void* self, void* index) {
    return QTableWidget_ItemDelegateForIndex((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QTableWidget_QBaseItemDelegateForIndex((QTableWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QAbstractItemDelegate* (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QTableWidget_OnItemDelegateForIndex((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_tablewidget_input_method_query(void* self, int64_t query) {
    return QTableWidget_InputMethodQuery((QTableWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_tablewidget_qbase_input_method_query(void* self, int64_t query) {
    return QTableWidget_QBaseInputMethodQuery((QTableWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QVariant* (*slot)(QTableWidget*, enum Qt__InputMethodQuery) ```
void q_tablewidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTableWidget_OnInputMethodQuery((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset(void* self) {
    QTableWidget_Reset((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_reset(void* self) {
    QTableWidget_QBaseReset((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_reset(void* self, void (*slot)()) {
    QTableWidget_OnReset((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_select_all(void* self) {
    QTableWidget_SelectAll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_select_all(void* self) {
    QTableWidget_QBaseSelectAll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_select_all(void* self, void (*slot)()) {
    QTableWidget_OnSelectAll((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_tablewidget_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTableWidget_DataChanged((QTableWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_tablewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTableWidget_QBaseDataChanged((QTableWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, QModelIndex*, int*[]) ```
void q_tablewidget_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QTableWidget_OnDataChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_rows_inserted(void* self, void* parent, int start, int end) {
    QTableWidget_RowsInserted((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTableWidget_QBaseRowsInserted((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, int, int) ```
void q_tablewidget_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QTableWidget_OnRowsInserted((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableWidget_RowsAboutToBeRemoved((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableWidget_QBaseRowsAboutToBeRemoved((QTableWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, int, int) ```
void q_tablewidget_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTableWidget_OnRowsAboutToBeRemoved((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_editor_data(void* self) {
    QTableWidget_UpdateEditorData((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_editor_data(void* self) {
    QTableWidget_QBaseUpdateEditorData((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_editor_data(void* self, void (*slot)()) {
    QTableWidget_OnUpdateEditorData((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_editor_geometries(void* self) {
    QTableWidget_UpdateEditorGeometries((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_editor_geometries(void* self) {
    QTableWidget_QBaseUpdateEditorGeometries((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_editor_geometries(void* self, void (*slot)()) {
    QTableWidget_OnUpdateEditorGeometries((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_vertical_scrollbar_value_changed(void* self, int value) {
    QTableWidget_VerticalScrollbarValueChanged((QTableWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTableWidget_QBaseVerticalScrollbarValueChanged((QTableWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableWidget_OnVerticalScrollbarValueChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableWidget_HorizontalScrollbarValueChanged((QTableWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableWidget_QBaseHorizontalScrollbarValueChanged((QTableWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableWidget_OnHorizontalScrollbarValueChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tablewidget_close_editor(void* self, void* editor, int64_t hint) {
    QTableWidget_CloseEditor((QTableWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tablewidget_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTableWidget_QBaseCloseEditor((QTableWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_tablewidget_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableWidget_OnCloseEditor((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor ```
void q_tablewidget_commit_data(void* self, void* editor) {
    QTableWidget_CommitData((QTableWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor ```
void q_tablewidget_qbase_commit_data(void* self, void* editor) {
    QTableWidget_QBaseCommitData((QTableWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*) ```
void q_tablewidget_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnCommitData((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QObject* editor ```
void q_tablewidget_editor_destroyed(void* self, void* editor) {
    QTableWidget_EditorDestroyed((QTableWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* editor ```
void q_tablewidget_qbase_editor_destroyed(void* self, void* editor) {
    QTableWidget_QBaseEditorDestroyed((QTableWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QObject*) ```
void q_tablewidget_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnEditorDestroyed((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tablewidget_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableWidget_Edit2((QTableWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tablewidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableWidget_QBaseEdit2((QTableWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_tablewidget_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QTableWidget_OnEdit2((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_tablewidget_selection_command(void* self, void* index, void* event) {
    return QTableWidget_SelectionCommand((QTableWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_tablewidget_qbase_selection_command(void* self, void* index, void* event) {
    return QTableWidget_QBaseSelectionCommand((QTableWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)(QTableWidget*, QModelIndex*, QEvent*) ```
void q_tablewidget_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QTableWidget_OnSelectionCommand((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int supportedActions ```
void q_tablewidget_start_drag(void* self, int64_t supportedActions) {
    QTableWidget_StartDrag((QTableWidget*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int supportedActions ```
void q_tablewidget_qbase_start_drag(void* self, int64_t supportedActions) {
    QTableWidget_QBaseStartDrag((QTableWidget*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QTableWidget_OnStartDrag((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, bool next ```
bool q_tablewidget_focus_next_prev_child(void* self, bool next) {
    return QTableWidget_FocusNextPrevChild((QTableWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, bool next ```
bool q_tablewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTableWidget_QBaseFocusNextPrevChild((QTableWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, bool) ```
void q_tablewidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTableWidget_OnFocusNextPrevChild((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
bool q_tablewidget_viewport_event(void* self, void* event) {
    return QTableWidget_ViewportEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
bool q_tablewidget_qbase_viewport_event(void* self, void* event) {
    return QTableWidget_QBaseViewportEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTableWidget_OnViewportEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_press_event(void* self, void* event) {
    QTableWidget_MousePressEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_press_event(void* self, void* event) {
    QTableWidget_QBaseMousePressEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnMousePressEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_move_event(void* self, void* event) {
    QTableWidget_MouseMoveEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_move_event(void* self, void* event) {
    QTableWidget_QBaseMouseMoveEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnMouseMoveEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_release_event(void* self, void* event) {
    QTableWidget_MouseReleaseEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_release_event(void* self, void* event) {
    QTableWidget_QBaseMouseReleaseEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnMouseReleaseEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_double_click_event(void* self, void* event) {
    QTableWidget_MouseDoubleClickEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTableWidget_QBaseMouseDoubleClickEvent((QTableWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnMouseDoubleClickEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragEnterEvent* event ```
void q_tablewidget_drag_enter_event(void* self, void* event) {
    QTableWidget_DragEnterEvent((QTableWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragEnterEvent* event ```
void q_tablewidget_qbase_drag_enter_event(void* self, void* event) {
    QTableWidget_QBaseDragEnterEvent((QTableWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragEnterEvent*) ```
void q_tablewidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDragEnterEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragMoveEvent* event ```
void q_tablewidget_drag_move_event(void* self, void* event) {
    QTableWidget_DragMoveEvent((QTableWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragMoveEvent* event ```
void q_tablewidget_qbase_drag_move_event(void* self, void* event) {
    QTableWidget_QBaseDragMoveEvent((QTableWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragMoveEvent*) ```
void q_tablewidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDragMoveEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragLeaveEvent* event ```
void q_tablewidget_drag_leave_event(void* self, void* event) {
    QTableWidget_DragLeaveEvent((QTableWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragLeaveEvent* event ```
void q_tablewidget_qbase_drag_leave_event(void* self, void* event) {
    QTableWidget_QBaseDragLeaveEvent((QTableWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragLeaveEvent*) ```
void q_tablewidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDragLeaveEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_focus_in_event(void* self, void* event) {
    QTableWidget_FocusInEvent((QTableWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_qbase_focus_in_event(void* self, void* event) {
    QTableWidget_QBaseFocusInEvent((QTableWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QFocusEvent*) ```
void q_tablewidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnFocusInEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_focus_out_event(void* self, void* event) {
    QTableWidget_FocusOutEvent((QTableWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_qbase_focus_out_event(void* self, void* event) {
    QTableWidget_QBaseFocusOutEvent((QTableWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QFocusEvent*) ```
void q_tablewidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnFocusOutEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_key_press_event(void* self, void* event) {
    QTableWidget_KeyPressEvent((QTableWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_qbase_key_press_event(void* self, void* event) {
    QTableWidget_QBaseKeyPressEvent((QTableWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QKeyEvent*) ```
void q_tablewidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnKeyPressEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QResizeEvent* event ```
void q_tablewidget_resize_event(void* self, void* event) {
    QTableWidget_ResizeEvent((QTableWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QResizeEvent* event ```
void q_tablewidget_qbase_resize_event(void* self, void* event) {
    QTableWidget_QBaseResizeEvent((QTableWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QResizeEvent*) ```
void q_tablewidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnResizeEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QInputMethodEvent* event ```
void q_tablewidget_input_method_event(void* self, void* event) {
    QTableWidget_InputMethodEvent((QTableWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QInputMethodEvent* event ```
void q_tablewidget_qbase_input_method_event(void* self, void* event) {
    QTableWidget_QBaseInputMethodEvent((QTableWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QInputMethodEvent*) ```
void q_tablewidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnInputMethodEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QObject* object, QEvent* event ```
bool q_tablewidget_event_filter(void* self, void* object, void* event) {
    return QTableWidget_EventFilter((QTableWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* object, QEvent* event ```
bool q_tablewidget_qbase_event_filter(void* self, void* object, void* event) {
    return QTableWidget_QBaseEventFilter((QTableWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QObject*, QEvent*) ```
void q_tablewidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTableWidget_OnEventFilter((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_minimum_size_hint(void* self) {
    return QTableWidget_MinimumSizeHint((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_minimum_size_hint(void* self) {
    return QTableWidget_QBaseMinimumSizeHint((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTableWidget_OnMinimumSizeHint((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size_hint(void* self) {
    return QTableWidget_SizeHint((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_size_hint(void* self) {
    return QTableWidget_QBaseSizeHint((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_size_hint(void* self, QSize* (*slot)()) {
    QTableWidget_OnSizeHint((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* viewport ```
void q_tablewidget_setup_viewport(void* self, void* viewport) {
    QTableWidget_SetupViewport((QTableWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* viewport ```
void q_tablewidget_qbase_setup_viewport(void* self, void* viewport) {
    QTableWidget_QBaseSetupViewport((QTableWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*) ```
void q_tablewidget_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnSetupViewport((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWheelEvent* param1 ```
void q_tablewidget_wheel_event(void* self, void* param1) {
    QTableWidget_WheelEvent((QTableWidget*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWheelEvent* param1 ```
void q_tablewidget_qbase_wheel_event(void* self, void* param1) {
    QTableWidget_QBaseWheelEvent((QTableWidget*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWheelEvent*) ```
void q_tablewidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnWheelEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QContextMenuEvent* param1 ```
void q_tablewidget_context_menu_event(void* self, void* param1) {
    QTableWidget_ContextMenuEvent((QTableWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QContextMenuEvent* param1 ```
void q_tablewidget_qbase_context_menu_event(void* self, void* param1) {
    QTableWidget_QBaseContextMenuEvent((QTableWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QContextMenuEvent*) ```
void q_tablewidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnContextMenuEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* param1 ```
void q_tablewidget_change_event(void* self, void* param1) {
    QTableWidget_ChangeEvent((QTableWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* param1 ```
void q_tablewidget_qbase_change_event(void* self, void* param1) {
    QTableWidget_QBaseChangeEvent((QTableWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnChangeEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionFrame* option ```
void q_tablewidget_init_style_option(void* self, void* option) {
    QTableWidget_InitStyleOption((QTableWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionFrame* option ```
void q_tablewidget_qbase_init_style_option(void* self, void* option) {
    QTableWidget_QBaseInitStyleOption((QTableWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QStyleOptionFrame*) ```
void q_tablewidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnInitStyleOption((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_dev_type(void* self) {
    return QTableWidget_DevType((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_dev_type(void* self) {
    return QTableWidget_QBaseDevType((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_dev_type(void* self, int32_t (*slot)()) {
    QTableWidget_OnDevType((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, bool visible ```
void q_tablewidget_set_visible(void* self, bool visible) {
    QTableWidget_SetVisible((QTableWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, bool visible ```
void q_tablewidget_qbase_set_visible(void* self, bool visible) {
    QTableWidget_QBaseSetVisible((QTableWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, bool) ```
void q_tablewidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTableWidget_OnSetVisible((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int param1 ```
int32_t q_tablewidget_height_for_width(void* self, int param1) {
    return QTableWidget_HeightForWidth((QTableWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int param1 ```
int32_t q_tablewidget_qbase_height_for_width(void* self, int param1) {
    return QTableWidget_QBaseHeightForWidth((QTableWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTableWidget_OnHeightForWidth((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_height_for_width(void* self) {
    return QTableWidget_HasHeightForWidth((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_has_height_for_width(void* self) {
    return QTableWidget_QBaseHasHeightForWidth((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QTableWidget_OnHasHeightForWidth((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPaintEngine* q_tablewidget_paint_engine(void* self) {
    return QTableWidget_PaintEngine((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPaintEngine* q_tablewidget_qbase_paint_engine(void* self) {
    return QTableWidget_QBasePaintEngine((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintEngine* (*slot)() ```
void q_tablewidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTableWidget_OnPaintEngine((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_key_release_event(void* self, void* event) {
    QTableWidget_KeyReleaseEvent((QTableWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_qbase_key_release_event(void* self, void* event) {
    QTableWidget_QBaseKeyReleaseEvent((QTableWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QKeyEvent*) ```
void q_tablewidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnKeyReleaseEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEnterEvent* event ```
void q_tablewidget_enter_event(void* self, void* event) {
    QTableWidget_EnterEvent((QTableWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEnterEvent* event ```
void q_tablewidget_qbase_enter_event(void* self, void* event) {
    QTableWidget_QBaseEnterEvent((QTableWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEnterEvent*) ```
void q_tablewidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnEnterEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_leave_event(void* self, void* event) {
    QTableWidget_LeaveEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_qbase_leave_event(void* self, void* event) {
    QTableWidget_QBaseLeaveEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnLeaveEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMoveEvent* event ```
void q_tablewidget_move_event(void* self, void* event) {
    QTableWidget_MoveEvent((QTableWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMoveEvent* event ```
void q_tablewidget_qbase_move_event(void* self, void* event) {
    QTableWidget_QBaseMoveEvent((QTableWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMoveEvent*) ```
void q_tablewidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnMoveEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QCloseEvent* event ```
void q_tablewidget_close_event(void* self, void* event) {
    QTableWidget_CloseEvent((QTableWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QCloseEvent* event ```
void q_tablewidget_qbase_close_event(void* self, void* event) {
    QTableWidget_QBaseCloseEvent((QTableWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QCloseEvent*) ```
void q_tablewidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnCloseEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QTabletEvent* event ```
void q_tablewidget_tablet_event(void* self, void* event) {
    QTableWidget_TabletEvent((QTableWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QTabletEvent* event ```
void q_tablewidget_qbase_tablet_event(void* self, void* event) {
    QTableWidget_QBaseTabletEvent((QTableWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTabletEvent*) ```
void q_tablewidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnTabletEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QActionEvent* event ```
void q_tablewidget_action_event(void* self, void* event) {
    QTableWidget_ActionEvent((QTableWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QActionEvent* event ```
void q_tablewidget_qbase_action_event(void* self, void* event) {
    QTableWidget_QBaseActionEvent((QTableWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QActionEvent*) ```
void q_tablewidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnActionEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QShowEvent* event ```
void q_tablewidget_show_event(void* self, void* event) {
    QTableWidget_ShowEvent((QTableWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QShowEvent* event ```
void q_tablewidget_qbase_show_event(void* self, void* event) {
    QTableWidget_QBaseShowEvent((QTableWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QShowEvent*) ```
void q_tablewidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnShowEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QHideEvent* event ```
void q_tablewidget_hide_event(void* self, void* event) {
    QTableWidget_HideEvent((QTableWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QHideEvent* event ```
void q_tablewidget_qbase_hide_event(void* self, void* event) {
    QTableWidget_QBaseHideEvent((QTableWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QHideEvent*) ```
void q_tablewidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnHideEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tablewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableWidget_NativeEvent((QTableWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tablewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableWidget_QBaseNativeEvent((QTableWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, const char*, void*, intptr_t*) ```
void q_tablewidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTableWidget_OnNativeEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tablewidget_metric(void* self, int64_t param1) {
    return QTableWidget_Metric((QTableWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tablewidget_qbase_metric(void* self, int64_t param1) {
    return QTableWidget_QBaseMetric((QTableWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tablewidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTableWidget_OnMetric((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_init_painter(void* self, void* painter) {
    QTableWidget_InitPainter((QTableWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_qbase_init_painter(void* self, void* painter) {
    QTableWidget_QBaseInitPainter((QTableWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPainter*) ```
void q_tablewidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnInitPainter((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPoint* offset ```
QPaintDevice* q_tablewidget_redirected(void* self, void* offset) {
    return QTableWidget_Redirected((QTableWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* offset ```
QPaintDevice* q_tablewidget_qbase_redirected(void* self, void* offset) {
    return QTableWidget_QBaseRedirected((QTableWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintDevice* (*slot)(QTableWidget*, QPoint*) ```
void q_tablewidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTableWidget_OnRedirected((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPainter* q_tablewidget_shared_painter(void* self) {
    return QTableWidget_SharedPainter((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPainter* q_tablewidget_qbase_shared_painter(void* self) {
    return QTableWidget_QBaseSharedPainter((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* (*slot)() ```
void q_tablewidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTableWidget_OnSharedPainter((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QChildEvent* event ```
void q_tablewidget_child_event(void* self, void* event) {
    QTableWidget_ChildEvent((QTableWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QChildEvent* event ```
void q_tablewidget_qbase_child_event(void* self, void* event) {
    QTableWidget_QBaseChildEvent((QTableWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QChildEvent*) ```
void q_tablewidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnChildEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_custom_event(void* self, void* event) {
    QTableWidget_CustomEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_qbase_custom_event(void* self, void* event) {
    QTableWidget_QBaseCustomEvent((QTableWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnCustomEvent((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_connect_notify(void* self, void* signal) {
    QTableWidget_ConnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_qbase_connect_notify(void* self, void* signal) {
    QTableWidget_QBaseConnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnConnectNotify((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_disconnect_notify(void* self, void* signal) {
    QTableWidget_DisconnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_qbase_disconnect_notify(void* self, void* signal) {
    QTableWidget_QBaseDisconnectNotify((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDisconnectNotify((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldIndex, int newIndex ```
void q_tablewidget_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableWidget_RowMoved((QTableWidget*)self, row, oldIndex, newIndex);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldIndex, int newIndex ```
void q_tablewidget_qbase_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableWidget_QBaseRowMoved((QTableWidget*)self, row, oldIndex, newIndex);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_row_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableWidget_OnRowMoved((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldIndex, int newIndex ```
void q_tablewidget_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableWidget_ColumnMoved((QTableWidget*)self, column, oldIndex, newIndex);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldIndex, int newIndex ```
void q_tablewidget_qbase_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableWidget_QBaseColumnMoved((QTableWidget*)self, column, oldIndex, newIndex);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_column_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableWidget_OnColumnMoved((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldHeight, int newHeight ```
void q_tablewidget_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableWidget_RowResized((QTableWidget*)self, row, oldHeight, newHeight);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldHeight, int newHeight ```
void q_tablewidget_qbase_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableWidget_QBaseRowResized((QTableWidget*)self, row, oldHeight, newHeight);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_row_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableWidget_OnRowResized((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldWidth, int newWidth ```
void q_tablewidget_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableWidget_ColumnResized((QTableWidget*)self, column, oldWidth, newWidth);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldWidth, int newWidth ```
void q_tablewidget_qbase_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableWidget_QBaseColumnResized((QTableWidget*)self, column, oldWidth, newWidth);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_column_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableWidget_OnColumnResized((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_row_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_RowCountChanged((QTableWidget*)self, oldCount, newCount);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_qbase_row_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_QBaseRowCountChanged((QTableWidget*)self, oldCount, newCount);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_row_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_OnRowCountChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_column_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_ColumnCountChanged((QTableWidget*)self, oldCount, newCount);
}

/// Inherited from QTableView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTableWidget_QBaseColumnCountChanged((QTableWidget*)self, oldCount, newCount);
}

/// Inherited from QTableView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_column_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_OnColumnCountChanged((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_state(void* self) {
    return QTableWidget_State((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_state(void* self) {
    return QTableWidget_QBaseState((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_state(void* self, int64_t (*slot)()) {
    QTableWidget_OnState((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__State state ```
void q_tablewidget_set_state(void* self, int64_t state) {
    QTableWidget_SetState((QTableWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__State state ```
void q_tablewidget_qbase_set_state(void* self, int64_t state) {
    QTableWidget_QBaseSetState((QTableWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, enum QAbstractItemView__State) ```
void q_tablewidget_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QTableWidget_OnSetState((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_schedule_delayed_items_layout(void* self) {
    QTableWidget_ScheduleDelayedItemsLayout((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_schedule_delayed_items_layout(void* self) {
    QTableWidget_QBaseScheduleDelayedItemsLayout((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QTableWidget_OnScheduleDelayedItemsLayout((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_execute_delayed_items_layout(void* self) {
    QTableWidget_ExecuteDelayedItemsLayout((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_execute_delayed_items_layout(void* self) {
    QTableWidget_QBaseExecuteDelayedItemsLayout((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QTableWidget_OnExecuteDelayedItemsLayout((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QRegion* region ```
void q_tablewidget_set_dirty_region(void* self, void* region) {
    QTableWidget_SetDirtyRegion((QTableWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QRegion* region ```
void q_tablewidget_qbase_set_dirty_region(void* self, void* region) {
    QTableWidget_QBaseSetDirtyRegion((QTableWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QRegion*) ```
void q_tablewidget_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnSetDirtyRegion((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll_dirty_region(void* self, int dx, int dy) {
    QTableWidget_ScrollDirtyRegion((QTableWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTableWidget_QBaseScrollDirtyRegion((QTableWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QTableWidget_OnScrollDirtyRegion((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_dirty_region_offset(void* self) {
    return QTableWidget_DirtyRegionOffset((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_qbase_dirty_region_offset(void* self) {
    return QTableWidget_QBaseDirtyRegionOffset((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* (*slot)() ```
void q_tablewidget_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QTableWidget_OnDirtyRegionOffset((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_start_auto_scroll(void* self) {
    QTableWidget_StartAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_start_auto_scroll(void* self) {
    QTableWidget_QBaseStartAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_start_auto_scroll(void* self, void (*slot)()) {
    QTableWidget_OnStartAutoScroll((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_stop_auto_scroll(void* self) {
    QTableWidget_StopAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_stop_auto_scroll(void* self) {
    QTableWidget_QBaseStopAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_stop_auto_scroll(void* self, void (*slot)()) {
    QTableWidget_OnStopAutoScroll((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_do_auto_scroll(void* self) {
    QTableWidget_DoAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_do_auto_scroll(void* self) {
    QTableWidget_QBaseDoAutoScroll((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_do_auto_scroll(void* self, void (*slot)()) {
    QTableWidget_OnDoAutoScroll((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_drop_indicator_position(void* self) {
    return QTableWidget_DropIndicatorPosition((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_drop_indicator_position(void* self) {
    return QTableWidget_QBaseDropIndicatorPosition((QTableWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QTableWidget_OnDropIndicatorPosition((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableWidget_SetViewportMargins((QTableWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableWidget_QBaseSetViewportMargins((QTableWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int, int) ```
void q_tablewidget_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTableWidget_OnSetViewportMargins((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_viewport_margins(void* self) {
    return QTableWidget_ViewportMargins((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_qbase_viewport_margins(void* self) {
    return QTableWidget_QBaseViewportMargins((QTableWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QMargins* (*slot)() ```
void q_tablewidget_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTableWidget_OnViewportMargins((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPainter* param1 ```
void q_tablewidget_draw_frame(void* self, void* param1) {
    QTableWidget_DrawFrame((QTableWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* param1 ```
void q_tablewidget_qbase_draw_frame(void* self, void* param1) {
    QTableWidget_QBaseDrawFrame((QTableWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPainter*) ```
void q_tablewidget_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTableWidget_OnDrawFrame((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_micro_focus(void* self) {
    QTableWidget_UpdateMicroFocus((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_micro_focus(void* self) {
    QTableWidget_QBaseUpdateMicroFocus((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_micro_focus(void* self, void (*slot)()) {
    QTableWidget_OnUpdateMicroFocus((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_create(void* self) {
    QTableWidget_Create((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_create(void* self) {
    QTableWidget_QBaseCreate((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_create(void* self, void (*slot)()) {
    QTableWidget_OnCreate((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_destroy(void* self) {
    QTableWidget_Destroy((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_destroy(void* self) {
    QTableWidget_QBaseDestroy((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_destroy(void* self, void (*slot)()) {
    QTableWidget_OnDestroy((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_focus_next_child(void* self) {
    return QTableWidget_FocusNextChild((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_focus_next_child(void* self) {
    return QTableWidget_QBaseFocusNextChild((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_focus_next_child(void* self, bool (*slot)()) {
    QTableWidget_OnFocusNextChild((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_focus_previous_child(void* self) {
    return QTableWidget_FocusPreviousChild((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_focus_previous_child(void* self) {
    return QTableWidget_QBaseFocusPreviousChild((QTableWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QTableWidget_OnFocusPreviousChild((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_sender(void* self) {
    return QTableWidget_Sender((QTableWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_qbase_sender(void* self) {
    return QTableWidget_QBaseSender((QTableWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* (*slot)() ```
void q_tablewidget_on_sender(void* self, QObject* (*slot)()) {
    QTableWidget_OnSender((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_sender_signal_index(void* self) {
    return QTableWidget_SenderSignalIndex((QTableWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_sender_signal_index(void* self) {
    return QTableWidget_QBaseSenderSignalIndex((QTableWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTableWidget_OnSenderSignalIndex((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* signal ```
int32_t q_tablewidget_receivers(void* self, const char* signal) {
    return QTableWidget_Receivers((QTableWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* signal ```
int32_t q_tablewidget_qbase_receivers(void* self, const char* signal) {
    return QTableWidget_QBaseReceivers((QTableWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, const char*) ```
void q_tablewidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTableWidget_OnReceivers((QTableWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
bool q_tablewidget_is_signal_connected(void* self, void* signal) {
    return QTableWidget_IsSignalConnected((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
bool q_tablewidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTableWidget_QBaseIsSignalConnected((QTableWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTableWidget_OnIsSignalConnected((QTableWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTableWidget* self ```
void q_tablewidget_delete(void* self) {
    QTableWidget_Delete((QTableWidget*)(self));
}