#include <iostream>
using namespace std;
int main()
{
    char str[] = "THIS IS PROGRAMMING.";
    int length = 21;
    int j = 0;
    for (int k = 0; k < length; k++)
    {
        if (str[j] < str[k])
            j = k;
    }
    cout << j << endl;
    int temp = j;
    str[j] = str[7];
    str[7] = str[13];
    str[13] = str[length];
    // cout << str[length - 2] << endl;
    cout << str << endl;
    return 0;
}