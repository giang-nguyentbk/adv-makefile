#pragma once

#include "startUpIf.h"
#include "module1StartUp.h"

namespace StartUp
{

class StartUpImpl : public StartUpIf
{
public:
        static StartUpImpl* getInstance();
        static void startUpAllInternalSubModules();
        static void destroyAllInternalSubModules();

private:
        static Module1::StartUp* module1StartUpPtr;

}; // class StartUpImpl

} // namespace StartUp