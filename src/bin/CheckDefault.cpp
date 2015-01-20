#include "CheckDefault.h"
#include "Log.h"

CheckDefault::CheckDefault(int _testInt)
{
    if (LOG_DEBUG) std::cout << "Constructed CheckDefault(int) at " << this << std::endl;
}

CheckDefault::~CheckDefault()
{
    if (LOG_DEBUG) std::cout << "Destructing CheckDefault at " << this << std::endl;
}


