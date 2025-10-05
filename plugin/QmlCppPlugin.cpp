
#include "QmlCppHelper.h"
#include "QmlCppPlugin.h"


void QmlCppPlugin::registerTypes(const char* uri) {
    Q_ASSERT(QLatin1String(uri) ==
        QLatin1String("inc.skyrmion.qmlcppwidget"));

    qmlRegisterType<QmlCppHelper>(uri, 1, 0, "QmlCppHelper");
}
