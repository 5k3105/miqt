package qml

/*

#include "gen_qqmlprivate.h"
#include <stdlib.h>

*/
import "C"

type QQmlPrivate__SingletonConstructionMode int

const (
	QQmlPrivate__SingletonConstructionMode__None           QQmlPrivate__SingletonConstructionMode = 0
	QQmlPrivate__SingletonConstructionMode__Constructor    QQmlPrivate__SingletonConstructionMode = 1
	QQmlPrivate__SingletonConstructionMode__Factory        QQmlPrivate__SingletonConstructionMode = 2
	QQmlPrivate__SingletonConstructionMode__FactoryWrapper QQmlPrivate__SingletonConstructionMode = 3
)

type QQmlPrivate__AutoParentResult int

const (
	QQmlPrivate__Parented           QQmlPrivate__AutoParentResult = 0
	QQmlPrivate__IncompatibleObject QQmlPrivate__AutoParentResult = 1
	QQmlPrivate__IncompatibleParent QQmlPrivate__AutoParentResult = 2
)

type QQmlPrivate__ValueTypeCreationMethod int

const (
	QQmlPrivate__ValueTypeCreationMethod__None       QQmlPrivate__ValueTypeCreationMethod = 0
	QQmlPrivate__ValueTypeCreationMethod__Construct  QQmlPrivate__ValueTypeCreationMethod = 1
	QQmlPrivate__ValueTypeCreationMethod__Structured QQmlPrivate__ValueTypeCreationMethod = 2
)

type QQmlPrivate__RegistrationType int

const (
	QQmlPrivate__TypeRegistration                            QQmlPrivate__RegistrationType = 0
	QQmlPrivate__InterfaceRegistration                       QQmlPrivate__RegistrationType = 1
	QQmlPrivate__AutoParentRegistration                      QQmlPrivate__RegistrationType = 2
	QQmlPrivate__SingletonRegistration                       QQmlPrivate__RegistrationType = 3
	QQmlPrivate__CompositeRegistration                       QQmlPrivate__RegistrationType = 4
	QQmlPrivate__CompositeSingletonRegistration              QQmlPrivate__RegistrationType = 5
	QQmlPrivate__QmlUnitCacheHookRegistration                QQmlPrivate__RegistrationType = 6
	QQmlPrivate__TypeAndRevisionsRegistration                QQmlPrivate__RegistrationType = 7
	QQmlPrivate__SingletonAndRevisionsRegistration           QQmlPrivate__RegistrationType = 8
	QQmlPrivate__SequentialContainerRegistration             QQmlPrivate__RegistrationType = 9
	QQmlPrivate__SequentialContainerAndRevisionsRegistration QQmlPrivate__RegistrationType = 10
)

type QQmlPrivate__QmlRegistrationWarning int

const (
	QQmlPrivate__UnconstructibleType      QQmlPrivate__QmlRegistrationWarning = 0
	QQmlPrivate__UnconstructibleSingleton QQmlPrivate__QmlRegistrationWarning = 1
	QQmlPrivate__NonQObjectWithAtached    QQmlPrivate__QmlRegistrationWarning = 2
)

type QQmlPrivate__RegisterType__StructVersion int

const (
	QQmlPrivate__RegisterType__Base           QQmlPrivate__RegisterType__StructVersion = 0
	QQmlPrivate__RegisterType__FinalizerCast  QQmlPrivate__RegisterType__StructVersion = 1
	QQmlPrivate__RegisterType__CreationMethod QQmlPrivate__RegisterType__StructVersion = 2
	QQmlPrivate__RegisterType__CurrentVersion QQmlPrivate__RegisterType__StructVersion = 2
)

type QQmlPrivate__AOTCompiledContext__ uint
