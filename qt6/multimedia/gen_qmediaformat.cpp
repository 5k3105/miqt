#include <QList>
#include <QMediaFormat>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaformat.h>
#include "gen_qmediaformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaFormat* QMediaFormat_new() {
	return new (std::nothrow) QMediaFormat();
}

QMediaFormat* QMediaFormat_new2(QMediaFormat* other) {
	return new (std::nothrow) QMediaFormat(*other);
}

QMediaFormat* QMediaFormat_new3(FileFormat format) {
	return new (std::nothrow) QMediaFormat(format);
}

void QMediaFormat_operatorAssign(QMediaFormat* self, QMediaFormat* other) {
	self->operator=(*other);
}

void QMediaFormat_swap(QMediaFormat* self, QMediaFormat* other) {
	self->swap(*other);
}

FileFormat QMediaFormat_fileFormat(const QMediaFormat* self) {
	return self->fileFormat();
}

void QMediaFormat_setFileFormat(QMediaFormat* self, FileFormat f) {
	self->setFileFormat(f);
}

void QMediaFormat_setVideoCodec(QMediaFormat* self, VideoCodec codec) {
	self->setVideoCodec(codec);
}

VideoCodec QMediaFormat_videoCodec(const QMediaFormat* self) {
	return self->videoCodec();
}

void QMediaFormat_setAudioCodec(QMediaFormat* self, AudioCodec codec) {
	self->setAudioCodec(codec);
}

AudioCodec QMediaFormat_audioCodec(const QMediaFormat* self) {
	return self->audioCodec();
}

bool QMediaFormat_isSupported(const QMediaFormat* self, ConversionMode mode) {
	return self->isSupported(mode);
}

QMimeType* QMediaFormat_mimeType(const QMediaFormat* self) {
	return new QMimeType(self->mimeType());
}

struct miqt_array /* of FileFormat */  QMediaFormat_supportedFileFormats(QMediaFormat* self, ConversionMode m) {
	QList<FileFormat> _ret = self->supportedFileFormats(m);
	// Convert QList<> from C++ memory to manually-managed C memory
	FileFormat* _arr = static_cast<FileFormat*>(malloc(sizeof(FileFormat) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of VideoCodec */  QMediaFormat_supportedVideoCodecs(QMediaFormat* self, ConversionMode m) {
	QList<VideoCodec> _ret = self->supportedVideoCodecs(m);
	// Convert QList<> from C++ memory to manually-managed C memory
	VideoCodec* _arr = static_cast<VideoCodec*>(malloc(sizeof(VideoCodec) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of AudioCodec */  QMediaFormat_supportedAudioCodecs(QMediaFormat* self, ConversionMode m) {
	QList<AudioCodec> _ret = self->supportedAudioCodecs(m);
	// Convert QList<> from C++ memory to manually-managed C memory
	AudioCodec* _arr = static_cast<AudioCodec*>(malloc(sizeof(AudioCodec) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaFormat_fileFormatName(FileFormat fileFormat) {
	QString _ret = QMediaFormat::fileFormatName(fileFormat);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_audioCodecName(AudioCodec codec) {
	QString _ret = QMediaFormat::audioCodecName(codec);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_videoCodecName(VideoCodec codec) {
	QString _ret = QMediaFormat::videoCodecName(codec);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_fileFormatDescription(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(fileFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_audioCodecDescription(int codec) {
	QString _ret = QMediaFormat::audioCodecDescription(static_cast<QMediaFormat::AudioCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_videoCodecDescription(int codec) {
	QString _ret = QMediaFormat::videoCodecDescription(static_cast<QMediaFormat::VideoCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaFormat_operatorEqual(const QMediaFormat* self, QMediaFormat* other) {
	return (*self == *other);
}

bool QMediaFormat_operatorNotEqual(const QMediaFormat* self, QMediaFormat* other) {
	return (*self != *other);
}

void QMediaFormat_resolveForEncoding(QMediaFormat* self, ResolveFlags flags) {
	self->resolveForEncoding(flags);
}

void QMediaFormat_delete(QMediaFormat* self) {
	delete self;
}

