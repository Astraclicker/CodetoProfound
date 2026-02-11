//pop.h
#pragma once
#include "def.h"

// 出栈函数
stack* pop(stack *top)
{
    cout << top->data << endl;
    return top->next;
}