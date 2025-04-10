#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    virtual void print() const
    {
        cout << "I am A" << endl;
    }
    ~A()
    {
        cout << "~A()" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B()" << endl;
    }
    void print() const
    {
        cout << "I am B" << endl;
    }
    ~B()
    {
        cout << "~B()" << endl;
    }
};

int main()
{
    A *pa = new B();
    pa->print();
    delete pa;
    return 0;
}

/*当父类指针指向子类对象时，如果父类的析构函数不是虚函数，
那么delete父类指针时只会调用父类的析构函数，而不会调用子类的析构函数。
这可能导致子类对象的部分资源没有被正确释放，从而引发内存泄漏或其他问题。

如果父类的析构函数是虚函数，那么delete父类指针时，
会先调用子类的析构函数，再调用父类的析构函数，
确保子类和父类的资源都能被正确释放。*/