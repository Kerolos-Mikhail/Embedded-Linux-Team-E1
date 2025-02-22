#ifndef _SYSTEM_DRAWING_IMAGING_EMFTYPE_H_
#define _SYSTEM_DRAWING_IMAGING_EMFTYPE_H_
//#include "Aspose.Cells.Systems/Drawing/Imaging/MetafileType.h"
namespace Aspose {
	namespace Cells {
		namespace Systems{
			namespace Drawing {
				namespace Imaging {
					enum EmfType
					{
						EmfType_EmfOnly =  3,
						/// <include file='doc\EmfType.uex' path='docs/doc[@for="EmfType.EmfPlusOnly"]/*' />
						/// <devdoc>
						///    <para>
						///       Windows enhanced metafile plus. Contains GDI+ commands. Metafiles of this
						///       type are refered to as an EMF+ file.
						///    </para>
						/// </devdoc>
						EmfType_EmfPlusOnly = 4,
						/// <include file='doc\EmfType.uex' path='docs/doc[@for="EmfType.EmfPlusDual"]/*' />
						/// <devdoc>
						///    <para>
						///       Dual Windows enhanced metafile. Contains equivalent GDI and GDI+ commands.
						///       Metafiles of this type are refered to as an EMF+ file.
						///    </para>
						/// </devdoc>
						EmfType_EmfPlusDual = 5
					};
				}
			}
		}
	}
}
#endif
