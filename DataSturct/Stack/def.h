//def.h
#pragma once
#include<iostream>
using std::endl;
using std::cout;
using std::cin;

typedef int DataType;

struct stack
{
    DataType data;
    stack* next;
};

