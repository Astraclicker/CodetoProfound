#include<vector>
#include<iostream>

using std::vector;

int main()
{
    //初始化一个包含char类型元素的vector容器    
    vector <char> arr {'h','e','l','l','o'};

    //与指针类似，通过解引用来访问迭代器所指向的元素
    auto i = arr.begin();   //或者写成char i = *arr.begin();

    //通过迭代器的方式来遍历字符串
    while (i!= arr.end()) 
    {
        std::cout<< *i<<std::endl;
        // ++运算符让迭代器向前移动一个位置
        i++;
    }
    
    

    vector<int> v;
    const vector<int> cv;

    //it1的类型为iterator
    auto it1 = v.begin();

    //it2的类型为const_iterator
    auto it2 = cv.begin();

    //it3的类型为const_iterator
    auto it3 = v.cbegin(); 
}