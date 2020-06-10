#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1("Alpha");
    string str2("Beta");
    string str3("Omega");
    string str4;

    // assign a string
    str4 = str1;
    cout << str1 << "\n" << str3 << "\n";

    // concatenate two strings
    str4 = str1 + str2;
    cout << str4 << "\n";

    // concatenate a string with a C-string
    str4 = str1 + " to " + str3;
    cout << str4 << "\n";

    // compare strings
    if (str3 > str1)
    {
        cout << "str3 > str1\n";
    }
    if (str3 == str1 + str2)
    {
        cout << "str3 == str1 + str2\n";
    }

    /* A string object can also be assigned a normal string. */
    str1 = "This is a null terminated string.\n";
    cout << str1;

    // create a string object using another string object
    string str5(str1);
    cout << str5;

    // input a string
    cout << "Enter a string: ";
    cin >> str5;
    cout << str5;

    return 0;
}
