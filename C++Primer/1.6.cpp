// 我们的程序会将每个ISBN的所有数据合并起来，存入名为tota1的变量中。我们使用另一个名为trans的变量保存读取的每条销售记录。如果trans和total指向相同的ISBN，我们会更新total的值。否则，我们会打印total的值，并将其重置为刚刚读取的数据
#include <iostream>
#include "src/Sales_item.h"
int main()
{
    Sales_item total; // 保存下一条交易记录的变量
    if (std::cin >> total)
    {
        Sales_item trans; // 保存和的变量
        // 读入并处理剩余交易记录
        while (std::cin >> trans)
        {
            // 如果我们仍在处理相同的书
            if (total.isbn == trans.isbn)
            {
                total += trans;
            }
            else
            {
                // 打印前一本书的结果
                std::cout << total << std::endl;
                total = trans; // total现在表示下一本书的销售额
            }
        }
        std::cout << total << std::endl; // 打印最后一本书的结果
    }
    else
    {
        // 没有输入！警告读者
        std::cerr << "NO data" << std::endl;
        return -1;
    }
    return 0;
}