#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGCONVERTER_H
#define MIQT_QT6_GEN_QSTRINGCONVERTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QByteArrayView;
class QChar;
class QStringConverter;
class QStringDecoder;
class QStringEncoder;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QByteArrayView QByteArrayView;
typedef struct QChar QChar;
typedef struct QStringConverter QStringConverter;
typedef struct QStringDecoder QStringDecoder;
typedef struct QStringEncoder QStringEncoder;
#endif

QStringEncoder* QStringEncoder_new();
QStringEncoder* QStringEncoder_new2(Encoding encoding);
QStringEncoder* QStringEncoder_new3(QAnyStringView* name);
QStringEncoder* QStringEncoder_new4(Encoding encoding, Flags flags);
QStringEncoder* QStringEncoder_new5(QAnyStringView* name, Flags flags);
void QStringEncoder_virtbase(QStringEncoder* src, QStringConverter** outptr_QStringConverter);
ptrdiff_t QStringEncoder_requiredSpace(const QStringEncoder* self, ptrdiff_t inputLength);
FinalizeResult QStringEncoder_finalize(QStringEncoder* self, char* out, ptrdiff_t maxlen);
FinalizeResult QStringEncoder_finalize2(QStringEncoder* self);

void QStringEncoder_delete(QStringEncoder* self);

QStringDecoder* QStringDecoder_new(Encoding encoding);
QStringDecoder* QStringDecoder_new2();
QStringDecoder* QStringDecoder_new3(QAnyStringView* name);
QStringDecoder* QStringDecoder_new4(Encoding encoding, Flags flags);
QStringDecoder* QStringDecoder_new5(QAnyStringView* name, Flags f);
void QStringDecoder_virtbase(QStringDecoder* src, QStringConverter** outptr_QStringConverter);
ptrdiff_t QStringDecoder_requiredSpace(const QStringDecoder* self, ptrdiff_t inputLength);
QChar* QStringDecoder_appendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba);
FinalizeResultQChar QStringDecoder_finalize(QStringDecoder* self, QChar* out, ptrdiff_t maxlen);
FinalizeResult QStringDecoder_finalize3(QStringDecoder* self);
QStringDecoder* QStringDecoder_decoderForHtml(QByteArrayView* data);

void QStringDecoder_delete(QStringDecoder* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
