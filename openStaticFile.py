# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Jun  5 2014)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc
import wx.propgrid as pg
import gettext
###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = "open Static File" , pos = wx.DefaultPosition, size = wx.Size( 665,408 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		self.SetBackgroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_MENU ) )
		
		bSizer3 = wx.BoxSizer( wx.HORIZONTAL )		
		
		self.m_propertyGrid3 = pg.PropertyGrid(self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.propgrid.PG_DEFAULT_STYLE)
		bSizer3.Add( self.m_propertyGrid3, 9, wx.ALL|wx.EXPAND, 5 )
		self.m_propertyGrid3.Append( pg.PropertyCategory("1 - Basic Properties") )  
		self.m_propertyGrid3.Append( pg.DirProperty("Path"))   
		self.m_propertyGrid3.Append( pg.BoolProperty("All_sheets") )   
		self.m_propertyGrid3.SetPropertyAttribute("All_sheets", "UseCheckbox", True) 	
		
		
		
		bSizer4 = wx.BoxSizer( wx.VERTICAL )
		
		self.sure_btn = wx.Button( self, wx.ID_ANY, u"Okay", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.sure_btn, 0, wx.ALL, 5 )
		
		self.cancel_btn = wx.Button( self, wx.ID_ANY, u"Cancel", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.cancel_btn, 0, wx.ALL, 5 )
		
		self.m_staticline2 = wx.StaticLine( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LI_HORIZONTAL )
		bSizer4.Add( self.m_staticline2, 0, wx.EXPAND |wx.ALL, 5 )
		
		self.m_button9 = wx.Button( self, wx.ID_ANY, u"Load", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button9, 0, wx.ALL, 5 )
		
		self.m_button10 = wx.Button( self, wx.ID_ANY, u"Save", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button10, 0, wx.ALL, 5 )
		
		self.m_button11 = wx.Button( self, wx.ID_ANY, u"Default", wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer4.Add( self.m_button11, 0, wx.ALL, 5 )
		
		
		bSizer3.Add( bSizer4, 0, wx.EXPAND, 5 )
		
		
		self.SetSizer( bSizer3 )
		self.Layout()
		
		self.Centre( wx.BOTH )
	
	def __del__( self ):
		pass
	
if __name__ == "__main__":
	gettext.install("app") # replace with the appropriate catalog name
	
	app = wx.PySimpleApp(0)
	wx.InitAllImageHandlers()
	frame_1 = MyFrame1(None )
	
	    
	app.SetTopWindow(frame_1)
	frame_1.Show()
	app.MainLoop()
	
 	