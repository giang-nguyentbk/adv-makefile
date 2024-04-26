#include "rxManagerIf.h"

namespace Module1
{

namespace V1
{

namespace Rx
{

class RxManager : public RxManagerIf
{
	void rxManagerDoSomething() override;
};

} // namespace Rx

} // namespace V1

} // namespace Module1