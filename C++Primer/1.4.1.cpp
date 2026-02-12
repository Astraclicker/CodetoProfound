// 计算1-10的和
#include<iostream>
int main()
{
    int i = 10;
    int sum = 0;

    while(i>=0)
    {
        sum+=i; //复合运算符，将sum+i的值赋给sum，等价于sum=sum+i
        i--;    //后缀递减运算符，等价于i=i-1，部分场合要用--i
    }
    std::cout<<sum<<std::endl;
    return 0;
}