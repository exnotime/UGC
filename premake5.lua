include "premake-qt/qt.lua"
local qt = premake.extensions.qt

solution "UGC"
    configurations { "Debug", "Release" }
    flags{ "NoPCH" }
    libdirs { "lib" }
    includedirs { "include"}
    platforms{ "x64" }

    local location_path = "solution"
    if _ACTION then
        defines { "_CRT_SECURE_NO_WARNINGS", "NOMINMAX"  }
        location_path = location_path .. "/" .. _ACTION
        location ( location_path )
        location_path = location_path .. "/projects"
    end

    configuration { "Debug" }
        defines { "DEBUG" }
        symbols "On"
        targetdir ( "bin/" .. "/debug" )

    configuration { "Release" }
        defines { "NDEBUG", "RELEASE" }
        optimize "on"
        floatingpoint "fast"
        targetdir ( "bin/" .. "/release" )

    --Qt based front-end for ugc
    project "UGC"
        targetname "UGC"
		debugdir ""
        defines { }
		location ( location_path )
		language "C++"
		kind "ConsoleApp"
        files { "src/FrontEnd/**" }
        libdirs { "lib/Qt" }
        includedirs { "include", "src", "include/Qt" }
        qt.enable()
        configuration { "Debug" }
            links { "Qt5Cored", "Qt5Guid", "Qt5Widgetsd" }
        configuration { "Release" }
            links {  "Qt5Core", "Qt5Gui", "Qt5Widgets"}
        
    --library to connect the front-end and back-end
    project "UGCLib"
    	targetname "UGCLib"
    	defines {}
    	debugdir ""
    	location (location_path)
    	language("C++")
    	files { "src/UGC/**"}
    	includedirs { "include", "src" }
    	kind "StaticLib"
    	links {}
        
