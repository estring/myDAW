#ifndef FILEINPUT_H
#define FILEINPUT_H

#include "dawinput.h"
#include <QObject>

namespace DAWInputs
{
    /**
     * @brief The FileInput class
     */
    class DAWCOMPONENTSSHARED_EXPORT FileInput : public DAWInputs::InputBase
    {
        Q_OBJECT
    public:
        /**
         * @brief FileInput
         * @param file
         * @param mem
         * @param offset
         * @param length
         * @param flags
         */
        FileInput(QString *file, BOOL mem=false, DWORD offset=0, DWORD length=0, DWORD flags=BASS_STREAM_DECODE | BASS_SAMPLE_FLOAT | BASS_ASYNCFILE);

    public slots:

    signals:

    private:
    };
}
#endif // FILEINPUT_H
