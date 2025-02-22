#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "LegendPositionType.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum LegendPositionType;
			class ILegendEntryCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the chart legend.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// //Set Legend's width and height
			/// Legend legend = chart.Legend;
			/// 
			/// //Legend is at right side of chart by default.
			/// //If the legend is at left or right side of the chart, setting Legend.X property will not take effect.
			/// //If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.
			/// legend.Y = 1500;
			/// legend.Width = 50;
			/// legend.Height = 50; 
			/// //Set legend's position
			/// legend.Position = LegendPositionType.Left;
			/// 
			/// [Visual Basic]
			/// 
			/// 'Set Legend's width and height
			/// Dim legend as Legend = chart.Legend
			/// 
			/// 'Legend is at right side of chart by default.
			/// 'If the legend is at left or right side of the chart, setting Legend.X property will not take effect.
			/// 'If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.
			/// legend.Y = 1500
			/// legend.Width = 50
			/// legend.Height = 50
			/// 'Set legend's position
			/// legend.Position = LegendPositionType.Left
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API ILegend : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Gets or sets the legend position type.
			/// </summary>
			/// <remarks><br>Default position is right.</br>
			/// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
			/// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
			/// </remarks>
			 virtual Aspose::Cells::Charts::LegendPositionType GetPosition()=0;
			/// <summary>
			/// Gets or sets the legend position type.
			/// </summary>
			/// <remarks><br>Default position is right.</br>
			/// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
			/// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
			/// </remarks>
			 virtual void SetPosition(Aspose::Cells::Charts::LegendPositionType value)=0;
			/// <summary>
			/// Gets a collection of all the LegendEntry objects in the specified chart legend.
			/// Setting the legend entries of the surface chart is not supported.
			/// So it will return null if the chart type is surface chart type.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntryCollection> 		GetILegendEntries()=0;
			/// <summary>
			/// Gets the labels of the legend entries after call Chart.Calculate() method.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> GetLegendEntriesLabels()=0;
			/// <summary>
			/// Gets or sets whether other chart elements shall be allowed to overlap this chart element.
			/// </summary>
			 virtual bool IsOverLay()=0;
			/// <summary>
			/// Gets or sets whether other chart elements shall be allowed to overlap this chart element.
			/// </summary>
			 virtual void SetOverLay(bool value)=0;

	};
}
}
}
