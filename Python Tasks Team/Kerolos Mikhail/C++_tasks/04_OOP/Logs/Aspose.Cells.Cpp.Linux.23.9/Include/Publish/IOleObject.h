#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"
#include "FileFormatType.h"
#include "ImageType.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		enum FileFormatType;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum ImageType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents an OleObject in a worksheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C#]
			/// //Instantiate a new Workbook.
			/// Workbook workbook = new Workbook();
			/// //Get the first worksheet. 
			/// Worksheet sheet = workbook.Worksheets[0];
			/// //Define a string variable to store the image path.
			/// string ImageUrl = @"C:\school.jpg";
			/// //Get the picture into the streams.
			/// FileStream fs = File.OpenRead(ImageUrl);
			/// //Define a byte array.
			/// byte[] imageData = new Byte[fs.Length];
			/// //Obtain the picture into the array of bytes from streams.
			/// fs.Read(imageData, 0, imageData.Length);
			/// //Close the stream.
			/// fs.Close();
			/// //Get an excel file path in a variable.
			/// string path = @"C:\Book1.xls";
			/// //Get the file into the streams.
			/// fs = File.OpenRead(path);
			/// //Define an array of bytes. 
			/// byte[] objectData = new Byte[fs.Length];
			/// //Store the file from streams.
			/// fs.Read(objectData, 0, objectData.Length);
			/// //Close the stream.
			/// fs.Close();
			/// //Add an Ole object into the worksheet with the image
			/// //shown in MS Excel.
			/// sheet.OleObjects.Add(14, 3, 200, 220, imageData);
			/// //Set embedded ole object data.     
			/// sheet.OleObjects[0].ObjectData = objectData;
			/// //Save the excel file
			/// workbook.Save(@"C:\oleobjects.xls");
			/// 
			/// 
			/// [Visual Basic]
			/// 
			/// 'Instantiate a new Workbook.
			/// Dim workbook As Workbook = New Workbook()
			/// 'Get the first worksheet. 
			/// Dim sheet As Worksheet = workbook.Worksheets(0)
			/// 'Define a string variable to store the image path.
			/// Dim ImageUrl As String = @"C:\school.jpg"
			/// 'Get the picture into the streams.
			/// Dim fs As FileStream = File.OpenRead(ImageUrl)
			/// 'Define a byte array.
			/// Dim imageData(fs.Length) As Byte
			/// 'Obtain the picture into the array of bytes from streams.
			/// fs.Read(imageData, 0, imageData.Length)
			/// 'Close the stream.
			/// fs.Close()
			/// 'Get an excel file path in a variable.
			/// Dim path As String = @"C:\Book1.xls"
			/// 'Get the file into the streams.
			/// fs = File.OpenRead(path)
			/// 'Define an array of bytes. 
			/// Dim objectData(fs.Length) As Byte
			/// 'Store the file from streams.
			/// fs.Read(objectData, 0, objectData.Length)
			/// 'Close the stream.
			/// fs.Close()
			/// 'Add an Ole object into the worksheet with the image
			/// 'shown in MS Excel.
			/// sheet.OleObjects.Add(14, 3, 200, 220, imageData)
			/// 'Set embedded ole object data.     
			/// sheet.OleObjects(0).ObjectData = objectData
			/// 'Save the excel file
			/// workbook.Save("C:\oleobjects.xls")
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IOleObject : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Sets embedded object data. 
			/// </summary>
			/// <param name="linkToFile" >Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
			/// <param name="objectData" >The embedded object data. </param>
			/// <param name="sourceFileName" >The file name.</param>
			/// <param name="displayAsIcon" >Indicates whether diplaying object as an icon.
			/// If true, the orginal image data will be covered by icon.
			/// </param>
			/// <param name="label" >The icon label. Only works when displayAsIcon as true.</param>
			 virtual void SetEmbeddedObject(bool linkToFile , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> objectData , intrusive_ptr<Aspose::Cells::Systems::String> sourceFileName , bool displayAsIcon , intrusive_ptr<Aspose::Cells::Systems::String> label)=0;
			/// <summary>
			/// Sets embedded object data. 
			/// </summary>
			/// <param name="linkToFile" >Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
			/// <param name="objectData" >The embedded object data. </param>
			/// <param name="sourceFileName" >The file name.</param>
			/// <param name="displayAsIcon" >Indicates whether diplaying object as an icon.
			/// If true, the orginal image data will be covered by icon.
			/// </param>
			/// <param name="label" >The icon label. Only works when displayAsIcon as true.</param>
			/// <param name="updateIcon" >Indicates whether automatically updating icon.</param>
			/// <remarks>
			/// As Aspose can update embedd all file icons, so it's better that you can add correct icon with <paramref name="updateIcon" />
			///  as false.
			/// 
			/// </remarks>
			 virtual void SetEmbeddedObject(bool linkToFile , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> objectData , intrusive_ptr<Aspose::Cells::Systems::String> sourceFileName , bool displayAsIcon , intrusive_ptr<Aspose::Cells::Systems::String> label , bool updateIcon)=0;
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual bool IsAutoSize()=0;
			/// <summary>
			/// True indicates that the size of the ole object will be auto changed as the size of snapshop of the embedded content
			/// when the ole object is activated.
			/// </summary>
			 virtual void SetAutoSize(bool value)=0;
			/// <summary>
			/// Returns true if the OleObject links to the file.
			/// </summary>
			 virtual bool IsLink()=0;
			/// <summary>
			/// Returns true if the OleObject links to the file.
			/// </summary>
			 virtual void SetLink(bool value)=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual bool GetDisplayAsIcon()=0;
			/// <summary>
			/// True if the specified object is displayed as an icon 
			/// and the image will not be auto changed.
			/// </summary>
			 virtual void SetDisplayAsIcon(bool value)=0;
			/// <summary>
			/// Represents image of ole object as byte array.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetImageData()=0;
			/// <summary>
			/// Represents image of ole object as byte array.
			/// </summary>
			 virtual void SetImageData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Represents embedded ole object data as byte array.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetObjectData()=0;
			/// <summary>
			/// Represents embedded ole object data as byte array.
			/// </summary>
			 virtual void SetObjectData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Gets the full embedded ole object binary data in the template file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetFullObjectBin()=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetImageSourceFullName()=0;
			/// <summary>
			/// Gets or sets the path and name of the source file for the linked image. 
			/// </summary>
			/// <remarks>
			/// The default value is an empty string.
			/// If SourceFullName is not an empty string, the image is linked.
			/// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
			/// </remarks>
			 virtual void SetImageSourceFullName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Sets the ole native source full file name with path.
			/// </summary>
			/// <param name="sourceFullName" >the ole native source full file name</param>
			 virtual void SetNativeSourceFullName(intrusive_ptr<Aspose::Cells::Systems::String> sourceFullName)=0;
			/// <summary>
			/// Gets or sets the ProgID of the OLE object. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetProgID()=0;
			/// <summary>
			/// Gets or sets the ProgID of the OLE object. 
			/// </summary>
			 virtual void SetProgID(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			 virtual Aspose::Cells::FileFormatType GetFileFormatType()=0;
			/// <summary>
			/// Gets and sets the file type of the embedded ole object data
			/// </summary>
			 virtual void SetFileFormatType(Aspose::Cells::FileFormatType value)=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
			/// Such as wav file ,avi file..etc..
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetObjectSourceFullName()=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
			/// Such as wav file ,avi file..etc..
			/// </remarks>
			 virtual void SetObjectSourceFullName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the display label of the linked ole object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetLabel()=0;
			/// <summary>
			/// Gets and sets the display label of the linked ole object.
			/// </summary>
			 virtual void SetLabel(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use OleObject.ObjectSourceFullName property.
			/// This property will be removed 12 months later since November 2013. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSourceFullName()=0;
			/// <summary>
			/// Returns the source full name of the source file for the linked OLE object.
			/// </summary>
			/// <remarks>
			/// NOTE: This member is now obsolete. Instead, 
			/// please use OleObject.ObjectSourceFullName property.
			/// This property will be removed 12 months later since November 2013. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetSourceFullName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Specifies whether the link to the OleObject is automatically updated or not.
			/// </summary>
			 virtual bool GetAutoUpdate()=0;
			/// <summary>
			/// Specifies whether the link to the OleObject is automatically updated or not.
			/// </summary>
			 virtual void SetAutoUpdate(bool value)=0;
			/// <summary>
			/// Specifies whether the host application for the embedded object shall be called to load
			/// the object data automatically when the parent workbook is opened.
			/// </summary>
			 virtual bool GetAutoLoad()=0;
			/// <summary>
			/// Specifies whether the host application for the embedded object shall be called to load
			/// the object data automatically when the parent workbook is opened.
			/// </summary>
			 virtual void SetAutoLoad(bool value)=0;
			/// <summary>
			/// Gets and sets the class identifier of the embedded object. 
			/// It means which application opens the embedded file.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetClassIdentifier()=0;
			/// <summary>
			/// Gets and sets the class identifier of the embedded object. 
			/// It means which application opens the embedded file.
			/// </summary>
			 virtual void SetClassIdentifier(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Gets the image format of the ole object.
			/// </summary>
			 virtual Aspose::Cells::Drawing::ImageType GetImageType()=0;

	};
}
}
}
