#include <iostream>
#include "targetIf.h"
#include <memory>

using namespace Target;

int main()
{
	std::cout << "Main function is starting..." << std::endl;
	
	std::shared_ptr<TargetIf> targetIf = TargetIf::getInstance();
	targetIf->runTarget();

	return 0;
}