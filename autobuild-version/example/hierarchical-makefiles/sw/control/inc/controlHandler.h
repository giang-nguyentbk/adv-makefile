#include "controlHandlerIf.h"

namespace Module1
{

namespace V1
{

namespace Control
{

class ControlHandler : public ControlHandlerIf
{
	void controlHandlerDoSomething() override;
};

} // namespace Control

} // namespace V1

} // namespace Module1