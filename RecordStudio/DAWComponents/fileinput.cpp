#include "fileinput.h"

DAWInputs::FileInput::FileInput(QString *file, WINBOOL mem, DWORD offset, DWORD length, DWORD flags)
{
    this->setInputHandle(BASS_StreamCreateFile(mem, file, offset, length, flags));
}
