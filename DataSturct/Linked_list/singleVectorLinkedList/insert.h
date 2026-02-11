
#pragma once
#include"insert.h"
//在链表内插入数据
void insert(node* least, DataType NewData)
{
	node* temp = new node;
	temp->data = NewData;
	temp->next = least->next;
	least->next = temp;
}
//在指定位置插入数据
void insert_local(node* list, int local, DataType NewData)
{
	node* temp = new node;
	temp->data = NewData;
	for (int i = 1; i < local; i++)
	{
		list = list->next;
	}
	temp->next = list->next;
	list->next = temp;
}
