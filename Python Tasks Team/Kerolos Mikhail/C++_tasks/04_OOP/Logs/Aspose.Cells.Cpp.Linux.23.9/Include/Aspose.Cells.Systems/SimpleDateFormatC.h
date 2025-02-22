#ifndef _SYSTEM_SIMPLEDATEFORMATC_H_
#define _SYSTEM_SIMPLEDATEFORMATC_H_

#include "Aspose.Cells.Systems/Object.h"
#include "unicode/smpdtfmt.h"
#ifdef WIN32
using namespace icucells;
using namespace icu_56;
#else
using namespace icu;
using namespace icu_67;
#endif
namespace Aspose {
	namespace Cells {
		namespace Systems {
			class SimpleDateFormatC : public Object
			{
			public:
				SimpleDateFormatC(SimpleDateFormat* val);
				virtual ~SimpleDateFormatC();

				SimpleDateFormat* _sdf;
			};

			typedef intrusive_ptr<SimpleDateFormatC>	SimpleDateFormatCPtr;
		}
	}
}
#endif//_SYSTEM_SIMPLEDATEFORMATC_H_







