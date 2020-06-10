
#include "base.h"
#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    derived ob(3, 4);

    ob.show();

    return 0;
}
