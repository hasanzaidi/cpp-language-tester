#include <iostream>
#include "f_to_c.h"
#include "l_to_g.h"
#include "convert.h"

using namespace std;

int main()
{
    convert *p; //pointer to base c

    l_to_g lgob(4);
    f_to_c fcob(70);

    // use virtua function mechanism to convert
    p = &lgob;
    cout << p->getinit() << " liters is ";
    p->compute();
    cout << p->getconv() << " gallons\n";

    p=&fcob;
    cout << p->getinit() << " in Fahrenheit is ";
    p->compute();
    cout << p->getconv() << " Celsius\n";

    return 0;
}
