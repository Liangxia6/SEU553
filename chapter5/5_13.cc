/* 定义类 X、Y、Z，函数h(X*)，满足：类X有私有成员i，Y的成员函数g(X*)是X的
友元函数，实现对X的成员i加1，类Z是类X的友元类，其成员函数f(X*)实现对X的成
员i加5，函数h(X*)是X的友元函数，实现对X的成员i加10。在一个文件中定义和实现
类，在另一个文件中实现main()函数。 */

#include <iostream>
using namespace std;

class X;

class Y
{
public:
    void g(X *x);
};

class Z
{
public:
    void g(X *x);
};
class X
{

    friend int h(X *);

private:
    int i;
    friend void Z::g(X *x);
    friend void Y::g(X *x);
};

void Y::g(X *x)
{
    x->i++;
    cout << "in Y::g()";
}
void Z::g(X *x)
{
    x->i += 5;
    cout << "in Z::f()";
}

int h(X *x)
{
    x->i = +10;
    return 0;
}

int main()
{
    X x;
    Z z;
    z.g(&x);
    Y y;
    y.g(&x);
}