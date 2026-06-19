#include <QBasicReadWriteLock>
#include <QDeadlineTimer>
#include <QReadLocker>
#include <QReadWriteLock>
#include <QWriteLocker>
#include <qreadwritelock.h>
#include "gen_qreadwritelock.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBasicReadWriteLock* QBasicReadWriteLock_new() {
	return new (std::nothrow) QBasicReadWriteLock();
}

void QBasicReadWriteLock_lockForRead(QBasicReadWriteLock* self) {
	self->lockForRead();
}

bool QBasicReadWriteLock_tryLockForRead(QBasicReadWriteLock* self) {
	return self->tryLockForRead();
}

bool QBasicReadWriteLock_tryLockForReadWithTimeout(QBasicReadWriteLock* self, QDeadlineTimer* timeout) {
	return self->tryLockForRead(*timeout);
}

void QBasicReadWriteLock_lockForWrite(QBasicReadWriteLock* self) {
	self->lockForWrite();
}

bool QBasicReadWriteLock_tryLockForWrite(QBasicReadWriteLock* self) {
	return self->tryLockForWrite();
}

bool QBasicReadWriteLock_tryLockForWriteWithTimeout(QBasicReadWriteLock* self, QDeadlineTimer* timeout) {
	return self->tryLockForWrite(*timeout);
}

void QBasicReadWriteLock_unlock(QBasicReadWriteLock* self) {
	self->unlock();
}

void QBasicReadWriteLock_lock(QBasicReadWriteLock* self) {
	self->lock();
}

void QBasicReadWriteLock_lockShared(QBasicReadWriteLock* self) {
	self->lock_shared();
}

bool QBasicReadWriteLock_tryLock(QBasicReadWriteLock* self) {
	return self->try_lock();
}

bool QBasicReadWriteLock_tryLockShared(QBasicReadWriteLock* self) {
	return self->try_lock_shared();
}

void QBasicReadWriteLock_unlockShared(QBasicReadWriteLock* self) {
	self->unlock_shared();
}

void QBasicReadWriteLock_delete(QBasicReadWriteLock* self) {
	delete self;
}

QReadWriteLock* QReadWriteLock_new() {
	return new (std::nothrow) QReadWriteLock();
}

QReadWriteLock* QReadWriteLock_new2(RecursionMode recursionMode) {
	return new (std::nothrow) QReadWriteLock(recursionMode);
}

void QReadWriteLock_virtbase(QReadWriteLock* src, QBasicReadWriteLock** outptr_QBasicReadWriteLock) {
	*outptr_QBasicReadWriteLock = static_cast<QBasicReadWriteLock*>(src);
}

bool QReadWriteLock_tryLockForRead(QReadWriteLock* self, int timeout) {
	return self->tryLockForRead(static_cast<int>(timeout));
}

bool QReadWriteLock_tryLockForWrite(QReadWriteLock* self, int timeout) {
	return self->tryLockForWrite(static_cast<int>(timeout));
}

void QReadWriteLock_delete(QReadWriteLock* self) {
	delete self;
}

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock) {
	return new (std::nothrow) QReadLocker(readWriteLock);
}

void QReadLocker_unlock(QReadLocker* self) {
	self->unlock();
}

void QReadLocker_relock(QReadLocker* self) {
	self->relock();
}

QReadWriteLock* QReadLocker_readWriteLock(const QReadLocker* self) {
	return self->readWriteLock();
}

void QReadLocker_delete(QReadLocker* self) {
	delete self;
}

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock) {
	return new (std::nothrow) QWriteLocker(readWriteLock);
}

void QWriteLocker_unlock(QWriteLocker* self) {
	self->unlock();
}

void QWriteLocker_relock(QWriteLocker* self) {
	self->relock();
}

QReadWriteLock* QWriteLocker_readWriteLock(const QWriteLocker* self) {
	return self->readWriteLock();
}

void QWriteLocker_delete(QWriteLocker* self) {
	delete self;
}

