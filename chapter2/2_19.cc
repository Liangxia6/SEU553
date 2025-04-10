// C++有哪几种数据类型？简述其值域。
// 编程显示你使用的计算机中的各种数据类型的
// 字节数。

#include <iostream>
using namespace std;
int main()
{
    cout << "The size of an int is:\t\t" << sizeof(int) << " bytes.\n";
    cout << "The size of a short int is:\t" << sizeof(short) << " bytes.\n";
    cout << "The size of a long int is:\t" << sizeof(long) << " bytes.\n";
    cout << "The size of a char is:\t\t" << sizeof(char) << " bytes.\n";
    cout << "The size of a float is:\t\t" << sizeof(float) << " bytes.\n";
    cout << "The size of a double is:\t" << sizeof(double) << " bytes.\n";
    return 0;
}