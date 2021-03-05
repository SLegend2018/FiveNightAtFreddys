#include "gameinitialize.h"

GameInitialize::GameInitialize(QObject *parent) : QObject(parent)
{
    URelativeDir = UPath.relativeFilePath(UPath.absolutePath()+"/WindowsNoEditor/DOOM.exe");
}

//Q_PROPERTY VOID
void GameInitialize::setErrorCode(QString a)
{
    UErrorCode = a;
    emit errorCodeChanged();
}

QString GameInitialize::errorCode()
{
    return UErrorCode;
}

void GameInitialize::setMessageError(QString a)
{
    UMessageError = a;
    emit messageErrorChanged();
}

QString GameInitialize::messageError()
{
    return UMessageError;
}

//Q_INVOKABLE VOID
void GameInitialize::setArgsByIndex(int value)
{
    UArgs.clear();

    switch (value)
    {
        case 0:
            UArgs << "-d3d11";
            break;
        case 1:
            UArgs << "-d3d12";
            break;
        case 2:
            UArgs << "-vulkan";
            break;
    }
}



void GameInitialize::launchGame()
{
    UProcess.start(URelativeDir, UArgs);
    UProcess.waitForFinished(-1);
    if(UProcess.exitCode() != 0)
    {
        setErrorCode(UProcess.readAllStandardError());
        setMessageError(UProcess.readAllStandardError());
        emit applicationCrashes();
    }
}


