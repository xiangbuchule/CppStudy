# cmake需要的最低版本
cmake_minimum_required (VERSION 3.16)
# 项目名
project(LinearListStudy)

# 添加子目录（每个子目录下都必须有自已的CMakeLists.txt文件
add_subdirectory(${PROJECT_SOURCE_DIR}/ArrayList)