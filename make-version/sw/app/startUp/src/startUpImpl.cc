#include "startUpImpl.h"

namespace StartUp
{

static StartUpIf* pStartUpInstance = nullptr;
static Module1::StartUp* module1StartUpPtr = nullptr;

StartUpIf* StartUpIf::getInstance()
{
        if(pStartUpInstance == nullptr)
        {
                pStartUpInstance = new StartUpImpl();
        }

        return pStartUpInstance;
}

void StartUpIf::startUpAllInternalSubModules()
{
        if(module1StartUpPtr == nullptr)
        {
                module1StartUpPtr = new Module1::StartUp();
        }

        bool isModule1Init = module1StartUpPtr->init();
        if(!isModule1Init)
        {
                delete module1StartUpPtr;
                module1StartUpPtr = nullptr;
        }
}

void StartUpIf::destroyAllInternalSubModules()
{
        if(module1StartUpPtr != nullptr)
        {
                delete module1StartUpPtr;
                module1StartUpPtr = nullptr;
        }
}



} // namespace StartUp