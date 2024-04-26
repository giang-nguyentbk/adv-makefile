#include <iostream>
#include <memory>

namespace Target
{

class TargetIf
{
public:
	static std::shared_ptr<TargetIf> getInstance();
	virtual void runTarget() = 0;
};

}