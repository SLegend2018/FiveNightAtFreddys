#ifndef GAMEINITIALIZE_H
#define GAMEINITIALIZE_H

#include <QObject>
#include <QQmlComponent>
#include <QDir>
#include <QProcess>

class GameInitialize : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString errorCode READ errorCode WRITE setErrorCode NOTIFY errorCodeChanged)
    Q_PROPERTY(QString messageError READ messageError WRITE setMessageError NOTIFY messageErrorChanged)
public:
    explicit GameInitialize(QObject *parent = nullptr);


    //Invocable void
    Q_INVOKABLE void setArgsByIndex(int value);
    Q_INVOKABLE void launchGame();

signals:
    //Q_PROPERTY Signal
    void errorCodeChanged();
    void messageErrorChanged();

    //Signals
    void applicationCrashes();

private:
    //QProperty
    void setErrorCode(QString a);
    QString errorCode();
    void setMessageError(QString a);
    QString messageError();

    //Variables
    QDir UPath;
    QProcess UProcess;
    QString URelativeDir;
    QStringList UArgs;
    //Q_PROPERTY Variables
    QString UErrorCode;
    QString UMessageError;


};

#endif // GAMEINITIALIZE_H
