#pragma once
#include"def.h"
//打印整个链表
void print (node* list)
{
	while (list->next != NULL) 
	{
		list = list->next;
		cout << list->data << " ";
	}
}