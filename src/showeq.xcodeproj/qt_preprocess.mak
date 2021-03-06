#############################################################################
# Makefile for building: showeq.app/Contents/MacOS/showeq
# Generated by qmake (2.01a) (Qt 4.5.0) on: Sun Jan 31 22:32:39 2010
# Project:  showeq.pro
# Template: app
# Command: /usr/bin/qmake -macx -o showeq.xcodeproj/project.pbxproj showeq.pro
#############################################################################

MOC       = /Developer/Tools/Qt/moc
UIC       = /Developer/Tools/Qt/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DPKGDATADIR=/usr/local/share/showeq -DQMAKEBUILD -DVERSION=6.0 -DQT_QT3SUPPORT_LIB -DQT3_SUPPORT -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
INCPATH       = -I/usr/local/Qt4.5/mkspecs/macx-xcode -I. -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/usr/include/QtCore -I/Library/Frameworks/QtNetwork.framework/Versions/4/Headers -I/usr/include/QtNetwork -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/usr/include/QtGui -I/Library/Frameworks/QtXml.framework/Versions/4/Headers -I/usr/include/QtXml -I/Library/Frameworks/Qt3Support.framework/Versions/4/Headers -I/usr/include/Qt3Support -I/usr/include -I.. -I/usr/include/pcap -Itmp -Itmp -I/usr/local/include -I/System/Library/Frameworks/CarbonCore.framework/Headers
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compilers: tmp/ui_mapicondialog_qt4.h tmp/ui_mapicondialog_qt4.h tmp/moc_spawnshell.cpp tmp/moc_xmlpreferences.cpp tmp/moc_spellshell.cpp\
	 tmp/moc_player.cpp tmp/moc_filtermgr.cpp tmp/moc_category.cpp\
	 tmp/moc_group.cpp tmp/moc_guild.cpp tmp/moc_zonemgr.cpp\
	 tmp/moc_spawnmonitor.cpp tmp/moc_datetimemgr.cpp tmp/moc_messages.cpp\
	 tmp/moc_messagefilter.cpp tmp/moc_messageshell.cpp tmp/moc_terminal.cpp\
	 tmp/moc_filternotifications.cpp tmp/moc_guildshell.cpp tmp/moc_session.cpp\
	 tmp/moc_logger.cpp tmp/moc_filteredspawnlog.cpp tmp/moc_spawnlog.cpp\
	 tmp/moc_bazaarlog.cpp tmp/moc_compass.cpp tmp/moc_interface.cpp\
	 tmp/moc_map.cpp tmp/moc_editor.cpp tmp/moc_experiencelog.cpp\
	 tmp/moc_combatlog.cpp tmp/moc_spawnlist.cpp tmp/moc_spelllist.cpp\
	 tmp/moc_skilllist.cpp tmp/moc_statlist.cpp tmp/moc_mapicon.cpp\
	 tmp/moc_compassframe.cpp tmp/moc_seqwindow.cpp tmp/moc_seqlistview.cpp\
	 tmp/moc_spawnpointlist.cpp tmp/moc_spawnlistcommon.cpp tmp/moc_spawnlist2.cpp\
	 tmp/moc_messagewindow.cpp tmp/moc_guildlist.cpp tmp/moc_messagefilterdialog.cpp\
	 tmp/moc_packetlog.cpp tmp/moc_packetstream.cpp tmp/moc_netdiag.cpp\
	 tmp/moc_remotepacket.cpp tmp/moc_packetinfo.cpp tmp/moc_packet.cpp
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_uic_make_all: tmp/ui_mapicondialog_qt4.h tmp/ui_mapicondialog_qt4.h
compiler_uic_clean:
	-$(DEL_FILE) tmp/ui_mapicondialog_qt4.h tmp/ui_mapicondialog_qt4.h
tmp/ui_mapicondialog_qt4.h: mapicondialog_qt4.ui
	/Developer/Tools/Qt/uic mapicondialog_qt4.ui -o tmp/ui_mapicondialog_qt4.h

