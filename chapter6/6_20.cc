/*实现一个名为SimpleCircle 的简单圆类，其数据成员int *itsRadius 为一个指向其
半径值的指针，设计对数据成员的各种操作，给出这个类的完整实现并测试这个类。 */

#include <iostream>
using namespace std;

class SimpleCiecle
{
public:
    SimpleCiecle(int r)
    {
        itsRadius = new int(r);
    }
    SimpleCiecle(SimpleCiecle &s)
    {
        itsRadius = new int(*(s.itsRadius));
    }
    ~SimpleCiecle()
    {
        delete itsRadius;
    }
    int getRadius()
    {
        return *itsRadius;
    }

private:
    int *itsRadius;
};

int main()
{
    SimpleCiecle a = 10;
    cout << a.getRadius();
}