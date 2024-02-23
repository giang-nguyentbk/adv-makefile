#pragma once

#include "startUpIf.h"
#include "module1StartUp.h"

namespace StartUp
{

class StartUpImpl : public StartUpIf
{
public:
        static StartUpImpl* getInstance();

}; // class StartUpImpl

} // namespace StartUp