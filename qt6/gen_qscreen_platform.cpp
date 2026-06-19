#define WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWaylandScreen
#include <qscreen_platform.h>
#include "gen_qscreen_platform.h"

#ifdef __cplusplus
extern "C" {
#endif

wl_output* miqt_exec_callback_QNativeInterface__QWaylandScreen_output(const QNativeInterface__QWaylandScreen*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNativeInterfaceQWaylandScreen final : public QNativeInterface::QWaylandScreen {
public:

	MiqtVirtualQNativeInterfaceQWaylandScreen(): QNativeInterface::QWaylandScreen() {}

private:
	virtual ~MiqtVirtualQNativeInterfaceQWaylandScreen();

public:

	// cgo.Handle value for overwritten implementation
	intptr_t handle__output = 0;

	// Subclass to allow providing a Go implementation
	virtual wl_output* output() const override {
		if (handle__output == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		wl_output* callback_return_value = miqt_exec_callback_QNativeInterface__QWaylandScreen_output(this, handle__output);
		return callback_return_value;
	}

};

QNativeInterface__QWaylandScreen* QNativeInterface__QWaylandScreen_new() {
	return new (std::nothrow) MiqtVirtualQNativeInterfaceQWaylandScreen();
}

wl_output* QNativeInterface__QWaylandScreen_output(const QNativeInterface__QWaylandScreen* self) {
	return self->output();
}

bool QNativeInterface__QWaylandScreen_override_virtual_output(void* self, intptr_t slot) {
	MiqtVirtualQNativeInterfaceQWaylandScreen* self_cast = dynamic_cast<MiqtVirtualQNativeInterfaceQWaylandScreen*>( (QNativeInterface::QWaylandScreen*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__output = slot;
	return true;
}

