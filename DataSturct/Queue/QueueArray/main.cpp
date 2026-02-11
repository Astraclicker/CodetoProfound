#include"def.h"
#include"init.h"
#include"CheckQueue.h"
#include"EnQueue.h"
#include"OutQueue.h"

int main()
{
    queue* MyQueue = new queue;

    init(MyQueue);

    int n(0);

    for(int i = 0;i<10;i++)
    {
        cin>>n;
        EnQueue(MyQueue,n);
    }

    for(int i = 0;i<10;i++)
    {
        OutQueue(MyQueue);
    }
}