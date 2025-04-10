/*定义基类Base，有两个共有成员函数fn1()、fn2()，私有派生出Derived类，如果想
在Derived 类的对象中使用基类函数fn1()*/

#include <iostream>
using namespace std;

class Base
{
public:
    int fn1() const { return 1; }
    int fn2() const { return 2; }
};

class Derived : private Base
{
public:
    int fn1() { return Base::fn1(); };
    int fn2() { return Base::fn2(); };
};

int main()
{
    Derived a;
    a.fn1();
}