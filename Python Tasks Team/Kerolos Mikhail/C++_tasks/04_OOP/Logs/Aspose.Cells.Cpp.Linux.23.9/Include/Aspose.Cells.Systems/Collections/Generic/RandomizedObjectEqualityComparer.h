#ifndef _SYSTEM_COLLECTIONS_GENERIC_RANDOMIZEDOBJECTEQUALITYCOMPARER_H_
#define _SYSTEM_COLLECTIONS_GENERIC_RANDOMIZEDOBJECTEQUALITYCOMPARER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEqualityComparer.h"
#include "Aspose.Cells.Systems/IWellKnownStringEqualityComparer.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {
				namespace Generic {

					class ASPOSE_CELLS_API RandomizedObjectEqualityComparer : public IEqualityComparer, public IWellKnownStringEqualityComparer
					{
					private:
						int64_t _entropy;
					public:
						RandomizedObjectEqualityComparer()
						{
							this->_entropy = HashHelpers::GetEntropy();
						}


					};
				}
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_GENERIC_RANDOMIZEDOBJECTEQUALITYCOMPARER_H_