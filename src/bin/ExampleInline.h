#ifndef __EXAMPLEINLINE_H__
#define __EXAMPLEINLINE_H__

#include "Log.h"

class ExampleInline
{
    int test_;

public:
    // In header inline example, avoids jumping in and out of functions
    void setTest(const int & test) { test_ = test; }
    const int & getTest() const { return test_; }
    // Testing method that does nothing without const
    void doNothing() { std::cout << "Doing nothing to members" << std::endl;}
};

#endif

