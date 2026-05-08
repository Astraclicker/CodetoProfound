project(QT_test_main)

find_package(Qt6 REQUIRED)

#设置子目录
add_subdirectory(my_button)
add_subdirectory(my_widget)

#设置生成的可执行文件
add_executable(QT_test_main main.cpp)

#查找依赖
set(WINDEPLOYQT_EXE "${CMAKE_PREFIX_PATH}/bin/windeployqt")
add_custom_command(TARGET QT_test_main POST_BUILD
    COMMAND "${WINDEPLOYQT_EXE}" "$<TARGET_FILE:QT_test_main>"
    WORKING_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
    COMMENT "Deploy Qt runtime dependencies"
)

#包含程序入口 my_widget
target_include_directories(
    QT_test_main
    PUBLIC
    ${SRC_DIR}/my_widget
)

#链接程序入口 my_widget
target_link_libraries(
    QT_test_main
    PUBLIC
    _my_widget
)
