#ifndef _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_
#define _SYSTEM_DRAWING_DRAWING2D_GRAPHICSPATHITERATOR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Drawing2D/GraphicsPath.h"
#ifdef WIN32
#include "Aspose.Cells.Systems/Drawing/GdipFuns.h"
#include <comdef.h>
#include <gdiplus.h>
#endif
using namespace Aspose::Cells::Systems ;
using namespace Aspose::Cells::Systems::Drawing::Drawing2D ;
namespace Aspose {
namespace Cells {
namespace Systems{
namespace Drawing {
namespace Drawing2D {
	class ASPOSE_CELLS_API GraphicsPathIterator: public Object, public IDisposable
	{
	private:
		intrusive_ptr<IntegerPtr> nativeObject;
	public:
		GraphicsPathIterator(intrusive_ptr<IntegerPtr> native);
		GraphicsPathIterator(intrusive_ptr<GraphicsPath> path);

		intrusive_ptr<IntegerPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<IntegerPtr> value);
		int NextPathType(byte& pathType, int& startIndex, int& endIndex);
		int NextSubpath(int &startIndex, int& endIndex, bool& isClosed);
		void Dispose();
		void Dispose(bool disposing);
		virtual void add_ref() {
			++ref_count_;
		}
		virtual int release_ref() {
			return --ref_count_;
		}
	};
}
}
}
}
}
#endif
