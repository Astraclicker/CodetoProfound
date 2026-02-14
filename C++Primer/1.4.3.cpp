// 计算所有数的和
#include <iostream>

int main()
{
    int value;
    int sum = 0;
    // 做一项说明,当输入浮点型时,输入的浮点数会被强制转换为整型(本例中为value的数据类型),然后依然会被读入value中
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << sum << std::endl;

    // for循环的这种写法与while一致
    //  for(;std::cin>>value;)
}