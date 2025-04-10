// 读程序

#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(bool) << "," << sizeof(char) << ","
         << sizeof(short int) << "," << sizeof(int) << ","
         << sizeof(long) << "," << sizeof(float) << ","
         << sizeof(double) << "," << sizeof(long double) << "'"
         << sizeof(long long) << "," << sizeof(long double);
}

// 1 1 2 4 4 4 8 16

