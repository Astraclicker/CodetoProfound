#include "src/Stack.h"
int main() {
    mds::stack<int> my_stack(5);

    my_stack.push(9);
    my_stack.push(8);
    my_stack.push(7);
    my_stack.push(6);
    my_stack.push(5);
    my_stack.push(4);
    my_stack.push(3);
    my_stack.push(2);
    my_stack.pop();
}