#pragma once
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

typedef int DataType;

const int MAX = 10;

struct queue
{
    DataType arr[MAX];
    int front;
    int rear;
};
