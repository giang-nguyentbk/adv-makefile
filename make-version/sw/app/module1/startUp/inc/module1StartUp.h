// This is file to startUp module1
#pragma once
#include "nonCopyable.h"

namespace Module1
{

class StartUp : public NonCopyable
{
public:
        StartUp() = default;
        virtual ~StartUp() = default;

        virtual bool init();
}; // class StartUp

} // namespace Module1

