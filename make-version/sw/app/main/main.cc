#include <iostream>

#include "startUpIf.h"



int main(void)
{
        std::cout << "INFO:\t" << __FILE__ << ":" << __LINE__ << "\t\tmsg = \"Starting main process...\"" << std::endl;

        StartUp::StartUpIf::getInstance()->startUpAllInternalSubModules();

        std::cout << "INFO:\t" << __FILE__ << ":" << __LINE__ << "\t\tmsg = \"Starting module1 done!\"" << std::endl;

        StartUp::StartUpIf::getInstance()->destroyAllInternalSubModules();

        std::cout << "INFO:\t" << __FILE__ << ":" << __LINE__ << "\t\tmsg = \"Destroying module1 done!\"" << std::endl;

        return 0;
}