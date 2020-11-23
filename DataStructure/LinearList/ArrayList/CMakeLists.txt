# cmake需要的最低版本
cmake_minimum_required (VERSION 3.16)
# 项目名
project(ArrayListStudy)

# 设置生成的目标可执行文件路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 设置include文件（.h文件）的位置
set(includePath ${PROJECT_SOURCE_DIR}/include)
include_directories(
    ${includePath}
)

# 设置源文件（.c/.cpp文件）的位置
set(srcPath ${PROJECT_SOURCE_DIR}/src)
aux_source_directory(${srcPath} srcFiles)

# 创建的可执行文件
add_executable(${PROJECT_NAME} ${srcFiles})