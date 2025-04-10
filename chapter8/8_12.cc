// 编写程序定义类 Point,有数据成员x、y,为其定义友元函数实现重载“+”。

#include <iostream>
using namespace std;

class Point
{
    friend int operator+(Point &p);

private:
    int x_;
    int y_;

public:
    Point(int, int);
    ~Point();
};

Point::Point(int x, int y) : x_(x), y_(y)
{
}

Point::~Point()
{
}

int operator+(Point &p)
{
    return p.x_ + p.y_;
}

int main(int argc, char const *argv[])
{
    Point p(100, 150);
    cout << +p << endl;
    return 0;
}
