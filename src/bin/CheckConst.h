#ifndef __CHECKCONST_H__
#define __CHECKCONST_H__

class CheckConst
{
    int test_;

public:
    // Trying const in methode that changes something
    void setTest(const int &test) const;
};

#endif

