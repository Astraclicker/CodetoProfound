// 程序入口
#include <my_button.h>
#include <my_widget.h>

// 程序入口
My_Widget::My_Widget(QWidget *parent, const std::string &title) : QWidget(parent)
{
    this->setWindowTitle(title.c_str());

    My_Button button_close("关闭窗口", this, 100, 100);
    button_close.show();

    connect(button_close.Button_Address(), &QPushButton::clicked, this, &QWidget::close);
}
