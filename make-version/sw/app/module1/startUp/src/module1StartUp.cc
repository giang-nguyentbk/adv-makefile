// This is a source file for StartUp module1

#include <iostream>
#include "module1StartUp.h"

namespace Module1
{

bool StartUp::init()
{
        std::cout << "INFO:\t" << __FILE__ << ":" << __LINE__ << "\tmsg = \"Module1::StartUp starting...\"" << std::endl;
        return true;
}

}