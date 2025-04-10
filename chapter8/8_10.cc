// 对 Point 类重载++（自增）、--（自减）运算符

#include <iostream>
using namespace std;

class Point
{

public:
    int a_;

    Point(int a) : a_(a) {}
    Point &operator++()
    {
        a_++;
        return *this;
    }
    Point operator++(int)
    {
        int temp = a_;
        a_++;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Point p(10);
    cout << p++.a_ << ++p.a_ << endl;
    return 0;
}
