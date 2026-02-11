#pragma once
#include"def.h"
//返回链表长度
int ListLength(node* list)
{
	int cnt = 0;
	while (list->next != NULL)
	{
		cnt++;
		list = list->next;
	}
	return cnt;
}

/*
删除链表的指定位置
要注意，每次删除后链表数据位置会更新
*/
void del(node* list, int local)
{
	node* temp = list;
	if (local == ListLength(list))
	{
		for (int i = 1; i < local; i++)
		{
			temp = temp->next;
		}

		temp->next = NULL;
		return;
	}
	for (int i = 1; i < local; i++)
	{
		temp = temp->next;
	}
	temp->next = temp->next->next;
}
