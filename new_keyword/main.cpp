#include <iostream>
#include "balance.h"

using namespace std;

int main()
{
    balance *p;
    char s[80];
    double n;

    try
    {
        p = new balance();
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    p->set_bal(12387.87, "Ralph Wilson");
    p->get_bal(n, s);

    cout << s << "'s balance is: " << n;
    cout << "\n";

    delete p;

    return 0;
}
