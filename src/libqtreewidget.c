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
#include "libqthread.hpp"
#include "libqtreeview.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtreewidget.hpp"
#include "libqtreewidget.h"

/// https://doc.qt.io/qt-6/qtreewidgetitem.html

/// q_treewidgetitem_new constructs a new QTreeWidgetItem object.
///
///
QTreeWidgetItem* q_treewidgetitem_new() {
    return QTreeWidgetItem_new();
}

/// q_treewidgetitem_new2 constructs a new QTreeWidgetItem object.
///
/// ``` const char* strings[] ```
QTreeWidgetItem* q_treewidgetitem_new2(const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new2(strings_list);
}

/// q_treewidgetitem_new3 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview ```
QTreeWidgetItem* q_treewidgetitem_new3(void* treeview) {
    return QTreeWidgetItem_new3((QTreeWidget*)treeview);
}

/// q_treewidgetitem_new4 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview, const char* strings[] ```
QTreeWidgetItem* q_treewidgetitem_new4(void* treeview, const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new4((QTreeWidget*)treeview, strings_list);
}

/// q_treewidgetitem_new5 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview, QTreeWidgetItem* after ```
QTreeWidgetItem* q_treewidgetitem_new5(void* treeview, void* after) {
    return QTreeWidgetItem_new5((QTreeWidget*)treeview, (QTreeWidgetItem*)after);
}

/// q_treewidgetitem_new6 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent ```
QTreeWidgetItem* q_treewidgetitem_new6(void* parent) {
    return QTreeWidgetItem_new6((QTreeWidgetItem*)parent);
}

/// q_treewidgetitem_new7 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent, const char* strings[] ```
QTreeWidgetItem* q_treewidgetitem_new7(void* parent, const char* strings[]) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new7((QTreeWidgetItem*)parent, strings_list);
}

/// q_treewidgetitem_new8 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent, QTreeWidgetItem* after ```
QTreeWidgetItem* q_treewidgetitem_new8(void* parent, void* after) {
    return QTreeWidgetItem_new8((QTreeWidgetItem*)parent, (QTreeWidgetItem*)after);
}

/// q_treewidgetitem_new9 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* other ```
QTreeWidgetItem* q_treewidgetitem_new9(void* other) {
    return QTreeWidgetItem_new9((QTreeWidgetItem*)other);
}

/// q_treewidgetitem_new10 constructs a new QTreeWidgetItem object.
///
/// ``` int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new10(int typeVal) {
    return QTreeWidgetItem_new10(typeVal);
}

/// q_treewidgetitem_new11 constructs a new QTreeWidgetItem object.
///
/// ``` const char* strings[], int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new11(const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new11(strings_list, typeVal);
}

/// q_treewidgetitem_new12 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview, int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new12(void* treeview, int typeVal) {
    return QTreeWidgetItem_new12((QTreeWidget*)treeview, typeVal);
}

/// q_treewidgetitem_new13 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview, const char* strings[], int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new13(void* treeview, const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new13((QTreeWidget*)treeview, strings_list, typeVal);
}

/// q_treewidgetitem_new14 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new14(void* treeview, void* after, int typeVal) {
    return QTreeWidgetItem_new14((QTreeWidget*)treeview, (QTreeWidgetItem*)after, typeVal);
}

/// q_treewidgetitem_new15 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent, int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new15(void* parent, int typeVal) {
    return QTreeWidgetItem_new15((QTreeWidgetItem*)parent, typeVal);
}

/// q_treewidgetitem_new16 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent, const char* strings[], int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new16(void* parent, const char* strings[], int typeVal) {
    size_t strings_len = libqt_strv_length(strings);
    libqt_string* strings_qstr = malloc(strings_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < strings_len; ++_i) {
        strings_qstr[_i] = qstring(strings[_i]);
    }
    libqt_list strings_list = qstrlist(strings_qstr, strings_len);

    return QTreeWidgetItem_new16((QTreeWidgetItem*)parent, strings_list, typeVal);
}

