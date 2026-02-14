// 统计输入数字的次数
#include <iostream>
int main()
{
    int currValue;
    int value;
    int cnt;

    if (std::cin >> currValue)
    {
        cnt = 1;
        while (std::cin >> value)
        {
            if (value == currValue)
            {
                cnt++;
            }
            else
            {
                std::cout << value << "times:" << cnt << std::endl;
                currValue = value;
                cnt = 1;
            }
        }
    }

    return 0;
}