#include "startupManagerIf.h"

namespace Module1
{

namespace V1
{

namespace Startup
{

class StartupManager : public StartupManagerIf
{
	void startupManagerDoSomething() override;
};

} // namespace Startup

} // namespace V1

} // namespace Module1