#include <iostream>
#include "base1.h"
#include "base2.h"
#include "derived.h"

using namespace std;

int main()
{
    derived ob;

    ob.set(10, 20); // provided by derived
    ob.showx(); // base 1
    ob.showy(); // from base 2

    return 0;
}
