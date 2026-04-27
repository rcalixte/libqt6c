#pragma once
#ifndef SRC_TEXTTOSPEECH_QT6C_LIBQVOICE_H
#define SRC_TEXTTOSPEECH_QT6C_LIBQVOICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html)

/// q_voice_new constructs a new QVoice object.
///
QVoice* q_voice_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html)

/// q_voice_new2 constructs a new QVoice object.
///
/// @param other QVoice*
///
QVoice* q_voice_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#operator-eq)
///
/// @param self QVoice*
/// @param other QVoice*
///
void q_voice_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#swap)
///
/// @param self QVoice*
/// @param other QVoice*
///
void q_voice_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QVoice*
///
const char* q_voice_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#locale)
///
/// @param self QVoice*
///
QLocale* q_voice_locale(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#gender)
///
/// @param self QVoice*
///
/// @return enum QVoice__Gender
///
int32_t q_voice_gender(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#age)
///
/// @param self QVoice*
///
/// @return enum QVoice__Age
///
int32_t q_voice_age(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#language)
///
/// @param self QVoice*
///
/// @return enum QLocale__Language
///
uint16_t q_voice_language(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#genderName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param gender enum QVoice__Gender
///
const char* q_voice_gender_name(int32_t gender);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#ageName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param age enum QVoice__Age
///
const char* q_voice_age_name(int32_t age);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#dtor.QVoice)
///
/// Delete this object from C++ memory.
///
/// @param self QVoice*
///
void q_voice_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#public-types)

typedef enum {
    QVOICE_GENDER_MALE = 0,
    QVOICE_GENDER_FEMALE = 1,
    QVOICE_GENDER_UNKNOWN = 2
} QVoice__Gender;

/// [Upstream resources](https://doc.qt.io/qt-6/qvoice.html#public-types)

typedef enum {
    QVOICE_AGE_CHILD = 0,
    QVOICE_AGE_TEENAGER = 1,
    QVOICE_AGE_ADULT = 2,
    QVOICE_AGE_SENIOR = 3,
    QVOICE_AGE_OTHER = 4
} QVoice__Age;

#endif
