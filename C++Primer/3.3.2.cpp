#include<vector>
#include<string>
#include<iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string>arr;
    string word;


    //使用成员vector类的成员函数push_back来进行压栈操作(将元素放在vector容器末尾)
    while (getline(cin,word))
    {
        arr.push_back(word);
    }
    
}
