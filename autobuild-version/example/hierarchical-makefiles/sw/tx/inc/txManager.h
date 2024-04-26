#include "txManagerIf.h"

namespace Module1
{

namespace V1
{

namespace Tx
{

class TxManager : public TxManagerIf
{
	void txManagerDoSomething() override;
};

} // namespace Tx

} // namespace V1

} // namespace Module1