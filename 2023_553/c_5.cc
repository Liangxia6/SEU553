#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    { // 构造函数
        std::cout << "Constructor " << std::endl;
    }
    MyClass(MyClass &a)
    {
        cout << "copy" << endl;
    }
    MyClass(MyClass &&other)
    {
        cout << "move" << endl;
    } // 移动
    ~MyClass()
    { // 析构函数
        std::cout << "Destructor" << std::endl;
    }
};

MyClass &createObject(MyClass &a)
{
    // MyClass obj(a);
    return a;
}

int main()
{
    MyClass a;
    createObject(a);
    return 0;
}