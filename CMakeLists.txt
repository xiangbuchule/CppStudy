# cmake需要的最低版本
cmake_minimum_required (VERSION 3.12)
# 项目名
project(CppStudy)

# =====================================
# =========== 设置c编译选项 ============
# =====================================
# 设置c编译版本
set(CMAKE_C_STANDARD 11)
# 设置c编译器
# set(CMAKE_C_COMPILER "gcc")
# 设置c编译Debug与Release的编译参数
if(MSVC)
    set(CMAKE_C_FLAGS_DEBUG "/Od /Zi /MTd")
    set(CMAKE_C_FLAGS_RELEASE "/Ox /Wall /MT")
else()
    set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -ggdb3")
    set(CMAKE_C_FLAGS_RELEASE "-O3 -Wall")
endif()

# =====================================
# ========== 设置c++编译选项 ===========
# =====================================
# 设置c++编译版本
set(CMAKE_CXX_STANDARD 17)
# 设置c++编译器
# set(CMAKE_CXX_COMPILER "g++")
# 设置c++编译Debug与Release的编译参数
if(MSVC)
    set(CMAKE_CXX_FLAGS_DEBUG "/Od /Zi /MTd")
    set(CMAKE_CXX_FLAGS_RELEASE "/Ox /Wall /MT")
else()
    set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -ggdb3")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")
endif()

# =====================================
# ========= 设置额外编译选项 ===========
# =====================================
# 设置编码
set(CompileCode UTF-8)
if(MSVC)
    add_compile_options(/source-charset:${CompileCode} /execution-charset:${CompileCode})
else()
    add_compile_options(-finput-charset=${CompileCode} -fexec-charset=${CompileCode} -fwide-exec-charset=${CompileCode})
endif()

# =====================================
# === 设置编译版本是Debug还是Release ===
# =====================================
# 设置编译版本默认为Debug版
# 修改为Release即编译Release版
set(CMAKE_BUILD_TYPE "Debug")

# =====================================
# ============= 设置子项目 =============
# =====================================
# 添加子目录（每个子目录下都必须有自已的CMakeLists.txt文件
add_subdirectory(${PROJECT_SOURCE_DIR}/DataStructure)
add_subdirectory(${PROJECT_SOURCE_DIR}/Thinking)