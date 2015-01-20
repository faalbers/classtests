#ifndef __SMARTCOLLECT_H__
#define __SMARTCOLLECT_H__

#include "Log.h"
#include <vector>
#include <memory>
#include "Dummy.h"

class SmartCollect
{
    public:
        ~SmartCollect()
        { if (LOG_DEBUG) std::cout << "Destruct SmartCollect at " << this << std::endl; }
        std::vector<std::unique_ptr<Dummy>>   uniqueDummies;
        std::vector<std::shared_ptr<Dummy>>   sharedDummies;
        // This one also gets automatically destroyed, not just vector spointers
        std::shared_ptr<Dummy>                sharedDummySPtr;
};

#endif

