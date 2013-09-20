#ifndef DAWERROR_H
#define DAWERROR_H

#include <QException>
#include "DAWComponents_global.h"

namespace DAWInputs{
/**
 * @brief The DAWError class
 */
class DAWCOMPONENTSSHARED_EXPORT DAWError : public QException
{
public:
    DAWError();
};
}
#endif // DAWERROR_H
