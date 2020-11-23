# cmake需要的最低版本
cmake_minimum_required (VERSION 3.16)
# 项目名
project(CppStudy)

# 设置编译器的路径
set(compileToolPath D:/MinGW/bin)

# c的编译条件
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_COMPILER ${compileToolPath}/gcc.exe)

# c++的编译条件
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER ${compileToolPath}/g++.exe)

# 设置编码
if (WIN32)
    # Windows默认使用该编码，也可GB2312或GBK
    set(compileCode GB18030)
elseif (APPLE)
    # Mac OS默认使用该编码
    set(compileCode UTF-8)
elseif (UNIX)
    # 类Unix默认使用该编码
    set(compileCode UTF-8)
endif ()
add_compile_options(-finput-charset=UTF-8 -fexec-charset=${compileCode} -fwide-exec-charset=${compileCode})

# 默认生成Debug
set(CMAKE_BUILD_TYPE "Debug")

# 添加子目录（每个子目录下都必须有自已的CMakeLists.txt文件
add_subdirectory(${PROJECT_SOURCE_DIR}/DataStructure)