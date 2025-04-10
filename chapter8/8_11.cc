/*定义一个基类BaseClass，从它派生出类DerivedClass，BaseClass有成员函数fn1()、
fn2()，fn1()是虚函数，DerivedClass 也有成员函数 fn1()、fn2()，在主程序中定义一个
DerivedClass 的对象，分别用BaseClass 和 DerivedClass 的指针来调用 fn1()、fn2()，
观察运行结果。  */

#include <iostream>
using namespace std;

class Base
{
private:
    /* data */
public:
    int a_ = 1;
    Base(/* args */)
    {
        cout << "in Base;" << endl;
    }
    virtual ~Base()
    {
        cout << "dis Base;" << endl;
    }
};

class Drive : public Base
{
private:
    /* data */
public:
    int b = 2;
    Drive(/* args */)
    {
        cout << "in Drive;" << endl;
    }
    ~Drive()
    {
        cout << "dis Drive;" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *d = new (Drive);
    d->a_;
    delete d;
    return 0;
}
