#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKPROPERTIESDIALOG_H
#define SRC_EXTRAS_KIO_QT6C_LIBKPROPERTIESDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new constructs a new KPropertiesDialog object.
///
/// @param item KFileItem*
///
KPropertiesDialog* k_propertiesdialog_new(void* item);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new2 constructs a new KPropertiesDialog object.
///
/// @param _items KFileItemList*
///
KPropertiesDialog* k_propertiesdialog_new2(void* _items);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new3 constructs a new KPropertiesDialog object.
///
/// @param url QUrl*
///
KPropertiesDialog* k_propertiesdialog_new3(void* url);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new4 constructs a new KPropertiesDialog object.
///
/// @param urls libqt_list /* of QUrl* */
///
KPropertiesDialog* k_propertiesdialog_new4(libqt_list urls);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new5 constructs a new KPropertiesDialog object.
///
/// @param _tempUrl QUrl*
/// @param _currentDir QUrl*
/// @param _defaultName const char*
///
KPropertiesDialog* k_propertiesdialog_new5(void* _tempUrl, void* _currentDir, const char* _defaultName);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new6 constructs a new KPropertiesDialog object.
///
/// @param title const char*
///
KPropertiesDialog* k_propertiesdialog_new6(const char* title);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new7 constructs a new KPropertiesDialog object.
///
/// @param item KFileItem*
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new7(void* item, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new8 constructs a new KPropertiesDialog object.
///
/// @param _items KFileItemList*
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new8(void* _items, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new9 constructs a new KPropertiesDialog object.
///
/// @param url QUrl*
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new9(void* url, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new10 constructs a new KPropertiesDialog object.
///
/// @param urls libqt_list /* of QUrl* */
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new10(libqt_list urls, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new11 constructs a new KPropertiesDialog object.
///
/// @param _tempUrl QUrl*
/// @param _currentDir QUrl*
/// @param _defaultName const char*
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new11(void* _tempUrl, void* _currentDir, const char* _defaultName, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html)

/// k_propertiesdialog_new12 constructs a new KPropertiesDialog object.
///
/// @param title const char*
/// @param parent QWidget*
///
KPropertiesDialog* k_propertiesdialog_new12(const char* title, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KPropertiesDialog*
///
const QMetaObject* k_propertiesdialog_meta_object(void* self);

/// @param self KPropertiesDialog*
/// @param param1 const char*
///
void* k_propertiesdialog_metacast(void* self, const char* param1);

/// @param self KPropertiesDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_propertiesdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func(KPropertiesDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_propertiesdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KPropertiesDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_propertiesdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_propertiesdialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#canDisplay)
///
/// @param _items KFileItemList*
///
bool k_propertiesdialog_can_display(void* _items);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param item KFileItem*
///
bool k_propertiesdialog_show_dialog(void* item);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _url QUrl*
///
bool k_propertiesdialog_show_dialog2(void* _url);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _items KFileItemList*
///
bool k_propertiesdialog_show_dialog3(void* _items);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param urls libqt_list /* of QUrl* */
///
bool k_propertiesdialog_show_dialog4(libqt_list urls);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#url)
///
/// @param self KPropertiesDialog*
///
QUrl* k_propertiesdialog_url(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#item)
///
/// @param self KPropertiesDialog*
///
KFileItem* k_propertiesdialog_item(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#items)
///
/// @param self KPropertiesDialog*
///
KFileItemList* k_propertiesdialog_items(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#currentDir)
///
/// @param self KPropertiesDialog*
///
QUrl* k_propertiesdialog_current_dir(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#defaultName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_default_name(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#updateUrl)
///
/// @param self KPropertiesDialog*
/// @param newUrl QUrl*
///
void k_propertiesdialog_update_url(void* self, void* newUrl);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#rename)
///
/// @param self KPropertiesDialog*
/// @param _name const char*
///
void k_propertiesdialog_rename(void* self, const char* _name);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#abortApplying)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_abort_applying(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showFileSharingPage)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show_file_sharing_page(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#setFileSharingPage)
///
/// @param self KPropertiesDialog*
/// @param page QWidget*
///
void k_propertiesdialog_set_file_sharing_page(void* self, void* page);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#setFileNameReadOnly)
///
/// @param self KPropertiesDialog*
/// @param ro bool
///
void k_propertiesdialog_set_file_name_read_only(void* self, bool ro);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#accept)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_accept(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#accept)
///
/// Allows for overriding the related default method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_accept(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#accept)
///
/// Base class method implementation
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_accept(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#reject)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_reject(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#reject)
///
/// Allows for overriding the related default method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_reject(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#reject)
///
/// Base class method implementation
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_reject(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#propertiesClosed)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_properties_closed(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#propertiesClosed)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_properties_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#applied)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_applied(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#applied)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_applied(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#canceled)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_canceled(void* self);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#canceled)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_canceled(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#saveAs)
///
/// @param self KPropertiesDialog*
/// @param oldUrl QUrl*
/// @param newUrl QUrl*
///
void k_propertiesdialog_save_as(void* self, void* oldUrl, void* newUrl);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#saveAs)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QUrl* oldUrl, QUrl* newUrl)
///
void k_propertiesdialog_on_save_as(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_propertiesdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_propertiesdialog_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param item KFileItem*
/// @param parent QWidget*
///
bool k_propertiesdialog_show_dialog22(void* item, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param item KFileItem*
/// @param parent QWidget*
/// @param modal bool
///
bool k_propertiesdialog_show_dialog32(void* item, void* parent, bool modal);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _url QUrl*
/// @param parent QWidget*
///
bool k_propertiesdialog_show_dialog23(void* _url, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _url QUrl*
/// @param parent QWidget*
/// @param modal bool
///
bool k_propertiesdialog_show_dialog33(void* _url, void* parent, bool modal);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _items KFileItemList*
/// @param parent QWidget*
///
bool k_propertiesdialog_show_dialog24(void* _items, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param _items KFileItemList*
/// @param parent QWidget*
/// @param modal bool
///
bool k_propertiesdialog_show_dialog34(void* _items, void* parent, bool modal);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param urls libqt_list /* of QUrl* */
/// @param parent QWidget*
///
bool k_propertiesdialog_show_dialog25(libqt_list urls, void* parent);

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#showDialog)
///
/// @param urls libqt_list /* of QUrl* */
/// @param parent QWidget*
/// @param modal bool
///
bool k_propertiesdialog_show_dialog35(libqt_list urls, void* parent, bool modal);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setFaceType)
///
/// @param self KPropertiesDialog*
/// @param faceType enum KPageDialog__FaceType
///
void k_propertiesdialog_set_face_type(void* self, int32_t faceType);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#addPage)
///
/// @param self KPropertiesDialog*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_propertiesdialog_add_page(void* self, void* widget, const char* name);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#addPage)
///
/// @param self KPropertiesDialog*
/// @param item KPageWidgetItem*
///
void k_propertiesdialog_add_page2(void* self, void* item);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#insertPage)
///
/// @param self KPropertiesDialog*
/// @param before KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_propertiesdialog_insert_page(void* self, void* before, void* widget, const char* name);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#insertPage)
///
/// @param self KPropertiesDialog*
/// @param before KPageWidgetItem*
/// @param item KPageWidgetItem*
///
void k_propertiesdialog_insert_page2(void* self, void* before, void* item);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#addSubPage)
///
/// @param self KPropertiesDialog*
/// @param parent KPageWidgetItem*
/// @param widget QWidget*
/// @param name const char*
///
KPageWidgetItem* k_propertiesdialog_add_sub_page(void* self, void* parent, void* widget, const char* name);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#addSubPage)
///
/// @param self KPropertiesDialog*
/// @param parent KPageWidgetItem*
/// @param item KPageWidgetItem*
///
void k_propertiesdialog_add_sub_page2(void* self, void* parent, void* item);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#removePage)
///
/// @param self KPropertiesDialog*
/// @param item KPageWidgetItem*
///
void k_propertiesdialog_remove_page(void* self, void* item);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setCurrentPage)
///
/// @param self KPropertiesDialog*
/// @param item KPageWidgetItem*
///
void k_propertiesdialog_set_current_page(void* self, void* item);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#currentPage)
///
/// @param self KPropertiesDialog*
///
KPageWidgetItem* k_propertiesdialog_current_page(void* self);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setStandardButtons)
///
/// @param self KPropertiesDialog*
/// @param buttons flag of enum QDialogButtonBox__StandardButton
///
void k_propertiesdialog_set_standard_buttons(void* self, int32_t buttons);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#button)
///
/// @param self KPropertiesDialog*
/// @param which enum QDialogButtonBox__StandardButton
///
QPushButton* k_propertiesdialog_button(void* self, int32_t which);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#addActionButton)
///
/// @param self KPropertiesDialog*
/// @param button QAbstractButton*
///
void k_propertiesdialog_add_action_button(void* self, void* button);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#currentPageChanged)
///
/// @param self KPropertiesDialog*
/// @param current KPageWidgetItem*
/// @param before KPageWidgetItem*
///
void k_propertiesdialog_current_page_changed(void* self, void* current, void* before);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#currentPageChanged)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, KPageWidgetItem* current, KPageWidgetItem* before)
///
void k_propertiesdialog_on_current_page_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#pageRemoved)
///
/// @param self KPropertiesDialog*
/// @param page KPageWidgetItem*
///
void k_propertiesdialog_page_removed(void* self, void* page);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#pageRemoved)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, KPageWidgetItem* page)
///
void k_propertiesdialog_on_page_removed(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KPropertiesDialog*
/// @param sizeGripEnabled bool
///
void k_propertiesdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KPropertiesDialog*
/// @param modal bool
///
void k_propertiesdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KPropertiesDialog*
/// @param r int
///
void k_propertiesdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KPropertiesDialog*
/// @param result int
///
void k_propertiesdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, int result)
///
void k_propertiesdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KPropertiesDialog*
///
uintptr_t k_propertiesdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KPropertiesDialog*
///
uintptr_t k_propertiesdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KPropertiesDialog*
///
uintptr_t k_propertiesdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KPropertiesDialog*
///
QStyle* k_propertiesdialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KPropertiesDialog*
/// @param style QStyle*
///
void k_propertiesdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KPropertiesDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_propertiesdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KPropertiesDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_propertiesdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
///
bool k_propertiesdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KPropertiesDialog*
/// @param enabled bool
///
void k_propertiesdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KPropertiesDialog*
/// @param disabled bool
///
void k_propertiesdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KPropertiesDialog*
/// @param windowModified bool
///
void k_propertiesdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KPropertiesDialog*
///
QRect* k_propertiesdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KPropertiesDialog*
///
const QRect* k_propertiesdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KPropertiesDialog*
///
QRect* k_propertiesdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KPropertiesDialog*
///
QPoint* k_propertiesdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KPropertiesDialog*
///
QRect* k_propertiesdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KPropertiesDialog*
///
QRect* k_propertiesdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KPropertiesDialog*
///
QRegion* k_propertiesdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPropertiesDialog*
/// @param minimumSize QSize*
///
void k_propertiesdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KPropertiesDialog*
/// @param minw int
/// @param minh int
///
void k_propertiesdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPropertiesDialog*
/// @param maximumSize QSize*
///
void k_propertiesdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KPropertiesDialog*
/// @param maxw int
/// @param maxh int
///
void k_propertiesdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KPropertiesDialog*
/// @param minw int
///
void k_propertiesdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KPropertiesDialog*
/// @param minh int
///
void k_propertiesdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KPropertiesDialog*
/// @param maxw int
///
void k_propertiesdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KPropertiesDialog*
/// @param maxh int
///
void k_propertiesdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPropertiesDialog*
/// @param sizeIncrement QSize*
///
void k_propertiesdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KPropertiesDialog*
/// @param w int
/// @param h int
///
void k_propertiesdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPropertiesDialog*
/// @param baseSize QSize*
///
void k_propertiesdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KPropertiesDialog*
/// @param basew int
/// @param baseh int
///
void k_propertiesdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPropertiesDialog*
/// @param fixedSize QSize*
///
void k_propertiesdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KPropertiesDialog*
/// @param w int
/// @param h int
///
void k_propertiesdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KPropertiesDialog*
/// @param w int
///
void k_propertiesdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KPropertiesDialog*
/// @param h int
///
void k_propertiesdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPropertiesDialog*
/// @param param1 QPointF*
///
QPointF* k_propertiesdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KPropertiesDialog*
/// @param param1 QPoint*
///
QPoint* k_propertiesdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPropertiesDialog*
/// @param param1 QPointF*
///
QPointF* k_propertiesdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KPropertiesDialog*
/// @param param1 QPoint*
///
QPoint* k_propertiesdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPropertiesDialog*
/// @param param1 QPointF*
///
QPointF* k_propertiesdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KPropertiesDialog*
/// @param param1 QPoint*
///
QPoint* k_propertiesdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPropertiesDialog*
/// @param param1 QPointF*
///
QPointF* k_propertiesdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KPropertiesDialog*
/// @param param1 QPoint*
///
QPoint* k_propertiesdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_propertiesdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_propertiesdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_propertiesdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_propertiesdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KPropertiesDialog*
///
const QPalette* k_propertiesdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KPropertiesDialog*
/// @param palette QPalette*
///
void k_propertiesdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KPropertiesDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_propertiesdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KPropertiesDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_propertiesdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KPropertiesDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_propertiesdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KPropertiesDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_propertiesdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KPropertiesDialog*
///
const QFont* k_propertiesdialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KPropertiesDialog*
/// @param font QFont*
///
void k_propertiesdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KPropertiesDialog*
///
QFontMetrics* k_propertiesdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KPropertiesDialog*
///
QFontInfo* k_propertiesdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KPropertiesDialog*
///
QCursor* k_propertiesdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KPropertiesDialog*
/// @param cursor QCursor*
///
void k_propertiesdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KPropertiesDialog*
/// @param enable bool
///
void k_propertiesdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KPropertiesDialog*
/// @param enable bool
///
void k_propertiesdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPropertiesDialog*
/// @param mask QBitmap*
///
void k_propertiesdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KPropertiesDialog*
/// @param mask QRegion*
///
void k_propertiesdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KPropertiesDialog*
///
QRegion* k_propertiesdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param target QPaintDevice*
///
void k_propertiesdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
///
void k_propertiesdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPropertiesDialog*
///
QPixmap* k_propertiesdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KPropertiesDialog*
///
QGraphicsEffect* k_propertiesdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KPropertiesDialog*
/// @param effect QGraphicsEffect*
///
void k_propertiesdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPropertiesDialog*
/// @param type enum Qt__GestureType
///
void k_propertiesdialog_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KPropertiesDialog*
/// @param type enum Qt__GestureType
///
void k_propertiesdialog_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KPropertiesDialog*
/// @param windowTitle const char*
///
void k_propertiesdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KPropertiesDialog*
/// @param styleSheet const char*
///
void k_propertiesdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KPropertiesDialog*
/// @param icon QIcon*
///
void k_propertiesdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KPropertiesDialog*
///
QIcon* k_propertiesdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KPropertiesDialog*
/// @param windowIconText const char*
///
void k_propertiesdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KPropertiesDialog*
/// @param windowRole const char*
///
void k_propertiesdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KPropertiesDialog*
/// @param filePath const char*
///
void k_propertiesdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KPropertiesDialog*
/// @param level double
///
void k_propertiesdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KPropertiesDialog*
///
double k_propertiesdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KPropertiesDialog*
/// @param toolTip const char*
///
void k_propertiesdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KPropertiesDialog*
/// @param msec int
///
void k_propertiesdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KPropertiesDialog*
/// @param statusTip const char*
///
void k_propertiesdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KPropertiesDialog*
/// @param whatsThis const char*
///
void k_propertiesdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KPropertiesDialog*
/// @param name const char*
///
void k_propertiesdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KPropertiesDialog*
/// @param description const char*
///
void k_propertiesdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KPropertiesDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_propertiesdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KPropertiesDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_propertiesdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KPropertiesDialog*
/// @param locale QLocale*
///
void k_propertiesdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KPropertiesDialog*
///
QLocale* k_propertiesdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KPropertiesDialog*
/// @param reason enum Qt__FocusReason
///
void k_propertiesdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KPropertiesDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_propertiesdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KPropertiesDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_propertiesdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_propertiesdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KPropertiesDialog*
/// @param focusProxy QWidget*
///
void k_propertiesdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KPropertiesDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_propertiesdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KPropertiesDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_propertiesdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KPropertiesDialog*
/// @param param1 QCursor*
///
void k_propertiesdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPropertiesDialog*
/// @param key QKeySequence*
///
int32_t k_propertiesdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KPropertiesDialog*
/// @param id int
///
void k_propertiesdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPropertiesDialog*
/// @param id int
///
void k_propertiesdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPropertiesDialog*
/// @param id int
///
void k_propertiesdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_propertiesdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_propertiesdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KPropertiesDialog*
/// @param enable bool
///
void k_propertiesdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KPropertiesDialog*
///
QGraphicsProxyWidget* k_propertiesdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPropertiesDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_propertiesdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPropertiesDialog*
/// @param param1 QRect*
///
void k_propertiesdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KPropertiesDialog*
/// @param param1 QRegion*
///
void k_propertiesdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPropertiesDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_propertiesdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPropertiesDialog*
/// @param param1 QRect*
///
void k_propertiesdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KPropertiesDialog*
/// @param param1 QRegion*
///
void k_propertiesdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KPropertiesDialog*
/// @param hidden bool
///
void k_propertiesdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
///
void k_propertiesdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPropertiesDialog*
/// @param x int
/// @param y int
///
void k_propertiesdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KPropertiesDialog*
/// @param param1 QPoint*
///
void k_propertiesdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPropertiesDialog*
/// @param w int
/// @param h int
///
void k_propertiesdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KPropertiesDialog*
/// @param param1 QSize*
///
void k_propertiesdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPropertiesDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_propertiesdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KPropertiesDialog*
/// @param geometry QRect*
///
void k_propertiesdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPropertiesDialog*
///
char* k_propertiesdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KPropertiesDialog*
/// @param geometry const char*
///
bool k_propertiesdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
///
bool k_propertiesdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KPropertiesDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_propertiesdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KPropertiesDialog*
/// @param state flag of enum Qt__WindowState
///
void k_propertiesdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KPropertiesDialog*
/// @param state flag of enum Qt__WindowState
///
void k_propertiesdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KPropertiesDialog*
///
QSizePolicy* k_propertiesdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPropertiesDialog*
/// @param sizePolicy QSizePolicy*
///
void k_propertiesdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KPropertiesDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_propertiesdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KPropertiesDialog*
///
QRegion* k_propertiesdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPropertiesDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_propertiesdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KPropertiesDialog*
/// @param margins QMargins*
///
void k_propertiesdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KPropertiesDialog*
///
QMargins* k_propertiesdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KPropertiesDialog*
///
QRect* k_propertiesdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KPropertiesDialog*
///
QLayout* k_propertiesdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KPropertiesDialog*
/// @param layout QLayout*
///
void k_propertiesdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPropertiesDialog*
/// @param parent QWidget*
///
void k_propertiesdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KPropertiesDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_propertiesdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPropertiesDialog*
/// @param dx int
/// @param dy int
///
void k_propertiesdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KPropertiesDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_propertiesdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KPropertiesDialog*
/// @param on bool
///
void k_propertiesdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPropertiesDialog*
/// @param action QAction*
///
void k_propertiesdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KPropertiesDialog*
/// @param actions libqt_list /* of QAction* */
///
void k_propertiesdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KPropertiesDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_propertiesdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KPropertiesDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_propertiesdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KPropertiesDialog*
/// @param action QAction*
///
void k_propertiesdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KPropertiesDialog*
///
libqt_list /* of QAction* */ k_propertiesdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPropertiesDialog*
/// @param text const char*
///
QAction* k_propertiesdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPropertiesDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_propertiesdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPropertiesDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_propertiesdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KPropertiesDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_propertiesdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KPropertiesDialog*
///
QWidget* k_propertiesdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KPropertiesDialog*
/// @param type flag of enum Qt__WindowType
///
void k_propertiesdialog_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KPropertiesDialog*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_propertiesdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__WindowType
///
void k_propertiesdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KPropertiesDialog*
/// @param type flag of enum Qt__WindowType
///
void k_propertiesdialog_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KPropertiesDialog*
///
/// @return enum Qt__WindowType
///
int64_t k_propertiesdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_propertiesdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPropertiesDialog*
/// @param x int
/// @param y int
///
QWidget* k_propertiesdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPropertiesDialog*
/// @param p QPoint*
///
QWidget* k_propertiesdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KPropertiesDialog*
/// @param p QPointF*
///
QWidget* k_propertiesdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_propertiesdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_propertiesdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KPropertiesDialog*
/// @param child QWidget*
///
bool k_propertiesdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KPropertiesDialog*
/// @param enabled bool
///
void k_propertiesdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KPropertiesDialog*
///
QBackingStore* k_propertiesdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KPropertiesDialog*
///
QWindow* k_propertiesdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KPropertiesDialog*
///
QScreen* k_propertiesdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KPropertiesDialog*
/// @param screen QScreen*
///
void k_propertiesdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_propertiesdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPropertiesDialog*
/// @param title const char*
///
void k_propertiesdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, const char* title)
///
void k_propertiesdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPropertiesDialog*
/// @param icon QIcon*
///
void k_propertiesdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QIcon* icon)
///
void k_propertiesdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPropertiesDialog*
/// @param iconText const char*
///
void k_propertiesdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, const char* iconText)
///
void k_propertiesdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPropertiesDialog*
/// @param pos QPoint*
///
void k_propertiesdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QPoint* pos)
///
void k_propertiesdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KPropertiesDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_propertiesdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KPropertiesDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_propertiesdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_propertiesdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_propertiesdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_propertiesdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_propertiesdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_propertiesdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_propertiesdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KPropertiesDialog*
/// @param rectangle QRect*
///
QPixmap* k_propertiesdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KPropertiesDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_propertiesdialog_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KPropertiesDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_propertiesdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KPropertiesDialog*
/// @param id int
/// @param enable bool
///
void k_propertiesdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KPropertiesDialog*
/// @param id int
/// @param enable bool
///
void k_propertiesdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_propertiesdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_propertiesdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_propertiesdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_propertiesdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KPropertiesDialog*
///
const char* k_propertiesdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KPropertiesDialog*
/// @param name char*
///
void k_propertiesdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KPropertiesDialog*
/// @param b bool
///
bool k_propertiesdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KPropertiesDialog*
///
QThread* k_propertiesdialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPropertiesDialog*
/// @param thread QThread*
///
bool k_propertiesdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialog*
/// @param interval int
///
int32_t k_propertiesdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPropertiesDialog*
/// @param id int
///
void k_propertiesdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KPropertiesDialog*
/// @param id enum Qt__TimerId
///
void k_propertiesdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KPropertiesDialog*
///
libqt_list /* of QObject* */ k_propertiesdialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KPropertiesDialog*
/// @param filterObj QObject*
///
void k_propertiesdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KPropertiesDialog*
/// @param obj QObject*
///
void k_propertiesdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_propertiesdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPropertiesDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_propertiesdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_propertiesdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_propertiesdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KPropertiesDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_propertiesdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KPropertiesDialog*
/// @param name const char*
///
QVariant* k_propertiesdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KPropertiesDialog*
///
const char** k_propertiesdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPropertiesDialog*
///
QBindingStorage* k_propertiesdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KPropertiesDialog*
///
const QBindingStorage* k_propertiesdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self)
///
void k_propertiesdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KPropertiesDialog*
///
QObject* k_propertiesdialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KPropertiesDialog*
/// @param classname const char*
///
bool k_propertiesdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KPropertiesDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_propertiesdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KPropertiesDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_propertiesdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_propertiesdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KPropertiesDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_propertiesdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialog*
/// @param param1 QObject*
///
void k_propertiesdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QObject* param1)
///
void k_propertiesdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KPropertiesDialog*
///
double k_propertiesdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KPropertiesDialog*
///
double k_propertiesdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_propertiesdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_propertiesdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param visible bool
///
void k_propertiesdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param visible bool
///
void k_propertiesdialog_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, bool visible)
///
void k_propertiesdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QSize* func()
///
void k_propertiesdialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QSize* k_propertiesdialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QSize* func()
///
void k_propertiesdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func()
///
void k_propertiesdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 int
///
void k_propertiesdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 int
///
void k_propertiesdialog_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, int param1)
///
void k_propertiesdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QKeyEvent*
///
void k_propertiesdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QKeyEvent*
///
void k_propertiesdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QKeyEvent* param1)
///
void k_propertiesdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QCloseEvent*
///
void k_propertiesdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QCloseEvent*
///
void k_propertiesdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QCloseEvent* param1)
///
void k_propertiesdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QShowEvent*
///
void k_propertiesdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QShowEvent*
///
void k_propertiesdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QShowEvent* param1)
///
void k_propertiesdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QResizeEvent*
///
void k_propertiesdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QResizeEvent*
///
void k_propertiesdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QResizeEvent* param1)
///
void k_propertiesdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QContextMenuEvent*
///
void k_propertiesdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QContextMenuEvent*
///
void k_propertiesdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QContextMenuEvent* param1)
///
void k_propertiesdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_propertiesdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_propertiesdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func(KPropertiesDialog* self, QObject* param1, QEvent* param2)
///
void k_propertiesdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func()
///
void k_propertiesdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 int
///
int32_t k_propertiesdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 int
///
int32_t k_propertiesdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func(KPropertiesDialog* self, int param1)
///
void k_propertiesdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func()
///
void k_propertiesdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QPaintEngine* k_propertiesdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QPaintEngine* k_propertiesdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QPaintEngine* func()
///
void k_propertiesdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
bool k_propertiesdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
bool k_propertiesdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func(KPropertiesDialog* self, QEvent* event)
///
void k_propertiesdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMouseEvent* event)
///
void k_propertiesdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMouseEvent* event)
///
void k_propertiesdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMouseEvent* event)
///
void k_propertiesdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMouseEvent*
///
void k_propertiesdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMouseEvent* event)
///
void k_propertiesdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QWheelEvent*
///
void k_propertiesdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QWheelEvent*
///
void k_propertiesdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QWheelEvent* event)
///
void k_propertiesdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QKeyEvent*
///
void k_propertiesdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QKeyEvent*
///
void k_propertiesdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QKeyEvent* event)
///
void k_propertiesdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QFocusEvent*
///
void k_propertiesdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QFocusEvent*
///
void k_propertiesdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QFocusEvent* event)
///
void k_propertiesdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QFocusEvent*
///
void k_propertiesdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QFocusEvent*
///
void k_propertiesdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QFocusEvent* event)
///
void k_propertiesdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEnterEvent*
///
void k_propertiesdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEnterEvent*
///
void k_propertiesdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QEnterEvent* event)
///
void k_propertiesdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
void k_propertiesdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
void k_propertiesdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QEvent* event)
///
void k_propertiesdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QPaintEvent*
///
void k_propertiesdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QPaintEvent*
///
void k_propertiesdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QPaintEvent* event)
///
void k_propertiesdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMoveEvent*
///
void k_propertiesdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QMoveEvent*
///
void k_propertiesdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMoveEvent* event)
///
void k_propertiesdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QTabletEvent*
///
void k_propertiesdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QTabletEvent*
///
void k_propertiesdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QTabletEvent* event)
///
void k_propertiesdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QActionEvent*
///
void k_propertiesdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QActionEvent*
///
void k_propertiesdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QActionEvent* event)
///
void k_propertiesdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragEnterEvent*
///
void k_propertiesdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragEnterEvent*
///
void k_propertiesdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QDragEnterEvent* event)
///
void k_propertiesdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragMoveEvent*
///
void k_propertiesdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragMoveEvent*
///
void k_propertiesdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QDragMoveEvent* event)
///
void k_propertiesdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragLeaveEvent*
///
void k_propertiesdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDragLeaveEvent*
///
void k_propertiesdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QDragLeaveEvent* event)
///
void k_propertiesdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDropEvent*
///
void k_propertiesdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QDropEvent*
///
void k_propertiesdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QDropEvent* event)
///
void k_propertiesdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QHideEvent*
///
void k_propertiesdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QHideEvent*
///
void k_propertiesdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QHideEvent* event)
///
void k_propertiesdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_propertiesdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_propertiesdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func(KPropertiesDialog* self, const char* eventType, void* message, intptr_t* result)
///
void k_propertiesdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QEvent*
///
void k_propertiesdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QEvent*
///
void k_propertiesdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QEvent* param1)
///
void k_propertiesdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_propertiesdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_propertiesdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func(KPropertiesDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_propertiesdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
///
void k_propertiesdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param painter QPainter*
///
void k_propertiesdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QPainter* painter)
///
void k_propertiesdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param offset QPoint*
///
QPaintDevice* k_propertiesdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param offset QPoint*
///
QPaintDevice* k_propertiesdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QPaintDevice* func(KPropertiesDialog* self, QPoint* offset)
///
void k_propertiesdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QPainter* k_propertiesdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QPainter* k_propertiesdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QPainter* func()
///
void k_propertiesdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QInputMethodEvent*
///
void k_propertiesdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QInputMethodEvent*
///
void k_propertiesdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QInputMethodEvent* param1)
///
void k_propertiesdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_propertiesdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_propertiesdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QVariant* func(KPropertiesDialog* self, enum Qt__InputMethodQuery param1)
///
void k_propertiesdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param next bool
///
bool k_propertiesdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param next bool
///
bool k_propertiesdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func(KPropertiesDialog* self, bool next)
///
void k_propertiesdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QTimerEvent*
///
void k_propertiesdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QTimerEvent*
///
void k_propertiesdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QTimerEvent* event)
///
void k_propertiesdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QChildEvent*
///
void k_propertiesdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QChildEvent*
///
void k_propertiesdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QChildEvent* event)
///
void k_propertiesdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
void k_propertiesdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param event QEvent*
///
void k_propertiesdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QEvent* event)
///
void k_propertiesdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
void k_propertiesdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
void k_propertiesdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMetaMethod* signal)
///
void k_propertiesdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
void k_propertiesdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
void k_propertiesdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QMetaMethod* signal)
///
void k_propertiesdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
KPageWidget* k_propertiesdialog_page_widget(void* self);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
KPageWidget* k_propertiesdialog_qbase_page_widget(void* self);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#pageWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback KPageWidget* func()
///
void k_propertiesdialog_on_page_widget(void* self, KPageWidget* (*callback)());

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param widget KPageWidget*
///
void k_propertiesdialog_set_page_widget(void* self, void* widget);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param widget KPageWidget*
///
void k_propertiesdialog_qbase_set_page_widget(void* self, void* widget);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setPageWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, KPageWidget* widget)
///
void k_propertiesdialog_on_set_page_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QDialogButtonBox* k_propertiesdialog_button_box(void* self);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QDialogButtonBox* k_propertiesdialog_qbase_button_box(void* self);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#buttonBox)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QDialogButtonBox* func()
///
void k_propertiesdialog_on_button_box(void* self, QDialogButtonBox* (*callback)());

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param box QDialogButtonBox*
///
void k_propertiesdialog_set_button_box(void* self, void* box);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param box QDialogButtonBox*
///
void k_propertiesdialog_qbase_set_button_box(void* self, void* box);

