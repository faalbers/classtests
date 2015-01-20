#ifndef __EXAMPLESTRUCT_H__
#define __EXAMPLESTRUCT_H__

struct ExampleStruct
{
    int test_;

    // In header inline example, avoids jumping in and out of functions
    void setTest(const int & test) { test_ = test; }
    const int & getTest() const { return test_; }
};

#endif

