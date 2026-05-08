#pragma once
#include <QWidget>

class My_Widget : public QWidget{
    Q_OBJECT
public:
    //程序入口
    My_Widget(QWidget *parent, const std::string &title);
};