//init.h
#pragma once
#include "def.h"

void init(stack* top)
{
    top->data = 0;
    top->next = NULL;
}