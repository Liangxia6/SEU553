// 研究拷贝构造和赋值运算符调用逻辑
// 猜想：A a = b是拷贝构造 ， c = b是赋值运算符，没有重载赋值，系统会调用默认赋值运算符

#include <iostream>
using namespace std;

class A
{
public:
    A() : i_(0)
    {
        cout << "in default constructor" << endl;
    }
    A(int i) : i_(i)
    {
        cout << "in constructor" << endl;
    }
    A(A &a) : i_(a.i_)
    {
        cout << "in copy constructor" << endl;
    }
    ~A()
    {
        cout << "in disconstructor" << endl;
    }
    // void operator=(A &a)
    // {
    //     i_ = a.i_;
    //     cout << "in operator=" << endl;
    // }

private:
    int i_;
};

int main(int argc, char const *argv[])
{
    A a(1);
    A b(a);
    A c = a;
    A d;
    d = a;
    return 0;
}
