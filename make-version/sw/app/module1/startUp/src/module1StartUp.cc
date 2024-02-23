// This is a source file for StartUp module1

#include <iostream>
#include "module1StartUp.h"

namespace Module1
{

bool StartUp::init()
{
        std::cout << "Module1::StartUp starting..." << std::endl;
        return true;
}

}