#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "Apple";
    char str2[] = "Application";
    if (strncmp(str1, str2, 5) == 0)
    {
        cout << "The first 5 characters match." << endl;
    }
    else
    {
        cout << "The first 5 characters do not match." << endl;
    }
    int result = strcmp(str1, str2);
    if (result < 0)
        cout << "str1 < str2" << endl;
    else if (result > 0)
        cout << "str1 > str2" << endl;
    else
        cout << "str1 == str2" << endl;

    return 0;
}