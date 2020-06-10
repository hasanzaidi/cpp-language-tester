#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

#define SIZE 100

class stack
{
    int stck[SIZE];
    int tos;

    public:
        stack();
        ~stack();
        void push(int i);
        int pop();
};

/* Constructor  */
stack::stack()
{
    tos = 0;
    cout << "Stack initialised.\n";
}

/* Destructor  */
stack::~stack()
{
    cout << "Stack destroyed.\n";
}

void stack::push(int i)
{
    if (tos == SIZE)
    {
        cout << "Stack is full.\n";
        return;
    }
    stck[tos] = i;
    tos++;
}

int stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack underflow.\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

#endif // STACK_H_INCLUDED
