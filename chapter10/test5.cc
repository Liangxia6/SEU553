// 重载运算符

#include <iostream>
#include <cstring>
using namespace std;

class Oper
{
private:
    int a;
    int b;
    Oper(int aa = 0, int bb = 0) : a(aa), b(bb)
    {
        cout << "cons" << endl;
    }
    Oper(Oper &op) : a(op.a), b(op.b)
    {
        cout << "copy cons" << endl;
    }

    // 基本运算符
    Oper operator+(Oper &other)
    {
        Oper op;
        op.a = this->a + other.a;
        op.b = this->b + other.b;
    }

    // 关系运算符
    bool operator==(Oper other)
    {
        return (a == other.a) && (b == other.b);
    }
    bool operator>(Oper other)
    {
        return (a + b) > (other.a + other.b);
    }

    // 赋值运算符
    Oper &operator=(Oper &other)
    {
        a = other.a;
        b = other.b;
        return *this;
    }

    // 下标运算符
    int operator[](int index)
    {
        if (index == 0)
            return a;
        else if (index == 1)
            return b;
        else
            return -1;
    }

    // 函数调用
    void operator()(int x)
    {
        cout << "call" << x << endl;
    }

    // 流运算符
    friend ostream &operator<<(ostream &, Oper &);
    friend istream &operator>>(istream &, Oper &);

    //->运算符
    int operator->()
    {
        return a;
    }
};

ostream &operator<<(ostream &os, Oper &oper)
{
    os << "a:" << oper.a << "b:" << oper.b << endl;
    return os;
}
istream &operator>>(istream &is, Oper &oper)
{
    is >> oper.a >> oper.b;
    return is;
}

// 不能重载的运算符  .*   ::  .   new
// 必须在类内    =   []
// 必须友元  <<  >>

class Vec
{
private:
    char *s;
    int len;

public:
    Vec(char *ss)
    {
        len = strlen(ss);
        s = new char[len + 1];
        strcpy(s, ss);
    }
    Vec(Vec &other)
    {
        len = other.len;
        s = new char[len + 1];
        strcpy(s, other.s);
    }

    ~Vec()
    {
        delete[] s;
    }
};

class A
{
public:
    int a;
    A(int aa) : a(aa) {}
};

int main(int argc, char const *argv[])
{
    A a(3);
    A *b = &a;
    b->a;
    (*b).a;
    return 0;
}
