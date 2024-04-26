#include "controlManagerIf.h"

namespace Module1
{

namespace V1
{

namespace Control
{

class ControlManager : public ControlManagerIf
{
	void controlManagerDoSomething() override;
};

} // namespace Control

} // namespace V1

} // namespace Module1