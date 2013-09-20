#ifndef MSMASTERERROR_H
#define MSMASTERERROR_H

#include "MSMasterCmp_global.h"
#include <QException>
#include <QString>

/**
 * @brief The MSMasterError class Thrown by the MSMasterComponents. Contains Information about the errors occured in those components.
 */
class MSMASTERCMPSHARED_EXPORT MSMasterError : public QException
{

public:
    /**
     * @brief The MSMASTER_ERROR_CODE enum
     */
    enum MSMASTER_ERROR_CODE{
        Unknown_Error,
        ChannelRemove_Error,
        AddChannel_Error,
        SetMatrix_Error
    };

    MSMasterError(MSMasterError::MSMASTER_ERROR_CODE ec,QString *cmp,QString *errorMsg);
    MSMASTER_ERROR_CODE errorCode;
    QString *raisingComponent;
    QString *errMsg;
    void raise() const;
    MSMasterError *clone() const { return new MSMasterError(*this); }
    

};

#endif // MSMASTERERROR_H
