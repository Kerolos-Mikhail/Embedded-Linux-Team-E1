#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"
#include "TickMarkType.h"
#include "TickLabelPositionType.h"
#include "CrossType.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "DisplayUnitType.h"
#include "CategoryType.h"
#include "TimeUnit.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IArea;
			class ILine;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum TickMarkType;
			enum TickLabelPositionType;
			enum CrossType;
			class ITickLabels;
			enum DisplayUnitType;
			class IDisplayUnitLabel;
			class ITitle;
			enum CategoryType;
			enum TimeUnit;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents a chart's axis.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// 
			/// //Instantiating a Workbook object
			/// Workbook workbook = new Workbook();
			/// //Adding a new worksheet to the Excel object
			/// int sheetIndex = workbook.Worksheets.Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Worksheet worksheet = workbook.Worksheets[sheetIndex];
			/// //Adding a sample value to "A1" cell
			/// worksheet.Cells["A1"].PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet.Cells["A2"].PutValue(100);
			/// //Adding a sample value to "A3" cell
			/// worksheet.Cells["A3"].PutValue(150);
			/// //Adding a sample value to "B1" cell
			/// worksheet.Cells["B1"].PutValue(4);
			/// //Adding a sample value to "B2" cell
			/// worksheet.Cells["B2"].PutValue(20);
			/// //Adding a sample value to "B3" cell
			/// worksheet.Cells["B3"].PutValue(50);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet.Charts.Add(ChartType.Column, 5, 0, 25, 5);
			/// //Accessing the instance of the newly added chart
			/// Chart chart = worksheet.Charts[chartIndex];
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", true);
			/// //Set the max value of value axis
			/// chart.ValueAxis.MaxValue = 200;
			/// //Set the min value of value axis
			/// chart.ValueAxis.MinValue = 0;
			/// //Set the major unit
			/// chart.ValueAxis.MajorUnit = 25;
			/// //Category(X) axis crosses at the maxinum value.
			/// chart.ValueAxis.Crosses = CrossType.Maximum;
			/// //Set he number of categories or series between tick-mark labels. 
			/// chart.CategoryAxis.TickLabelSpacing = 2;
			/// //Saving the Excel file
			/// workbook.Save("C:\\book1.xls");
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiating a Workbook object
			/// Dim workbook As Workbook = New Workbook()
			/// 'Adding a new worksheet to the Excel object
			/// Dim sheetIndex As Int32 = workbook.Worksheets.Add()
			/// 'Obtaining the reference of the newly added worksheet by passing its sheet index
			/// Dim worksheet As Worksheet = workbook.Worksheets(sheetIndex)
			/// 'Adding a sample value to "A1" cell
			/// worksheet.Cells("A1").PutValue(50)
			/// 'Adding a sample value to "A2" cell
			/// worksheet.Cells("A2").PutValue(100)
			/// 'Adding a sample value to "A3" cell
			/// worksheet.Cells("A3").PutValue(150)
			/// 'Adding a sample value to "B1" cell
			/// worksheet.Cells("B1").PutValue(4)
			/// 'Adding a sample value to "B2" cell
			/// worksheet.Cells("B2").PutValue(20)
			/// 'Adding a sample value to "B3" cell
			/// worksheet.Cells("B3").PutValue(50)
			/// 'Adding a chart to the worksheet
			/// Dim chartIndex As Int32 = worksheet.Charts.Add(ChartType.Column, 5, 0, 25, 5)
			/// 'Accessing the instance of the newly added chart
			/// Dim chart As Chart = worksheet.Charts(chartIndex)
			/// 'Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart.NSeries.Add("A1:B3", True)
			/// 'Set the max value of value axis
			/// chart.ValueAxis.MaxValue = 200
			/// 'Set the min value of value axis
			/// chart.ValueAxis.MinValue = 0
			/// 'Set the major unit
			/// chart.ValueAxis.MajorUnit = 25
			/// 'Category(X) axis crosses at the maxinum value.
			/// chart.ValueAxis.Crosses = CrossType.Maximum
			/// 'Set he number of categories or series between tick-mark labels. 
			/// chart.CategoryAxis.TickLabelSpacing = 2
			/// 'Saving the Excel file
			/// workbook.Save("C:\book1.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IAxis : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the <see cref="Area" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Indicates whether the min value is automatically assigned.
			/// </summary>
			 virtual bool IsAutomaticMinValue()=0;
			/// <summary>
			/// Indicates whether the min value is automatically assigned.
			/// </summary>
			 virtual void SetAutomaticMinValue(bool value)=0;
			/// <summary>
			/// Represents the minimum value on the value axis.
			/// </summary>
			/// <remarks>
			/// The minValue type only can be double or DateTime
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetMinValue()=0;
			/// <summary>
			/// Represents the minimum value on the value axis.
			/// </summary>
			/// <remarks>
			/// The minValue type only can be double or DateTime
			/// </remarks>
			 virtual void SetMinValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Indicates whether the max value is automatically assigned.
			/// </summary>
			 virtual bool IsAutomaticMaxValue()=0;
			/// <summary>
			/// Indicates whether the max value is automatically assigned.
			/// </summary>
			 virtual void SetAutomaticMaxValue(bool value)=0;
			/// <summary>
			/// Represents the maximum value on the value axis.
			/// </summary>
			/// <remarks>
			/// The maxValue type only can be double or DateTime
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetMaxValue()=0;
			/// <summary>
			/// Represents the maximum value on the value axis.
			/// </summary>
			/// <remarks>
			/// The maxValue type only can be double or DateTime
			/// </remarks>
			 virtual void SetMaxValue(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			/// <summary>
			/// Indicates whether the major unit of the axis is automatically assigned.
			/// </summary>
			 virtual bool IsAutomaticMajorUnit()=0;
			/// <summary>
			/// Indicates whether the major unit of the axis is automatically assigned.
			/// </summary>
			 virtual void SetAutomaticMajorUnit(bool value)=0;
			/// <summary>
			/// Represents the major units for the axis.
			/// </summary>
			/// <remarks> The major units must be greater than zero.</remarks>
			 virtual Aspose::Cells::Systems::Double GetMajorUnit()=0;
			/// <summary>
			/// Represents the major units for the axis.
			/// </summary>
			/// <remarks> The major units must be greater than zero.</remarks>
			 virtual void SetMajorUnit(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates whether the minor unit of the axis is automatically assigned.
			/// </summary>
			 virtual bool IsAutomaticMinorUnit()=0;
			/// <summary>
			/// Indicates whether the minor unit of the axis is automatically assigned.
			/// </summary>
			 virtual void SetAutomaticMinorUnit(bool value)=0;
			/// <summary>
			/// Represents the minor units for the axis.
			/// </summary>
			/// <remarks> The minor units must be greater than zero.</remarks>
			 virtual Aspose::Cells::Systems::Double GetMinorUnit()=0;
			/// <summary>
			/// Represents the minor units for the axis.
			/// </summary>
			/// <remarks> The minor units must be greater than zero.</remarks>
			 virtual void SetMinorUnit(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the appearance of an Axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetAxisILine()=0;
			/// <summary>
			/// Represents the type of major tick mark for the specified axis.
			/// </summary>
			 virtual Aspose::Cells::Charts::TickMarkType GetMajorTickMark()=0;
			/// <summary>
			/// Represents the type of major tick mark for the specified axis.
			/// </summary>
			 virtual void SetMajorTickMark(Aspose::Cells::Charts::TickMarkType value)=0;
			/// <summary>
			/// Represents the type of minor tick mark for the specified axis.
			/// </summary>
			 virtual Aspose::Cells::Charts::TickMarkType GetMinorTickMark()=0;
			/// <summary>
			/// Represents the type of minor tick mark for the specified axis.
			/// </summary>
			 virtual void SetMinorTickMark(Aspose::Cells::Charts::TickMarkType value)=0;
			/// <summary>
			/// Represents the position of tick-mark labels on the specified axis.
			/// </summary>
			 virtual Aspose::Cells::Charts::TickLabelPositionType GetTickLabelPosition()=0;
			/// <summary>
			/// Represents the position of tick-mark labels on the specified axis.
			/// </summary>
			 virtual void SetTickLabelPosition(Aspose::Cells::Charts::TickLabelPositionType value)=0;
			/// <summary>
			/// Represents the point on the value axis where the category axis crosses it.
			/// </summary>
			/// <remarks>The number should be a integer when it applies to category axis.
			/// And the value must be between 1 and 31999.</remarks>
			 virtual Aspose::Cells::Systems::Double GetCrossAt()=0;
			/// <summary>
			/// Represents the point on the value axis where the category axis crosses it.
			/// </summary>
			/// <remarks>The number should be a integer when it applies to category axis.
			/// And the value must be between 1 and 31999.</remarks>
			 virtual void SetCrossAt(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the <see cref="CrossType" />
			///  on the specified axis where the other axis crosses. 
			/// </summary>
			 virtual Aspose::Cells::Charts::CrossType GetCrossType()=0;
			/// <summary>
			/// Represents the <see cref="CrossType" />
			///  on the specified axis where the other axis crosses. 
			/// </summary>
			 virtual void SetCrossType(Aspose::Cells::Charts::CrossType value)=0;
			/// <summary>
			/// Represents the logarithmic base. Default value is 10.Only applies for Excel2007.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetLogBase()=0;
			/// <summary>
			/// Represents the logarithmic base. Default value is 10.Only applies for Excel2007.
			/// </summary>
			 virtual void SetLogBase(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents if the value axis scale type is logarithmic or not.
			/// </summary>
			 virtual bool IsLogarithmic()=0;
			/// <summary>
			/// Represents if the value axis scale type is logarithmic or not.
			/// </summary>
			 virtual void SetLogarithmic(bool value)=0;
			/// <summary>
			/// Represents if Microsoft Excel plots data points from last to first.
			/// </summary>
			 virtual bool IsPlotOrderReversed()=0;
			/// <summary>
			/// Represents if Microsoft Excel plots data points from last to first.
			/// </summary>
			 virtual void SetPlotOrderReversed(bool value)=0;
			/// <summary>
			/// Represents if the value axis crosses the category axis between categories.
			/// </summary>
			/// <remarks>This property applies only to category axes, and it doesn't apply to 3-D charts.
			/// </remarks>
			 virtual bool GetAxisBetweenCategories()=0;
			/// <summary>
			/// Represents if the value axis crosses the category axis between categories.
			/// </summary>
			/// <remarks>This property applies only to category axes, and it doesn't apply to 3-D charts.
			/// </remarks>
			 virtual void SetAxisBetweenCategories(bool value)=0;
			/// <summary>
			/// Returns a <see cref="TickLabels" />
			///  object that represents the tick-mark labels for the specified axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITickLabels> 		GetITickLabels()=0;
			/// <summary>
			/// Represents the number of categories or series between tick-mark labels. Applies only to category and series axes.
			/// </summary>
			/// <remarks>The number must be between 1 and 31999.</remarks>
			 virtual Aspose::Cells::Systems::Int32 GetTickLabelSpacing()=0;
			/// <summary>
			/// Represents the number of categories or series between tick-mark labels. Applies only to category and series axes.
			/// </summary>
			/// <remarks>The number must be between 1 and 31999.</remarks>
			 virtual void SetTickLabelSpacing(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Indicates whether ticklabel spacing is automatic
			/// </summary>
			 virtual bool IsAutoTickLabelSpacing()=0;
			/// <summary>
			/// Indicates whether ticklabel spacing is automatic
			/// </summary>
			 virtual void SetAutoTickLabelSpacing(bool value)=0;
			/// <summary>
			/// Returns or sets the number of categories or series between tick marks. Applies only to category and series axes. 
			/// </summary>
			/// <remarks>The number must be between 1 and 31999.</remarks>
			 virtual Aspose::Cells::Systems::Int32 GetTickMarkSpacing()=0;
			/// <summary>
			/// Returns or sets the number of categories or series between tick marks. Applies only to category and series axes. 
			/// </summary>
			/// <remarks>The number must be between 1 and 31999.</remarks>
			 virtual void SetTickMarkSpacing(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the unit label for the specified axis. 
			/// </summary>
			 virtual Aspose::Cells::Charts::DisplayUnitType GetDisplayUnit()=0;
			/// <summary>
			/// Represents the unit label for the specified axis. 
			/// </summary>
			 virtual void SetDisplayUnit(Aspose::Cells::Charts::DisplayUnitType value)=0;
			/// <summary>
			/// Specifies a custom value for the display unit.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCustUnit()=0;
			/// <summary>
			/// Specifies a custom value for the display unit.
			/// </summary>
			 virtual void SetCustUnit(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Specifies a custom value for the display unit.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCustomUnit()=0;
			/// <summary>
			/// Specifies a custom value for the display unit.
			/// </summary>
			 virtual void SetCustomUnit(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents a unit label on an axis in the specified chart. 
			/// Unit labels are useful for charting large values for example, in the millions or billions. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDisplayUnitLabel> 		GetIDisplayUnitLabel()=0;
			/// <summary>
			/// Represents if the display unit label is shown on the specified axis. 
			/// </summary>
			/// <remarks>The default value is True.</remarks>
			 virtual bool IsDisplayUnitLabelShown()=0;
			/// <summary>
			/// Represents if the display unit label is shown on the specified axis. 
			/// </summary>
			/// <remarks>The default value is True.</remarks>
			 virtual void SetDisplayUnitLabelShown(bool value)=0;
			/// <summary>
			/// Gets the axis' title.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITitle> 		GetITitle()=0;
			/// <summary>
			/// Represents the category axis type.
			/// </summary>
			 virtual Aspose::Cells::Charts::CategoryType GetCategoryType()=0;
			/// <summary>
			/// Represents the category axis type.
			/// </summary>
			 virtual void SetCategoryType(Aspose::Cells::Charts::CategoryType value)=0;
			/// <summary>
			/// Represents the base unit scale for the category axis.
			/// </summary>
			/// <remarks>Setting this property only takes effect when the CategoryType property is set to TimeScale.</remarks>
			 virtual Aspose::Cells::Charts::TimeUnit GetBaseUnitScale()=0;
			/// <summary>
			/// Represents the base unit scale for the category axis.
			/// </summary>
			/// <remarks>Setting this property only takes effect when the CategoryType property is set to TimeScale.</remarks>
			 virtual void SetBaseUnitScale(Aspose::Cells::Charts::TimeUnit value)=0;
			/// <summary>
			/// Represents the major unit scale for the category axis.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale;
			/// chart.CategoryAxis.MajorUnitScale = TimeUnit.Months;
			/// chart.CategoryAxis.MajorUnit = 2;
			/// 
			/// [Visual Basic]
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale
			/// chart.CategoryAxis.MajorUnitScale = TimeUnit.Months
			/// chart.CategoryAxis.MajorUnit = 2
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Charts::TimeUnit GetMajorUnitScale()=0;
			/// <summary>
			/// Represents the major unit scale for the category axis.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale;
			/// chart.CategoryAxis.MajorUnitScale = TimeUnit.Months;
			/// chart.CategoryAxis.MajorUnit = 2;
			/// 
			/// [Visual Basic]
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale
			/// chart.CategoryAxis.MajorUnitScale = TimeUnit.Months
			/// chart.CategoryAxis.MajorUnit = 2
			/// </code>
			/// </example>
			 virtual void SetMajorUnitScale(Aspose::Cells::Charts::TimeUnit value)=0;
			/// <summary>
			/// Represents the major unit scale for the category axis.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale;
			/// chart.CategoryAxis.MinorUnitScale = TimeUnit.Months;
			/// chart.CategoryAxis.MinorUnit = 2;
			/// 
			/// [Visual Basic]
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale
			/// chart.CategoryAxis.MinorUnitScale = TimeUnit.Months
			/// chart.CategoryAxis.MinorUnit = 2
			/// </code>
			/// </example>
			 virtual Aspose::Cells::Charts::TimeUnit GetMinorUnitScale()=0;
			/// <summary>
			/// Represents the major unit scale for the category axis.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale;
			/// chart.CategoryAxis.MinorUnitScale = TimeUnit.Months;
			/// chart.CategoryAxis.MinorUnit = 2;
			/// 
			/// [Visual Basic]
			/// chart.CategoryAxis.CategoryType = CategoryType.TimeScale
			/// chart.CategoryAxis.MinorUnitScale = TimeUnit.Months
			/// chart.CategoryAxis.MinorUnit = 2
			/// </code>
			/// </example>
			 virtual void SetMinorUnitScale(Aspose::Cells::Charts::TimeUnit value)=0;
			/// <summary>
			/// Represents if the axis is visible.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Represents if the axis is visible.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Represents major gridlines on a chart axis.
			/// </summary>
			/// <example><code>
			/// [C#]
			/// 
			/// chart.ValueAxis.MajorGridLines.IsVisible = false;
			/// chart.CategoryAxis.MajorGridLines.IsVisible = true;
			/// 
			/// [Visual Basic]
			/// chart.ValueAxis.MajorGridLines.IsVisible = false
			/// chart.CategoryAxis.MajorGridLines.IsVisible = true
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetMajorGridILines()=0;
			/// <summary>
			/// Represents minor gridlines on a chart axis.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetMinorGridILines()=0;
			/// <summary>
			/// Indicates whether the labels shall be shown as multi level.
			/// </summary>
			/// <remarks>
			/// Only valid for category axis.
			/// </remarks>
			 virtual bool HasMultiLevelLabels()=0;
			/// <summary>
			/// Indicates whether the labels shall be shown as multi level.
			/// </summary>
			/// <remarks>
			/// Only valid for category axis.
			/// </remarks>
			 virtual void SetHasMultiLevelLabels(bool value)=0;
			/// <summary>
			/// Gets the labels of the axis after call Chart.Calculate() method.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> GetAxisLabels()=0;

	};
}
}
}
