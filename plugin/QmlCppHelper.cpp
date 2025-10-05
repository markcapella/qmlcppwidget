
#include <iostream>
using namespace std;

#include "QmlCppHelper.h"


QmlCppHelper::QmlCppHelper(QObject* parent):
    QObject(parent) {
}

QmlCppHelper::~QmlCppHelper() = default;


QString QmlCppHelper::helloMessage() const {
    return m_helloMessage;
}

void QmlCppHelper::setHelloMessage(const QString message) {
    m_helloMessage = message;
    Q_EMIT helloMessageChanged();
}

QString QmlCppHelper::getMessageAndLog() {
    cout << "QmlCppWidget clicked." << endl;
    return m_helloMessage;
}