/// q_treewidgetitem_new17 constructs a new QTreeWidgetItem object.
///
/// ``` QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal ```
QTreeWidgetItem* q_treewidgetitem_new17(void* parent, void* after, int typeVal) {
    return QTreeWidgetItem_new17((QTreeWidgetItem*)parent, (QTreeWidgetItem*)after, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
///
/// ``` QTreeWidgetItem* self ```
QTreeWidgetItem* q_treewidgetitem_clone(void* self) {
    return QTreeWidgetItem_Clone((QTreeWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* (*slot)() ```
void q_treewidgetitem_on_clone(void* self, QTreeWidgetItem* (*slot)()) {
    QTreeWidgetItem_OnClone((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self ```
QTreeWidgetItem* q_treewidgetitem_qbase_clone(void* self) {
    return QTreeWidgetItem_QBaseClone((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#treeWidget)
///
/// ``` QTreeWidgetItem* self ```
QTreeWidget* q_treewidgetitem_tree_widget(void* self) {
    return QTreeWidgetItem_TreeWidget((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSelected)
///
/// ``` QTreeWidgetItem* self, bool selectVal ```
void q_treewidgetitem_set_selected(void* self, bool selectVal) {
    QTreeWidgetItem_SetSelected((QTreeWidgetItem*)self, selectVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isSelected)
///
/// ``` QTreeWidgetItem* self ```
bool q_treewidgetitem_is_selected(void* self) {
    return QTreeWidgetItem_IsSelected((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setHidden)
///
/// ``` QTreeWidgetItem* self, bool hide ```
void q_treewidgetitem_set_hidden(void* self, bool hide) {
    QTreeWidgetItem_SetHidden((QTreeWidgetItem*)self, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isHidden)
///
/// ``` QTreeWidgetItem* self ```
bool q_treewidgetitem_is_hidden(void* self) {
    return QTreeWidgetItem_IsHidden((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setExpanded)
///
/// ``` QTreeWidgetItem* self, bool expand ```
void q_treewidgetitem_set_expanded(void* self, bool expand) {
    QTreeWidgetItem_SetExpanded((QTreeWidgetItem*)self, expand);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isExpanded)
///
/// ``` QTreeWidgetItem* self ```
bool q_treewidgetitem_is_expanded(void* self) {
    return QTreeWidgetItem_IsExpanded((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFirstColumnSpanned)
///
/// ``` QTreeWidgetItem* self, bool span ```
void q_treewidgetitem_set_first_column_spanned(void* self, bool span) {
    QTreeWidgetItem_SetFirstColumnSpanned((QTreeWidgetItem*)self, span);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isFirstColumnSpanned)
///
/// ``` QTreeWidgetItem* self ```
bool q_treewidgetitem_is_first_column_spanned(void* self) {
    return QTreeWidgetItem_IsFirstColumnSpanned((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setDisabled)
///
/// ``` QTreeWidgetItem* self, bool disabled ```
void q_treewidgetitem_set_disabled(void* self, bool disabled) {
    QTreeWidgetItem_SetDisabled((QTreeWidgetItem*)self, disabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#isDisabled)
///
/// ``` QTreeWidgetItem* self ```
bool q_treewidgetitem_is_disabled(void* self) {
    return QTreeWidgetItem_IsDisabled((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setChildIndicatorPolicy)
///
/// ``` QTreeWidgetItem* self, enum QTreeWidgetItem__ChildIndicatorPolicy policy ```
void q_treewidgetitem_set_child_indicator_policy(void* self, int64_t policy) {
    QTreeWidgetItem_SetChildIndicatorPolicy((QTreeWidgetItem*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childIndicatorPolicy)
///
/// ``` QTreeWidgetItem* self ```
int64_t q_treewidgetitem_child_indicator_policy(void* self) {
    return QTreeWidgetItem_ChildIndicatorPolicy((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#flags)
///
/// ``` QTreeWidgetItem* self ```
int64_t q_treewidgetitem_flags(void* self) {
    return QTreeWidgetItem_Flags((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFlags)
///
/// ``` QTreeWidgetItem* self, int flags ```
void q_treewidgetitem_set_flags(void* self, int64_t flags) {
    QTreeWidgetItem_SetFlags((QTreeWidgetItem*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#text)
///
/// ``` QTreeWidgetItem* self, int column ```
const char* q_treewidgetitem_text(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_Text((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setText)
///
/// ``` QTreeWidgetItem* self, int column, const char* text ```
void q_treewidgetitem_set_text(void* self, int column, const char* text) {
    QTreeWidgetItem_SetText((QTreeWidgetItem*)self, column, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#icon)
///
/// ``` QTreeWidgetItem* self, int column ```
QIcon* q_treewidgetitem_icon(void* self, int column) {
    return QTreeWidgetItem_Icon((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setIcon)
///
/// ``` QTreeWidgetItem* self, int column, QIcon* icon ```
void q_treewidgetitem_set_icon(void* self, int column, void* icon) {
    QTreeWidgetItem_SetIcon((QTreeWidgetItem*)self, column, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#statusTip)
///
/// ``` QTreeWidgetItem* self, int column ```
const char* q_treewidgetitem_status_tip(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_StatusTip((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setStatusTip)
///
/// ``` QTreeWidgetItem* self, int column, const char* statusTip ```
void q_treewidgetitem_set_status_tip(void* self, int column, const char* statusTip) {
    QTreeWidgetItem_SetStatusTip((QTreeWidgetItem*)self, column, qstring(statusTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#toolTip)
///
/// ``` QTreeWidgetItem* self, int column ```
const char* q_treewidgetitem_tool_tip(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_ToolTip((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setToolTip)
///
/// ``` QTreeWidgetItem* self, int column, const char* toolTip ```
void q_treewidgetitem_set_tool_tip(void* self, int column, const char* toolTip) {
    QTreeWidgetItem_SetToolTip((QTreeWidgetItem*)self, column, qstring(toolTip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#whatsThis)
///
/// ``` QTreeWidgetItem* self, int column ```
const char* q_treewidgetitem_whats_this(void* self, int column) {
    libqt_string _str = QTreeWidgetItem_WhatsThis((QTreeWidgetItem*)self, column);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setWhatsThis)
///
/// ``` QTreeWidgetItem* self, int column, const char* whatsThis ```
void q_treewidgetitem_set_whats_this(void* self, int column, const char* whatsThis) {
    QTreeWidgetItem_SetWhatsThis((QTreeWidgetItem*)self, column, qstring(whatsThis));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#font)
///
/// ``` QTreeWidgetItem* self, int column ```
QFont* q_treewidgetitem_font(void* self, int column) {
    return QTreeWidgetItem_Font((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFont)
///
/// ``` QTreeWidgetItem* self, int column, QFont* font ```
void q_treewidgetitem_set_font(void* self, int column, void* font) {
    QTreeWidgetItem_SetFont((QTreeWidgetItem*)self, column, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#textAlignment)
///
/// ``` QTreeWidgetItem* self, int column ```
int32_t q_treewidgetitem_text_alignment(void* self, int column) {
    return QTreeWidgetItem_TextAlignment((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// ``` QTreeWidgetItem* self, int column, int alignment ```
void q_treewidgetitem_set_text_alignment(void* self, int column, int alignment) {
    QTreeWidgetItem_SetTextAlignment((QTreeWidgetItem*)self, column, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// ``` QTreeWidgetItem* self, int column, enum Qt__AlignmentFlag alignment ```
void q_treewidgetitem_set_text_alignment2(void* self, int column, int64_t alignment) {
    QTreeWidgetItem_SetTextAlignment2((QTreeWidgetItem*)self, column, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
///
/// ``` QTreeWidgetItem* self, int column, int alignment ```
void q_treewidgetitem_set_text_alignment3(void* self, int column, int64_t alignment) {
    QTreeWidgetItem_SetTextAlignment3((QTreeWidgetItem*)self, column, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#background)
///
/// ``` QTreeWidgetItem* self, int column ```
QBrush* q_treewidgetitem_background(void* self, int column) {
    return QTreeWidgetItem_Background((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setBackground)
///
/// ``` QTreeWidgetItem* self, int column, QBrush* brush ```
void q_treewidgetitem_set_background(void* self, int column, void* brush) {
    QTreeWidgetItem_SetBackground((QTreeWidgetItem*)self, column, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#foreground)
///
/// ``` QTreeWidgetItem* self, int column ```
QBrush* q_treewidgetitem_foreground(void* self, int column) {
    return QTreeWidgetItem_Foreground((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setForeground)
///
/// ``` QTreeWidgetItem* self, int column, QBrush* brush ```
void q_treewidgetitem_set_foreground(void* self, int column, void* brush) {
    QTreeWidgetItem_SetForeground((QTreeWidgetItem*)self, column, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#checkState)
///
/// ``` QTreeWidgetItem* self, int column ```
int64_t q_treewidgetitem_check_state(void* self, int column) {
    return QTreeWidgetItem_CheckState((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setCheckState)
///
/// ``` QTreeWidgetItem* self, int column, enum Qt__CheckState state ```
void q_treewidgetitem_set_check_state(void* self, int column, int64_t state) {
    QTreeWidgetItem_SetCheckState((QTreeWidgetItem*)self, column, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sizeHint)
///
/// ``` QTreeWidgetItem* self, int column ```
QSize* q_treewidgetitem_size_hint(void* self, int column) {
    return QTreeWidgetItem_SizeHint((QTreeWidgetItem*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSizeHint)
///
/// ``` QTreeWidgetItem* self, int column, QSize* size ```
void q_treewidgetitem_set_size_hint(void* self, int column, void* size) {
    QTreeWidgetItem_SetSizeHint((QTreeWidgetItem*)self, column, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
///
/// ``` QTreeWidgetItem* self, int column, int role ```
QVariant* q_treewidgetitem_data(void* self, int column, int role) {
    return QTreeWidgetItem_Data((QTreeWidgetItem*)self, column, role);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, QVariant* (*slot)(QTreeWidgetItem*, int, int) ```
void q_treewidgetitem_on_data(void* self, QVariant* (*slot)(void*, int, int)) {
    QTreeWidgetItem_OnData((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self, int column, int role ```
QVariant* q_treewidgetitem_qbase_data(void* self, int column, int role) {
    return QTreeWidgetItem_QBaseData((QTreeWidgetItem*)self, column, role);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
///
/// ``` QTreeWidgetItem* self, int column, int role, QVariant* value ```
void q_treewidgetitem_set_data(void* self, int column, int role, void* value) {
    QTreeWidgetItem_SetData((QTreeWidgetItem*)self, column, role, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, void (*slot)(QTreeWidgetItem*, int, int, QVariant*) ```
void q_treewidgetitem_on_set_data(void* self, void (*slot)(void*, int, int, void*)) {
    QTreeWidgetItem_OnSetData((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self, int column, int role, QVariant* value ```
void q_treewidgetitem_qbase_set_data(void* self, int column, int role, void* value) {
    QTreeWidgetItem_QBaseSetData((QTreeWidgetItem*)self, column, role, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator<)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* other ```
bool q_treewidgetitem_operator_lesser(void* self, void* other) {
    return QTreeWidgetItem_OperatorLesser((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, bool (*slot)(QTreeWidgetItem*, QTreeWidgetItem*) ```
void q_treewidgetitem_on_operator_lesser(void* self, bool (*slot)(void*, void*)) {
    QTreeWidgetItem_OnOperatorLesser((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* other ```
bool q_treewidgetitem_qbase_operator_lesser(void* self, void* other) {
    return QTreeWidgetItem_QBaseOperatorLesser((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
///
/// ``` QTreeWidgetItem* self, QDataStream* in ```
void q_treewidgetitem_read(void* self, void* in) {
    QTreeWidgetItem_Read((QTreeWidgetItem*)self, (QDataStream*)in);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, void (*slot)(QTreeWidgetItem*, QDataStream*) ```
void q_treewidgetitem_on_read(void* self, void (*slot)(void*, void*)) {
    QTreeWidgetItem_OnRead((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self, QDataStream* in ```
void q_treewidgetitem_qbase_read(void* self, void* in) {
    QTreeWidgetItem_QBaseRead((QTreeWidgetItem*)self, (QDataStream*)in);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
///
/// ``` QTreeWidgetItem* self, QDataStream* out ```
void q_treewidgetitem_write(void* self, void* out) {
    QTreeWidgetItem_Write((QTreeWidgetItem*)self, (QDataStream*)out);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, void (*slot)(QTreeWidgetItem*, QDataStream*) ```
void q_treewidgetitem_on_write(void* self, void (*slot)(void*, void*)) {
    QTreeWidgetItem_OnWrite((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self, QDataStream* out ```
void q_treewidgetitem_qbase_write(void* self, void* out) {
    QTreeWidgetItem_QBaseWrite((QTreeWidgetItem*)self, (QDataStream*)out);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator=)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* other ```
void q_treewidgetitem_operator_assign(void* self, void* other) {
    QTreeWidgetItem_OperatorAssign((QTreeWidgetItem*)self, (QTreeWidgetItem*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#parent)
///
/// ``` QTreeWidgetItem* self ```
QTreeWidgetItem* q_treewidgetitem_parent(void* self) {
    return QTreeWidgetItem_Parent((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#child)
///
/// ``` QTreeWidgetItem* self, int index ```
QTreeWidgetItem* q_treewidgetitem_child(void* self, int index) {
    return QTreeWidgetItem_Child((QTreeWidgetItem*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#childCount)
///
/// ``` QTreeWidgetItem* self ```
int32_t q_treewidgetitem_child_count(void* self) {
    return QTreeWidgetItem_ChildCount((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#columnCount)
///
/// ``` QTreeWidgetItem* self ```
int32_t q_treewidgetitem_column_count(void* self) {
    return QTreeWidgetItem_ColumnCount((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#indexOfChild)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* child ```
int32_t q_treewidgetitem_index_of_child(void* self, void* child) {
    return QTreeWidgetItem_IndexOfChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChild)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* child ```
void q_treewidgetitem_add_child(void* self, void* child) {
    QTreeWidgetItem_AddChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChild)
///
/// ``` QTreeWidgetItem* self, int index, QTreeWidgetItem* child ```
void q_treewidgetitem_insert_child(void* self, int index, void* child) {
    QTreeWidgetItem_InsertChild((QTreeWidgetItem*)self, index, (QTreeWidgetItem*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#removeChild)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* child ```
void q_treewidgetitem_remove_child(void* self, void* child) {
    QTreeWidgetItem_RemoveChild((QTreeWidgetItem*)self, (QTreeWidgetItem*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChild)
///
/// ``` QTreeWidgetItem* self, int index ```
QTreeWidgetItem* q_treewidgetitem_take_child(void* self, int index) {
    return QTreeWidgetItem_TakeChild((QTreeWidgetItem*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChildren)
///
/// ``` QTreeWidgetItem* self, QTreeWidgetItem* children[] ```
void q_treewidgetitem_add_children(void* self, void* children[]) {
    QTreeWidgetItem** children_arr = (QTreeWidgetItem**)children;
    size_t children_len = 0;
    while (children_arr[children_len] != NULL) {
        children_len++;
    }
    libqt_list children_list = {
        .len = children_len,
        .data = {(QTreeWidgetItem*)children},
    };
    QTreeWidgetItem_AddChildren((QTreeWidgetItem*)self, children_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChildren)
///
/// ``` QTreeWidgetItem* self, int index, QTreeWidgetItem* children[] ```
void q_treewidgetitem_insert_children(void* self, int index, void* children[]) {
    QTreeWidgetItem** children_arr = (QTreeWidgetItem**)children;
    size_t children_len = 0;
    while (children_arr[children_len] != NULL) {
        children_len++;
    }
    libqt_list children_list = {
        .len = children_len,
        .data = {(QTreeWidgetItem*)children},
    };
    QTreeWidgetItem_InsertChildren((QTreeWidgetItem*)self, index, children_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChildren)
///
/// ``` QTreeWidgetItem* self ```
libqt_list /* of QTreeWidgetItem* */ q_treewidgetitem_take_children(void* self) {
    libqt_list _arr = QTreeWidgetItem_TakeChildren((QTreeWidgetItem*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#type)
///
/// ``` QTreeWidgetItem* self ```
int32_t q_treewidgetitem_type(void* self) {
    return QTreeWidgetItem_Type((QTreeWidgetItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#sortChildren)
///
/// ``` QTreeWidgetItem* self, int column, enum Qt__SortOrder order ```
void q_treewidgetitem_sort_children(void* self, int column, int64_t order) {
    QTreeWidgetItem_SortChildren((QTreeWidgetItem*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
///
/// ``` QTreeWidgetItem* self ```
void q_treewidgetitem_emit_data_changed(void* self) {
    QTreeWidgetItem_EmitDataChanged((QTreeWidgetItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidgetItem* self, void (*slot)() ```
void q_treewidgetitem_on_emit_data_changed(void* self, void (*slot)()) {
    QTreeWidgetItem_OnEmitDataChanged((QTreeWidgetItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidgetItem* self ```
void q_treewidgetitem_qbase_emit_data_changed(void* self) {
    QTreeWidgetItem_QBaseEmitDataChanged((QTreeWidgetItem*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTreeWidgetItem* self ```
void q_treewidgetitem_delete(void* self) {
    QTreeWidgetItem_Delete((QTreeWidgetItem*)(self));
}

/// https://doc.qt.io/qt-6/qtreewidget.html

/// q_treewidget_new constructs a new QTreeWidget object.
///
/// ``` QWidget* parent ```
QTreeWidget* q_treewidget_new(void* parent) {
    return QTreeWidget_new((QWidget*)parent);
}

/// q_treewidget_new2 constructs a new QTreeWidget object.
///
///
QTreeWidget* q_treewidget_new2() {
    return QTreeWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTreeWidget* self ```
QMetaObject* q_treewidget_meta_object(void* self) {
    return QTreeWidget_MetaObject((QTreeWidget*)self);
}

/// ``` QTreeWidget* self, const char* param1 ```
void* q_treewidget_metacast(void* self, const char* param1) {
    return QTreeWidget_Metacast((QTreeWidget*)self, param1);
}

/// ``` QTreeWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treewidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeWidget_Metacall((QTreeWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, enum QMetaObject__Call, int, void*) ```
void q_treewidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTreeWidget_OnMetacall((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treewidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTreeWidget_QBaseMetacall((QTreeWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_treewidget_tr(const char* s) {
    libqt_string _str = QTreeWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#columnCount)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_column_count(void* self) {
    return QTreeWidget_ColumnCount((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setColumnCount)
///
/// ``` QTreeWidget* self, int columns ```
void q_treewidget_set_column_count(void* self, int columns) {
    QTreeWidget_SetColumnCount((QTreeWidget*)self, columns);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#invisibleRootItem)
///
/// ``` QTreeWidget* self ```
QTreeWidgetItem* q_treewidget_invisible_root_item(void* self) {
    return QTreeWidget_InvisibleRootItem((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItem)
///
/// ``` QTreeWidget* self, int index ```
QTreeWidgetItem* q_treewidget_top_level_item(void* self, int index) {
    return QTreeWidget_TopLevelItem((QTreeWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItemCount)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_top_level_item_count(void* self) {
    return QTreeWidget_TopLevelItemCount((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItem)
///
/// ``` QTreeWidget* self, int index, QTreeWidgetItem* item ```
void q_treewidget_insert_top_level_item(void* self, int index, void* item) {
    QTreeWidget_InsertTopLevelItem((QTreeWidget*)self, index, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_add_top_level_item(void* self, void* item) {
    QTreeWidget_AddTopLevelItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#takeTopLevelItem)
///
/// ``` QTreeWidget* self, int index ```
QTreeWidgetItem* q_treewidget_take_top_level_item(void* self, int index) {
    return QTreeWidget_TakeTopLevelItem((QTreeWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexOfTopLevelItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
int32_t q_treewidget_index_of_top_level_item(void* self, void* item) {
    return QTreeWidget_IndexOfTopLevelItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItems)
///
/// ``` QTreeWidget* self, int index, QTreeWidgetItem* items[] ```
void q_treewidget_insert_top_level_items(void* self, int index, void* items[]) {
    QTreeWidgetItem** items_arr = (QTreeWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTreeWidgetItem*)items},
    };
    QTreeWidget_InsertTopLevelItems((QTreeWidget*)self, index, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItems)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* items[] ```
void q_treewidget_add_top_level_items(void* self, void* items[]) {
    QTreeWidgetItem** items_arr = (QTreeWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTreeWidgetItem*)items},
    };
    QTreeWidget_AddTopLevelItems((QTreeWidget*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#headerItem)
///
/// ``` QTreeWidget* self ```
QTreeWidgetItem* q_treewidget_header_item(void* self) {
    return QTreeWidget_HeaderItem((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_set_header_item(void* self, void* item) {
    QTreeWidget_SetHeaderItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabels)
///
/// ``` QTreeWidget* self, const char* labels[] ```
void q_treewidget_set_header_labels(void* self, const char* labels[]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = malloc(labels_len * sizeof(libqt_string));
    for (size_t _i = 0; _i < labels_len; ++_i) {
        labels_qstr[_i] = qstring(labels[_i]);
    }
    libqt_list labels_list = qstrlist(labels_qstr, labels_len);
    QTreeWidget_SetHeaderLabels((QTreeWidget*)self, labels_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabel)
///
/// ``` QTreeWidget* self, const char* label ```
void q_treewidget_set_header_label(void* self, const char* label) {
    QTreeWidget_SetHeaderLabel((QTreeWidget*)self, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItem)
///
/// ``` QTreeWidget* self ```
QTreeWidgetItem* q_treewidget_current_item(void* self) {
    return QTreeWidget_CurrentItem((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentColumn)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_current_column(void* self) {
    return QTreeWidget_CurrentColumn((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_set_current_item(void* self, void* item) {
    QTreeWidget_SetCurrentItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_set_current_item2(void* self, void* item, int column) {
    QTreeWidget_SetCurrentItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column, int command ```
void q_treewidget_set_current_item3(void* self, void* item, int column, int64_t command) {
    QTreeWidget_SetCurrentItem3((QTreeWidget*)self, (QTreeWidgetItem*)item, column, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
///
/// ``` QTreeWidget* self, QPoint* p ```
QTreeWidgetItem* q_treewidget_item_at(void* self, void* p) {
    return QTreeWidget_ItemAt((QTreeWidget*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
///
/// ``` QTreeWidget* self, int x, int y ```
QTreeWidgetItem* q_treewidget_item_at2(void* self, int x, int y) {
    return QTreeWidget_ItemAt2((QTreeWidget*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#visualItemRect)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
QRect* q_treewidget_visual_item_rect(void* self, void* item) {
    return QTreeWidget_VisualItemRect((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortColumn)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_sort_column(void* self) {
    return QTreeWidget_SortColumn((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#sortItems)
///
/// ``` QTreeWidget* self, int column, enum Qt__SortOrder order ```
void q_treewidget_sort_items(void* self, int column, int64_t order) {
    QTreeWidget_SortItems((QTreeWidget*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_edit_item(void* self, void* item) {
    QTreeWidget_EditItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_open_persistent_editor(void* self, void* item) {
    QTreeWidget_OpenPersistentEditor((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_close_persistent_editor(void* self, void* item) {
    QTreeWidget_ClosePersistentEditor((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
bool q_treewidget_is_persistent_editor_open(void* self, void* item) {
    return QTreeWidget_IsPersistentEditorOpen((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemWidget)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
QWidget* q_treewidget_item_widget(void* self, void* item, int column) {
    return QTreeWidget_ItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setItemWidget)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget ```
void q_treewidget_set_item_widget(void* self, void* item, int column, void* widget) {
    QTreeWidget_SetItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#removeItemWidget)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_remove_item_widget(void* self, void* item, int column) {
    QTreeWidget_RemoveItemWidget((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#selectedItems)
///
/// ``` QTreeWidget* self ```
libqt_list /* of QTreeWidgetItem* */ q_treewidget_selected_items(void* self) {
    libqt_list _arr = QTreeWidget_SelectedItems((QTreeWidget*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
///
/// ``` QTreeWidget* self, const char* text, int flags ```
libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items(void* self, const char* text, int64_t flags) {
    libqt_list _arr = QTreeWidget_FindItems((QTreeWidget*)self, qstring(text), flags);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemAbove)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
QTreeWidgetItem* q_treewidget_item_above(void* self, void* item) {
    return QTreeWidget_ItemAbove((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemBelow)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
QTreeWidgetItem* q_treewidget_item_below(void* self, void* item) {
    return QTreeWidget_ItemBelow((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
QModelIndex* q_treewidget_index_from_item(void* self, void* item) {
    return QTreeWidget_IndexFromItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemFromIndex)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QTreeWidgetItem* q_treewidget_item_from_index(void* self, void* index) {
    return QTreeWidget_ItemFromIndex((QTreeWidget*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
///
/// ``` QTreeWidget* self, QItemSelectionModel* selectionModel ```
void q_treewidget_set_selection_model(void* self, void* selectionModel) {
    QTreeWidget_SetSelectionModel((QTreeWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QItemSelectionModel*) ```
void q_treewidget_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnSetSelectionModel((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, QItemSelectionModel* selectionModel ```
void q_treewidget_qbase_set_selection_model(void* self, void* selectionModel) {
    QTreeWidget_QBaseSetSelectionModel((QTreeWidget*)self, (QItemSelectionModel*)selectionModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_scroll_to_item(void* self, void* item) {
    QTreeWidget_ScrollToItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#expandItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_expand_item(void* self, void* item) {
    QTreeWidget_ExpandItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#collapseItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_collapse_item(void* self, void* item) {
    QTreeWidget_CollapseItem((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#clear)
///
/// ``` QTreeWidget* self ```
void q_treewidget_clear(void* self) {
    QTreeWidget_Clear((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_pressed(void* self, void* item, int column) {
    QTreeWidget_ItemPressed((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_pressed(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemPressed((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_clicked(void* self, void* item, int column) {
    QTreeWidget_ItemClicked((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_clicked(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemClicked((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_double_clicked(void* self, void* item, int column) {
    QTreeWidget_ItemDoubleClicked((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_double_clicked(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemDoubleClicked((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_activated(void* self, void* item, int column) {
    QTreeWidget_ItemActivated((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_activated(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemActivated((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_entered(void* self, void* item, int column) {
    QTreeWidget_ItemEntered((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_entered(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemEntered((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_item_changed(void* self, void* item, int column) {
    QTreeWidget_ItemChanged((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, int) ```
void q_treewidget_on_item_changed(void* self, void (*slot)(void*, void*, int)) {
    QTreeWidget_Connect_ItemChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_item_expanded(void* self, void* item) {
    QTreeWidget_ItemExpanded((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*) ```
void q_treewidget_on_item_expanded(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_Connect_ItemExpanded((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item ```
void q_treewidget_item_collapsed(void* self, void* item) {
    QTreeWidget_ItemCollapsed((QTreeWidget*)self, (QTreeWidgetItem*)item);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*) ```
void q_treewidget_on_item_collapsed(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_Connect_ItemCollapsed((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous ```
void q_treewidget_current_item_changed(void* self, void* current, void* previous) {
    QTreeWidget_CurrentItemChanged((QTreeWidget*)self, (QTreeWidgetItem*)current, (QTreeWidgetItem*)previous);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*) ```
void q_treewidget_on_current_item_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTreeWidget_Connect_CurrentItemChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
///
/// ``` QTreeWidget* self ```
void q_treewidget_item_selection_changed(void* self) {
    QTreeWidget_ItemSelectionChanged((QTreeWidget*)self);
}

/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*) ```
void q_treewidget_on_item_selection_changed(void* self, void (*slot)(void*)) {
    QTreeWidget_Connect_ItemSelectionChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#event)
///
/// ``` QTreeWidget* self, QEvent* e ```
bool q_treewidget_event(void* self, void* e) {
    return QTreeWidget_Event((QTreeWidget*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QEvent*) ```
void q_treewidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QTreeWidget_OnEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, QEvent* e ```
bool q_treewidget_qbase_event(void* self, void* e) {
    return QTreeWidget_QBaseEvent((QTreeWidget*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
///
/// ``` QTreeWidget* self ```
const char** q_treewidget_mime_types(void* self) {
    libqt_list _arr = QTreeWidget_MimeTypes((QTreeWidget*)self);
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
/// ``` QTreeWidget* self, const char** (*slot)() ```
void q_treewidget_on_mime_types(void* self, const char** (*slot)()) {
    QTreeWidget_OnMimeTypes((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self ```
const char** q_treewidget_qbase_mime_types(void* self) {
    libqt_list _arr = QTreeWidget_QBaseMimeTypes((QTreeWidget*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* items[] ```
QMimeData* q_treewidget_mime_data(void* self, void* items[]) {
    QTreeWidgetItem** items_arr = (QTreeWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTreeWidgetItem*)items},
    };
    return QTreeWidget_MimeData((QTreeWidget*)self, items_list);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, QMimeData* (*slot)(QTreeWidget*, QTreeWidgetItem*[]) ```
void q_treewidget_on_mime_data(void* self, QMimeData* (*slot)(void*, void*)) {
    QTreeWidget_OnMimeData((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, QTreeWidgetItem* items[] ```
QMimeData* q_treewidget_qbase_mime_data(void* self, void* items[]) {
    QTreeWidgetItem** items_arr = (QTreeWidgetItem**)items;
    size_t items_len = 0;
    while (items_arr[items_len] != NULL) {
        items_len++;
    }
    libqt_list items_list = {
        .len = items_len,
        .data = {(QTreeWidgetItem*)items},
    };
    return QTreeWidget_QBaseMimeData((QTreeWidget*)self, items_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_treewidget_drop_mime_data(void* self, void* parent, int index, void* data, int64_t action) {
    return QTreeWidget_DropMimeData((QTreeWidget*)self, (QTreeWidgetItem*)parent, index, (QMimeData*)data, action);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QTreeWidgetItem*, int, QMimeData*, enum Qt__DropAction) ```
void q_treewidget_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int, void*, int64_t)) {
    QTreeWidget_OnDropMimeData((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, QTreeWidgetItem* parent, int index, QMimeData* data, enum Qt__DropAction action ```
bool q_treewidget_qbase_drop_mime_data(void* self, void* parent, int index, void* data, int64_t action) {
    return QTreeWidget_QBaseDropMimeData((QTreeWidget*)self, (QTreeWidgetItem*)parent, index, (QMimeData*)data, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_supported_drop_actions(void* self) {
    return QTreeWidget_SupportedDropActions((QTreeWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, int64_t (*slot)() ```
void q_treewidget_on_supported_drop_actions(void* self, int64_t (*slot)()) {
    QTreeWidget_OnSupportedDropActions((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_qbase_supported_drop_actions(void* self) {
    return QTreeWidget_QBaseSupportedDropActions((QTreeWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
///
/// ``` QTreeWidget* self, QDropEvent* event ```
void q_treewidget_drop_event(void* self, void* event) {
    QTreeWidget_DropEvent((QTreeWidget*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QDropEvent*) ```
void q_treewidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDropEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTreeWidget* self, QDropEvent* event ```
void q_treewidget_qbase_drop_event(void* self, void* event) {
    QTreeWidget_QBaseDropEvent((QTreeWidget*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_treewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QTreeWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_treewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTreeWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_edit_item2(void* self, void* item, int column) {
    QTreeWidget_EditItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_open_persistent_editor2(void* self, void* item, int column) {
    QTreeWidget_OpenPersistentEditor2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
void q_treewidget_close_persistent_editor2(void* self, void* item, int column) {
    QTreeWidget_ClosePersistentEditor2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
bool q_treewidget_is_persistent_editor_open2(void* self, void* item, int column) {
    return QTreeWidget_IsPersistentEditorOpen2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
///
/// ``` QTreeWidget* self, const char* text, int flags, int column ```
libqt_list /* of QTreeWidgetItem* */ q_treewidget_find_items3(void* self, const char* text, int64_t flags, int column) {
    libqt_list _arr = QTreeWidget_FindItems3((QTreeWidget*)self, qstring(text), flags, column);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, int column ```
QModelIndex* q_treewidget_index_from_item2(void* self, void* item, int column) {
    return QTreeWidget_IndexFromItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
///
/// ``` QTreeWidget* self, QTreeWidgetItem* item, enum QAbstractItemView__ScrollHint hint ```
void q_treewidget_scroll_to_item2(void* self, void* item, int64_t hint) {
    QTreeWidget_ScrollToItem2((QTreeWidget*)self, (QTreeWidgetItem*)item, hint);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// ``` QTreeWidget* self, QAbstractItemModel* model ```
void q_treewidget_set_model(void* self, void* model) {
    QTreeView_SetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QTreeView
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QAbstractItemModel*) ```
void q_treewidget_on_set_model(void* self, void (*slot)(void*, void*)) {
    QTreeView_OnSetModel((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// Base class method implementation
///
/// ``` QTreeWidget* self, QAbstractItemModel* model ```
void q_treewidget_qbase_set_model(void* self, void* model) {
    QTreeView_QBaseSetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#header)
///
/// ``` QTreeWidget* self ```
QHeaderView* q_treewidget_header(void* self) {
    return QTreeView_Header((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
///
/// ``` QTreeWidget* self, QHeaderView* header ```
void q_treewidget_set_header(void* self, void* header) {
    QTreeView_SetHeader((QTreeView*)self, (QHeaderView*)header);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_auto_expand_delay(void* self) {
    return QTreeView_AutoExpandDelay((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
///
/// ``` QTreeWidget* self, int delay ```
void q_treewidget_set_auto_expand_delay(void* self, int delay) {
    QTreeView_SetAutoExpandDelay((QTreeView*)self, delay);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indentation)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_indentation(void* self) {
    return QTreeView_Indentation((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
///
/// ``` QTreeWidget* self, int i ```
void q_treewidget_set_indentation(void* self, int i) {
    QTreeView_SetIndentation((QTreeView*)self, i);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
///
/// ``` QTreeWidget* self ```
void q_treewidget_reset_indentation(void* self) {
    QTreeView_ResetIndentation((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_root_is_decorated(void* self) {
    return QTreeView_RootIsDecorated((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
///
/// ``` QTreeWidget* self, bool show ```
void q_treewidget_set_root_is_decorated(void* self, bool show) {
    QTreeView_SetRootIsDecorated((QTreeView*)self, show);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_uniform_row_heights(void* self) {
    return QTreeView_UniformRowHeights((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
///
/// ``` QTreeWidget* self, bool uniform ```
void q_treewidget_set_uniform_row_heights(void* self, bool uniform) {
    QTreeView_SetUniformRowHeights((QTreeView*)self, uniform);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_items_expandable(void* self) {
    return QTreeView_ItemsExpandable((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_items_expandable(void* self, bool enable) {
    QTreeView_SetItemsExpandable((QTreeView*)self, enable);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_expands_on_double_click(void* self) {
    return QTreeView_ExpandsOnDoubleClick((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_expands_on_double_click(void* self, bool enable) {
    QTreeView_SetExpandsOnDoubleClick((QTreeView*)self, enable);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
///
/// ``` QTreeWidget* self, int column ```
int32_t q_treewidget_column_viewport_position(void* self, int column) {
    return QTreeView_ColumnViewportPosition((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
///
/// ``` QTreeWidget* self, int column ```
int32_t q_treewidget_column_width(void* self, int column) {
    return QTreeView_ColumnWidth((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
///
/// ``` QTreeWidget* self, int column, int width ```
void q_treewidget_set_column_width(void* self, int column, int width) {
    QTreeView_SetColumnWidth((QTreeView*)self, column, width);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
///
/// ``` QTreeWidget* self, int x ```
int32_t q_treewidget_column_at(void* self, int x) {
    return QTreeView_ColumnAt((QTreeView*)self, x);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
///
/// ``` QTreeWidget* self, int column ```
bool q_treewidget_is_column_hidden(void* self, int column) {
    return QTreeView_IsColumnHidden((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
///
/// ``` QTreeWidget* self, int column, bool hide ```
void q_treewidget_set_column_hidden(void* self, int column, bool hide) {
    QTreeView_SetColumnHidden((QTreeView*)self, column, hide);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_header_hidden(void* self) {
    return QTreeView_IsHeaderHidden((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
///
/// ``` QTreeWidget* self, bool hide ```
void q_treewidget_set_header_hidden(void* self, bool hide) {
    QTreeView_SetHeaderHidden((QTreeView*)self, hide);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
///
/// ``` QTreeWidget* self, int row, QModelIndex* parent ```
bool q_treewidget_is_row_hidden(void* self, int row, void* parent) {
    return QTreeView_IsRowHidden((QTreeView*)self, row, (QModelIndex*)parent);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
///
/// ``` QTreeWidget* self, int row, QModelIndex* parent, bool hide ```
void q_treewidget_set_row_hidden(void* self, int row, void* parent, bool hide) {
    QTreeView_SetRowHidden((QTreeView*)self, row, (QModelIndex*)parent, hide);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
///
/// ``` QTreeWidget* self, int row, QModelIndex* parent ```
bool q_treewidget_is_first_column_spanned(void* self, int row, void* parent) {
    return QTreeView_IsFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
///
/// ``` QTreeWidget* self, int row, QModelIndex* parent, bool span ```
void q_treewidget_set_first_column_spanned(void* self, int row, void* parent, bool span) {
    QTreeView_SetFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent, span);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
bool q_treewidget_is_expanded(void* self, void* index) {
    return QTreeView_IsExpanded((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
///
/// ``` QTreeWidget* self, QModelIndex* index, bool expand ```
void q_treewidget_set_expanded(void* self, void* index, bool expand) {
    QTreeView_SetExpanded((QTreeView*)self, (QModelIndex*)index, expand);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_sorting_enabled(void* self, bool enable) {
    QTreeView_SetSortingEnabled((QTreeView*)self, enable);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_sorting_enabled(void* self) {
    return QTreeView_IsSortingEnabled((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_animated(void* self, bool enable) {
    QTreeView_SetAnimated((QTreeView*)self, enable);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_animated(void* self) {
    return QTreeView_IsAnimated((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_all_columns_show_focus(void* self, bool enable) {
    QTreeView_SetAllColumnsShowFocus((QTreeView*)self, enable);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_all_columns_show_focus(void* self) {
    return QTreeView_AllColumnsShowFocus((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
///
/// ``` QTreeWidget* self, bool on ```
void q_treewidget_set_word_wrap(void* self, bool on) {
    QTreeView_SetWordWrap((QTreeView*)self, on);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_word_wrap(void* self) {
    return QTreeView_WordWrap((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
///
/// ``` QTreeWidget* self, int logicalIndex ```
void q_treewidget_set_tree_position(void* self, int logicalIndex) {
    QTreeView_SetTreePosition((QTreeView*)self, logicalIndex);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_tree_position(void* self) {
    return QTreeView_TreePosition((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QModelIndex* q_treewidget_index_above(void* self, void* index) {
    return QTreeView_IndexAbove((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QModelIndex* q_treewidget_index_below(void* self, void* index) {
    return QTreeView_IndexBelow((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_expanded(void* self, void* index) {
    QTreeView_Expanded((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// ``` QTreeWidget* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treewidget_on_expanded(void* self, void (*slot)(void*, void*)) {
    QTreeView_Connect_Expanded((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_collapsed(void* self, void* index) {
    QTreeView_Collapsed((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// ``` QTreeWidget* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treewidget_on_collapsed(void* self, void (*slot)(void*, void*)) {
    QTreeView_Connect_Collapsed((QTreeView*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
///
/// ``` QTreeWidget* self, int column ```
void q_treewidget_hide_column(void* self, int column) {
    QTreeView_HideColumn((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
///
/// ``` QTreeWidget* self, int column ```
void q_treewidget_show_column(void* self, int column) {
    QTreeView_ShowColumn((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expand)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_expand(void* self, void* index) {
    QTreeView_Expand((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapse)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_collapse(void* self, void* index) {
    QTreeView_Collapse((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
///
/// ``` QTreeWidget* self, int column ```
void q_treewidget_resize_column_to_contents(void* self, int column) {
    QTreeView_ResizeColumnToContents((QTreeView*)self, column);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
///
/// ``` QTreeWidget* self, int column, enum Qt__SortOrder order ```
void q_treewidget_sort_by_column(void* self, int column, int64_t order) {
    QTreeView_SortByColumn((QTreeView*)self, column, order);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
///
/// ``` QTreeWidget* self ```
void q_treewidget_expand_all(void* self) {
    QTreeView_ExpandAll((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_expand_recursively(void* self, void* index) {
    QTreeView_ExpandRecursively((QTreeView*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
///
/// ``` QTreeWidget* self ```
void q_treewidget_collapse_all(void* self) {
    QTreeView_CollapseAll((QTreeView*)self);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
///
/// ``` QTreeWidget* self, int depth ```
void q_treewidget_expand_to_depth(void* self, int depth) {
    QTreeView_ExpandToDepth((QTreeView*)self, depth);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeWidget* self, QModelIndex* index, int depth ```
void q_treewidget_expand_recursively2(void* self, void* index, int depth) {
    QTreeView_ExpandRecursively2((QTreeView*)self, (QModelIndex*)index, depth);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTreeWidget* self ```
QAbstractItemModel* q_treewidget_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTreeWidget* self ```
QItemSelectionModel* q_treewidget_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTreeWidget* self, QAbstractItemDelegate* delegate ```
void q_treewidget_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeWidget* self ```
QAbstractItemDelegate* q_treewidget_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTreeWidget* self, enum QAbstractItemView__SelectionMode mode ```
void q_treewidget_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTreeWidget* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_treewidget_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTreeWidget* self ```
QModelIndex* q_treewidget_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTreeWidget* self ```
QModelIndex* q_treewidget_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTreeWidget* self, int triggers ```
void q_treewidget_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTreeWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_treewidget_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTreeWidget* self ```
void q_treewidget_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTreeWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_treewidget_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTreeWidget* self ```
void q_treewidget_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTreeWidget* self, int margin ```
void q_treewidget_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTreeWidget* self, bool overwrite ```
void q_treewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTreeWidget* self, enum QAbstractItemView__DragDropMode behavior ```
void q_treewidget_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTreeWidget* self, enum Qt__DropAction dropAction ```
void q_treewidget_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTreeWidget* self, QSize* size ```
void q_treewidget_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTreeWidget* self, enum Qt__TextElideMode mode ```
void q_treewidget_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QSize* q_treewidget_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTreeWidget* self, QModelIndex* index, QWidget* widget ```
void q_treewidget_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QWidget* q_treewidget_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTreeWidget* self, int row, QAbstractItemDelegate* delegate ```
void q_treewidget_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTreeWidget* self, int row ```
QAbstractItemDelegate* q_treewidget_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTreeWidget* self, int column, QAbstractItemDelegate* delegate ```
void q_treewidget_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTreeWidget* self, int column ```
QAbstractItemDelegate* q_treewidget_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_treewidget_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTreeWidget* self ```
void q_treewidget_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTreeWidget* self ```
void q_treewidget_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTreeWidget* self ```
void q_treewidget_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treewidget_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treewidget_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treewidget_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treewidget_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treewidget_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTreeWidget* self ```
void q_treewidget_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*) ```
void q_treewidget_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTreeWidget* self, QSize* size ```
void q_treewidget_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QTreeWidget* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_treewidget_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTreeWidget* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_treewidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTreeWidget* self ```
QScrollBar* q_treewidget_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTreeWidget* self, QScrollBar* scrollbar ```
void q_treewidget_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTreeWidget* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_treewidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTreeWidget* self ```
QScrollBar* q_treewidget_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTreeWidget* self, QScrollBar* scrollbar ```
void q_treewidget_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTreeWidget* self, QWidget* widget ```
void q_treewidget_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTreeWidget* self, QWidget* widget, int alignment ```
void q_treewidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTreeWidget* self, int alignment ```
libqt_list /* of QWidget* */ q_treewidget_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTreeWidget* self, QWidget* widget ```
void q_treewidget_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTreeWidget* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_treewidget_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTreeWidget* self, int frameStyle ```
void q_treewidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTreeWidget* self, enum QFrame__Shape frameShape ```
void q_treewidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTreeWidget* self, enum QFrame__Shadow frameShadow ```
void q_treewidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTreeWidget* self, int lineWidth ```
void q_treewidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTreeWidget* self, int midLineWidth ```
void q_treewidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTreeWidget* self, QRect* frameRect ```
void q_treewidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTreeWidget* self ```
uintptr_t q_treewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTreeWidget* self ```
void q_treewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTreeWidget* self ```
uintptr_t q_treewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTreeWidget* self ```
uintptr_t q_treewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTreeWidget* self ```
QStyle* q_treewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTreeWidget* self, QStyle* style ```
void q_treewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTreeWidget* self, enum Qt__WindowModality windowModality ```
void q_treewidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTreeWidget* self, QWidget* param1 ```
bool q_treewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTreeWidget* self, bool enabled ```
void q_treewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTreeWidget* self, bool disabled ```
void q_treewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTreeWidget* self, bool windowModified ```
void q_treewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTreeWidget* self ```
QPoint* q_treewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTreeWidget* self ```
QRegion* q_treewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeWidget* self, QSize* minimumSize ```
void q_treewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeWidget* self, int minw, int minh ```
void q_treewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeWidget* self, QSize* maximumSize ```
void q_treewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeWidget* self, int maxw, int maxh ```
void q_treewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTreeWidget* self, int minw ```
void q_treewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTreeWidget* self, int minh ```
void q_treewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTreeWidget* self, int maxw ```
void q_treewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTreeWidget* self, int maxh ```
void q_treewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeWidget* self, QSize* sizeIncrement ```
void q_treewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeWidget* self, int w, int h ```
void q_treewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeWidget* self, QSize* baseSize ```
void q_treewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeWidget* self, int basew, int baseh ```
void q_treewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeWidget* self, QSize* fixedSize ```
void q_treewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeWidget* self, int w, int h ```
void q_treewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTreeWidget* self, int w ```
void q_treewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTreeWidget* self, int h ```
void q_treewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeWidget* self, QPointF* param1 ```
QPointF* q_treewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeWidget* self, QPoint* param1 ```
QPoint* q_treewidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeWidget* self, QPointF* param1 ```
QPointF* q_treewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeWidget* self, QPoint* param1 ```
QPoint* q_treewidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeWidget* self, QPointF* param1 ```
QPointF* q_treewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeWidget* self, QPoint* param1 ```
QPoint* q_treewidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeWidget* self, QPointF* param1 ```
QPointF* q_treewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeWidget* self, QPoint* param1 ```
QPoint* q_treewidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTreeWidget* self ```
QPalette* q_treewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTreeWidget* self, QPalette* palette ```
void q_treewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTreeWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_treewidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTreeWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_treewidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTreeWidget* self ```
QFont* q_treewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTreeWidget* self, QFont* font ```
void q_treewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTreeWidget* self ```
QFontMetrics* q_treewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTreeWidget* self ```
QFontInfo* q_treewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTreeWidget* self ```
QCursor* q_treewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTreeWidget* self, QCursor* cursor ```
void q_treewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTreeWidget* self ```
void q_treewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeWidget* self, QBitmap* mask ```
void q_treewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeWidget* self, QRegion* mask ```
void q_treewidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTreeWidget* self ```
QRegion* q_treewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTreeWidget* self ```
void q_treewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPaintDevice* target ```
void q_treewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPainter* painter ```
void q_treewidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeWidget* self ```
QPixmap* q_treewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTreeWidget* self ```
QGraphicsEffect* q_treewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTreeWidget* self, QGraphicsEffect* effect ```
void q_treewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeWidget* self, enum Qt__GestureType typeVal ```
void q_treewidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTreeWidget* self, enum Qt__GestureType typeVal ```
void q_treewidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTreeWidget* self, const char* windowTitle ```
void q_treewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTreeWidget* self, const char* styleSheet ```
void q_treewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTreeWidget* self, QIcon* icon ```
void q_treewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTreeWidget* self ```
QIcon* q_treewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTreeWidget* self, const char* windowIconText ```
void q_treewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTreeWidget* self, const char* windowRole ```
void q_treewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTreeWidget* self, const char* filePath ```
void q_treewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTreeWidget* self, double level ```
void q_treewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTreeWidget* self ```
double q_treewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTreeWidget* self, const char* toolTip ```
void q_treewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTreeWidget* self, int msec ```
void q_treewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTreeWidget* self, const char* statusTip ```
void q_treewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTreeWidget* self, const char* whatsThis ```
void q_treewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTreeWidget* self, const char* name ```
void q_treewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTreeWidget* self, const char* description ```
void q_treewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTreeWidget* self, enum Qt__LayoutDirection direction ```
void q_treewidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTreeWidget* self ```
void q_treewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTreeWidget* self, QLocale* locale ```
void q_treewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTreeWidget* self ```
QLocale* q_treewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTreeWidget* self ```
void q_treewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeWidget* self ```
void q_treewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTreeWidget* self ```
void q_treewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTreeWidget* self ```
void q_treewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeWidget* self, enum Qt__FocusReason reason ```
void q_treewidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTreeWidget* self, enum Qt__FocusPolicy policy ```
void q_treewidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_treewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTreeWidget* self, QWidget* focusProxy ```
void q_treewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTreeWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_treewidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeWidget* self ```
void q_treewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeWidget* self, QCursor* param1 ```
void q_treewidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTreeWidget* self ```
void q_treewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTreeWidget* self ```
void q_treewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTreeWidget* self ```
void q_treewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeWidget* self, QKeySequence* key ```
int32_t q_treewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTreeWidget* self, int id ```
void q_treewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeWidget* self, int id ```
void q_treewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeWidget* self, int id ```
void q_treewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_treewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_treewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTreeWidget* self, bool enable ```
void q_treewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTreeWidget* self ```
QGraphicsProxyWidget* q_treewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeWidget* self ```
void q_treewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeWidget* self, int x, int y, int w, int h ```
void q_treewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeWidget* self, QRect* param1 ```
void q_treewidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeWidget* self, QRegion* param1 ```
void q_treewidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeWidget* self, int x, int y, int w, int h ```
void q_treewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeWidget* self, QRect* param1 ```
void q_treewidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeWidget* self, QRegion* param1 ```
void q_treewidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTreeWidget* self, bool hidden ```
void q_treewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTreeWidget* self ```
void q_treewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTreeWidget* self ```
void q_treewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTreeWidget* self ```
void q_treewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTreeWidget* self ```
void q_treewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTreeWidget* self ```
void q_treewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTreeWidget* self ```
void q_treewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTreeWidget* self ```
void q_treewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTreeWidget* self ```
void q_treewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTreeWidget* self, QWidget* param1 ```
void q_treewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeWidget* self, int x, int y ```
void q_treewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeWidget* self, QPoint* param1 ```
void q_treewidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeWidget* self, int w, int h ```
void q_treewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeWidget* self, QSize* param1 ```
void q_treewidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeWidget* self, int x, int y, int w, int h ```
void q_treewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeWidget* self, QRect* geometry ```
void q_treewidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTreeWidget* self ```
char* q_treewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTreeWidget* self, const char* geometry ```
bool q_treewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTreeWidget* self ```
void q_treewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTreeWidget* self, QWidget* param1 ```
bool q_treewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTreeWidget* self, int state ```
void q_treewidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTreeWidget* self, int state ```
void q_treewidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTreeWidget* self ```
QSizePolicy* q_treewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeWidget* self, QSizePolicy* sizePolicy ```
void q_treewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_treewidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTreeWidget* self ```
QRegion* q_treewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeWidget* self, int left, int top, int right, int bottom ```
void q_treewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeWidget* self, QMargins* margins ```
void q_treewidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTreeWidget* self ```
QMargins* q_treewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTreeWidget* self ```
QRect* q_treewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTreeWidget* self ```
QLayout* q_treewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTreeWidget* self, QLayout* layout ```
void q_treewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTreeWidget* self ```
void q_treewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeWidget* self, QWidget* parent ```
void q_treewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeWidget* self, QWidget* parent, int f ```
void q_treewidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeWidget* self, int dx, int dy ```
void q_treewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeWidget* self, int dx, int dy, QRect* param3 ```
void q_treewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTreeWidget* self, bool on ```
void q_treewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeWidget* self, QAction* action ```
void q_treewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTreeWidget* self, QAction* actions[] ```
void q_treewidget_add_actions(void* self, void* actions[]) {
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
/// ``` QTreeWidget* self, QAction* before, QAction* actions[] ```
void q_treewidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QTreeWidget* self, QAction* before, QAction* action ```
void q_treewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTreeWidget* self, QAction* action ```
void q_treewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTreeWidget* self ```
libqt_list /* of QAction* */ q_treewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeWidget* self, const char* text ```
QAction* q_treewidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeWidget* self, QIcon* icon, const char* text ```
QAction* q_treewidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_treewidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_treewidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTreeWidget* self ```
QWidget* q_treewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTreeWidget* self, int typeVal ```
void q_treewidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeWidget* self, enum Qt__WindowType param1 ```
void q_treewidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTreeWidget* self, int typeVal ```
void q_treewidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_treewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeWidget* self, int x, int y ```
QWidget* q_treewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeWidget* self, QPoint* p ```
QWidget* q_treewidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeWidget* self, enum Qt__WidgetAttribute param1 ```
void q_treewidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTreeWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_treewidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTreeWidget* self ```
void q_treewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTreeWidget* self, QWidget* child ```
bool q_treewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTreeWidget* self, bool enabled ```
void q_treewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTreeWidget* self ```
QBackingStore* q_treewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTreeWidget* self ```
QWindow* q_treewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTreeWidget* self ```
QScreen* q_treewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTreeWidget* self, QScreen* screen ```
void q_treewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_treewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTreeWidget* self, const char* title ```
void q_treewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTreeWidget* self, void (*slot)(QWidget*, const char*) ```
void q_treewidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTreeWidget* self, QIcon* icon ```
void q_treewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTreeWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_treewidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTreeWidget* self, const char* iconText ```
void q_treewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTreeWidget* self, void (*slot)(QWidget*, const char*) ```
void q_treewidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTreeWidget* self, QPoint* pos ```
void q_treewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTreeWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_treewidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTreeWidget* self, int hints ```
void q_treewidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_treewidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_treewidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeWidget* self, QRect* rectangle ```
QPixmap* q_treewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_treewidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_treewidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeWidget* self, int id, bool enable ```
void q_treewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeWidget* self, int id, bool enable ```
void q_treewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeWidget* self, enum Qt__WindowType param1, bool on ```
void q_treewidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_treewidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_treewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_treewidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTreeWidget* self ```
const char* q_treewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTreeWidget* self, const char* name ```
void q_treewidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTreeWidget* self, bool b ```
bool q_treewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTreeWidget* self ```
QThread* q_treewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTreeWidget* self, QThread* thread ```
void q_treewidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeWidget* self, int interval ```
int32_t q_treewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTreeWidget* self, int id ```
void q_treewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTreeWidget* self ```
libqt_list /* of QObject* */ q_treewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTreeWidget* self, QObject* filterObj ```
void q_treewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTreeWidget* self, QObject* obj ```
void q_treewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_treewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_treewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_treewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_treewidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTreeWidget* self ```
void q_treewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTreeWidget* self ```
void q_treewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTreeWidget* self, const char* name, QVariant* value ```
bool q_treewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTreeWidget* self, const char* name ```
QVariant* q_treewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTreeWidget* self ```
const char** q_treewidget_dynamic_property_names(void* self) {
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
/// ``` QTreeWidget* self ```
QBindingStorage* q_treewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTreeWidget* self ```
QBindingStorage* q_treewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeWidget* self ```
void q_treewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTreeWidget* self, void (*slot)(QObject*) ```
void q_treewidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTreeWidget* self ```
QObject* q_treewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTreeWidget* self, const char* classname ```
bool q_treewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTreeWidget* self ```
void q_treewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_treewidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treewidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treewidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeWidget* self, QObject* param1 ```
void q_treewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTreeWidget* self, void (*slot)(QObject*, QObject*) ```
void q_treewidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTreeWidget* self ```
bool q_treewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTreeWidget* self ```
double q_treewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTreeWidget* self ```
double q_treewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_treewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_set_root_index(void* self, void* index) {
    QTreeWidget_SetRootIndex((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
void q_treewidget_qbase_set_root_index(void* self, void* index) {
    QTreeWidget_QBaseSetRootIndex((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnSetRootIndex((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, const char* search ```
void q_treewidget_keyboard_search(void* self, const char* search) {
    QTreeWidget_KeyboardSearch((QTreeWidget*)self, qstring(search));
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, const char* search ```
void q_treewidget_qbase_keyboard_search(void* self, const char* search) {
    QTreeWidget_QBaseKeyboardSearch((QTreeWidget*)self, qstring(search));
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, const char*) ```
void q_treewidget_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QTreeWidget_OnKeyboardSearch((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QRect* q_treewidget_visual_rect(void* self, void* index) {
    return QTreeWidget_VisualRect((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QRect* q_treewidget_qbase_visual_rect(void* self, void* index) {
    return QTreeWidget_QBaseVisualRect((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QRect* (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QTreeWidget_OnVisualRect((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treewidget_scroll_to(void* self, void* index, int64_t hint) {
    QTreeWidget_ScrollTo((QTreeWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treewidget_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTreeWidget_QBaseScrollTo((QTreeWidget*)self, (QModelIndex*)index, hint);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_treewidget_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeWidget_OnScrollTo((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPoint* p ```
QModelIndex* q_treewidget_index_at(void* self, void* p) {
    return QTreeWidget_IndexAt((QTreeWidget*)self, (QPoint*)p);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPoint* p ```
QModelIndex* q_treewidget_qbase_index_at(void* self, void* p) {
    return QTreeWidget_QBaseIndexAt((QTreeWidget*)self, (QPoint*)p);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* (*slot)(QTreeWidget*, QPoint*) ```
void q_treewidget_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTreeWidget_OnIndexAt((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_do_items_layout(void* self) {
    QTreeWidget_DoItemsLayout((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_do_items_layout(void* self) {
    QTreeWidget_QBaseDoItemsLayout((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_do_items_layout(void* self, void (*slot)()) {
    QTreeWidget_OnDoItemsLayout((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_reset(void* self) {
    QTreeWidget_Reset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_reset(void* self) {
    QTreeWidget_QBaseReset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_reset(void* self, void (*slot)()) {
    QTreeWidget_OnReset((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_treewidget_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTreeWidget_DataChanged((QTreeWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_treewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTreeWidget_QBaseDataChanged((QTreeWidget*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, QModelIndex*, int*[]) ```
void q_treewidget_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QTreeWidget_OnDataChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_select_all(void* self) {
    QTreeWidget_SelectAll((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_select_all(void* self) {
    QTreeWidget_QBaseSelectAll((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_select_all(void* self, void (*slot)()) {
    QTreeWidget_OnSelectAll((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int value ```
void q_treewidget_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_VerticalScrollbarValueChanged((QTreeWidget*)self, value);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int value ```
void q_treewidget_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_QBaseVerticalScrollbarValueChanged((QTreeWidget*)self, value);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTreeWidget_OnVerticalScrollbarValueChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int dx, int dy ```
void q_treewidget_scroll_contents_by(void* self, int dx, int dy) {
    QTreeWidget_ScrollContentsBy((QTreeWidget*)self, dx, dy);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int dx, int dy ```
void q_treewidget_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTreeWidget_QBaseScrollContentsBy((QTreeWidget*)self, dx, dy);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int, int) ```
void q_treewidget_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTreeWidget_OnScrollContentsBy((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int start, int end ```
void q_treewidget_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeWidget_RowsInserted((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int start, int end ```
void q_treewidget_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeWidget_QBaseRowsInserted((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, int, int) ```
void q_treewidget_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeWidget_OnRowsInserted((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int start, int end ```
void q_treewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeWidget_RowsAboutToBeRemoved((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int start, int end ```
void q_treewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeWidget_QBaseRowsAboutToBeRemoved((QTreeWidget*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, int, int) ```
void q_treewidget_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeWidget_OnRowsAboutToBeRemoved((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treewidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeWidget_MoveCursor((QTreeWidget*)self, cursorAction, modifiers);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treewidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTreeWidget_QBaseMoveCursor((QTreeWidget*)self, cursorAction, modifiers);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* (*slot)(QTreeWidget*, enum QAbstractItemView__CursorAction, int) ```
void q_treewidget_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QTreeWidget_OnMoveCursor((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_horizontal_offset(void* self) {
    return QTreeWidget_HorizontalOffset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_qbase_horizontal_offset(void* self) {
    return QTreeWidget_QBaseHorizontalOffset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)() ```
void q_treewidget_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QTreeWidget_OnHorizontalOffset((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_vertical_offset(void* self) {
    return QTreeWidget_VerticalOffset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_qbase_vertical_offset(void* self) {
    return QTreeWidget_QBaseVerticalOffset((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)() ```
void q_treewidget_on_vertical_offset(void* self, int32_t (*slot)()) {
    QTreeWidget_OnVerticalOffset((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QRect* rect, int command ```
void q_treewidget_set_selection(void* self, void* rect, int64_t command) {
    QTreeWidget_SetSelection((QTreeWidget*)self, (QRect*)rect, command);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QRect* rect, int command ```
void q_treewidget_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTreeWidget_QBaseSetSelection((QTreeWidget*)self, (QRect*)rect, command);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QRect*, int) ```
void q_treewidget_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeWidget_OnSetSelection((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QItemSelection* selection ```
QRegion* q_treewidget_visual_region_for_selection(void* self, void* selection) {
    return QTreeWidget_VisualRegionForSelection((QTreeWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QItemSelection* selection ```
QRegion* q_treewidget_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTreeWidget_QBaseVisualRegionForSelection((QTreeWidget*)self, (QItemSelection*)selection);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QRegion* (*slot)(QTreeWidget*, QItemSelection*) ```
void q_treewidget_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QTreeWidget_OnVisualRegionForSelection((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
libqt_list /* of QModelIndex* */ q_treewidget_selected_indexes(void* self) {
    libqt_list _arr = QTreeWidget_SelectedIndexes((QTreeWidget*)self);
    return _arr;
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
libqt_list /* of QModelIndex* */ q_treewidget_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTreeWidget_QBaseSelectedIndexes((QTreeWidget*)self);
    return _arr;
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_treewidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTreeWidget_OnSelectedIndexes((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_change_event(void* self, void* event) {
    QTreeWidget_ChangeEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_qbase_change_event(void* self, void* event) {
    QTreeWidget_QBaseChangeEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QEvent*) ```
void q_treewidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnChangeEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QTimerEvent* event ```
void q_treewidget_timer_event(void* self, void* event) {
    QTreeWidget_TimerEvent((QTreeWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QTimerEvent* event ```
void q_treewidget_qbase_timer_event(void* self, void* event) {
    QTreeWidget_QBaseTimerEvent((QTreeWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTimerEvent*) ```
void q_treewidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnTimerEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPaintEvent* event ```
void q_treewidget_paint_event(void* self, void* event) {
    QTreeWidget_PaintEvent((QTreeWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPaintEvent* event ```
void q_treewidget_qbase_paint_event(void* self, void* event) {
    QTreeWidget_QBasePaintEvent((QTreeWidget*)self, (QPaintEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPaintEvent*) ```
void q_treewidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnPaintEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treewidget_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeWidget_DrawRow((QTreeWidget*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treewidget_qbase_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeWidget_QBaseDrawRow((QTreeWidget*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_treewidget_on_draw_row(void* self, void (*slot)(void*, void*, void*, void*)) {
    QTreeWidget_OnDrawRow((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treewidget_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeWidget_DrawBranches((QTreeWidget*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treewidget_qbase_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeWidget_QBaseDrawBranches((QTreeWidget*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPainter*, QRect*, QModelIndex*) ```
void q_treewidget_on_draw_branches(void* self, void (*slot)(void*, void*, void*, void*)) {
    QTreeWidget_OnDrawBranches((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_mouse_press_event(void* self, void* event) {
    QTreeWidget_MousePressEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_qbase_mouse_press_event(void* self, void* event) {
    QTreeWidget_QBaseMousePressEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMouseEvent*) ```
void q_treewidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnMousePressEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_mouse_release_event(void* self, void* event) {
    QTreeWidget_MouseReleaseEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_qbase_mouse_release_event(void* self, void* event) {
    QTreeWidget_QBaseMouseReleaseEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMouseEvent*) ```
void q_treewidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnMouseReleaseEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_mouse_double_click_event(void* self, void* event) {
    QTreeWidget_MouseDoubleClickEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTreeWidget_QBaseMouseDoubleClickEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMouseEvent*) ```
void q_treewidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnMouseDoubleClickEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_mouse_move_event(void* self, void* event) {
    QTreeWidget_MouseMoveEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMouseEvent* event ```
void q_treewidget_qbase_mouse_move_event(void* self, void* event) {
    QTreeWidget_QBaseMouseMoveEvent((QTreeWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMouseEvent*) ```
void q_treewidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnMouseMoveEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QKeyEvent* event ```
void q_treewidget_key_press_event(void* self, void* event) {
    QTreeWidget_KeyPressEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QKeyEvent* event ```
void q_treewidget_qbase_key_press_event(void* self, void* event) {
    QTreeWidget_QBaseKeyPressEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QKeyEvent*) ```
void q_treewidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnKeyPressEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QDragMoveEvent* event ```
void q_treewidget_drag_move_event(void* self, void* event) {
    QTreeWidget_DragMoveEvent((QTreeWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QDragMoveEvent* event ```
void q_treewidget_qbase_drag_move_event(void* self, void* event) {
    QTreeWidget_QBaseDragMoveEvent((QTreeWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QDragMoveEvent*) ```
void q_treewidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDragMoveEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
bool q_treewidget_viewport_event(void* self, void* event) {
    return QTreeWidget_ViewportEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
bool q_treewidget_qbase_viewport_event(void* self, void* event) {
    return QTreeWidget_QBaseViewportEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QEvent*) ```
void q_treewidget_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTreeWidget_OnViewportEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_update_geometries(void* self) {
    QTreeWidget_UpdateGeometries((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_update_geometries(void* self) {
    QTreeWidget_QBaseUpdateGeometries((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_update_geometries(void* self, void (*slot)()) {
    QTreeWidget_OnUpdateGeometries((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_viewport_size_hint(void* self) {
    return QTreeWidget_ViewportSizeHint((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_qbase_viewport_size_hint(void* self) {
    return QTreeWidget_QBaseViewportSizeHint((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QSize* (*slot)() ```
void q_treewidget_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTreeWidget_OnViewportSizeHint((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int column ```
int32_t q_treewidget_size_hint_for_column(void* self, int column) {
    return QTreeWidget_SizeHintForColumn((QTreeWidget*)self, column);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int column ```
int32_t q_treewidget_qbase_size_hint_for_column(void* self, int column) {
    return QTreeWidget_QBaseSizeHintForColumn((QTreeWidget*)self, column);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QTreeWidget_OnSizeHintForColumn((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int action ```
void q_treewidget_horizontal_scrollbar_action(void* self, int action) {
    QTreeWidget_HorizontalScrollbarAction((QTreeWidget*)self, action);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int action ```
void q_treewidget_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTreeWidget_QBaseHorizontalScrollbarAction((QTreeWidget*)self, action);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTreeWidget_OnHorizontalScrollbarAction((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
bool q_treewidget_is_index_hidden(void* self, void* index) {
    return QTreeWidget_IsIndexHidden((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
bool q_treewidget_qbase_is_index_hidden(void* self, void* index) {
    return QTreeWidget_QBaseIsIndexHidden((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QTreeWidget_OnIsIndexHidden((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treewidget_selection_changed(void* self, void* selected, void* deselected) {
    QTreeWidget_SelectionChanged((QTreeWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treewidget_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTreeWidget_QBaseSelectionChanged((QTreeWidget*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QItemSelection*, QItemSelection*) ```
void q_treewidget_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTreeWidget_OnSelectionChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_treewidget_current_changed(void* self, void* current, void* previous) {
    QTreeWidget_CurrentChanged((QTreeWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_treewidget_qbase_current_changed(void* self, void* current, void* previous) {
    QTreeWidget_QBaseCurrentChanged((QTreeWidget*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, QModelIndex*) ```
void q_treewidget_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTreeWidget_OnCurrentChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int row ```
int32_t q_treewidget_size_hint_for_row(void* self, int row) {
    return QTreeWidget_SizeHintForRow((QTreeWidget*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int row ```
int32_t q_treewidget_qbase_size_hint_for_row(void* self, int row) {
    return QTreeWidget_QBaseSizeHintForRow((QTreeWidget*)self, row);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QTreeWidget_OnSizeHintForRow((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_treewidget_item_delegate_for_index(void* self, void* index) {
    return QTreeWidget_ItemDelegateForIndex((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_treewidget_qbase_item_delegate_for_index(void* self, void* index) {
    return QTreeWidget_QBaseItemDelegateForIndex((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QAbstractItemDelegate* (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QTreeWidget_OnItemDelegateForIndex((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_treewidget_input_method_query(void* self, int64_t query) {
    return QTreeWidget_InputMethodQuery((QTreeWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_treewidget_qbase_input_method_query(void* self, int64_t query) {
    return QTreeWidget_QBaseInputMethodQuery((QTreeWidget*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QVariant* (*slot)(QTreeWidget*, enum Qt__InputMethodQuery) ```
void q_treewidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTreeWidget_OnInputMethodQuery((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_update_editor_data(void* self) {
    QTreeWidget_UpdateEditorData((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_update_editor_data(void* self) {
    QTreeWidget_QBaseUpdateEditorData((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_update_editor_data(void* self, void (*slot)()) {
    QTreeWidget_OnUpdateEditorData((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_update_editor_geometries(void* self) {
    QTreeWidget_UpdateEditorGeometries((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_update_editor_geometries(void* self) {
    QTreeWidget_QBaseUpdateEditorGeometries((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_update_editor_geometries(void* self, void (*slot)()) {
    QTreeWidget_OnUpdateEditorGeometries((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int action ```
void q_treewidget_vertical_scrollbar_action(void* self, int action) {
    QTreeWidget_VerticalScrollbarAction((QTreeWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int action ```
void q_treewidget_qbase_vertical_scrollbar_action(void* self, int action) {
    QTreeWidget_QBaseVerticalScrollbarAction((QTreeWidget*)self, action);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTreeWidget_OnVerticalScrollbarAction((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int value ```
void q_treewidget_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_HorizontalScrollbarValueChanged((QTreeWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int value ```
void q_treewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeWidget_QBaseHorizontalScrollbarValueChanged((QTreeWidget*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTreeWidget_OnHorizontalScrollbarValueChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treewidget_close_editor(void* self, void* editor, int64_t hint) {
    QTreeWidget_CloseEditor((QTreeWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treewidget_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTreeWidget_QBaseCloseEditor((QTreeWidget*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_treewidget_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QTreeWidget_OnCloseEditor((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* editor ```
void q_treewidget_commit_data(void* self, void* editor) {
    QTreeWidget_CommitData((QTreeWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* editor ```
void q_treewidget_qbase_commit_data(void* self, void* editor) {
    QTreeWidget_QBaseCommitData((QTreeWidget*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QWidget*) ```
void q_treewidget_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnCommitData((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QObject* editor ```
void q_treewidget_editor_destroyed(void* self, void* editor) {
    QTreeWidget_EditorDestroyed((QTreeWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QObject* editor ```
void q_treewidget_qbase_editor_destroyed(void* self, void* editor) {
    QTreeWidget_QBaseEditorDestroyed((QTreeWidget*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QObject*) ```
void q_treewidget_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnEditorDestroyed((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treewidget_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeWidget_Edit2((QTreeWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treewidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTreeWidget_QBaseEdit2((QTreeWidget*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_treewidget_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QTreeWidget_OnEdit2((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_treewidget_selection_command(void* self, void* index, void* event) {
    return QTreeWidget_SelectionCommand((QTreeWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_treewidget_qbase_selection_command(void* self, void* index, void* event) {
    return QTreeWidget_QBaseSelectionCommand((QTreeWidget*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int64_t (*slot)(QTreeWidget*, QModelIndex*, QEvent*) ```
void q_treewidget_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QTreeWidget_OnSelectionCommand((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int supportedActions ```
void q_treewidget_start_drag(void* self, int64_t supportedActions) {
    QTreeWidget_StartDrag((QTreeWidget*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int supportedActions ```
void q_treewidget_qbase_start_drag(void* self, int64_t supportedActions) {
    QTreeWidget_QBaseStartDrag((QTreeWidget*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QTreeWidget_OnStartDrag((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QStyleOptionViewItem* option ```
void q_treewidget_init_view_item_option(void* self, void* option) {
    QTreeWidget_InitViewItemOption((QTreeWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QStyleOptionViewItem* option ```
void q_treewidget_qbase_init_view_item_option(void* self, void* option) {
    QTreeWidget_QBaseInitViewItemOption((QTreeWidget*)self, (QStyleOptionViewItem*)option);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QStyleOptionViewItem*) ```
void q_treewidget_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnInitViewItemOption((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, bool next ```
bool q_treewidget_focus_next_prev_child(void* self, bool next) {
    return QTreeWidget_FocusNextPrevChild((QTreeWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, bool next ```
bool q_treewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTreeWidget_QBaseFocusNextPrevChild((QTreeWidget*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, bool) ```
void q_treewidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTreeWidget_OnFocusNextPrevChild((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QDragEnterEvent* event ```
void q_treewidget_drag_enter_event(void* self, void* event) {
    QTreeWidget_DragEnterEvent((QTreeWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QDragEnterEvent* event ```
void q_treewidget_qbase_drag_enter_event(void* self, void* event) {
    QTreeWidget_QBaseDragEnterEvent((QTreeWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QDragEnterEvent*) ```
void q_treewidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDragEnterEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QDragLeaveEvent* event ```
void q_treewidget_drag_leave_event(void* self, void* event) {
    QTreeWidget_DragLeaveEvent((QTreeWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QDragLeaveEvent* event ```
void q_treewidget_qbase_drag_leave_event(void* self, void* event) {
    QTreeWidget_QBaseDragLeaveEvent((QTreeWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QDragLeaveEvent*) ```
void q_treewidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDragLeaveEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QFocusEvent* event ```
void q_treewidget_focus_in_event(void* self, void* event) {
    QTreeWidget_FocusInEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QFocusEvent* event ```
void q_treewidget_qbase_focus_in_event(void* self, void* event) {
    QTreeWidget_QBaseFocusInEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QFocusEvent*) ```
void q_treewidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnFocusInEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QFocusEvent* event ```
void q_treewidget_focus_out_event(void* self, void* event) {
    QTreeWidget_FocusOutEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QFocusEvent* event ```
void q_treewidget_qbase_focus_out_event(void* self, void* event) {
    QTreeWidget_QBaseFocusOutEvent((QTreeWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QFocusEvent*) ```
void q_treewidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnFocusOutEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QResizeEvent* event ```
void q_treewidget_resize_event(void* self, void* event) {
    QTreeWidget_ResizeEvent((QTreeWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QResizeEvent* event ```
void q_treewidget_qbase_resize_event(void* self, void* event) {
    QTreeWidget_QBaseResizeEvent((QTreeWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QResizeEvent*) ```
void q_treewidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnResizeEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QInputMethodEvent* event ```
void q_treewidget_input_method_event(void* self, void* event) {
    QTreeWidget_InputMethodEvent((QTreeWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QInputMethodEvent* event ```
void q_treewidget_qbase_input_method_event(void* self, void* event) {
    QTreeWidget_QBaseInputMethodEvent((QTreeWidget*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QInputMethodEvent*) ```
void q_treewidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnInputMethodEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QObject* object, QEvent* event ```
bool q_treewidget_event_filter(void* self, void* object, void* event) {
    return QTreeWidget_EventFilter((QTreeWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QObject* object, QEvent* event ```
bool q_treewidget_qbase_event_filter(void* self, void* object, void* event) {
    return QTreeWidget_QBaseEventFilter((QTreeWidget*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QObject*, QEvent*) ```
void q_treewidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTreeWidget_OnEventFilter((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_minimum_size_hint(void* self) {
    return QTreeWidget_MinimumSizeHint((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_qbase_minimum_size_hint(void* self) {
    return QTreeWidget_QBaseMinimumSizeHint((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QSize* (*slot)() ```
void q_treewidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTreeWidget_OnMinimumSizeHint((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_size_hint(void* self) {
    return QTreeWidget_SizeHint((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QSize* q_treewidget_qbase_size_hint(void* self) {
    return QTreeWidget_QBaseSizeHint((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QSize* (*slot)() ```
void q_treewidget_on_size_hint(void* self, QSize* (*slot)()) {
    QTreeWidget_OnSizeHint((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* viewport ```
void q_treewidget_setup_viewport(void* self, void* viewport) {
    QTreeWidget_SetupViewport((QTreeWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QWidget* viewport ```
void q_treewidget_qbase_setup_viewport(void* self, void* viewport) {
    QTreeWidget_QBaseSetupViewport((QTreeWidget*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QWidget*) ```
void q_treewidget_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnSetupViewport((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QWheelEvent* param1 ```
void q_treewidget_wheel_event(void* self, void* param1) {
    QTreeWidget_WheelEvent((QTreeWidget*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QWheelEvent* param1 ```
void q_treewidget_qbase_wheel_event(void* self, void* param1) {
    QTreeWidget_QBaseWheelEvent((QTreeWidget*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QWheelEvent*) ```
void q_treewidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnWheelEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QContextMenuEvent* param1 ```
void q_treewidget_context_menu_event(void* self, void* param1) {
    QTreeWidget_ContextMenuEvent((QTreeWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QContextMenuEvent* param1 ```
void q_treewidget_qbase_context_menu_event(void* self, void* param1) {
    QTreeWidget_QBaseContextMenuEvent((QTreeWidget*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QContextMenuEvent*) ```
void q_treewidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnContextMenuEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QStyleOptionFrame* option ```
void q_treewidget_init_style_option(void* self, void* option) {
    QTreeWidget_InitStyleOption((QTreeWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QStyleOptionFrame* option ```
void q_treewidget_qbase_init_style_option(void* self, void* option) {
    QTreeWidget_QBaseInitStyleOption((QTreeWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QStyleOptionFrame*) ```
void q_treewidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnInitStyleOption((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_dev_type(void* self) {
    return QTreeWidget_DevType((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_qbase_dev_type(void* self) {
    return QTreeWidget_QBaseDevType((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)() ```
void q_treewidget_on_dev_type(void* self, int32_t (*slot)()) {
    QTreeWidget_OnDevType((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, bool visible ```
void q_treewidget_set_visible(void* self, bool visible) {
    QTreeWidget_SetVisible((QTreeWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, bool visible ```
void q_treewidget_qbase_set_visible(void* self, bool visible) {
    QTreeWidget_QBaseSetVisible((QTreeWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, bool) ```
void q_treewidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTreeWidget_OnSetVisible((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int param1 ```
int32_t q_treewidget_height_for_width(void* self, int param1) {
    return QTreeWidget_HeightForWidth((QTreeWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int param1 ```
int32_t q_treewidget_qbase_height_for_width(void* self, int param1) {
    return QTreeWidget_QBaseHeightForWidth((QTreeWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, int) ```
void q_treewidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTreeWidget_OnHeightForWidth((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_has_height_for_width(void* self) {
    return QTreeWidget_HasHeightForWidth((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_qbase_has_height_for_width(void* self) {
    return QTreeWidget_QBaseHasHeightForWidth((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)() ```
void q_treewidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QTreeWidget_OnHasHeightForWidth((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QPaintEngine* q_treewidget_paint_engine(void* self) {
    return QTreeWidget_PaintEngine((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QPaintEngine* q_treewidget_qbase_paint_engine(void* self) {
    return QTreeWidget_QBasePaintEngine((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QPaintEngine* (*slot)() ```
void q_treewidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTreeWidget_OnPaintEngine((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QKeyEvent* event ```
void q_treewidget_key_release_event(void* self, void* event) {
    QTreeWidget_KeyReleaseEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QKeyEvent* event ```
void q_treewidget_qbase_key_release_event(void* self, void* event) {
    QTreeWidget_QBaseKeyReleaseEvent((QTreeWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QKeyEvent*) ```
void q_treewidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnKeyReleaseEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QEnterEvent* event ```
void q_treewidget_enter_event(void* self, void* event) {
    QTreeWidget_EnterEvent((QTreeWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QEnterEvent* event ```
void q_treewidget_qbase_enter_event(void* self, void* event) {
    QTreeWidget_QBaseEnterEvent((QTreeWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QEnterEvent*) ```
void q_treewidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnEnterEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_leave_event(void* self, void* event) {
    QTreeWidget_LeaveEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_qbase_leave_event(void* self, void* event) {
    QTreeWidget_QBaseLeaveEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QEvent*) ```
void q_treewidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnLeaveEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMoveEvent* event ```
void q_treewidget_move_event(void* self, void* event) {
    QTreeWidget_MoveEvent((QTreeWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMoveEvent* event ```
void q_treewidget_qbase_move_event(void* self, void* event) {
    QTreeWidget_QBaseMoveEvent((QTreeWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMoveEvent*) ```
void q_treewidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnMoveEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QCloseEvent* event ```
void q_treewidget_close_event(void* self, void* event) {
    QTreeWidget_CloseEvent((QTreeWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QCloseEvent* event ```
void q_treewidget_qbase_close_event(void* self, void* event) {
    QTreeWidget_QBaseCloseEvent((QTreeWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QCloseEvent*) ```
void q_treewidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnCloseEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QTabletEvent* event ```
void q_treewidget_tablet_event(void* self, void* event) {
    QTreeWidget_TabletEvent((QTreeWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QTabletEvent* event ```
void q_treewidget_qbase_tablet_event(void* self, void* event) {
    QTreeWidget_QBaseTabletEvent((QTreeWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QTabletEvent*) ```
void q_treewidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnTabletEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QActionEvent* event ```
void q_treewidget_action_event(void* self, void* event) {
    QTreeWidget_ActionEvent((QTreeWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QActionEvent* event ```
void q_treewidget_qbase_action_event(void* self, void* event) {
    QTreeWidget_QBaseActionEvent((QTreeWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QActionEvent*) ```
void q_treewidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnActionEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QShowEvent* event ```
void q_treewidget_show_event(void* self, void* event) {
    QTreeWidget_ShowEvent((QTreeWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QShowEvent* event ```
void q_treewidget_qbase_show_event(void* self, void* event) {
    QTreeWidget_QBaseShowEvent((QTreeWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QShowEvent*) ```
void q_treewidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnShowEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QHideEvent* event ```
void q_treewidget_hide_event(void* self, void* event) {
    QTreeWidget_HideEvent((QTreeWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QHideEvent* event ```
void q_treewidget_qbase_hide_event(void* self, void* event) {
    QTreeWidget_QBaseHideEvent((QTreeWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QHideEvent*) ```
void q_treewidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnHideEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_treewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeWidget_NativeEvent((QTreeWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_treewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTreeWidget_QBaseNativeEvent((QTreeWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, const char*, void*, intptr_t*) ```
void q_treewidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTreeWidget_OnNativeEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treewidget_metric(void* self, int64_t param1) {
    return QTreeWidget_Metric((QTreeWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treewidget_qbase_metric(void* self, int64_t param1) {
    return QTreeWidget_QBaseMetric((QTreeWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_treewidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTreeWidget_OnMetric((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter ```
void q_treewidget_init_painter(void* self, void* painter) {
    QTreeWidget_InitPainter((QTreeWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter ```
void q_treewidget_qbase_init_painter(void* self, void* painter) {
    QTreeWidget_QBaseInitPainter((QTreeWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPainter*) ```
void q_treewidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnInitPainter((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPoint* offset ```
QPaintDevice* q_treewidget_redirected(void* self, void* offset) {
    return QTreeWidget_Redirected((QTreeWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPoint* offset ```
QPaintDevice* q_treewidget_qbase_redirected(void* self, void* offset) {
    return QTreeWidget_QBaseRedirected((QTreeWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QPaintDevice* (*slot)(QTreeWidget*, QPoint*) ```
void q_treewidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTreeWidget_OnRedirected((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QPainter* q_treewidget_shared_painter(void* self) {
    return QTreeWidget_SharedPainter((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QPainter* q_treewidget_qbase_shared_painter(void* self) {
    return QTreeWidget_QBaseSharedPainter((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* (*slot)() ```
void q_treewidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTreeWidget_OnSharedPainter((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QChildEvent* event ```
void q_treewidget_child_event(void* self, void* event) {
    QTreeWidget_ChildEvent((QTreeWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QChildEvent* event ```
void q_treewidget_qbase_child_event(void* self, void* event) {
    QTreeWidget_QBaseChildEvent((QTreeWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QChildEvent*) ```
void q_treewidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnChildEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_custom_event(void* self, void* event) {
    QTreeWidget_CustomEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QEvent* event ```
void q_treewidget_qbase_custom_event(void* self, void* event) {
    QTreeWidget_QBaseCustomEvent((QTreeWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QEvent*) ```
void q_treewidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnCustomEvent((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
void q_treewidget_connect_notify(void* self, void* signal) {
    QTreeWidget_ConnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
void q_treewidget_qbase_connect_notify(void* self, void* signal) {
    QTreeWidget_QBaseConnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMetaMethod*) ```
void q_treewidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnConnectNotify((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
void q_treewidget_disconnect_notify(void* self, void* signal) {
    QTreeWidget_DisconnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
void q_treewidget_qbase_disconnect_notify(void* self, void* signal) {
    QTreeWidget_QBaseDisconnectNotify((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QMetaMethod*) ```
void q_treewidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDisconnectNotify((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int column, int oldSize, int newSize ```
void q_treewidget_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeWidget_ColumnResized((QTreeWidget*)self, column, oldSize, newSize);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int column, int oldSize, int newSize ```
void q_treewidget_qbase_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeWidget_QBaseColumnResized((QTreeWidget*)self, column, oldSize, newSize);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int, int, int) ```
void q_treewidget_on_column_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTreeWidget_OnColumnResized((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int oldCount, int newCount ```
void q_treewidget_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeWidget_ColumnCountChanged((QTreeWidget*)self, oldCount, newCount);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int oldCount, int newCount ```
void q_treewidget_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeWidget_QBaseColumnCountChanged((QTreeWidget*)self, oldCount, newCount);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int, int) ```
void q_treewidget_on_column_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTreeWidget_OnColumnCountChanged((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_column_moved(void* self) {
    QTreeWidget_ColumnMoved((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_column_moved(void* self) {
    QTreeWidget_QBaseColumnMoved((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_column_moved(void* self, void (*slot)()) {
    QTreeWidget_OnColumnMoved((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_reexpand(void* self) {
    QTreeWidget_Reexpand((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_reexpand(void* self) {
    QTreeWidget_QBaseReexpand((QTreeWidget*)self);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_reexpand(void* self, void (*slot)()) {
    QTreeWidget_OnReexpand((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int first, int last ```
void q_treewidget_rows_removed(void* self, void* parent, int first, int last) {
    QTreeWidget_RowsRemoved((QTreeWidget*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* parent, int first, int last ```
void q_treewidget_qbase_rows_removed(void* self, void* parent, int first, int last) {
    QTreeWidget_QBaseRowsRemoved((QTreeWidget*)self, (QModelIndex*)parent, first, last);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QModelIndex*, int, int) ```
void q_treewidget_on_rows_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTreeWidget_OnRowsRemoved((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QRegion* region ```
void q_treewidget_draw_tree(void* self, void* painter, void* region) {
    QTreeWidget_DrawTree((QTreeWidget*)self, (QPainter*)painter, (QRegion*)region);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* painter, QRegion* region ```
void q_treewidget_qbase_draw_tree(void* self, void* painter, void* region) {
    QTreeWidget_QBaseDrawTree((QTreeWidget*)self, (QPainter*)painter, (QRegion*)region);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPainter*, QRegion*) ```
void q_treewidget_on_draw_tree(void* self, void (*slot)(void*, void*, void*)) {
    QTreeWidget_OnDrawTree((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
int32_t q_treewidget_index_row_size_hint(void* self, void* index) {
    return QTreeWidget_IndexRowSizeHint((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
int32_t q_treewidget_qbase_index_row_size_hint(void* self, void* index) {
    return QTreeWidget_QBaseIndexRowSizeHint((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_index_row_size_hint(void* self, int32_t (*slot)(void*, void*)) {
    QTreeWidget_OnIndexRowSizeHint((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QTreeView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
int32_t q_treewidget_row_height(void* self, void* index) {
    return QTreeWidget_RowHeight((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QModelIndex* index ```
int32_t q_treewidget_qbase_row_height(void* self, void* index) {
    return QTreeWidget_QBaseRowHeight((QTreeWidget*)self, (QModelIndex*)index);
}

/// Inherited from QTreeView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, QModelIndex*) ```
void q_treewidget_on_row_height(void* self, int32_t (*slot)(void*, void*)) {
    QTreeWidget_OnRowHeight((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_state(void* self) {
    return QTreeWidget_State((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_qbase_state(void* self) {
    return QTreeWidget_QBaseState((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int64_t (*slot)() ```
void q_treewidget_on_state(void* self, int64_t (*slot)()) {
    QTreeWidget_OnState((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, enum QAbstractItemView__State state ```
void q_treewidget_set_state(void* self, int64_t state) {
    QTreeWidget_SetState((QTreeWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, enum QAbstractItemView__State state ```
void q_treewidget_qbase_set_state(void* self, int64_t state) {
    QTreeWidget_QBaseSetState((QTreeWidget*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, enum QAbstractItemView__State) ```
void q_treewidget_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QTreeWidget_OnSetState((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_schedule_delayed_items_layout(void* self) {
    QTreeWidget_ScheduleDelayedItemsLayout((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_schedule_delayed_items_layout(void* self) {
    QTreeWidget_QBaseScheduleDelayedItemsLayout((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QTreeWidget_OnScheduleDelayedItemsLayout((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_execute_delayed_items_layout(void* self) {
    QTreeWidget_ExecuteDelayedItemsLayout((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_execute_delayed_items_layout(void* self) {
    QTreeWidget_QBaseExecuteDelayedItemsLayout((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QTreeWidget_OnExecuteDelayedItemsLayout((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QRegion* region ```
void q_treewidget_set_dirty_region(void* self, void* region) {
    QTreeWidget_SetDirtyRegion((QTreeWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QRegion* region ```
void q_treewidget_qbase_set_dirty_region(void* self, void* region) {
    QTreeWidget_QBaseSetDirtyRegion((QTreeWidget*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QRegion*) ```
void q_treewidget_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnSetDirtyRegion((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int dx, int dy ```
void q_treewidget_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeWidget_ScrollDirtyRegion((QTreeWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int dx, int dy ```
void q_treewidget_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeWidget_QBaseScrollDirtyRegion((QTreeWidget*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int, int) ```
void q_treewidget_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QTreeWidget_OnScrollDirtyRegion((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QPoint* q_treewidget_dirty_region_offset(void* self) {
    return QTreeWidget_DirtyRegionOffset((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QPoint* q_treewidget_qbase_dirty_region_offset(void* self) {
    return QTreeWidget_QBaseDirtyRegionOffset((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QPoint* (*slot)() ```
void q_treewidget_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QTreeWidget_OnDirtyRegionOffset((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_start_auto_scroll(void* self) {
    QTreeWidget_StartAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_start_auto_scroll(void* self) {
    QTreeWidget_QBaseStartAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_start_auto_scroll(void* self, void (*slot)()) {
    QTreeWidget_OnStartAutoScroll((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_stop_auto_scroll(void* self) {
    QTreeWidget_StopAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_stop_auto_scroll(void* self) {
    QTreeWidget_QBaseStopAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_stop_auto_scroll(void* self, void (*slot)()) {
    QTreeWidget_OnStopAutoScroll((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_do_auto_scroll(void* self) {
    QTreeWidget_DoAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_do_auto_scroll(void* self) {
    QTreeWidget_QBaseDoAutoScroll((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_do_auto_scroll(void* self, void (*slot)()) {
    QTreeWidget_OnDoAutoScroll((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_drop_indicator_position(void* self) {
    return QTreeWidget_DropIndicatorPosition((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int64_t q_treewidget_qbase_drop_indicator_position(void* self) {
    return QTreeWidget_QBaseDropIndicatorPosition((QTreeWidget*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int64_t (*slot)() ```
void q_treewidget_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QTreeWidget_OnDropIndicatorPosition((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, int left, int top, int right, int bottom ```
void q_treewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeWidget_SetViewportMargins((QTreeWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, int left, int top, int right, int bottom ```
void q_treewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeWidget_QBaseSetViewportMargins((QTreeWidget*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, int, int, int, int) ```
void q_treewidget_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTreeWidget_OnSetViewportMargins((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QMargins* q_treewidget_viewport_margins(void* self) {
    return QTreeWidget_ViewportMargins((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QMargins* q_treewidget_qbase_viewport_margins(void* self) {
    return QTreeWidget_QBaseViewportMargins((QTreeWidget*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QMargins* (*slot)() ```
void q_treewidget_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTreeWidget_OnViewportMargins((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* param1 ```
void q_treewidget_draw_frame(void* self, void* param1) {
    QTreeWidget_DrawFrame((QTreeWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QPainter* param1 ```
void q_treewidget_qbase_draw_frame(void* self, void* param1) {
    QTreeWidget_QBaseDrawFrame((QTreeWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)(QTreeWidget*, QPainter*) ```
void q_treewidget_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTreeWidget_OnDrawFrame((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_update_micro_focus(void* self) {
    QTreeWidget_UpdateMicroFocus((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_update_micro_focus(void* self) {
    QTreeWidget_QBaseUpdateMicroFocus((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_update_micro_focus(void* self, void (*slot)()) {
    QTreeWidget_OnUpdateMicroFocus((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_create(void* self) {
    QTreeWidget_Create((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_create(void* self) {
    QTreeWidget_QBaseCreate((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_create(void* self, void (*slot)()) {
    QTreeWidget_OnCreate((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_destroy(void* self) {
    QTreeWidget_Destroy((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
void q_treewidget_qbase_destroy(void* self) {
    QTreeWidget_QBaseDestroy((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, void (*slot)() ```
void q_treewidget_on_destroy(void* self, void (*slot)()) {
    QTreeWidget_OnDestroy((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_focus_next_child(void* self) {
    return QTreeWidget_FocusNextChild((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_qbase_focus_next_child(void* self) {
    return QTreeWidget_QBaseFocusNextChild((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)() ```
void q_treewidget_on_focus_next_child(void* self, bool (*slot)()) {
    QTreeWidget_OnFocusNextChild((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_focus_previous_child(void* self) {
    return QTreeWidget_FocusPreviousChild((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
bool q_treewidget_qbase_focus_previous_child(void* self) {
    return QTreeWidget_QBaseFocusPreviousChild((QTreeWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)() ```
void q_treewidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QTreeWidget_OnFocusPreviousChild((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
QObject* q_treewidget_sender(void* self) {
    return QTreeWidget_Sender((QTreeWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
QObject* q_treewidget_qbase_sender(void* self) {
    return QTreeWidget_QBaseSender((QTreeWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, QObject* (*slot)() ```
void q_treewidget_on_sender(void* self, QObject* (*slot)()) {
    QTreeWidget_OnSender((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_sender_signal_index(void* self) {
    return QTreeWidget_SenderSignalIndex((QTreeWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self ```
int32_t q_treewidget_qbase_sender_signal_index(void* self) {
    return QTreeWidget_QBaseSenderSignalIndex((QTreeWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)() ```
void q_treewidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTreeWidget_OnSenderSignalIndex((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, const char* signal ```
int32_t q_treewidget_receivers(void* self, const char* signal) {
    return QTreeWidget_Receivers((QTreeWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, const char* signal ```
int32_t q_treewidget_qbase_receivers(void* self, const char* signal) {
    return QTreeWidget_QBaseReceivers((QTreeWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, int32_t (*slot)(QTreeWidget*, const char*) ```
void q_treewidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTreeWidget_OnReceivers((QTreeWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
bool q_treewidget_is_signal_connected(void* self, void* signal) {
    return QTreeWidget_IsSignalConnected((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeWidget* self, QMetaMethod* signal ```
bool q_treewidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTreeWidget_QBaseIsSignalConnected((QTreeWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeWidget* self, bool (*slot)(QTreeWidget*, QMetaMethod*) ```
void q_treewidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTreeWidget_OnIsSignalConnected((QTreeWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTreeWidget* self ```
void q_treewidget_delete(void* self) {
    QTreeWidget_Delete((QTreeWidget*)(self));
}