/// Inherited from KPageDialog
///
/// [Upstream resources](https://api.kde.org/kpagedialog.html#setButtonBox)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QDialogButtonBox* box)
///
void k_propertiesdialog_on_set_button_box(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
///
void k_propertiesdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param param1 QWidget*
///
void k_propertiesdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, QWidget* param1)
///
void k_propertiesdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback void func()
///
void k_propertiesdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func()
///
void k_propertiesdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
bool k_propertiesdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func()
///
void k_propertiesdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
QObject* k_propertiesdialog_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
QObject* k_propertiesdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback QObject* func()
///
void k_propertiesdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
///
int32_t k_propertiesdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func()
///
void k_propertiesdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal const char*
///
int32_t k_propertiesdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal const char*
///
int32_t k_propertiesdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback int32_t func(KPropertiesDialog* self, const char* signal)
///
void k_propertiesdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
bool k_propertiesdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param signal QMetaMethod*
///
bool k_propertiesdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback bool func(KPropertiesDialog* self, QMetaMethod* signal)
///
void k_propertiesdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_propertiesdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_propertiesdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KPropertiesDialog*
/// @param callback double func(KPropertiesDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_propertiesdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KPropertiesDialog*
/// @param callback void func(KPropertiesDialog* self, const char* objectName)
///
void k_propertiesdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kpropertiesdialog.html#dtor.KPropertiesDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KPropertiesDialog*
///
void k_propertiesdialog_delete(void* self);

#endif
