//使用输入输入输出库前要先链接库
#include<iostream>
int main()
{
    //使用cout打印字符
    std::cout<<"input two numbers"<<std::endl;
    int num1,num2;
    //使用cin获取num1和num2的值
    std::cin>>num1>>num2;
    //输出
    std::cout<<"num1+num2="<<num1+num2<<std::endl;
    return 0;
}