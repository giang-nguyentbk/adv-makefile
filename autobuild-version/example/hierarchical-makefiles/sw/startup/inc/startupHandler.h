#include "startupHandlerIf.h"

namespace Module1
{

namespace V1
{

namespace Startup
{

class StartupHandler : public StartupHandlerIf
{
	void startupHandlerDoSomething() override;
};

} // namespace Startup

} // namespace V1

} // namespace Module1