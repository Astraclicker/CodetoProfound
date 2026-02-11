#pragma once
#include"def.h"

//初始化链表
node* head = new node;
node* end = new node;
void init()
{
    head->next= end;
    end->pre = head;
}