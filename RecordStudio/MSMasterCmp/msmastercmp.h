#ifndef MSMASTERCMP_H
#define MSMASTERCMP_H

//#include "MSMasterCmp_global.h"
//#include "bass.h"
#include "bassmix.h"
#include "msmastererror.h"

/**
 * @brief The MSMasterSplitter class uses a mixer to create a stereo stream that at the left channel mixes the sideband and
 * at the right the midband(the mono signal). The resulting stream is send to a splitterstream that creates two outputstreams(0=S, 1=M).
 */
class MSMASTERCMPSHARED_EXPORT MSMasterSplitter
{
public:
    /**
     * @brief MSMasterSplitter
     * @param freq the sample rate of the mixer
     * @param mixerFlags flags used by the mixer. For more information see the bassmix documentation.
     * @param splitterFlags flags used by the splitter. More info see basmix documentation.
     */
    MSMasterSplitter(DWORD freq,DWORD mixerFlags=BASS_SAMPLE_FLOAT|BASS_STREAM_DECODE,DWORD splitterFlags=BASS_STREAM_DECODE);

    /**
     * @brief SetInputChannel Sets the inputchannel for the mixer. If a channel is already applied this channel will be replaced by the new one.
     * @param channel the channel to plugin to the mixer.
     * @param flags for more info see bassmix documentation.
     * @return true if succesful else false.
     */
    bool SetInputChannel(DWORD channel, DWORD flags=BASS_MIXER_MATRIX);

    const MSMasterError* getLastError();

private:
    HSTREAM _mixerHandle;
    HSTREAM _msSplitter;
    DWORD _curInpChannel;
    MSMasterError *_lastError;
};



#endif // MSMASTERCMP_H
