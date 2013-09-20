#include "msmastererror.h"

MSMasterError::MSMasterError(MSMASTER_ERROR_CODE ec, QString *cmp, QString *errorMsg)
    :errorCode(ec),raisingComponent(cmp),errMsg(errorMsg)
{

}

void MSMasterError::raise() const {
    throw *this;
}
