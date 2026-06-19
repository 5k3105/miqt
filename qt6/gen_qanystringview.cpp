#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qanystringview.h>
#include "gen_qanystringview.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAnyStringView* QAnyStringView_new() {
	return new (std::nothrow) QAnyStringView();
}

QAnyStringView* QAnyStringView_new2(struct miqt_string str) {
	QByteArray str_QByteArray(str.data, str.len);
	return new (std::nothrow) QAnyStringView(str_QByteArray);
}

QAnyStringView* QAnyStringView_new3(struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	return new (std::nothrow) QAnyStringView(str_QString);
}

QAnyStringView* QAnyStringView_new4(QAnyStringView* param1) {
	return new (std::nothrow) QAnyStringView(*param1);
}

QAnyStringView* QAnyStringView_mid(const QAnyStringView* self, ptrdiff_t pos) {
	return new QAnyStringView(self->mid((qsizetype)(pos)));
}

QAnyStringView* QAnyStringView_left(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->left((qsizetype)(n)));
}

QAnyStringView* QAnyStringView_right(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->right((qsizetype)(n)));
}

QAnyStringView* QAnyStringView_sliced(const QAnyStringView* self, ptrdiff_t pos) {
	return new QAnyStringView(self->sliced((qsizetype)(pos)));
}

QAnyStringView* QAnyStringView_sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QAnyStringView(self->sliced((qsizetype)(pos), (qsizetype)(n)));
}

QAnyStringView* QAnyStringView_first(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->first((qsizetype)(n)));
}

QAnyStringView* QAnyStringView_last(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->last((qsizetype)(n)));
}

QAnyStringView* QAnyStringView_chopped(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->chopped((qsizetype)(n)));
}

QAnyStringView* QAnyStringView_slice(QAnyStringView* self, ptrdiff_t pos) {
	QAnyStringView& _ret = self->slice((qsizetype)(pos));
	// Cast returned reference into pointer
	return &_ret;
}

QAnyStringView* QAnyStringView_slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	QAnyStringView& _ret = self->slice((qsizetype)(pos), (qsizetype)(n));
	// Cast returned reference into pointer
	return &_ret;
}

void QAnyStringView_truncate(QAnyStringView* self, ptrdiff_t n) {
	self->truncate((qsizetype)(n));
}

void QAnyStringView_chop(QAnyStringView* self, ptrdiff_t n) {
	self->chop((qsizetype)(n));
}

struct miqt_string QAnyStringView_toString(const QAnyStringView* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

ptrdiff_t QAnyStringView_size(const QAnyStringView* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

const void* QAnyStringView_data(const QAnyStringView* self) {
	return (const void*) self->data();
}

int QAnyStringView_compare(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::compare(*lhs, *rhs);
}

bool QAnyStringView_equal(QAnyStringView* lhs, QAnyStringView* rhs) {
	return QAnyStringView::equal(*lhs, *rhs);
}

QChar* QAnyStringView_front(const QAnyStringView* self) {
	return new QChar(self->front());
}

QChar* QAnyStringView_back(const QAnyStringView* self) {
	return new QChar(self->back());
}

bool QAnyStringView_empty(const QAnyStringView* self) {
	return self->empty();
}

ptrdiff_t QAnyStringView_sizeBytes(const QAnyStringView* self) {
	qsizetype _ret = self->size_bytes();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QAnyStringView_maxSize(const QAnyStringView* self) {
	qsizetype _ret = self->max_size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QAnyStringView_isNull(const QAnyStringView* self) {
	return self->isNull();
}

bool QAnyStringView_isEmpty(const QAnyStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QAnyStringView_length(const QAnyStringView* self) {
	qsizetype _ret = self->length();
	return static_cast<ptrdiff_t>(_ret);
}

void QAnyStringView_operatorAssign(QAnyStringView* self, QAnyStringView* param1) {
	self->operator=(*param1);
}

QAnyStringView* QAnyStringView_mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QAnyStringView(self->mid((qsizetype)(pos), (qsizetype)(n)));
}

int QAnyStringView_compare2(QAnyStringView* lhs, QAnyStringView* rhs, int cs) {
	return QAnyStringView::compare(*lhs, *rhs, static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_delete(QAnyStringView* self) {
	delete self;
}

