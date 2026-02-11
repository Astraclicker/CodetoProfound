#include <iostream>
#include<stdio.h>
enum game
{
    statr_game=1,
    continue_game,
    end_game
};

int main()
{
    game condition;
    scanf("%u",&condition);
    switch (condition)
    {
    case statr_game:
        std::cout<<"statr";
        break;
    
    default:
        break;
    }
}
