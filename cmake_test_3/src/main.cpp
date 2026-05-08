#include <QApplication>
#include "my_widget/my_widget.h"

int main(int argc, char *argv[])
{
    // 创建应用程序
    QApplication app(argc, argv);

    // 创建窗口
    My_Widget window_main(nullptr, "窗口");
    window_main.show();

    return QApplication::exec();
}
