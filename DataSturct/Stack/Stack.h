#pragma once

namespace mds
{
    template <typename T>
    struct node
    {
        T data;
        node *down;
    };

    template <typename T>
    class stack
    {
    protected:
        node<T> *my_node;
        unsigned int length;

    public:
        // 含参构造构造
        explicit stack(T data);

        // 显示默认构造
        stack();

        // 进栈
        void push(T data);

        // 出栈
        void pop();

        // 返回栈顶数据
        T top();

        // 检测栈是否为空
        bool empty();

        // 返回栈节点个数
        [[nodiscard]] unsigned int size() const;
    };

#include "Stack.tpp"
}
