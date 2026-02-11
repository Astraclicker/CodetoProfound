#pragma once
#include"def.h"

/*
检测队列是否为空队列
为空返回true，不为空返回false
*/
bool QueueEmpty(queue*Q)
{
    if(Q->front == Q->rear)
    {
        return true;
    }
    return false;
}

//检测队列的长度
int QueueLength(queue *Q)
{
    return (Q->rear - Q->front + MAX) % MAX;
}

/*
检测队列是否已满
已满返回true，不满返回false
*/
bool QueueFull(queue*Q)
{
    if((Q->rear + 1)%MAX == Q->front)
    {
        return true;
    }
    return false;
}