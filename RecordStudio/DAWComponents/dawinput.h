#ifndef DAWINPUT_H
#define DAWINPUT_H

#include "DAWComponents_global.h"
#include <QObject>
#include "bass.h"

namespace DAWInputs{
/**
 * @brief The InputBase class
 */
class DAWCOMPONENTSSHARED_EXPORT InputBase:public QObject
{
public:
    const DWORD getInputHandle();
    void setInputHandle(DWORD handle);
    bool getErrorState();
public slots:
    void setError(bool error);
private:
    DWORD _handle;
    bool _error;
};
}

#endif // DAWINPUT_H
