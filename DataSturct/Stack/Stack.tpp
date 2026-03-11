#pragma once
// 含参构造构造
template <typename T>
stack<T>::stack(T data) : length(0)
{
    this->my_node = new node<T>;
    this->my_node->down = nullptr;
    this->my_node->data = data;
}

// 显示默认构造函数
template <typename T>
stack<T>::stack() : my_node(nullptr), length(0)
{
}

// 进栈
template <typename T>
void stack<T>::push(T data)
{
    auto *temp = new node<T>;
    temp->data = data;
    temp->down = this->my_node;

    this->my_node = temp;

    length++;
}

// 出栈
template <typename T>
void stack<T>::pop()
{
    node<T> *temp = this->my_node;
    this->my_node = this->my_node->down;
    delete (temp);
    temp = nullptr;

    length--;
}

// 返回栈顶数据
template <typename T>
T stack<T>::top()
{
    return this->my_node->data;
}

// 检测栈是否为空
template <typename T>
bool stack<T>::empty()
{
    if (this->my_node == nullptr)
    {
        return true;
    }
    return false;
}

// 返回栈节点个数
template <typename T>
unsigned int stack<T>::size() const
{
    return this->length;
}
