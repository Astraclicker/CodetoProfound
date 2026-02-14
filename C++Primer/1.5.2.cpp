#include "src/Sales_item.h"
#include <iostream>

int main()
{
    // 声明一个名为book的Sales_item对象,
    Sales_item book;
    // 给对象输入数据
    std::cin >> book;
    // 调用成员函数,获取book的ISBN数据
    std::cout << book.isbn << std::endl;
}