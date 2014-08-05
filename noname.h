///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/toolbar.h>
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define ID_OPENOGR 1000
#define ID_OPENRASTER 1001
#define ID_OPENSTATIC 1002
#define ID_SAVE 1003
#define ID_SAVEAS 1004
#define ID_EXIT 1005
#define ID_LINKDB 1006
#define ID_SAVEDB 1007
#define ID_CHOOSEMODULE 1008
#define ID_MAKEMODULE 1009
#define ID_SETSTANDARD 1010

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* m_menubar1;
		wxMenu* 文件;
		wxMenu* 数据库;
		wxMenu* 评价模型;
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* 打开矢量文件; 
		wxToolBarToolBase* 打开栅格; 
		wxToolBarToolBase* 打开统计; 
		wxToolBarToolBase* 连接数据库; 
		wxToolBarToolBase* 选择模型; 
		wxNotebook* file_notebook;
		wxNotebook* data_notebook;
		wxStatusBar* m_statusBar1;
	
	public:
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 530,337 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame1();
	
};

#endif //__NONAME_H__
