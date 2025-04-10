/*定义一个Rectangle 类，有长itsWidth、宽 itsLength 等属性，重载其构造函数
Rectangle()和 Rectangle(int width， int length)。*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(int width, int length);
    ~Rectangle() {}
    int GetWidth() const { return itsWidth; }
    int GetLength() const { return itsLength; }

private:
    int itsWidth;
    int itsLength;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::Rectangle(int width, int length)
{
    itsWidth = width;
    itsLength = length;
}

int main()
{
    Rectangle Rect1;
    cout << "Rect1 width: " << Rect1.GetWidth() << endl;
    cout << "Rect1 length: " << Rect1.GetLength() << endl;
    int aWidth, aLength;
    cout << "Enter a width: ";
    cin >> aWidth;
    cout << "\nEnter a length: ";
    cin >> aLength;
    Rectangle Rect2(aWidth, aLength);
    cout << "\nRect2 width: " << Rect2.GetWidth() << endl;
    cout << "Rect2 length: " << Rect2.GetLength() << endl;
    return 0;
}