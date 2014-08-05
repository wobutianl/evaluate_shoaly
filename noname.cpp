///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar1 = new wxMenuBar( 0 );
	文件 = new wxMenu();
	wxMenuItem* 打开矢量文件;
	打开矢量文件 = new wxMenuItem( 文件, ID_OPENOGR, wxString( wxT("open_ogr") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 打开矢量文件 );
	
	wxMenuItem* 打开栅格文件;
	打开栅格文件 = new wxMenuItem( 文件, ID_OPENRASTER, wxString( wxT("open_raster") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 打开栅格文件 );
	
	wxMenuItem* 打开统计文件;
	打开统计文件 = new wxMenuItem( 文件, ID_OPENSTATIC, wxString( wxT("open_static") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 打开统计文件 );
	
	文件->AppendSeparator();
	
	wxMenuItem* 保存;
	保存 = new wxMenuItem( 文件, ID_SAVE, wxString( wxT("save") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 保存 );
	
	wxMenuItem* 另存为;
	另存为 = new wxMenuItem( 文件, ID_SAVEAS, wxString( wxT("save_as") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 另存为 );
	
	文件->AppendSeparator();
	
	wxMenuItem* 退出;
	退出 = new wxMenuItem( 文件, ID_EXIT, wxString( wxT("exit") ) , wxEmptyString, wxITEM_NORMAL );
	文件->Append( 退出 );
	
	m_menubar1->Append( 文件, wxT("File") ); 
	
	数据库 = new wxMenu();
	wxMenuItem* 连接到数据库;
	连接到数据库 = new wxMenuItem( 数据库, ID_LINKDB, wxString( wxT("link_DB") ) , wxEmptyString, wxITEM_NORMAL );
	数据库->Append( 连接到数据库 );
	
	wxMenuItem* 保存到数据库;
	保存到数据库 = new wxMenuItem( 数据库, ID_SAVEDB, wxString( wxT("save_DB") ) , wxEmptyString, wxITEM_NORMAL );
	数据库->Append( 保存到数据库 );
	
	m_menubar1->Append( 数据库, wxT("DB") ); 
	
	评价模型 = new wxMenu();
	wxMenuItem* 选择评价模型;
	选择评价模型 = new wxMenuItem( 评价模型, ID_CHOOSEMODULE, wxString( wxT("choose_module") ) , wxEmptyString, wxITEM_NORMAL );
	评价模型->Append( 选择评价模型 );
	
	wxMenuItem* 自定义模型;
	自定义模型 = new wxMenuItem( 评价模型, ID_MAKEMODULE, wxString( wxT("make_module") ) , wxEmptyString, wxITEM_NORMAL );
	评价模型->Append( 自定义模型 );
	
	wxMenuItem* 设置评价标准;
	设置评价标准 = new wxMenuItem( 评价模型, ID_SETSTANDARD, wxString( wxT("set_standard") ) , wxEmptyString, wxITEM_NORMAL );
	评价模型->Append( 设置评价标准 );
	
	m_menubar1->Append( 评价模型, wxT("evaluate_modul") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	打开矢量文件 = m_toolBar1->AddTool( wxID_ANY, wxT("Open_vec_tool"), wxBitmap( wxT("ICON/folder_vector.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	打开栅格 = m_toolBar1->AddTool( wxID_ANY, wxT("open_ras_tool"), wxBitmap( wxT("ICON/folder_raster.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	打开统计 = m_toolBar1->AddTool( wxID_ANY, wxT("open_sta_tool"), wxBitmap( wxT("ICON/folder_static.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	连接数据库 = m_toolBar1->AddTool( wxID_ANY, wxT("open_db_tool"), wxBitmap( wxT("ICON/Database.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	选择模型 = m_toolBar1->AddTool( wxID_ANY, wxT("choose_mod_tool"), wxBitmap( wxT("ICON/choose_module.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar1->Realize(); 
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 0, 0, 0 );
	
	file_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	gSizer2->Add( file_notebook, 3, wxEXPAND | wxALL, 5 );
	
	data_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	gSizer2->Add( data_notebook, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( gSizer2 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
}

MyFrame1::~MyFrame1()
{
}
