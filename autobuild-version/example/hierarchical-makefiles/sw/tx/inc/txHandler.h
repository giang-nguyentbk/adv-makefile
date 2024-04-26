#include "txHandlerIf.h"

namespace Module1
{

namespace V1
{

namespace Tx
{

class TxHandler : public TxHandlerIf
{
	void txHandlerDoSomething() override;
};

} // namespace Tx

} // namespace V1

} // namespace Module1