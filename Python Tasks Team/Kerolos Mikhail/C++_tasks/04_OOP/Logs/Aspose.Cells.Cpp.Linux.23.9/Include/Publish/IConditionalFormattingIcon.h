#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "IconSetType.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		enum IconSetType;
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents  the custom  icon of conditional formatting rule.
			/// </summary>
	class ASPOSE_CELLS_API IConditionalFormattingIcon : public Aspose::Cells::Systems::Object
	{
		public:
			/// Gets the image data with the setting of cell.
			/// </summary>
			/// <param name="cell" >The setting of cell.</param>
			/// <returns>Returns the image data of icon.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> 		GetImageData(intrusive_ptr<Aspose::Cells::ICell> cell)=0;
			/// <summary>
			/// Gets the icon set data.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetImageData()=0;
			/// <summary>
			/// Gets and sets the icon set type.
			/// </summary>
			 virtual Aspose::Cells::IconSetType GetType()=0;
			/// <summary>
			/// Gets and sets the icon set type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::IconSetType value)=0;
			/// <summary>
			/// Gets and sets the icon's index in the icon set.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetIndex()=0;
			/// <summary>
			/// Gets and sets the icon's index in the icon set.
			/// </summary>
			 virtual void SetIndex(Aspose::Cells::Systems::Int32 value)=0;
public:
			/// <summary>
			/// Get the icon set data
			/// </summary>
			/// <param name="type" >icon's type</param>
			/// <param name="index" > icon's index</param>
			/// <returns/>
			/// 
			static  intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> 		GetIconImageData(Aspose::Cells::IconSetType type , Aspose::Cells::Systems::Int32 index);

	};
}
}
