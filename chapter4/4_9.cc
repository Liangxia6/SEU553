// 设计并测试一个名为Rectangle 的矩形类，其属性为矩形的左下角与右上角两个点的
// 坐标，能计算矩形的面积。

#include <iostream>
using namespace std;

class XY
{
public:
    int x_;
    int y_;
    XY(int x, int y) : x_(x), y_(y) {}
    int operator*(const XY &xy2)
    {
        int temp = (this->x_ - xy2.x_) * (this->y_ - xy2.y_);
        if (temp < 0)
            return -temp;
        return temp;
    }
};

class Rectangle
{
public:
    int getArea()
    {
        return xy1 * xy2;
    }
    Rectangle(int x1, int y1, int x2, int y2) : xy1(x1, y1), xy2(x2, y2) {}

private:
    XY xy1;
    XY xy2;
};

int main()
{
    Rectangle rec(10, 2, 3, 4);
    cout << rec.getArea();
}