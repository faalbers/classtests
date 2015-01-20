#include "InheritDummy.h"

InheritDummy::InheritDummy()
{
}

InheritDummy::InheritDummy(const char *c)
    :   Dummy(c) // Have to pass or it will pass to base default constructor
{
}

