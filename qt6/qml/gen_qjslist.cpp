#include <QJSListForInIterator>
#include <QJSListForOfIterator>
#include <QJSListIndexClamp>
#include <qjslist.h>
#include "gen_qjslist.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QJSListIndexClamp* QJSListIndexClamp_new(QJSListIndexClamp* param1) {
	return new (std::nothrow) QJSListIndexClamp(*param1);
}

QJSListIndexClamp* QJSListIndexClamp_new2() {
	return new (std::nothrow) QJSListIndexClamp();
}

ptrdiff_t QJSListIndexClamp_clamp(ptrdiff_t start, ptrdiff_t max) {
	qsizetype _ret = QJSListIndexClamp::clamp((qsizetype)(start), (qsizetype)(max));
	return static_cast<ptrdiff_t>(_ret);
}

void QJSListIndexClamp_operatorAssign(QJSListIndexClamp* self, QJSListIndexClamp* param1) {
	self->operator=(*param1);
}

ptrdiff_t QJSListIndexClamp_clamp2(ptrdiff_t start, ptrdiff_t max, ptrdiff_t min) {
	qsizetype _ret = QJSListIndexClamp::clamp((qsizetype)(start), (qsizetype)(max), (qsizetype)(min));
	return static_cast<ptrdiff_t>(_ret);
}

void QJSListIndexClamp_delete(QJSListIndexClamp* self) {
	delete self;
}

QJSListForInIterator* QJSListForInIterator_new() {
	return new (std::nothrow) QJSListForInIterator();
}

QJSListForInIterator* QJSListForInIterator_new2(QJSListForInIterator* param1) {
	return new (std::nothrow) QJSListForInIterator(*param1);
}

bool QJSListForInIterator_hasNext(const QJSListForInIterator* self) {
	return self->hasNext();
}

ptrdiff_t QJSListForInIterator_next(QJSListForInIterator* self) {
	qsizetype _ret = self->next();
	return static_cast<ptrdiff_t>(_ret);
}

void QJSListForInIterator_delete(QJSListForInIterator* self) {
	delete self;
}

QJSListForOfIterator* QJSListForOfIterator_new() {
	return new (std::nothrow) QJSListForOfIterator();
}

QJSListForOfIterator* QJSListForOfIterator_new2(QJSListForOfIterator* param1) {
	return new (std::nothrow) QJSListForOfIterator(*param1);
}

void QJSListForOfIterator_init(QJSListForOfIterator* self) {
	self->init();
}

void QJSListForOfIterator_delete(QJSListForOfIterator* self) {
	delete self;
}

