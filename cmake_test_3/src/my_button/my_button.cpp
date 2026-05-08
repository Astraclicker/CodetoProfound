#include <my_button.h>

/**
 * @name 构造按钮指定位置
 * @param text 按钮内文本
 * @param parent 窗口参数
 * @param x 位置x坐标
 * @param y 位置y坐标
 */
My_Button::My_Button(const std::string &text, QWidget *parent, int x, int y) {
    Button = new QPushButton(text.c_str(), parent);
    Button->move(x, y);
}

//构造按钮自适应布局
My_Button::My_Button(const std::string &text, QWidget *parent) {
    Button = new QPushButton(text.c_str(), parent);
}

//展示按钮
void My_Button::show() const {
    Button->show();
}

//返回按钮地址
QPushButton *My_Button::Button_Address() const {
    return Button;
}