tmp/ui_mapicondialog_qt4.h: mapicondialog_qt4.ui
	/Developer/Tools/Qt/uic mapicondialog_qt4.ui -o tmp/ui_mapicondialog_qt4.h

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_header_make_all: tmp/moc_spawnshell.cpp tmp/moc_xmlpreferences.cpp tmp/moc_spellshell.cpp tmp/moc_player.cpp tmp/moc_filtermgr.cpp tmp/moc_category.cpp tmp/moc_group.cpp tmp/moc_guild.cpp tmp/moc_zonemgr.cpp tmp/moc_spawnmonitor.cpp tmp/moc_datetimemgr.cpp tmp/moc_messages.cpp tmp/moc_messagefilter.cpp tmp/moc_messageshell.cpp tmp/moc_terminal.cpp tmp/moc_filternotifications.cpp tmp/moc_guildshell.cpp tmp/moc_session.cpp tmp/moc_logger.cpp tmp/moc_filteredspawnlog.cpp tmp/moc_spawnlog.cpp tmp/moc_bazaarlog.cpp tmp/moc_compass.cpp tmp/moc_interface.cpp tmp/moc_map.cpp tmp/moc_editor.cpp tmp/moc_experiencelog.cpp tmp/moc_combatlog.cpp tmp/moc_spawnlist.cpp tmp/moc_spelllist.cpp tmp/moc_skilllist.cpp tmp/moc_statlist.cpp tmp/moc_mapicon.cpp tmp/moc_compassframe.cpp tmp/moc_seqwindow.cpp tmp/moc_seqlistview.cpp tmp/moc_spawnpointlist.cpp tmp/moc_spawnlistcommon.cpp tmp/moc_spawnlist2.cpp tmp/moc_messagewindow.cpp tmp/moc_guildlist.cpp tmp/moc_messagefilterdialog.cpp tmp/moc_packetlog.cpp tmp/moc_packetstream.cpp tmp/moc_netdiag.cpp tmp/moc_remotepacket.cpp tmp/moc_packetinfo.cpp tmp/moc_packet.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) tmp/moc_spawnshell.cpp tmp/moc_xmlpreferences.cpp tmp/moc_spellshell.cpp tmp/moc_player.cpp tmp/moc_filtermgr.cpp tmp/moc_category.cpp tmp/moc_group.cpp tmp/moc_guild.cpp tmp/moc_zonemgr.cpp tmp/moc_spawnmonitor.cpp tmp/moc_datetimemgr.cpp tmp/moc_messages.cpp tmp/moc_messagefilter.cpp tmp/moc_messageshell.cpp tmp/moc_terminal.cpp tmp/moc_filternotifications.cpp tmp/moc_guildshell.cpp tmp/moc_session.cpp tmp/moc_logger.cpp tmp/moc_filteredspawnlog.cpp tmp/moc_spawnlog.cpp tmp/moc_bazaarlog.cpp tmp/moc_compass.cpp tmp/moc_interface.cpp tmp/moc_map.cpp tmp/moc_editor.cpp tmp/moc_experiencelog.cpp tmp/moc_combatlog.cpp tmp/moc_spawnlist.cpp tmp/moc_spelllist.cpp tmp/moc_skilllist.cpp tmp/moc_statlist.cpp tmp/moc_mapicon.cpp tmp/moc_compassframe.cpp tmp/moc_seqwindow.cpp tmp/moc_seqlistview.cpp tmp/moc_spawnpointlist.cpp tmp/moc_spawnlistcommon.cpp tmp/moc_spawnlist2.cpp tmp/moc_messagewindow.cpp tmp/moc_guildlist.cpp tmp/moc_messagefilterdialog.cpp tmp/moc_packetlog.cpp tmp/moc_packetstream.cpp tmp/moc_netdiag.cpp tmp/moc_remotepacket.cpp tmp/moc_packetinfo.cpp tmp/moc_packet.cpp
tmp/moc_spawnshell.cpp: compat.h \
		everquest.h \
		config.h \
		spawn.h \
		point.h \
		spawnshell.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnshell.h -o tmp/moc_spawnshell.cpp

tmp/moc_xmlpreferences.cpp: compat.h \
		xmlpreferences.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ xmlpreferences.h -o tmp/moc_xmlpreferences.cpp

tmp/moc_spellshell.cpp: compat.h \
		everquest.h \
		config.h \
		spellshell.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spellshell.h -o tmp/moc_spellshell.cpp

tmp/moc_player.cpp: everquest.h \
		config.h \
		compat.h \
		spawn.h \
		point.h \
		player.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ player.h -o tmp/moc_player.cpp

