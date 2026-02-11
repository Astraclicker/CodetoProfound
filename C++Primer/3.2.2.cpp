#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
    string str;

    //cin>>str; 使用流来给str初始化要用getline,不然当输入例如"hello world"遇到空格会发生错误

    //读取cin中的一整行到str,返回str
    getline(cin,str);

    //size()成员函数,返回string对象的字符数
    int n = str.size();

    //empty成员函数,检查string对象是否为空,返回bool值,为空返回true,否则返回false
    bool i = str.empty();

    //用+将两个string对象相连接,返回连接后的
    string temp = str+str;

}
