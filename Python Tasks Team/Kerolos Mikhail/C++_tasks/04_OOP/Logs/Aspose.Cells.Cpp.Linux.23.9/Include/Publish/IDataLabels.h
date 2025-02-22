#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ChartTextDirectionType.h"
#include "Aspose.Cells.Systems/String.h"
#include "BackgroundMode.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "DataLablesSeparatorType.h"
#include "DataLabelsSeparatorType.h"
#include "LabelPositionType.h"
#include "DataLabelShapeType.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
			enum DataLabelShapeType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ChartTextDirectionType;
			enum BackgroundMode;
			enum DataLablesSeparatorType;
			enum DataLabelsSeparatorType;
			enum LabelPositionType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Encapsulates a collection of all the DataLabel objects for the specified Series.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C#]
			///  
			///  //Set the DataLabels in the chart
			///  DataLabels datalabels;
			///  for (int i = 0; i  chart.NSeries.Count; i++)
			///  {
			///      datalabels = chart.NSeries[i].DataLabels;
			///      //Set the position of DataLabels
			///      datalabels.Position = LabelPositionType.InsideBase;
			///      //Show the category name in the DataLabels
			///      datalabels.ShowCategoryName = true;
			///      //Show the value in the DataLabels
			///      datalabels.ShowValue = true;
			///      //Not show the percentage in the DataLabels
			///      datalabels.ShowPercentage = false;
			///      //Not show the legend key.
			///      datalabels.ShowLegendKey = false;
			///  }
			///  
			///  [Visual Basic]
			/// 
			///  'Set the DataLabels in the chart
			///  Dim datalabels As DataLabels
			///  Dim i As Integer
			///  For i = 0 To chart.NSeries.Count - 1 Step 1
			///      datalabels = chart.NSeries(i).DataLabels
			///      'Set the position of DataLabels
			///      datalabels.Position = LabelPositionType.InsideBase
			///      'Show the category name in the DataLabels
			///      datalabels.ShowCategoryName= True
			///      'Show the value in the DataLabels
			///      datalabels.ShowValue = True
			///      'Not show the percentage in the DataLabels
			///      datalabels.ShowPercentage = False
			///      'Not show the legend key.
			///      datalabels.ShowLegendKey = False
			///  Next
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IDataLabels : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Gets the <see cref="Line" >border</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the <see cref="Area" >area</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual bool IsAutoText()=0;
			/// <summary>
			/// Indicates the text is auto generated.
			/// </summary>
			  virtual void SetAutoText(bool value)=0;
			/// <summary>
			/// Gets and sets the direction of text.
			/// </summary>
			  virtual Aspose::Cells::Charts::ChartTextDirectionType GetDirectionType()=0;
			/// <summary>
			/// Gets and sets the direction of text.
			/// </summary>
			  virtual void SetDirectionType(Aspose::Cells::Charts::ChartTextDirectionType value)=0;
			/// <summary>
			/// Gets or sets the text of data label.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Gets or sets the text of data label.
			/// </summary>
			  virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets or sets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual bool IsTextWrapped()=0;
			/// <summary>
			/// Gets or sets a value indicating whether the text is wrapped.
			/// </summary>
			  virtual void SetTextWrapped(bool value)=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Gets and sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual bool GetShowValue()=0;
			/// <summary>
			/// Represents a specified chart's data label values display behavior. True displays the values. False to hide. 
			/// </summary>
			 virtual void SetShowValue(bool value)=0;
			/// <summary>
			/// Indicates whether showing cell range as the data labels. 
			/// </summary>
			 virtual bool GetShowCellRange()=0;
			/// <summary>
			/// Indicates whether showing cell range as the data labels. 
			/// </summary>
			 virtual void SetShowCellRange(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool GetShowPercentage()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetShowPercentage(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual bool GetShowBubbleSize()=0;
			/// <summary>
			/// Represents a specified chart's data label percentage value display behavior. True displays the percentage value. False to hide. 
			/// </summary>
			 virtual void SetShowBubbleSize(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual bool GetShowCategoryName()=0;
			/// <summary>
			/// Represents a specified chart's data label category name display behavior.True to display the category name for the data labels on a chart. False to hide.
			/// </summary>
			 virtual void SetShowCategoryName(bool value)=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual bool GetShowSeriesName()=0;
			/// <summary>
			/// Returns or sets a Boolean to indicate the series name display behavior for the data labels on a chart.
			/// True to show the series name. False to hide.
			/// </summary>
			 virtual void SetShowSeriesName(bool value)=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual bool GetShowLegendKey()=0;
			/// <summary>
			/// Represents a specified chart's data label legend key display behavior.
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual void SetShowLegendKey(bool value)=0;
			/// <summary>
			/// Represents the format string for the DataLabels object. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> Get_NumberFormat()=0;
			/// <summary>
			/// Represents the format string for the DataLabels object. 
			/// </summary>
			 virtual void SetNumberFormat(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the built-in number format.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetNumber()=0;
			/// <summary>
			/// Gets and sets the built-in number format.
			/// </summary>
			 virtual void SetNumber(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual bool GetNumberFormatLinked()=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual void SetNumberFormatLinked(bool value)=0;
			/// <summary>
			/// Gets the font of the DataLabels;
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Gets or sets the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use DataLabels.SeparatorType property.
			/// This property will be removed 12 months later since September 2020. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual Aspose::Cells::Charts::DataLablesSeparatorType GetSeparator()=0;
			/// <summary>
			/// Gets or sets the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use DataLabels.SeparatorType property.
			/// This property will be removed 12 months later since September 2020. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetSeparator(Aspose::Cells::Charts::DataLablesSeparatorType value)=0;
			/// <summary>
			/// Gets or sets the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// To set custom separator, please set  the property <see cref="DataLabels.SeparatorType" />
			///  as <see cref="DataLabelsSeparatorType.Custom" />
			///  and then specify the expected value for <see cref="DataLabels.SeparatorValue" />
			/// .
			/// </remarks>
			 virtual Aspose::Cells::Charts::DataLabelsSeparatorType GetSeparatorType()=0;
			/// <summary>
			/// Gets or sets the separator type used for the data labels on a chart.
			/// </summary>
			/// <remarks>
			/// To set custom separator, please set  the property <see cref="DataLabels.SeparatorType" />
			///  as <see cref="DataLabelsSeparatorType.Custom" />
			///  and then specify the expected value for <see cref="DataLabels.SeparatorValue" />
			/// .
			/// </remarks>
			 virtual void SetSeparatorType(Aspose::Cells::Charts::DataLabelsSeparatorType value)=0;
			/// <summary>
			/// Gets or sets the separator value used for the data labels on a chart.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSeparatorValue()=0;
			/// <summary>
			/// Gets or sets the separator value used for the data labels on a chart.
			/// </summary>
			 virtual void SetSeparatorValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the position of the data label.
			/// </summary>
			 virtual Aspose::Cells::Charts::LabelPositionType GetPosition()=0;
			/// <summary>
			/// Represents the position of the data label.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::Charts::LabelPositionType value)=0;
			/// <summary>
			/// Indicates whether the datalabels display never overlap. (For Pie chart)
			/// </summary>
			 virtual bool IsNeverOverlap()=0;
			/// <summary>
			/// Indicates whether the datalabels display never overlap. (For Pie chart)
			/// </summary>
			 virtual void SetNeverOverlap(bool value)=0;
			/// <summary>
			/// Gets or sets  shape type of data label.
			/// </summary>
			 virtual Aspose::Cells::Drawing::DataLabelShapeType GetShapeType()=0;
			/// <summary>
			/// Gets or sets  shape type of data label.
			/// </summary>
			 virtual void SetShapeType(Aspose::Cells::Drawing::DataLabelShapeType value)=0;

	};
}
}
}
