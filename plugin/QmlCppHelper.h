
#pragma once

#include <QDebug>
#include <QObject>
#include <QTcpSocket>


class QmlCppHelper: public QObject {
    Q_OBJECT

    Q_PROPERTY(QString helloMessage READ helloMessage
        WRITE setHelloMessage NOTIFY helloMessageChanged)

public:
    explicit QmlCppHelper(QObject* parent = nullptr);
    ~QmlCppHelper() override;

    QString helloMessage() const;
    void setHelloMessage(const QString message);

    Q_INVOKABLE QString getMessageAndLog();

Q_SIGNALS:
    void helloMessageChanged();

private:
    QTcpSocket socket;

    QString m_helloMessage;
};
