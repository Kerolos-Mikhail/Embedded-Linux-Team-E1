#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "FillPattern.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Double.h"
#include "IFill.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum FillPattern;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents pattern fill format
			/// </summary>
	class ASPOSE_CELLS_API IPatternFill : virtual public Aspose::Cells::Drawing::IFill
	{
		public:
			/// <summary>
			/// Gets or sets the fill pattern type
			/// </summary>
			 virtual Aspose::Cells::Drawing::FillPattern GetPattern()=0;
			/// <summary>
			/// Gets or sets the fill pattern type
			/// </summary>
			 virtual void SetPattern(Aspose::Cells::Drawing::FillPattern value)=0;
			/// <summary>
			/// Gets or sets the background <see cref="System.Drawing.Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackgroundColor()=0;
			/// <summary>
			/// Gets or sets the background <see cref="System.Drawing.Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual void SetBackgroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the foreground <see cref="CellsColor" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetBackgroundICellsColor()=0;
			/// <summary>
			/// Gets and sets the foreground <see cref="CellsColor" />
			///  object.
			/// </summary>
			 virtual void 		SetBackgroundICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets or sets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForegroundColor()=0;
			/// <summary>
			/// Gets or sets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual void SetForegroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the foreground <see cref="CellsColor" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetForegroundICellsColor()=0;
			/// <summary>
			/// Gets and sets the foreground <see cref="CellsColor" />
			///  object.
			/// </summary>
			 virtual void 		SetForegroundICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets or sets the transparency of foreground color.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetForeTransparency()=0;
			/// <summary>
			/// Gets or sets the transparency of foreground color.
			/// </summary>
			 virtual void SetForeTransparency(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets or sets the transparency of background color.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetBackTransparency()=0;
			/// <summary>
			/// Gets or sets the transparency of background color.
			/// </summary>
			 virtual void SetBackTransparency(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
