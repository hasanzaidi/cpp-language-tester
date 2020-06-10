#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack stack1;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    cout << stack1.pop() << " ";
    cout << stack1.pop() << " ";
    cout << stack1.pop() << "\n";

    return 0;
}
