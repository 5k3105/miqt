#include <QEventPoint>
#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence
#include <QWindow>
#include <qtestsupport_gui.h>
#include "gen_qtestsupport_gui.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTouchEventSequence* QTest__QTouchEventSequence_press(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	return &self->press(static_cast<int>(touchId), *pt);
}

QTouchEventSequence* QTest__QTouchEventSequence_move(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	return &self->move(static_cast<int>(touchId), *pt);
}

QTouchEventSequence* QTest__QTouchEventSequence_release(QTest__QTouchEventSequence* self, int touchId, QPoint* pt) {
	return &self->release(static_cast<int>(touchId), *pt);
}

QTouchEventSequence* QTest__QTouchEventSequence_stationary(QTest__QTouchEventSequence* self, int touchId) {
	return &self->stationary(static_cast<int>(touchId));
}

bool QTest__QTouchEventSequence_commit(QTest__QTouchEventSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

void QTest__QTouchEventSequence_operatorAssign(QTest__QTouchEventSequence* self, const QTouchEventSequence* param1) {
	self->operator=(*param1);
}

QTouchEventSequence* QTest__QTouchEventSequence_press2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	return &self->press(static_cast<int>(touchId), *pt, window);
}

QTouchEventSequence* QTest__QTouchEventSequence_move2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	return &self->move(static_cast<int>(touchId), *pt, window);
}

QTouchEventSequence* QTest__QTouchEventSequence_release2(QTest__QTouchEventSequence* self, int touchId, QPoint* pt, QWindow* window) {
	return &self->release(static_cast<int>(touchId), *pt, window);
}

void QTest__QTouchEventSequence_delete(QTest__QTouchEventSequence* self) {
	delete self;
}

