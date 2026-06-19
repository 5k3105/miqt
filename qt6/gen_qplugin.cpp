#include <QJsonObject>
#include <QStaticPlugin>
#include <qplugin.h>
#include "gen_qplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QStaticPlugin* QStaticPlugin_new(QStaticPlugin* param1) {
	return new (std::nothrow) QStaticPlugin(*param1);
}

QJsonObject* QStaticPlugin_metaData(const QStaticPlugin* self) {
	return new QJsonObject(self->metaData());
}

void QStaticPlugin_delete(QStaticPlugin* self) {
	delete self;
}

