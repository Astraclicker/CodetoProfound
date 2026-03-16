//基于双向链表的队列实现
#pragma once

template<typename T>
struct node_queue {
    node_queue *last;
    T data;
    node_queue *next;
};

template<typename T>
class queue {
protected:
    node_queue<T> *head;
    node_queue<T> *end;
public:
    //显式默认构造
    queue();

    //返回队首元素的引用
    T front();

    //返回队尾元素的引用
    T back();

    //在对尾添加一个元素
    void push(T data);

    //移除队首元素
    void pop();

    //检测队列是否为空
    bool empty();

    //返回队列长度
    unsigned int length();
};
#include "Queue.tpp"