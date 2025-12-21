#include <QDesignerPromotionInterface>
#define WORKAROUND_INNER_CLASS_DEFINITION_QDesignerPromotionInterface__PromotedClass
#include <QDesignerWidgetDataBaseItemInterface>
#include <QList>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <abstractpromotioninterface.h>
#include "libabstractpromotioninterface.hpp"
#include "libabstractpromotioninterface.hxx"

libqt_list /* of QDesignerPromotionInterface__PromotedClass* */ QDesignerPromotionInterface_PromotedClasses(const QDesignerPromotionInterface* self) {
    QList<QDesignerPromotionInterface::PromotedClass> _ret = self->promotedClasses();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDesignerPromotionInterface__PromotedClass** _arr = static_cast<QDesignerPromotionInterface__PromotedClass**>(malloc(sizeof(QDesignerPromotionInterface__PromotedClass*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QDesignerPromotionInterface::PromotedClass(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* set of const char* */ QDesignerPromotionInterface_ReferencedPromotedClassNames(const QDesignerPromotionInterface* self) {
    QSet<QString> _ret = self->referencedPromotedClassNames();
    // Convert QSet<> from C++ memory to manually-managed C memory
    const char** _arr = static_cast<const char**>(malloc(sizeof(const char*) * _ret.size()));
    int _sctr = 0;
    QSetIterator<QString> _itr(_ret);
    while (_itr.hasNext()) {
        QString _sv_ret = _itr.next();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray _sv_b = _sv_ret.toUtf8();
        char* _sv_str = static_cast<char*>(malloc(_sv_b.length() + 1));
        memcpy(_sv_str, _sv_b.data(), _sv_b.length());
        _sv_str[_sv_b.length()] = '\0';
        _arr[_sctr++] = _sv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.chars = (char*)_arr;
    return _out;
}

libqt_list /* of QDesignerWidgetDataBaseItemInterface* */ QDesignerPromotionInterface_PromotionBaseClasses(const QDesignerPromotionInterface* self) {
    QList<QDesignerWidgetDataBaseItemInterface*> _ret = self->promotionBaseClasses();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDesignerWidgetDataBaseItemInterface** _arr = static_cast<QDesignerWidgetDataBaseItemInterface**>(malloc(sizeof(QDesignerWidgetDataBaseItemInterface*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QDesignerPromotionInterface_Delete(QDesignerPromotionInterface* self) {
    delete self;
}

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_BaseItem(const QDesignerPromotionInterface__PromotedClass* self) {
    return self->baseItem;
}

void QDesignerPromotionInterface__PromotedClass_SetBaseItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* baseItem) {
    self->baseItem = baseItem;
}

QDesignerWidgetDataBaseItemInterface* QDesignerPromotionInterface__PromotedClass_PromotedItem(const QDesignerPromotionInterface__PromotedClass* self) {
    return self->promotedItem;
}

void QDesignerPromotionInterface__PromotedClass_SetPromotedItem(QDesignerPromotionInterface__PromotedClass* self, QDesignerWidgetDataBaseItemInterface* promotedItem) {
    self->promotedItem = promotedItem;
}

void QDesignerPromotionInterface__PromotedClass_Delete(QDesignerPromotionInterface__PromotedClass* self) {
    delete self;
}
