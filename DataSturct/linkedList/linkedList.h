#ifndef TEST_LINKEDLIST_H
#define TEST_LINKEDLIST_H
#define REG true  // regular
#define OPP false // oppose
#include <memory>
#include <iostream>

template <typename T>

class node
{
protected:
    T data;
    unsigned int index;
    node *next;
    node *last;

public:
    // 头节点有内容构造链表方法
    explicit node(T data);

    // 头节点无内容构造链表方法
    node();

    // 头插法插入数据
    void push_front(T new_data);

    // 尾插法插入数据
    void push_back(T new_data);

    // 链接节点
    void link_node(unsigned int index_x, unsigned int index_y, bool condition);

    // 更新节点
    void update_node(unsigned int up_index, T new_data);

    // 删除节点
    void del_node(unsigned int del_index);

    // 插入节点
    bool insert_node(unsigned int index_x, unsigned int index_y, T new_data);

    // 交换节点
    void swap_node(unsigned int index_x, unsigned int index_y);

    // 合并链表
    bool merge_list(node &obj);

    // 打印链表
    void print_list();

    // 返回链表长度
    unsigned int size();

    // 清空链表
    void clear();
};

#include "linkedList.tpp"

#endif // TEST_LINKEDLIST_H
