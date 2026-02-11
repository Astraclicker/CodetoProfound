#pragma once
#include "def.h"
#include"CheckQueue.h"

void OutQueue(queue* Q)
{
    if(QueueEmpty(Q))
    {
        cout <<"error the queue is empty"<<endl;
        return ;
    }

    cout<<Q->arr[Q->front];
    Q->front = (Q->front +1)%MAX;
}