/*定义 object 类，有 weight 属性及相应的操作函数，由此派生出box类，增加Height
和width 属性及相应的操作函数，声明一个box对象，观察构造函数与析构函数的调用顺
序。 */

#include <iostream>
using namespace std;

class object
{
private:
    int Weight;

public:
    object()
    {
        cout << "构造 object 对象" << endl;
        Weight = 0;
    }
    int GetWeight() { return Weight; }
    void SetWeight(int n) { Weight = n; }
    ~object() { cout << "析构 object 对象" << endl; }
};
class box : public object
{
private:
    int Height, Width;

public:
    box()
    {
        cout << "构造 box 对象" << endl;
        Height = Width = 0;
    }
    int GetHeight() { return Height; }
    void SetHeight(int n) { Height = n; }
    int GetWidth() { return Width; }
    void SetWidth(int n) { Width = n; }
    ~box() { cout << "析构 box 对象" << endl; }
};
int main()
{
    box a;
}