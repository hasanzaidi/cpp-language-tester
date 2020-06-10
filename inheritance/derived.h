#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

#include <iostream>

using namespace std;

class derived : public base
{
    int j;

    public:derived(int x, int y) : base(y)
    {
        j = x;
        cout << "Constructing derived\n";
    }

    public:~derived()
    {
        cout << "Destructing derived\n";
    }

    public:void show()
    {
        cout << i << " " << j << "\n";
    }
};

#endif // DERIVED_H_INCLUDED
