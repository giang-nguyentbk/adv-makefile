#include <iostream>
#include "target1.h"
#include <memory>

namespace Target
{

std::shared_ptr<TargetIf> TargetIf::getInstance()
{
	static std::shared_ptr<TargetIf> targetIf {std::make_shared<Target1>()};
	return targetIf;
}

void Target1::runTarget()
{
	std::cout << "Starting Target 1..." << std::endl;
}

}