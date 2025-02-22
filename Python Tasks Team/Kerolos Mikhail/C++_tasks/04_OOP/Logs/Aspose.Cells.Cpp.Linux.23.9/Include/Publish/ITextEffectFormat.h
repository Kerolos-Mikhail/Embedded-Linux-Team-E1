#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "MsoPresetTextEffect.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "MsoPresetTextEffectShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoPresetTextEffect;
			enum MsoPresetTextEffectShape;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Contains properties and methods that apply to WordArt objects.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// Shapes shapes = workbook.Worksheets[0].Shapes;
			/// shapes.AddTextEffect(MsoPresetTextEffect.TextEffect1, "Aspose", "Arial", 30, false, false, 0, 0, 0, 0, 100, 200);
			/// TextEffectFormat textEffectFormat = shapes[0].TextEffect;
			/// textEffectFormat.SetTextEffect(MsoPresetTextEffect.TextEffect10);
			/// workbook.Save("C:\\Book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// Dim shapes As Shapes = workbook.Worksheets(0).Shapes
			/// shapes.AddTextEffect(MsoPresetTextEffect.TextEffect1, "Aspose", "Arial", 30, false, false, 0, 0, 0, 0, 100, 200)
			/// Dim textEffectFormat As TextEffectFormat = shapes(0).TextEffect
			/// TextEffectFormat.SetTextEffect(MsoPresetTextEffect.TextEffect10)
			/// workbook.Save("C:\\Book1.xls")
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ITextEffectFormat : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Sets the preset text effect.
			/// </summary>
			/// <param name="effect" >The preset text effect.</param>
			 virtual void SetTextEffect(Aspose::Cells::Drawing::MsoPresetTextEffect effect)=0;
			/// <summary>
			/// The text in the WordArt.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// The text in the WordArt.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The name of the font used in the WordArt.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFontName()=0;
			/// <summary>
			/// The name of the font used in the WordArt.
			/// </summary>
			 virtual void SetFontName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether font is bold.
			/// </summary>
			 virtual bool GetFontBold()=0;
			/// <summary>
			/// Indicates whether font is bold.
			/// </summary>
			 virtual void SetFontBold(bool value)=0;
			/// <summary>
			/// Indicates whether font is italic.
			/// </summary>
			 virtual bool GetFontItalic()=0;
			/// <summary>
			/// Indicates whether font is italic.
			/// </summary>
			 virtual void SetFontItalic(bool value)=0;
			/// <summary>
			/// If true,characters in the specified WordArt are rotated 90 degrees relative to the WordArt's bounding shape.
			/// </summary>
			 virtual bool GetRotatedChars()=0;
			/// <summary>
			/// If true,characters in the specified WordArt are rotated 90 degrees relative to the WordArt's bounding shape.
			/// </summary>
			 virtual void SetRotatedChars(bool value)=0;
			/// <summary>
			/// The size (in points) of the font used in the WordArt.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetFontSize()=0;
			/// <summary>
			/// The size (in points) of the font used in the WordArt.
			/// </summary>
			 virtual void SetFontSize(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets and sets the preset shape type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoPresetTextEffectShape GetPresetShape()=0;
			/// <summary>
			/// Gets and sets the preset shape type.
			/// </summary>
			 virtual void SetPresetShape(Aspose::Cells::Drawing::MsoPresetTextEffectShape value)=0;

	};
}
}
}