tmp/moc_filtermgr.cpp: compat.h \
		everquest.h \
		config.h \
		filtermgr.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ filtermgr.h -o tmp/moc_filtermgr.cpp

tmp/moc_category.cpp: compat.h \
		category.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ category.h -o tmp/moc_category.cpp

tmp/moc_group.cpp: compat.h \
		everquest.h \
		config.h \
		group.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ group.h -o tmp/moc_group.cpp

tmp/moc_guild.cpp: everquest.h \
		config.h \
		compat.h \
		guild.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ guild.h -o tmp/moc_guild.cpp

tmp/moc_zonemgr.cpp: point.h \
		compat.h \
		zonemgr.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ zonemgr.h -o tmp/moc_zonemgr.cpp

tmp/moc_spawnmonitor.cpp: spawn.h \
		compat.h \
		everquest.h \
		config.h \
		point.h \
		zonemgr.h \
		spawnshell.h \
		spawnmonitor.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnmonitor.h -o tmp/moc_spawnmonitor.cpp

tmp/moc_datetimemgr.cpp: compat.h \
		datetimemgr.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ datetimemgr.h -o tmp/moc_datetimemgr.cpp

tmp/moc_messages.cpp: message.h \
		compat.h \
		messagefilter.h \
		messages.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ messages.h -o tmp/moc_messages.cpp

tmp/moc_messagefilter.cpp: message.h \
		compat.h \
		messagefilter.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ messagefilter.h -o tmp/moc_messagefilter.cpp

tmp/moc_messageshell.cpp: compat.h \
		messages.h \
		message.h \
		messagefilter.h \
		messageshell.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ messageshell.h -o tmp/moc_messageshell.cpp

tmp/moc_terminal.cpp: messages.h \
		message.h \
		compat.h \
		messagefilter.h \
		terminal.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ terminal.h -o tmp/moc_terminal.cpp

tmp/moc_filternotifications.cpp: compat.h \
		filternotifications.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ filternotifications.h -o tmp/moc_filternotifications.cpp

tmp/moc_guildshell.cpp: compat.h \
		guildshell.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ guildshell.h -o tmp/moc_guildshell.cpp

tmp/moc_session.cpp: session.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ session.h -o tmp/moc_session.cpp

tmp/moc_logger.cpp: compat.h \
		logger.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ logger.h -o tmp/moc_logger.cpp

tmp/moc_filteredspawnlog.cpp: logger.h \
		compat.h \
		filteredspawnlog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ filteredspawnlog.h -o tmp/moc_filteredspawnlog.cpp

tmp/moc_spawnlog.cpp: logger.h \
		compat.h \
		everquest.h \
		config.h \
		spawnlog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnlog.h -o tmp/moc_spawnlog.cpp

tmp/moc_bazaarlog.cpp: logger.h \
		compat.h \
		bazaarlog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ bazaarlog.h -o tmp/moc_bazaarlog.cpp

tmp/moc_compass.cpp: compat.h \
		point.h \
		compass.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ compass.h -o tmp/moc_compass.cpp

tmp/moc_interface.cpp: everquest.h \
		config.h \
		compat.h \
		spawnlist.h \
		seqwindow.h \
		seqlistview.h \
		spawnlistcommon.h \
		spawn.h \
		point.h \
		spawnshell.h \
		packetlog.h \
		logger.h \
		packet.h \
		packetcommon.h \
		packetinfo.h \
		session.h \
		interface.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ interface.h -o tmp/moc_interface.cpp

tmp/moc_map.cpp: compat.h \
		filtermgr.h \
		everquest.h \
		config.h \
		mapcore.h \
		point.h \
		pointarray.h \
		fixpt.h \
		seqwindow.h \
		spawn.h \
		mapicon.h \
		map.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ map.h -o tmp/moc_map.cpp

tmp/moc_editor.cpp: editor.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ editor.h -o tmp/moc_editor.cpp

tmp/moc_experiencelog.cpp: compat.h \
		seqwindow.h \
		seqlistview.h \
		experiencelog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ experiencelog.h -o tmp/moc_experiencelog.cpp

tmp/moc_combatlog.cpp: compat.h \
		seqwindow.h \
		seqlistview.h \
		player.h \
		everquest.h \
		config.h \
		spawn.h \
		point.h \
		group.h \
		combatlog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ combatlog.h -o tmp/moc_combatlog.cpp

