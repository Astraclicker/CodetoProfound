#include<string>
/*
老婆类
包括老婆的年龄
老婆的名字
*/
class wife
{
protected:
int year;
std::string name;

public : 
//构造函数，初始化一个老婆对象
wife(int year,const std::string &name);
};

wife::wife(int year,const std::string &name)
{
    this->year = year;
    this->name = name;
}

int main()
{
    return 0;
}