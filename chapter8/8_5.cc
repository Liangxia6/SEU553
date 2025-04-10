/*实现重载函数Double(x)，返回值为输入参数的两倍；参数分别为整型、长整型、浮点
型、双精度型，返回值类型与参数一样。 */

#include <iostream>
using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);
int main()
{
    int myInt = 6500;
    long myLong = 65000;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;
    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;
    cout << "myInt: " << myInt << "\n";
    cout << "myLong: " << myLong << "\n";
    cout << "myFloat: " << myFloat << "\n";
    cout << "myDouble: " << myDouble << "\n";
    doubledInt = Double(myInt);
    doubledLong = Double(myLong);
    doubledFloat = Double(myFloat);
    doubledDouble = Double(myDouble);
    cout << "doubledInt: " << doubledInt << "\n";
    cout << "doubledLong: " << doubledLong << "\n";
    cout << "doubledFloat: " << doubledFloat << "\n";
    cout << "doubledDouble: " << doubledDouble << "\n";
    return 0;
}
int Double(int original)
{
    cout << "In Double(int)\n";
    return 2 * original;
}
long Double(long original)
{
    cout << "In Double(long)\n";
    return 2 * original;
}
float Double(float original)
{
    cout << "In Double(float)\n";
    return 2 * original;
}
double Double(double original)
{
    cout << "In Double(double)\n";
    return 2 * original;
}