tmp/moc_spawnlist.cpp: compat.h \
		seqwindow.h \
		seqlistview.h \
		spawnlistcommon.h \
		spawn.h \
		everquest.h \
		config.h \
		point.h \
		spawnlist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnlist.h -o tmp/moc_spawnlist.cpp

tmp/moc_spelllist.cpp: seqwindow.h \
		seqlistview.h \
		spellshell.h \
		compat.h \
		everquest.h \
		config.h \
		spelllist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spelllist.h -o tmp/moc_spelllist.cpp

tmp/moc_skilllist.cpp: seqlistview.h \
		seqwindow.h \
		player.h \
		everquest.h \
		config.h \
		compat.h \
		spawn.h \
		point.h \
		skilllist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ skilllist.h -o tmp/moc_skilllist.cpp

tmp/moc_statlist.cpp: seqwindow.h \
		seqlistview.h \
		player.h \
		everquest.h \
		config.h \
		compat.h \
		spawn.h \
		point.h \
		statlist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ statlist.h -o tmp/moc_statlist.cpp

tmp/moc_mapicon.cpp: compat.h \
		spawn.h \
		everquest.h \
		config.h \
		point.h \
		mapicon.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ mapicon.h -o tmp/moc_mapicon.cpp

tmp/moc_compassframe.cpp: player.h \
		everquest.h \
		config.h \
		compat.h \
		spawn.h \
		point.h \
		spawnshell.h \
		compass.h \
		seqwindow.h \
		compassframe.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ compassframe.h -o tmp/moc_compassframe.cpp

tmp/moc_seqwindow.cpp: seqwindow.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ seqwindow.h -o tmp/moc_seqwindow.cpp

tmp/moc_seqlistview.cpp: seqlistview.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ seqlistview.h -o tmp/moc_seqlistview.cpp

tmp/moc_spawnpointlist.cpp: seqlistview.h \
		seqwindow.h \
		spawnmonitor.h \
		spawn.h \
		compat.h \
		everquest.h \
		config.h \
		point.h \
		zonemgr.h \
		spawnshell.h \
		spawnpointlist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnpointlist.h -o tmp/moc_spawnpointlist.cpp

tmp/moc_spawnlistcommon.cpp: compat.h \
		spawn.h \
		everquest.h \
		config.h \
		point.h \
		spawnlistcommon.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnlistcommon.h -o tmp/moc_spawnlistcommon.cpp

tmp/moc_spawnlist2.cpp: seqwindow.h \
		seqlistview.h \
		spawnlistcommon.h \
		compat.h \
		spawn.h \
		everquest.h \
		config.h \
		point.h \
		spawnlist2.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ spawnlist2.h -o tmp/moc_spawnlist2.cpp

tmp/moc_messagewindow.cpp: seqwindow.h \
		compat.h \
		messagewindow.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ messagewindow.h -o tmp/moc_messagewindow.cpp

tmp/moc_guildlist.cpp: compat.h \
		seqwindow.h \
		seqlistview.h \
		guildlist.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ guildlist.h -o tmp/moc_guildlist.cpp

tmp/moc_messagefilterdialog.cpp: compat.h \
		messagefilterdialog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ messagefilterdialog.h -o tmp/moc_messagefilterdialog.cpp

tmp/moc_packetlog.cpp: logger.h \
		compat.h \
		packet.h \
		packetcommon.h \
		packetinfo.h \
		packetlog.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ packetlog.h -o tmp/moc_packetlog.cpp

tmp/moc_packetstream.cpp: packetcommon.h \
		compat.h \
		packetfragment.h \
		packetinfo.h \
		packetstream.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ packetstream.h -o tmp/moc_packetstream.cpp

tmp/moc_netdiag.cpp: packetcommon.h \
		compat.h \
		seqwindow.h \
		netdiag.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ netdiag.h -o tmp/moc_netdiag.cpp

tmp/moc_remotepacket.cpp: packetcommon.h \
		compat.h \
		packetinfo.h \
		packet.h \
		remotepacket.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ remotepacket.h -o tmp/moc_remotepacket.cpp

tmp/moc_packetinfo.cpp: compat.h \
		packetinfo.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ packetinfo.h -o tmp/moc_packetinfo.cpp

tmp/moc_packet.cpp: packetcommon.h \
		compat.h \
		packetinfo.h \
		packet.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ packet.h -o tmp/moc_packet.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_uic_clean compiler_moc_header_clean 

