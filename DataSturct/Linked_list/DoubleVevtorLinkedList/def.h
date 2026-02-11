#pragma once
#include<iostream>
using std::endl;
using std::cout;
using std::cin;

typedef int DataType;
struct node
{
    node* pre;
    DataType data;
    node* next;
};
