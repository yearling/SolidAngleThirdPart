# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.14)
# include
include_directories("DirectXtex")

# collect head files and source files
file(GLOB_RECURSE DIRECTXTEX_INCLUDES "DDSTextureLoader/*.h"
                                      "DirectXTex/*.h"
                                      "DirectXTex/*.inl"
                                      "WICTextureLoader/*.h"
                                     )

file(GLOB DIRECTXTEX_SRCS 	"DDSTextureLoader/*.cpp"
                            "DirectXTex/*.cpp"
                            "WICTextureLoader/*.cpp")
# cpp compile add_compile
add_compile_definitions(_UNICODE
                        UNICODE
                        WIN32
                        _LIB
                        _WIN7_PLATFORM_UPDATE
                        _WIN32_WINNT=0x0602
                        _CRT_STDIO_ARBITRARY_WIDE_SPECIFIERS
                         )

add_compile_definitions($<$<CONFIG:Debug>:DEBUG>)


set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")


add_library(DirectXTexLib SHARED ${DIRECTXTEX_SRCS} ${DIRECTXTEX_INCLUDES})
set_target_properties(DirectXTexLib PROPERTIES OUTPUT_NAME "DirectXTexLib$<$<CONFIG:Debug>:_debug>$<$<CONFIG:Release>:_release>")
add_custom_command(
	TARGET DirectXTexLib POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory $<TARGET_FILE_DIR:DirectXTexLib> "../../../../Binaries/Win64/")
