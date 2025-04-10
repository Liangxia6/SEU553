// 定义计数器Counter 类，对其重载运算符 +

#include <iostream>
using namespace std;

class Counter

{
public:
    int value_;

    Counter(int v) : value_(v)
    {
        cout << "cons" << endl;
    }
    Counter &operator+(Counter other)
    {
        this->value_ = value_ + other.value_;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Counter a(100);
    Counter b(150);
    a + b;
    cout << a.value_;
    return 0;
}
