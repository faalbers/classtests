#ifndef __DUMMY_H__
#define __DUMMY_H__

#include "Log.h"

class Dummy
{
public:
    Dummy()
        : a_(0)
    { if (LOG_DEBUG) std::cout << "Constructed Dummy at " << this << std::endl; }
    Dummy(const int &i)
    { if (LOG_DEBUG) std::cout << "Constructed Dummy at " << this << " with int " << i << std::endl; }
    Dummy(const char *c)
    { if (LOG_DEBUG) std::cout << "Constructed Dummy at " << this << " with char " << c << std::endl; }
    Dummy(Dummy &dummyRef)
    { if (LOG_DEBUG) std::cout << "Copy Dummy Ref at " << &dummyRef << " into Dummy at " << this << std::endl; }
    ~Dummy()
    { if (LOG_DEBUG) std::cout << "Destruct Dummy at " << this << std::endl; }
    
    void setTest() { a_ = 1; }
protected:
    int a_;
};

#endif

