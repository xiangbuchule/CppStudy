# cmake需要的最低版本
cmake_minimum_required (VERSION 3.12)
# 项目名
project(Vector)

# =====================================
# ============= 设置子项目 =============
# =====================================
# 添加子目录（每个子目录下都必须有自已的CMakeLists.txt文件
add_subdirectory(${PROJECT_SOURCE_DIR}/VectorMemory)