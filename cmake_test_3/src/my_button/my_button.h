#pragma once

#include <QPushButton>
#include <string>

class My_Button {
protected:
    QPushButton *Button;

public:
    /**
    * @name 构造按钮指定位置
    * @param text 按钮内文本
    * @param parent 窗口参数
    * @param x 位置x坐标
    * @param y 位置y坐标
    */
    My_Button(const std::string &text, QWidget *parent, int x, int y);

    //构造按钮自适应布局
    My_Button(const std::string &text, QWidget *parent);

    //展示按钮
    void show() const;

    //返回按钮地址
     QPushButton *Button_Address() const;
};
