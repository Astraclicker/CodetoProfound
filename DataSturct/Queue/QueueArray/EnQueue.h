#pragma once
#include "def.h"
#include "CheckQueue.h"

void EnQueue(queue *Q, DataType NewData)
{
    if (QueueFull(Q))
    {
        cout << "error,the queue is filled" << endl;
        return;
    }

    Q->arr[Q->rear] = NewData;
    Q->rear = (Q->rear + 1) % MAX;
    return ;
}