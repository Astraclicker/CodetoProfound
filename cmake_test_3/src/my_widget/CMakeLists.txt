project(_my_widget)

#将my_widget.cpp生成为lib_my_widget.dll动态链接库
add_library(
        _my_widget
        SHARED
        my_widget.cpp
)

#让lib_my_widget.dll包含以下目录
target_include_directories(
        _my_widget
        PUBLIC
        ${SRC_DIR}/my_button
        ${SRC_DIR}/my_widget
)

#让lib_my_widget.dll链接以下库
target_link_libraries(
        _my_widget
        PUBLIC
        _my_button
)