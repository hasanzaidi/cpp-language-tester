#include <iostream>
#include "loc.h"

using namespace std;

int main()
{
    loc ob1(10, 20), ob2(5,30);

    ob1.show();
    ob2.show();

    ob1 = ob1 + ob2;
    ob1.show();

    return 0;
}
