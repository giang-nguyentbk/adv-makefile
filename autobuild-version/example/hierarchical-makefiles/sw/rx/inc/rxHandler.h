#include "rxHandlerIf.h"

namespace Module1
{

namespace V1
{

namespace Rx
{

class RxHandler : public RxHandlerIf
{
	void rxHandlerDoSomething() override;
};

} // namespace Rx

} // namespace V1

} // namespace Module1