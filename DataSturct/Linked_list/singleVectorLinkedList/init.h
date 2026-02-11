#include"def.h"
#pragma once


//初始化单项链表
node* head = new node;
void init(void)
{
	head->next = NULL;
}