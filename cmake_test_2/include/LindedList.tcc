#pragma once
#include <iostream>
// 头节点有内容构造链表方法
template <typename T>
list<T>::list(T data)
{
    auto *temp = new node<T>;

    temp->data = data;
    temp->last = nullptr;
    temp->next = nullptr;

    this->node_head = temp;
    this->node_end = temp;
}

// 头节点无内容构造链表方法
template <typename T>
list<T>::list() : node_head(nullptr), node_end(nullptr)
{
}

// 头插法插入数据
template <typename T>
void list<T>::push_front(T new_data)
{
    auto *temp = new node<T>;

    temp->data = new_data;
    temp->last = nullptr;
    temp->next = this->node_head;

    if (this->node_head == nullptr)
    {
        this->node_end = temp;
    }
    else
    {
        this->node_head->last = temp;
    }

    this->node_head = temp;
}

// 尾插法插入数据
template <typename T>
void list<T>::push_back(T new_data)
{
    auto *temp = new node<T>;

    temp->data = new_data;
    temp->last = this->node_end;
    temp->next = nullptr;

    if (this->node_end == nullptr)
    {
        this->node_head = temp;
    }
    else
    {
        this->node_end->next = temp;
    }

    this->node_end = temp;
}

// 链接节点(构造循环链表)
template <typename T>
void list<T>::link_node(node<T> *x, node<T> *y, const bool condition)
{
    if (condition)
    {
        x->next = y;
        y->last = x;
    }
    else
    {
        x->last = y;
        y->next = x;
    }
}

// 更新节点
template <typename T>
void list<T>::update_node(node<T> *my_node, T new_data)
{
    my_node->data = new_data;
}

// 删除节点
template <typename T>
void list<T>::del_node(node<T> *my_node)
{
    my_node->last->next = my_node->next;
    my_node->next->last = my_node->last;
    delete (my_node);
    my_node = nullptr;
}

// 插入节点
template <typename T>
void list<T>::insert_node(T new_data, list<T>::iterator &it)
{
    // 在头节点插入数据
    if (it.my_node->last == nullptr)
    {
        this->push_front(new_data);
        return;
    }
    auto *temp = new node<T>;

    temp->data = new_data;
    temp->next = it.my_node;
    temp->last = it.my_node->last;

    it.my_node->last->next = temp;
    it.my_node->last = temp;
}

// 交换节点数据
template <typename T>
void list<T>::swap_node(node<T> *x, node<T> *y)
{
    T temp = x->data;
    x->data = y->data;
    y->data = temp;

    delete (temp);
}

// 合并链表
template <typename T>
bool list<T>::merge_list(list &obj)
{
    if (this->node_head->last == this->node_end || obj.node_head->last == obj.node_end)
    {
        std::cerr << "illegal argument:circular linked list" << std::endl;
        return false;
    }
    this->node_end->next = obj.node_head;
    obj.node_head->last = this->node_end;

    this->node_end = obj.node_end;
    return true;
}

// 打印链表
template <typename T>
void list<T>::print_list()
{
    node<T> *temp = this->node_head;
    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

// 返回链表长度
template <typename T>
unsigned int list<T>::length()
{
    if (this->node_head == this->node_end && this->node_head == nullptr)
    {
        return 0;
    }
    node<T> *temp = this->node_head;
    unsigned int cnt = 1;
    while (temp != this->node_end)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// 返回头节点
template <typename T>
typename list<T>::iterator list<T>::begin()
{
    return iterator{this->node_head};
}

// 返回尾节点的next
template <typename T>
typename list<T>::iterator list<T>::end()
{
    return iterator{this->node_end->next};
}

// 清空链表
template <typename T>
void list<T>::clear()
{
    while (this->node_head != this->node_end)
    {
        this->node_head = this->node_head->next;
        delete (this->node_head->last);
        this->node_head->last = nullptr;
    }
    delete (this->node_head);
    this->node_head = nullptr;
    this->node_end = nullptr;
}

// 构造迭代器对象
template <typename T>
list<T>::iterator::iterator() : my_node(nullptr)
{
}

template <typename T>
list<T>::iterator::iterator(node<T> *my_node) : my_node(my_node)
{
}
