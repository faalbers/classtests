#ifndef __CHECKDEFAULT_H__
#define __CHECKDEFAULT_H__

class CheckDefault
{
    int testPriv_;

public:
    CheckDefault(int _testInt);
    ~CheckDefault();
    
    int     testPub;
    char    *name;
};

#endif

