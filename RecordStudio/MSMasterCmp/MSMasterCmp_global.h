#ifndef MSMASTERCMP_GLOBAL_H
#define MSMASTERCMP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MSMASTERCMP_LIBRARY)
#  define MSMASTERCMPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MSMASTERCMPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MSMASTERCMP_GLOBAL_H
