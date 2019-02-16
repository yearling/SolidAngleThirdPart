# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.5)

file(GLOB_RECURSE DIRECTXTEX_INCLUDES "DDSTextureLoader/*.h"
                                      "DirectXTex/*.h"
                                      "WICTextureLoader/*.h")

file(GLOB DIRECTXTEX_SRCS 	"DDSTextureLoader/*.cpp"
                            "DirectXTex/*.cpp"
                            "WICTextureLoader/*.cpp")

add_compile_definitions(_UNICODE
                        UNICODE
                        WIN32
                        _LIB
                        _WIN7_PLATFORM_UPDATE
                        _WIN32_WINNT=0x0600
                        _CRT_STDIO_ARBITRARY_WIDE_SPECIFIERS
                         )

if (CMAKE_BUILD_TYPE STREQUAL Debug)
add_definitions(-D_DEBUG)
endif ()

add_library(DirectXTex SHARED ${DIRECTXTEX_SRCS} ${DIRECTXTEX_INCLUDES})
