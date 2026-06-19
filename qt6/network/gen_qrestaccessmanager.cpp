#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QIODevice>
#include <QJsonDocument>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QRestAccessManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qrestaccessmanager.h>
#include "gen_qrestaccessmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QRestAccessManager_event(QRestAccessManager*, intptr_t, QEvent*);
bool miqt_exec_callback_QRestAccessManager_eventFilter(QRestAccessManager*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRestAccessManager_timerEvent(QRestAccessManager*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRestAccessManager_childEvent(QRestAccessManager*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRestAccessManager_customEvent(QRestAccessManager*, intptr_t, QEvent*);
void miqt_exec_callback_QRestAccessManager_connectNotify(QRestAccessManager*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRestAccessManager_disconnectNotify(QRestAccessManager*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRestAccessManager final : public QRestAccessManager {
public:

	MiqtVirtualQRestAccessManager(QNetworkAccessManager* manager): QRestAccessManager(manager) {}
	MiqtVirtualQRestAccessManager(QNetworkAccessManager* manager, QObject* parent): QRestAccessManager(manager, parent) {}

	virtual ~MiqtVirtualQRestAccessManager() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QRestAccessManager::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QRestAccessManager_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QRestAccessManager_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QRestAccessManager::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QRestAccessManager_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QRestAccessManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QRestAccessManager::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QRestAccessManager_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QRestAccessManager_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QRestAccessManager::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QRestAccessManager_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QRestAccessManager_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QRestAccessManager::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QRestAccessManager_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QRestAccessManager_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QRestAccessManager::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QRestAccessManager_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QRestAccessManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QRestAccessManager::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QRestAccessManager_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QRestAccessManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QRestAccessManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRestAccessManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRestAccessManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRestAccessManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRestAccessManager* QRestAccessManager_new(QNetworkAccessManager* manager) {
	return new (std::nothrow) MiqtVirtualQRestAccessManager(manager);
}

QRestAccessManager* QRestAccessManager_new2(QNetworkAccessManager* manager, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQRestAccessManager(manager, parent);
}

void QRestAccessManager_virtbase(QRestAccessManager* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QRestAccessManager_metaObject(const QRestAccessManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRestAccessManager_metacast(QRestAccessManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRestAccessManager_tr(const char* s) {
	QString _ret = QRestAccessManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNetworkAccessManager* QRestAccessManager_networkAccessManager(const QRestAccessManager* self) {
	return self->networkAccessManager();
}

QNetworkReply* QRestAccessManager_deleteResource(QRestAccessManager* self, QNetworkRequest* request) {
	return self->deleteResource(*request);
}

QNetworkReply* QRestAccessManager_head(QRestAccessManager* self, QNetworkRequest* request) {
	return self->head(*request);
}

QNetworkReply* QRestAccessManager_get(QRestAccessManager* self, QNetworkRequest* request) {
	return self->get(*request);
}

QNetworkReply* QRestAccessManager_get2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->get(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_get3(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data) {
	return self->get(*request, *data);
}

QNetworkReply* QRestAccessManager_get4(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->get(*request, data);
}

QNetworkReply* QRestAccessManager_post(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data) {
	return self->post(*request, *data);
}

QNetworkReply* QRestAccessManager_post2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data) {
	QVariantMap data_QMap;
	struct miqt_string* data_karr = static_cast<struct miqt_string*>(data.keys);
	QVariant** data_varr = static_cast<QVariant**>(data.values);
	for(size_t i = 0; i < data.len; ++i) {
		QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
		data_QMap[data_karr_i_QString] = *(data_varr[i]);
	}
	return self->post(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_post3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->post(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_post4(QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data) {
	return self->post(*request, data);
}

QNetworkReply* QRestAccessManager_post5(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->post(*request, data);
}

QNetworkReply* QRestAccessManager_put(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data) {
	return self->put(*request, *data);
}

QNetworkReply* QRestAccessManager_put2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data) {
	QVariantMap data_QMap;
	struct miqt_string* data_karr = static_cast<struct miqt_string*>(data.keys);
	QVariant** data_varr = static_cast<QVariant**>(data.values);
	for(size_t i = 0; i < data.len; ++i) {
		QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
		data_QMap[data_karr_i_QString] = *(data_varr[i]);
	}
	return self->put(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_put3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->put(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_put4(QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data) {
	return self->put(*request, data);
}

QNetworkReply* QRestAccessManager_put5(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->put(*request, data);
}

QNetworkReply* QRestAccessManager_patch(QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data) {
	return self->patch(*request, *data);
}

QNetworkReply* QRestAccessManager_patch2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_map /* of struct miqt_string to QVariant* */  data) {
	QVariantMap data_QMap;
	struct miqt_string* data_karr = static_cast<struct miqt_string*>(data.keys);
	QVariant** data_varr = static_cast<QVariant**>(data.values);
	for(size_t i = 0; i < data.len; ++i) {
		QString data_karr_i_QString = QString::fromUtf8(data_karr[i].data, data_karr[i].len);
		data_QMap[data_karr_i_QString] = *(data_varr[i]);
	}
	return self->patch(*request, data_QMap);
}

QNetworkReply* QRestAccessManager_patch3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return self->patch(*request, data_QByteArray);
}

QNetworkReply* QRestAccessManager_patch4(QRestAccessManager* self, QNetworkRequest* request, QIODevice* data) {
	return self->patch(*request, data);
}

QNetworkReply* QRestAccessManager_sendCustomRequest(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, struct miqt_string data) {
	QByteArray method_QByteArray(method.data, method.len);
	QByteArray data_QByteArray(data.data, data.len);
	return self->sendCustomRequest(*request, method_QByteArray, data_QByteArray);
}

QNetworkReply* QRestAccessManager_sendCustomRequest2(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, QIODevice* data) {
	QByteArray method_QByteArray(method.data, method.len);
	return self->sendCustomRequest(*request, method_QByteArray, data);
}

QNetworkReply* QRestAccessManager_sendCustomRequest3(QRestAccessManager* self, QNetworkRequest* request, struct miqt_string method, QHttpMultiPart* data) {
	QByteArray method_QByteArray(method.data, method.len);
	return self->sendCustomRequest(*request, method_QByteArray, data);
}

struct miqt_string QRestAccessManager_tr2(const char* s, const char* c) {
	QString _ret = QRestAccessManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRestAccessManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QRestAccessManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRestAccessManager_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QRestAccessManager_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::event(event);
}

bool QRestAccessManager_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QRestAccessManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::eventFilter(watched, event);
}

bool QRestAccessManager_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QRestAccessManager_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::timerEvent(event);
}

bool QRestAccessManager_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QRestAccessManager_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::childEvent(event);
}

bool QRestAccessManager_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QRestAccessManager_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::customEvent(event);
}

bool QRestAccessManager_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QRestAccessManager_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::connectNotify(*signal);
}

bool QRestAccessManager_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QRestAccessManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQRestAccessManager*>(self)->QRestAccessManager::disconnectNotify(*signal);
}

QObject* QRestAccessManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QRestAccessManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QRestAccessManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QRestAccessManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRestAccessManager* self_cast = dynamic_cast<MiqtVirtualQRestAccessManager*>( (QRestAccessManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QRestAccessManager_delete(QRestAccessManager* self) {
	delete self;
}

