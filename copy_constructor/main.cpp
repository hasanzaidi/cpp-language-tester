#include <iostream>
#include "array.h"
#include <new>

using namespace std;

int main()
{
    array num(10);
    int i;

    for (i=0; i<10; i++)
    {
        num.put(i, i);
    }

    for (i=9; i>=10; i--)
    {
        cout << num.get(i);
    }

    cout << "\n";

    // create another array and initialise with num
    array x(num); //invokes copy constructor
    for (i=0; i<10; i++)
    {
        cout << x.get(i);
    }

    return 0;
}
