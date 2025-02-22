#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "VbaModuleType.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IWorksheet;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Vba {
			enum VbaModuleType;
			class IVbaModule;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents the list of <see cref="VbaModule" />
			/// </summary>
	class ASPOSE_CELLS_API IVbaModuleCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// 
			/// </summary>
			/// <param name="name" />
			/// 
			/// <param name="data" />
			/// 
			 virtual void AddDesignerStorage(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> data)=0;
			/// <summary>
			/// Represents the data of Designer. 
			/// </summary>
			/// <remarks>
			/// We do not support to parse them. Just only for copying.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetDesignerStorage(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Adds module for a worksheet.
			/// </summary>
			/// <param name="sheet" >The worksheet</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 		AddIWorksheet(intrusive_ptr<Aspose::Cells::IWorksheet> sheet)=0;
			/// <summary>
			/// Adds module.
			/// </summary>
			/// <param name="type" >The type of module.</param>
			/// <param name="name" >The name of module.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Vba::VbaModuleType type , intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Gets <see cref="VbaModule" />
			///  in the list by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaModule> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Removes module for a worksheet.
			/// </summary>
			/// <param name="sheet" >The worksheet</param>
			/// <returns/>
			/// 
			 virtual void 		RemoveIWorksheet(intrusive_ptr<Aspose::Cells::IWorksheet> sheet)=0;
			/// <summary>
			/// Remove the module by the name
			/// </summary>
			/// <param name="name" />
			/// 
			 virtual void Remove(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Gets <see cref="VbaModule" />
			///  in the list by the name.
			/// </summary>
			/// <param name="name" >The name of module.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaModule> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;

	};
}
}
}
