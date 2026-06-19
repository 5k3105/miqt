#include <QAnyStringView>
#include <QByteArrayView>
#include <QChar>
#include <QStringConverter>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "gen_qstringconverter.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStringEncoder* QStringEncoder_new() {
	return new (std::nothrow) QStringEncoder();
}

QStringEncoder* QStringEncoder_new2(Encoding encoding) {
	return new (std::nothrow) QStringEncoder(encoding);
}

QStringEncoder* QStringEncoder_new3(QAnyStringView* name) {
	return new (std::nothrow) QStringEncoder(*name);
}

QStringEncoder* QStringEncoder_new4(Encoding encoding, Flags flags) {
	return new (std::nothrow) QStringEncoder(encoding, flags);
}

QStringEncoder* QStringEncoder_new5(QAnyStringView* name, Flags flags) {
	return new (std::nothrow) QStringEncoder(*name, flags);
}

void QStringEncoder_virtbase(QStringEncoder* src, QStringConverter** outptr_QStringConverter) {
	*outptr_QStringConverter = static_cast<QStringConverter*>(src);
}

ptrdiff_t QStringEncoder_requiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

FinalizeResult QStringEncoder_finalize(QStringEncoder* self, char* out, ptrdiff_t maxlen) {
	return self->finalize(out, (qsizetype)(maxlen));
}

FinalizeResult QStringEncoder_finalize2(QStringEncoder* self) {
	return self->finalize();
}

void QStringEncoder_delete(QStringEncoder* self) {
	delete self;
}

QStringDecoder* QStringDecoder_new(Encoding encoding) {
	return new (std::nothrow) QStringDecoder(encoding);
}

QStringDecoder* QStringDecoder_new2() {
	return new (std::nothrow) QStringDecoder();
}

QStringDecoder* QStringDecoder_new3(QAnyStringView* name) {
	return new (std::nothrow) QStringDecoder(*name);
}

QStringDecoder* QStringDecoder_new4(Encoding encoding, Flags flags) {
	return new (std::nothrow) QStringDecoder(encoding, flags);
}

QStringDecoder* QStringDecoder_new5(QAnyStringView* name, Flags f) {
	return new (std::nothrow) QStringDecoder(*name, f);
}

void QStringDecoder_virtbase(QStringDecoder* src, QStringConverter** outptr_QStringConverter) {
	*outptr_QStringConverter = static_cast<QStringConverter*>(src);
}

ptrdiff_t QStringDecoder_requiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
	qsizetype _ret = self->requiredSpace((qsizetype)(inputLength));
	return static_cast<ptrdiff_t>(_ret);
}

QChar* QStringDecoder_appendToBuffer(QStringDecoder* self, QChar* out, QByteArrayView* ba) {
	return self->appendToBuffer(out, *ba);
}

FinalizeResultQChar QStringDecoder_finalize(QStringDecoder* self, QChar* out, ptrdiff_t maxlen) {
	return self->finalize(out, (qsizetype)(maxlen));
}

FinalizeResult QStringDecoder_finalize3(QStringDecoder* self) {
	return self->finalize();
}

QStringDecoder* QStringDecoder_decoderForHtml(QByteArrayView* data) {
	return new QStringDecoder(QStringDecoder::decoderForHtml(*data));
}

void QStringDecoder_delete(QStringDecoder* self) {
	delete self;
}

