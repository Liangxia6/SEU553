/*定义一个基类BaseClass，从它派生出类DerivedClass，BaseClass有成员函数fn1()、
fn2()，DerivedClass 也有成员函数 fn1()、fn2()，在主程序中定义一个DerivedClass 的
对象，分别用DerivedClass 的对象以及BaseClass 和DerivedClass 的指针来调用fn1()、
fn2()，观察运行结果。 */

#include <iostream>
using namespace std;

class Base
{
public:
    void fn1() { cout << "in Base fun1" << endl; }
    void fn2() { cout << "in Base fun2" << endl; }
};

class Derived : public Base
{
public:
    void fn1() { cout << "in Drived fun1" << endl; }
    void fn2() { cout << "in Drived fun2" << endl; }
};

int main()
{
    Derived d1;
    Derived *d2 = &d1;
    d1.fn1();
    d1.Base::fn1();
    d2->fn1();

    Base *b1 = &d1;
    b1->fn1();
}
