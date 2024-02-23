#include <iostream>

#include "startUpIf.h"



int main(void)
{
        std::cout << "Starting main process..." << std::endl;

        StartUp::StartUpIf::getInstance()->startUpAllInternalSubModules();

        std::cout << "Starting module1 done!" << std::endl;

        StartUp::StartUpIf::getInstance()->destroyAllInternalSubModules();

        std::cout << "Destroying module1 done!" << std::endl;

        return 1;
}