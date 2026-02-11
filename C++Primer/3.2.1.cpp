#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s1 = "hello world"; //s1是字面值"hello world"的副本,等价于 s1("hello world")

    string s2 = s1;     //s2是s1的副本,等价于s2(s1);

    string s3(9,'c');   //将s3初始化为九个连续字符c组成的串,第一个参数可以为整形变量,第二个参数必须是char类型

    /*
    初始化是以=方式初始化的叫拷贝初始化,例如 string s1 = "hello"
    以()的形式的初始化方式叫直接初始化,例如 string s("hello")
    直接初始化更好,因为不要生成临时变量
    */
}