--- ui/ozone/public/platform_screen.cc.orig	2023-10-21 11:51:27 UTC
+++ ui/ozone/public/platform_screen.cc
@@ -61,7 +61,7 @@ display::TabletState PlatformScreen::GetTabletState() 
 }
 #endif
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PlatformScreen::SetDisplayConfig(const DisplayConfig& display_config) {}
 #endif
 
