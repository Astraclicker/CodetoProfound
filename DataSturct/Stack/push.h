//push.h
#pragma once
#include "def.h"

// 进栈函数
stack *push(stack *top, DataType NewData)
{
    stack *temp = new stack;
    temp->data = NewData;
    temp->next = top;
    return temp;
}