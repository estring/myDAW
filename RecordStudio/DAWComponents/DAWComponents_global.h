#ifndef DAWCOMPONENTS_GLOBAL_H
#define DAWCOMPONENTS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DAWCOMPONENTS_LIBRARY)
#  define DAWCOMPONENTSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DAWCOMPONENTSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DAWCOMPONENTS_GLOBAL_H
