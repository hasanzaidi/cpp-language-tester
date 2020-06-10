#include <iostream>
#include "c1.h"

using namespace std;

int main()
{
    c1 ob[3] = {4, 5, 6};
    c1 *p;
    int i;

    p = ob; // get start of array
    for (i=0; i<3; i++)
    {
        cout << p->get_i() << "\n";
        p++; // point to next object
    }

    return 0;
}
