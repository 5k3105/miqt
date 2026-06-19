#pragma once
#ifndef MIQT_QT6_GEN_QREADWRITELOCK_H
#define MIQT_QT6_GEN_QREADWRITELOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBasicReadWriteLock;
class QDeadlineTimer;
class QReadLocker;
class QReadWriteLock;
class QWriteLocker;
#else
typedef struct QBasicReadWriteLock QBasicReadWriteLock;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QReadLocker QReadLocker;
typedef struct QReadWriteLock QReadWriteLock;
typedef struct QWriteLocker QWriteLocker;
#endif

QBasicReadWriteLock* QBasicReadWriteLock_new();
void QBasicReadWriteLock_lockForRead(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLockForRead(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLockForReadWithTimeout(QBasicReadWriteLock* self, QDeadlineTimer* timeout);
void QBasicReadWriteLock_lockForWrite(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLockForWrite(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLockForWriteWithTimeout(QBasicReadWriteLock* self, QDeadlineTimer* timeout);
void QBasicReadWriteLock_unlock(QBasicReadWriteLock* self);
void QBasicReadWriteLock_lock(QBasicReadWriteLock* self);
void QBasicReadWriteLock_lockShared(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLock(QBasicReadWriteLock* self);
bool QBasicReadWriteLock_tryLockShared(QBasicReadWriteLock* self);
void QBasicReadWriteLock_unlockShared(QBasicReadWriteLock* self);

void QBasicReadWriteLock_delete(QBasicReadWriteLock* self);

QReadWriteLock* QReadWriteLock_new();
QReadWriteLock* QReadWriteLock_new2(RecursionMode recursionMode);
void QReadWriteLock_virtbase(QReadWriteLock* src, QBasicReadWriteLock** outptr_QBasicReadWriteLock);
bool QReadWriteLock_tryLockForRead(QReadWriteLock* self, int timeout);
bool QReadWriteLock_tryLockForWrite(QReadWriteLock* self, int timeout);

void QReadWriteLock_delete(QReadWriteLock* self);

QReadLocker* QReadLocker_new(QReadWriteLock* readWriteLock);
void QReadLocker_unlock(QReadLocker* self);
void QReadLocker_relock(QReadLocker* self);
QReadWriteLock* QReadLocker_readWriteLock(const QReadLocker* self);

void QReadLocker_delete(QReadLocker* self);

QWriteLocker* QWriteLocker_new(QReadWriteLock* readWriteLock);
void QWriteLocker_unlock(QWriteLocker* self);
void QWriteLocker_relock(QWriteLocker* self);
QReadWriteLock* QWriteLocker_readWriteLock(const QWriteLocker* self);

void QWriteLocker_delete(QWriteLocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
