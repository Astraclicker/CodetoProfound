#pragma once
#include "def.h"

void insert(node *list, DataType NewData)
{
    node *temp = new node;
    temp->data = NewData;
    temp->next = list->next;
    list->next = temp;
}