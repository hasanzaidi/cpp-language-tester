#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include <iostream>

using namespace std;

class base
{
    protected:int i;

    public:base(int x)
    {
        i = x;
        cout << "Consructing base\n";
    }

    public:~base()
    {
        cout << "Destructing base\n";
    }
};

#endif // BASE_H_INCLUDED
