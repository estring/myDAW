#include "msmastercmp.h"


MSMasterSplitter::MSMasterSplitter(DWORD freq, DWORD mixerFlags, DWORD splitterFlags)
    :_curInpChannel(0)
{
    _mixerHandle=BASS_Mixer_StreamCreate(freq,2,mixerFlags);
    int chanMap[]={0,1,-1};
    _msSplitter=BASS_Split_StreamCreate(_mixerHandle,splitterFlags,chanMap);

}

bool MSMasterSplitter::SetInputChannel(DWORD channel, DWORD flags){
    if(_curInpChannel != 0){
        if(BASS_Mixer_ChannelRemove(_curInpChannel)){
            _curInpChannel=0;
        }
        else{
            _lastError=new MSMasterError(MSMasterError::ChannelRemove_Error,new QString("MSMasterSplitter"),new QString("Unable to remove current channel!"));
            _lastError->raise();
            return false;
        }
    }
    if(!BASS_Mixer_StreamAddChannel(_mixerHandle,channel,flags)){
        _lastError=new MSMasterError(MSMasterError::AddChannel_Error, new QString("MSMasterSplitter"), new QString("Setting input channel failed!"));
        _lastError->raise();
        return false;
    }
    float matrix[2][2]={
        {0,-1},
        {0,1}
    };
    if(!BASS_Mixer_ChannelSetMatrix(channel, *matrix)){
        _lastError=new MSMasterError(MSMasterError::SetMatrix_Error, new QString("MSMasterSplitter"), new QString("Unable to set matrix on Channel!"));
        _lastError->raise();
        return false;
    }
    return true;
}

const MSMasterError *MSMasterSplitter::getLastError()
{
    return _lastError;
}
