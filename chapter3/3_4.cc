// 内联函数的定义必须出现在内联函数第一次被调用之前?

#include <iostream>
using namespace std;

inline int fun();

int main()
{
    fun();
    return 0;
}

int fun()
{
    cout << "fun";
    return 0;
}