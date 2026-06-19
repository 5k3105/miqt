#include <QPartialOrdering>
#define WORKAROUND_INNER_CLASS_DEFINITION_partial_ordering
#define WORKAROUND_INNER_CLASS_DEFINITION_strong_ordering
#define WORKAROUND_INNER_CLASS_DEFINITION_weak_ordering
#include <qcompare.h>
#include "gen_qcompare.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

partial_ordering* partial_ordering_new(const partial_ordering* param1) {
	return new (std::nothrow) Qt::partial_ordering(*param1);
}

void partial_ordering_delete(partial_ordering* self) {
	delete self;
}

weak_ordering* weak_ordering_new(const weak_ordering* param1) {
	return new (std::nothrow) Qt::weak_ordering(*param1);
}

partial_ordering weak_ordering_ToPartialOrdering(const weak_ordering* self) {
	return self->operator partial_ordering();
}

void weak_ordering_delete(weak_ordering* self) {
	delete self;
}

strong_ordering* strong_ordering_new(const strong_ordering* param1) {
	return new (std::nothrow) Qt::strong_ordering(*param1);
}

partial_ordering strong_ordering_ToPartialOrdering(const strong_ordering* self) {
	return self->operator partial_ordering();
}

weak_ordering strong_ordering_ToWeakOrdering(const strong_ordering* self) {
	return self->operator weak_ordering();
}

void strong_ordering_delete(strong_ordering* self) {
	delete self;
}

QPartialOrdering* QPartialOrdering_new(partial_ordering* order) {
	return new (std::nothrow) QPartialOrdering(*order);
}

QPartialOrdering* QPartialOrdering_new2(weak_ordering* stdorder) {
	return new (std::nothrow) QPartialOrdering(*stdorder);
}

QPartialOrdering* QPartialOrdering_new3(strong_ordering* stdorder) {
	return new (std::nothrow) QPartialOrdering(*stdorder);
}

QPartialOrdering* QPartialOrdering_new4(QPartialOrdering* param1) {
	return new (std::nothrow) QPartialOrdering(*param1);
}

partial_ordering* QPartialOrdering_ToPartialOrdering(const QPartialOrdering* self) {
	return new Qt::partial_ordering(self->operator partial_ordering());
}

void QPartialOrdering_delete(QPartialOrdering* self) {
	delete self;
}

