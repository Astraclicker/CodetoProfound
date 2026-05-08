project(_my_button)

#将my_button.cpp生成为lib_my_button.dll动态链接库
add_library(
        _my_button
        SHARED
        my_button.cpp
)

#让lib_my_button.dll包含以下目录
target_include_directories(
        _my_button
        PUBLIC
        ${SRC_DIR}/my_button
)

#让lib_my_button.dll链接以下库
target_link_libraries(
        _my_button
        PUBLIC
        Qt::Core
        Qt::Gui
        Qt::Widgets
)