#include <iostream>

using namespace std;

template <class X> void swapargs(X &a, X &b)
{
    X temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 10, j = 20;
    char a = 'x', b='z';

    cout << "Original i, j: " << i << ' ' << j << '\n';
    cout << "Original a, b: " << a << ' ' << b << '\n';

    swapargs(i, j); // swap integers
    swapargs(a, b); // swap chars

    cout << "swapped i, j: " << i << ' ' << j << '\n';
    cout << "swapped a, b: " << a << ' ' << b << '\n';

    return 0;
}
