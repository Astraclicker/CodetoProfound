//main
#include "def.h"
#include "init.h"
#include "pop.h"
#include "push.h"
int main()
{
    // 初始化栈顶指针
    stack *top = new stack;

    init(top);

    int n;
    int m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        top = push(top, m);
    }

    for (int i = 0; i < n; i++)
    {
        top = pop(top);
    }
}