#ifndef __INHERITDUMMY_H__
#define __INHERITDUMMY_H__

#include "Log.h"
#include "Dummy.h"

class InheritDummy : public Dummy
{
    public:
        InheritDummy();
        InheritDummy(const char *c);
};

#endif

