#pragma once
template<typename T>
struct node {
    node *last;
    T data;
    node *next;
};

template<typename T>
class list {
protected:
    node<T> *node_head;
    node<T> *node_end;

public:
    //迭代器类实现
    class iterator {
    protected:
        node<T> *my_node;

    public:
        //构造迭代器对象
        iterator();

        iterator(node<T> *my_node);

        //前置++操作
        iterator &operator++() {
            if (my_node != nullptr) {
                my_node = my_node->next;
            }
            return *this;
        }

        //前置--操作
        iterator &operator--() {
            if (my_node != nullptr) {
                my_node = my_node->last;
            }
            return *this;
        }

        // 解引用
        T operator*() const { return my_node->data; }
        T *operator->() const { return &my_node->data; }

        // 比较
        bool operator==(const iterator &other) const { return my_node == other.my_node; }
        bool operator!=(const iterator &other) const { return my_node != other.my_node; }
    };

    // 头节点有内容构造链表方法
    explicit list(T data);

    // 头节点无内容构造链表方法
    list();

    // 头插法插入数据
    void push_front(T new_data);

    // 尾插法插入数据
    void push_back(T new_data);

    // 链接节点(构造循环链表)
    static void link_node(node<T> *x, node<T> *y, bool condition);

    // 更新节点
    static void update_node(node<T> *my_node, T new_data);

    // 删除节点
    static void del_node(node<T> *my_node);

    // 插入节点
    bool insert_node(node<T> *x, T new_data, node<T> *y);

    void insert_node(T new_data, node<T> *my_node);

    void insert_node(node<T> *my_node, T new_data);

    // 交换节点数据
    void swap_node(node<T> *x, node<T> *y);

    // 合并链表
    bool merge_list(list &obj);

    // 打印链表
    void print_list();

    // 返回链表长度
    unsigned int length();

    //返回头节点
    iterator begin();

    //返回尾节点
    iterator end();

    // 清空链表
    void clear();
};

#include "LindedList.tpp"
