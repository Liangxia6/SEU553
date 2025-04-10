#include <iostream>
using namespace std;

int *badFunction()
{
    int localVar = 10;
    return &localVar;
}

int main()
{
    int *p = badFunction();
    cout << *p << endl;
    return 0;
}