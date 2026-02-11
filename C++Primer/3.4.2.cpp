#include <vector>
#include <iostream>

using std::vector;

int main()
{
    vector<int> arr(5);

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }

    // 迭代器的加减使迭代器向前后位置移动
    std::cout << *(arr.begin() + 5) << std::endl;
    std::cout << *(arr.begin() + 100) << std::endl;
    // 迭代器移动后返回的结果迭代器只能是原容器对象内的一个元素或是原容器对象尾元素的下一个元素

    // 迭代器相减返回两迭代器间相隔的元素数量
    std::cout << (arr.end() - arr.begin()) << std::endl;
}

// 迭代器实现二分查找
// 传入的数组必须有序
int search(vector<int> arr, int target)
{
    auto beg = arr.begin();
    auto end = arr.end();
    auto mid = beg + (end - beg) / 2;

    while (mid != beg && *mid != target)
    {
        if (*mid > target)
        {
            end = mid;
            mid = beg + (mid - beg) / 2;
            
        }
        else
        {
           beg  = mid;
           mid = mid+ (end - mid)/2;
        }
    }
    
}