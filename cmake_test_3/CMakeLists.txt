cmake_minimum_required(VERSION 4.1)
project(QT_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/QT/6.11.0/mingw_64")

# 指定头文件目录
include_directories(${CMAKE_PREFIX_PATH}/include) #Qt头

include_directories(${PROJECT_SOURCE_DIR}/include) #项目头


# 可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# 动态库输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 查找Qt6包
find_package(Qt6 COMPONENTS
    Core
    Gui
    Widgets
    REQUIRED
)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

#设置子目录 src
add_subdirectory(src)

