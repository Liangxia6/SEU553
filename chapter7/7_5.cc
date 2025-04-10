/*定义一个Shape 基类，在此基础上派生出Rectangle和Circle，二者都有GetArea()
函数计算对象的面积。使用Rectangle类创建一个派生类Square。 */

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double GetArea() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape
{
protected:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double GetArea() const override
    {
        return width * height;
    }

    void display() const
    {
        cout << "Rectangle: " << "Width = " << width << ", Height = " << height << ", Area = " << GetArea() << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double GetArea() const override
    {
        return M_PI * radius * radius;
    }

    void display() const
    {
        cout << "Circle: " << "Radius = " << radius << ", Area = " << GetArea() << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}
    void display() const
    {
        cout << "Square: " << "Side = " << width << ", Area = " << GetArea() << endl;
    }
};

int main()
{
    Rectangle rect(4.0, 5.0);
    Circle circ(3.0);
    Square sq(4.0);

    rect.display();
    circ.display();
    sq.display();

    return 0;
}