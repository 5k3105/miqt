#include <QPoint>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence
#include <QWidget>
#include <qtestsupport_widgets.h>
#include "gen_qtestsupport_widgets.h"

#ifdef __cplusplus
extern "C" {
#endif

QTouchEventWidgetSequence* miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary(QTest__QTouchEventWidgetSequence*, intptr_t, int);
bool miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit(QTest__QTouchEventWidgetSequence*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTestQTouchEventWidgetSequence final : public QTest::QTouchEventWidgetSequence {
public:

	MiqtVirtualQTestQTouchEventWidgetSequence(const QTouchEventWidgetSequence& param1): QTest::QTouchEventWidgetSequence(param1) {}

	virtual ~MiqtVirtualQTestQTouchEventWidgetSequence() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stationary = 0;

	// Subclass to allow providing a Go implementation
	virtual QTouchEventWidgetSequence& stationary(int touchId) override {
		if (handle__stationary == 0) {
			return QTest::QTouchEventWidgetSequence::stationary(touchId);
		}

		int sigval1 = touchId;
		QTouchEventWidgetSequence* callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_stationary(this, handle__stationary, sigval1);
		return *callback_return_value;
	}

	friend QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_virtualbase_stationary(void* self, int touchId);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__commit = 0;

	// Subclass to allow providing a Go implementation
	virtual bool commit(bool processEvents) override {
		if (handle__commit == 0) {
			return QTest::QTouchEventWidgetSequence::commit(processEvents);
		}

		bool sigval1 = processEvents;
		bool callback_return_value = miqt_exec_callback_QTest__QTouchEventWidgetSequence_commit(this, handle__commit, sigval1);
		return callback_return_value;
	}

	friend bool QTest__QTouchEventWidgetSequence_virtualbase_commit(void* self, bool processEvents);

};

QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(const QTouchEventWidgetSequence* param1) {
	return new (std::nothrow) MiqtVirtualQTestQTouchEventWidgetSequence(*param1);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	return &self->press(static_cast<int>(touchId), *pt);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	return &self->move(static_cast<int>(touchId), *pt);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt) {
	return &self->release(static_cast<int>(touchId), *pt);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_stationary(QTest__QTouchEventWidgetSequence* self, int touchId) {
	return &self->stationary(static_cast<int>(touchId));
}

bool QTest__QTouchEventWidgetSequence_commit(QTest__QTouchEventWidgetSequence* self, bool processEvents) {
	return self->commit(processEvents);
}

void QTest__QTouchEventWidgetSequence_operatorAssign(QTest__QTouchEventWidgetSequence* self, const QTouchEventWidgetSequence* param1) {
	self->operator=(*param1);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_press2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	return &self->press(static_cast<int>(touchId), *pt, widget);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_move2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	return &self->move(static_cast<int>(touchId), *pt, widget);
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_release2(QTest__QTouchEventWidgetSequence* self, int touchId, QPoint* pt, QWidget* widget) {
	return &self->release(static_cast<int>(touchId), *pt, widget);
}

bool QTest__QTouchEventWidgetSequence_override_virtual_stationary(void* self, intptr_t slot) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest::QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stationary = slot;
	return true;
}

QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_virtualbase_stationary(void* self, int touchId) {
	return &static_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>(self)->QTest::QTouchEventWidgetSequence::stationary(static_cast<int>(touchId));
}

bool QTest__QTouchEventWidgetSequence_override_virtual_commit(void* self, intptr_t slot) {
	MiqtVirtualQTestQTouchEventWidgetSequence* self_cast = dynamic_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>( (QTest::QTouchEventWidgetSequence*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commit = slot;
	return true;
}

bool QTest__QTouchEventWidgetSequence_virtualbase_commit(void* self, bool processEvents) {
	return static_cast<MiqtVirtualQTestQTouchEventWidgetSequence*>(self)->QTest::QTouchEventWidgetSequence::commit(processEvents);
}

void QTest__QTouchEventWidgetSequence_delete(QTest__QTouchEventWidgetSequence* self) {
	delete self;
}

