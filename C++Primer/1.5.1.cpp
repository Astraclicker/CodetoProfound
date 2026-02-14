// 在使用一个类前,记得引用头文件
//在引用来自标准库的头文件时,当使用<>,而应用非标准库头文件时当使用""
#include "src/Sales_item.h"
#include <iostream>

int main()
{
    // 初始化一个Sales_item对象,名字叫book
    Sales_item book;
    // 给book写入ISBN号、售出的册数以及销售价格(0-201-70353-X 4 24.99)
    std::cin >> book;
    // 打印book的ISBN、售出的册数、总销售额和平均价格(0-201-70353-X 4 99.96 24.99)
    std::cout << book << std::endl;
    /*
    在我们输入数据后,book对象中的数据会根据Sales_item类中的方法自动处理
    这是类的创作者所为我们做好的
    */
}