#ifndef __NOCOPY_H__
#define __NOCOPY_H__

#include "Log.h"

class NoCopy
{
public:
    NoCopy() : test(0)
    { if (LOG_DEBUG) std::cout << "Constructed NoCopy at " << this << " with default test " << test << std::endl; }
    NoCopy(const int &t) : test(t)
    { if (LOG_DEBUG) std::cout << "Constructed NoCopy at " << this << " with test input " << test << std::endl; }
    ~NoCopy()
    { if (LOG_DEBUG) std::cout << "Destruct NoCopy at " << this << std::endl; }

    int test;
};

#endif

