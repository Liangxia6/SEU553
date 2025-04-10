#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr1[] = "Hello";
    char *arr2 = new char[10];
    strcpy(arr2, "Hi!");
    cout << "arr1: " << arr1 << endl;
    cout << "arr2: " << arr2 << endl;
    arr1[0] = 'h';
    cout << "Modified arr1: " << arr1 << endl;

    delete[] arr2;
    return 0;
}