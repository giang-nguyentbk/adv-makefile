#include <iostream>
#include "target2.h"
#include <memory>

namespace Target
{

std::shared_ptr<TargetIf> TargetIf::getInstance()
{
	static std::shared_ptr<TargetIf> targetIf {std::make_shared<Target2>()};
	return targetIf;
}

void Target2::runTarget()
{
	std::cout << "Starting Target 2..." << std::endl;
}

}