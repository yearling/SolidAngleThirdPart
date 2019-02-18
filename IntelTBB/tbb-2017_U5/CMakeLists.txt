# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.14)
# include
include_directories("include"
                    "src"
                    "build/vs2012/")

# collect head files and source files
# /c /MDd /Od /Ob0 /Zi /EHsc /GR /Zc:forScope /Zc:wchar_t /DTBB_USE_DEBUG /D__TBB_LIB_NAME=tbb_debug.lib /DDO_ITT_NOTIFY /GS /DUSE_WINTHREAD /D_CRT_SECURE_NO_DEPRECATE /D_WIN32_WINNT=0x0502 /D__TBBMALLOC_BUILD=1 /I../../src /I../../src/rml/include /I../../include /I../../src/tbbmalloc /I../../src/tbbmalloc /I.
file(GLOB TBBMALLOC_INCLUDES "src/tbbmalloc/MapMemory.h"
                             "src/tbbmalloc/Customize.h"
                             "src/tbbmalloc/Customize.h"
                             "src/tbbmalloc/proxy.h"
                             "src/tbbmalloc/Statistics.h"
                             "src/tbbmalloc/tbb_function_replacement.h"
                             )

file(GLOB_RECURSE TBBMALLOC_SRCS 	"src/tbbmalloc/backend.cpp"
                                    "src/tbbmalloc/backref.cpp"
                                    "src/tbbmalloc/frontend.cpp"
                                    "src/tbbmalloc/large_objects.cpp"
                                    "src/tbbmalloc/tbbmalloc.cpp"
                                    "src/tbb/itt_notify.cpp"
                )


# cpp compile add_compile
add_compile_definitions(_UNICODE
                        UNICODE
                        WIN32
                        __TBB_LIB_NAME=tbb_debug.lib
                        DO_ITT_NOTIFY
                        USE_WINTHREAD
                        _CRT_SECURE_NO_DEPRECATE 
                        _WIN32_WINNT=0x0502 
                        __TBBMALLOC_BUILD=1
                         )

add_compile_definitions($<$<CONFIG:Debug>:DEBUG> $<$<CONFIG:Debug>:TBB_USE_DEBUG>)


set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")


add_library(tbbmalloc SHARED ${TBBMALLOC_SRCS} ${TBBMALLOC_INCLUDES})
set_target_properties(tbbmalloc PROPERTIES OUTPUT_NAME "tbbmalloc$<$<CONFIG:Debug>:_debug>$<$<CONFIG:Release>:_release>")
add_custom_command(
	TARGET tbbmalloc POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory $<TARGET_FILE_DIR:tbbmalloc> "../../../../../Binaries/Win64/")
