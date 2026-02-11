#include<iostream>
#include<string>
//命名共用体
union wife
{
    char name[20];
    char chara[20];
    int ega;
};

struct cpu
{
    //匿名共用体
    union 
    {
        char name[20];
        char ID[20];
    };
    int power;
};

int main()
{
    cpu Intel;
    wife mrfz;
    std::cin>>Intel.name;
    std::cin>>mrfz.name;
    std::cout<<Intel.name<<std::endl;
}
