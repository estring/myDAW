#include "dawinput.h"

const DWORD DAWInputs::InputBase::getInputHandle()
{
    return _handle;
}

void DAWInputs::InputBase::setInputHandle(DWORD handle)
{
    _handle=handle;
}

bool DAWInputs::InputBase::getErrorState()
{
    return _error;
}

void DAWInputs::InputBase::setError(bool error)
{
    this->_error=error;
}




