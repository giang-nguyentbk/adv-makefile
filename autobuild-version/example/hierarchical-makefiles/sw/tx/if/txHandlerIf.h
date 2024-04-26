#include <iostream>

namespace Module1
{

namespace V1
{

namespace Tx
{

class TxHandlerIf
{
	virtual void txHandlerDoSomething() = 0;
};

} // namespace Tx

} // namespace V1

} // namespace Module1