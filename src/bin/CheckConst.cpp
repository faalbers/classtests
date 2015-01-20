#include "CheckConst.h"

void CheckConst::setTest(const int &test) const
{
    // Not allowed since this method is const
    // meaning that no members of the class may be changed
    //test_ = test;
}


