#pragma once
#ifndef SRCC_LIBQIMAGEIOHANDLER_HPP
#define SRCC_LIBQIMAGEIOHANDLER_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QImage QImage;
typedef struct QImageIOHandler QImageIOHandler;
typedef struct QImageIOPlugin QImageIOPlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
#endif

QImageIOHandler* QImageIOHandler_new();
void QImageIOHandler_SetDevice(QImageIOHandler* self, QIODevice* device);
QIODevice* QImageIOHandler_Device(const QImageIOHandler* self);
void QImageIOHandler_SetFormat(QImageIOHandler* self, const libqt_string format);
void QImageIOHandler_SetFormat2(const QImageIOHandler* self, const libqt_string format);
libqt_string QImageIOHandler_Format(const QImageIOHandler* self);
bool QImageIOHandler_CanRead(const QImageIOHandler* self);
void QImageIOHandler_OnCanRead(const QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseCanRead(const QImageIOHandler* self);
bool QImageIOHandler_Read(QImageIOHandler* self, QImage* image);
void QImageIOHandler_OnRead(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseRead(QImageIOHandler* self, QImage* image);
bool QImageIOHandler_Write(QImageIOHandler* self, const QImage* image);
void QImageIOHandler_OnWrite(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseWrite(QImageIOHandler* self, const QImage* image);
QVariant* QImageIOHandler_Option(const QImageIOHandler* self, int option);
void QImageIOHandler_OnOption(const QImageIOHandler* self, intptr_t slot);
QVariant* QImageIOHandler_QBaseOption(const QImageIOHandler* self, int option);
void QImageIOHandler_SetOption(QImageIOHandler* self, int option, const QVariant* value);
void QImageIOHandler_OnSetOption(QImageIOHandler* self, intptr_t slot);
void QImageIOHandler_QBaseSetOption(QImageIOHandler* self, int option, const QVariant* value);
bool QImageIOHandler_SupportsOption(const QImageIOHandler* self, int option);
void QImageIOHandler_OnSupportsOption(const QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseSupportsOption(const QImageIOHandler* self, int option);
bool QImageIOHandler_JumpToNextImage(QImageIOHandler* self);
void QImageIOHandler_OnJumpToNextImage(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseJumpToNextImage(QImageIOHandler* self);
bool QImageIOHandler_JumpToImage(QImageIOHandler* self, int imageNumber);
void QImageIOHandler_OnJumpToImage(QImageIOHandler* self, intptr_t slot);
bool QImageIOHandler_QBaseJumpToImage(QImageIOHandler* self, int imageNumber);
int QImageIOHandler_LoopCount(const QImageIOHandler* self);
void QImageIOHandler_OnLoopCount(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseLoopCount(const QImageIOHandler* self);
int QImageIOHandler_ImageCount(const QImageIOHandler* self);
void QImageIOHandler_OnImageCount(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseImageCount(const QImageIOHandler* self);
int QImageIOHandler_NextImageDelay(const QImageIOHandler* self);
void QImageIOHandler_OnNextImageDelay(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseNextImageDelay(const QImageIOHandler* self);
int QImageIOHandler_CurrentImageNumber(const QImageIOHandler* self);
void QImageIOHandler_OnCurrentImageNumber(const QImageIOHandler* self, intptr_t slot);
int QImageIOHandler_QBaseCurrentImageNumber(const QImageIOHandler* self);
QRect* QImageIOHandler_CurrentImageRect(const QImageIOHandler* self);
void QImageIOHandler_OnCurrentImageRect(const QImageIOHandler* self, intptr_t slot);
QRect* QImageIOHandler_QBaseCurrentImageRect(const QImageIOHandler* self);
bool QImageIOHandler_AllocateImage(QSize* size, int format, QImage* image);
void QImageIOHandler_Delete(QImageIOHandler* self);

QMetaObject* QImageIOPlugin_MetaObject(const QImageIOPlugin* self);
void* QImageIOPlugin_Metacast(QImageIOPlugin* self, const char* param1);
int QImageIOPlugin_Metacall(QImageIOPlugin* self, int param1, int param2, void** param3);
libqt_string QImageIOPlugin_Tr(const char* s);
int QImageIOPlugin_Capabilities(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
QImageIOHandler* QImageIOPlugin_Create(const QImageIOPlugin* self, QIODevice* device, const libqt_string format);
libqt_string QImageIOPlugin_Tr2(const char* s, const char* c);
libqt_string QImageIOPlugin_Tr3(const char* s, const char* c, int n);
void QImageIOPlugin_Delete(QImageIOPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
